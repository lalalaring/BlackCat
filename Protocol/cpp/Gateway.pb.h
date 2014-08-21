// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Gateway.proto

#ifndef PROTOBUF_Gateway_2eproto__INCLUDED
#define PROTOBUF_Gateway_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace GatewayServer {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Gateway_2eproto();
void protobuf_AssignDesc_Gateway_2eproto();
void protobuf_ShutdownFile_Gateway_2eproto();

class LoginRequest;
class LoginResponse;
class UserDisconnect;

enum EnumServerType {
  ST_GameServer = 0,
  ST_RecordServer = 1
};
bool EnumServerType_IsValid(int value);
const EnumServerType EnumServerType_MIN = ST_GameServer;
const EnumServerType EnumServerType_MAX = ST_RecordServer;
const int EnumServerType_ARRAYSIZE = EnumServerType_MAX + 1;

enum EnumResult {
  enumResultSucc = 0,
  enumResultFail = 1
};
bool EnumResult_IsValid(int value);
const EnumResult EnumResult_MIN = enumResultSucc;
const EnumResult EnumResult_MAX = enumResultFail;
const int EnumResult_ARRAYSIZE = EnumResult_MAX + 1;

// ===================================================================

class LoginRequest : public ::google::protobuf::MessageLite {
 public:
  LoginRequest();
  virtual ~LoginRequest();
  
  LoginRequest(const LoginRequest& from);
  
  inline LoginRequest& operator=(const LoginRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const LoginRequest& default_instance();
  
  void Swap(LoginRequest* other);
  
  // implements Message ----------------------------------------------
  
  LoginRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const LoginRequest& from);
  void MergeFrom(const LoginRequest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required .GatewayServer.EnumServerType server_type = 1;
  inline bool has_server_type() const;
  inline void clear_server_type();
  static const int kServerTypeFieldNumber = 1;
  inline GatewayServer::EnumServerType server_type() const;
  inline void set_server_type(GatewayServer::EnumServerType value);
  
  // required string account = 2;
  inline bool has_account() const;
  inline void clear_account();
  static const int kAccountFieldNumber = 2;
  inline const ::std::string& account() const;
  inline void set_account(const ::std::string& value);
  inline void set_account(const char* value);
  inline void set_account(const char* value, size_t size);
  inline ::std::string* mutable_account();
  inline ::std::string* release_account();
  
  // required string secure_key = 3;
  inline bool has_secure_key() const;
  inline void clear_secure_key();
  static const int kSecureKeyFieldNumber = 3;
  inline const ::std::string& secure_key() const;
  inline void set_secure_key(const ::std::string& value);
  inline void set_secure_key(const char* value);
  inline void set_secure_key(const char* value, size_t size);
  inline ::std::string* mutable_secure_key();
  inline ::std::string* release_secure_key();
  
  // @@protoc_insertion_point(class_scope:GatewayServer.LoginRequest)
 private:
  inline void set_has_server_type();
  inline void clear_has_server_type();
  inline void set_has_account();
  inline void clear_has_account();
  inline void set_has_secure_key();
  inline void clear_has_secure_key();
  
  ::std::string* account_;
  ::std::string* secure_key_;
  int server_type_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_Gateway_2eproto();
  friend void protobuf_AssignDesc_Gateway_2eproto();
  friend void protobuf_ShutdownFile_Gateway_2eproto();
  
  void InitAsDefaultInstance();
  static LoginRequest* default_instance_;
};
// -------------------------------------------------------------------

class LoginResponse : public ::google::protobuf::MessageLite {
 public:
  LoginResponse();
  virtual ~LoginResponse();
  
  LoginResponse(const LoginResponse& from);
  
  inline LoginResponse& operator=(const LoginResponse& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const LoginResponse& default_instance();
  
  void Swap(LoginResponse* other);
  
  // implements Message ----------------------------------------------
  
  LoginResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const LoginResponse& from);
  void MergeFrom(const LoginResponse& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required .GatewayServer.EnumResult result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline GatewayServer::EnumResult result() const;
  inline void set_result(GatewayServer::EnumResult value);
  
  // @@protoc_insertion_point(class_scope:GatewayServer.LoginResponse)
 private:
  inline void set_has_result();
  inline void clear_has_result();
  
  int result_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_Gateway_2eproto();
  friend void protobuf_AssignDesc_Gateway_2eproto();
  friend void protobuf_ShutdownFile_Gateway_2eproto();
  
  void InitAsDefaultInstance();
  static LoginResponse* default_instance_;
};
// -------------------------------------------------------------------

class UserDisconnect : public ::google::protobuf::MessageLite {
 public:
  UserDisconnect();
  virtual ~UserDisconnect();
  
  UserDisconnect(const UserDisconnect& from);
  
  inline UserDisconnect& operator=(const UserDisconnect& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const UserDisconnect& default_instance();
  
  void Swap(UserDisconnect* other);
  
  // implements Message ----------------------------------------------
  
  UserDisconnect* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const UserDisconnect& from);
  void MergeFrom(const UserDisconnect& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint32 user_id = 1;
  inline bool has_user_id() const;
  inline void clear_user_id();
  static const int kUserIdFieldNumber = 1;
  inline ::google::protobuf::uint32 user_id() const;
  inline void set_user_id(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:GatewayServer.UserDisconnect)
 private:
  inline void set_has_user_id();
  inline void clear_has_user_id();
  
  ::google::protobuf::uint32 user_id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_Gateway_2eproto();
  friend void protobuf_AssignDesc_Gateway_2eproto();
  friend void protobuf_ShutdownFile_Gateway_2eproto();
  
  void InitAsDefaultInstance();
  static UserDisconnect* default_instance_;
};
// ===================================================================


// ===================================================================

// LoginRequest

// required .GatewayServer.EnumServerType server_type = 1;
inline bool LoginRequest::has_server_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoginRequest::set_has_server_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoginRequest::clear_has_server_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoginRequest::clear_server_type() {
  server_type_ = 0;
  clear_has_server_type();
}
inline GatewayServer::EnumServerType LoginRequest::server_type() const {
  return static_cast< GatewayServer::EnumServerType >(server_type_);
}
inline void LoginRequest::set_server_type(GatewayServer::EnumServerType value) {
  GOOGLE_DCHECK(GatewayServer::EnumServerType_IsValid(value));
  set_has_server_type();
  server_type_ = value;
}

// required string account = 2;
inline bool LoginRequest::has_account() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LoginRequest::set_has_account() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LoginRequest::clear_has_account() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LoginRequest::clear_account() {
  if (account_ != &::google::protobuf::internal::kEmptyString) {
    account_->clear();
  }
  clear_has_account();
}
inline const ::std::string& LoginRequest::account() const {
  return *account_;
}
inline void LoginRequest::set_account(const ::std::string& value) {
  set_has_account();
  if (account_ == &::google::protobuf::internal::kEmptyString) {
    account_ = new ::std::string;
  }
  account_->assign(value);
}
inline void LoginRequest::set_account(const char* value) {
  set_has_account();
  if (account_ == &::google::protobuf::internal::kEmptyString) {
    account_ = new ::std::string;
  }
  account_->assign(value);
}
inline void LoginRequest::set_account(const char* value, size_t size) {
  set_has_account();
  if (account_ == &::google::protobuf::internal::kEmptyString) {
    account_ = new ::std::string;
  }
  account_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginRequest::mutable_account() {
  set_has_account();
  if (account_ == &::google::protobuf::internal::kEmptyString) {
    account_ = new ::std::string;
  }
  return account_;
}
inline ::std::string* LoginRequest::release_account() {
  clear_has_account();
  if (account_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = account_;
    account_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string secure_key = 3;
inline bool LoginRequest::has_secure_key() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LoginRequest::set_has_secure_key() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LoginRequest::clear_has_secure_key() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LoginRequest::clear_secure_key() {
  if (secure_key_ != &::google::protobuf::internal::kEmptyString) {
    secure_key_->clear();
  }
  clear_has_secure_key();
}
inline const ::std::string& LoginRequest::secure_key() const {
  return *secure_key_;
}
inline void LoginRequest::set_secure_key(const ::std::string& value) {
  set_has_secure_key();
  if (secure_key_ == &::google::protobuf::internal::kEmptyString) {
    secure_key_ = new ::std::string;
  }
  secure_key_->assign(value);
}
inline void LoginRequest::set_secure_key(const char* value) {
  set_has_secure_key();
  if (secure_key_ == &::google::protobuf::internal::kEmptyString) {
    secure_key_ = new ::std::string;
  }
  secure_key_->assign(value);
}
inline void LoginRequest::set_secure_key(const char* value, size_t size) {
  set_has_secure_key();
  if (secure_key_ == &::google::protobuf::internal::kEmptyString) {
    secure_key_ = new ::std::string;
  }
  secure_key_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginRequest::mutable_secure_key() {
  set_has_secure_key();
  if (secure_key_ == &::google::protobuf::internal::kEmptyString) {
    secure_key_ = new ::std::string;
  }
  return secure_key_;
}
inline ::std::string* LoginRequest::release_secure_key() {
  clear_has_secure_key();
  if (secure_key_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = secure_key_;
    secure_key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// LoginResponse

// required .GatewayServer.EnumResult result = 1;
inline bool LoginResponse::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoginResponse::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoginResponse::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoginResponse::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline GatewayServer::EnumResult LoginResponse::result() const {
  return static_cast< GatewayServer::EnumResult >(result_);
}
inline void LoginResponse::set_result(GatewayServer::EnumResult value) {
  GOOGLE_DCHECK(GatewayServer::EnumResult_IsValid(value));
  set_has_result();
  result_ = value;
}

// -------------------------------------------------------------------

// UserDisconnect

// required uint32 user_id = 1;
inline bool UserDisconnect::has_user_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserDisconnect::set_has_user_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserDisconnect::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserDisconnect::clear_user_id() {
  user_id_ = 0u;
  clear_has_user_id();
}
inline ::google::protobuf::uint32 UserDisconnect::user_id() const {
  return user_id_;
}
inline void UserDisconnect::set_user_id(::google::protobuf::uint32 value) {
  set_has_user_id();
  user_id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace GatewayServer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Gateway_2eproto__INCLUDED
