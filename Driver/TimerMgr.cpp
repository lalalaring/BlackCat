#include "TimerMgr.h"

TimerMgr::TimerMgr(IoService& ios) :
    ios_(ios),
    server_logic_timer_(ios)
{
    // Timers
    ResetLogicTimer();
}

void TimerMgr::ResetLogicTimer()
{
    auto logic_timer_func = [&]() {
        {
            for (auto it = timer_map_.begin(); it != timer_map_.end(); it++) {
                boost::timer::cpu_times elapsed_times(it->second.timer.elapsed());
                boost::timer::nanosecond_type elapsed(elapsed_times.wall);
                if (elapsed >= it->second.interval * 1000000LL) {
                    it->second.func();
                    it->second.timer.start();
                }
            }
        }

        ResetLogicTimer();
    };

    server_logic_timer_.expires_from_now(boost::posix_time::milliseconds(LOGIC_TIMER_INTERVAL));
    server_logic_timer_.async_wait(std::bind(logic_timer_func));
}

uint32 TimerMgr::AddTimer(const TimerFunc& func, uint32 interval)
{
    uint32 timer_id = timer_id_++;

    Timer timer = { interval, func };
    timer_map_[timer_id] = timer;

    return timer_id;
}

void TimerMgr::Cancel(uint32 timer_id)
{
    auto it = timer_map_.find(timer_id);
    if (it == timer_map_.end()) {
        return;
    }
    timer_map_.erase(it);
}
