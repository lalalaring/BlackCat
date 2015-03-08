#ifndef _GATEWAY_H
#define _GATEWAY_H

#include "../ServerLib/ServerCommon.h"

namespace PB
{
    class Packet;
}

class Gateway
{
public:
    Gateway();

public:
    void                Run(const std::string& ip, const std::string& port, int pool_size);

private:
    FuncOnAccept        GetAcceptCallBack();
    ConnectionCallBacks GetCallBacks();

private:
    // handler
    void                Dispatch(const ConnectionPtr& conn, const uint8 *buf, int32 len);

    // call backs
    void                OnAccept(const ConnectionPtr& conn);

    void                OnConnected(const ConnectionPtr& conn, bool success);
    int32               OnRead(const ConnectionPtr& conn, const uint8 *buf, int32 len);
    void                OnWrite(const ConnectionPtr& conn, int32 len);
    void                OnDisconnect(const ConnectionPtr& conn);

private:
    void                HandlePacket(const ConnectionPtr& conn, const PB::Packet& packet);
};

inline FuncOnAccept Gateway::GetAcceptCallBack()
{
    return std::bind(&Gateway::OnAccept, this, std::placeholders::_1);
}

inline ConnectionCallBacks Gateway::GetCallBacks()
{
    ConnectionCallBacks cb = {
        std::bind(&Gateway::OnConnected, this, std::placeholders::_1, std::placeholders::_2),
        std::bind(&Gateway::OnRead, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3),
        std::bind(&Gateway::OnWrite, this, std::placeholders::_1, std::placeholders::_2),
        std::bind(&Gateway::OnDisconnect, this, std::placeholders::_1),
    };
    return cb;
}

#endif // _GATEWAY_H
