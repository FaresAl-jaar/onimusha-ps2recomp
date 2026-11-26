#pragma once
// Exclusive time per subsystem on the game thread, reported in the [speed] log line.
#include <atomic>
#include <chrono>
#include <cstdint>

namespace ps2x::prof
{
    enum Category : int
    {
        Ee = 0, // everything not in a scope below: the recompiled game code
        Vu1,
        Gs,
        Iop,
        Present,
        Vif,
        Count
    };

    extern std::atomic<uint64_t> g_ns[Count];

    struct State
    {
        int current = Ee;
        std::chrono::steady_clock::time_point last = std::chrono::steady_clock::now();
    };

    inline State &state()
    {
        thread_local State s;
        return s;
    }

    struct Scope
    {
        int previous;
        explicit Scope(int category)
        {
            State &s = state();
            const auto now = std::chrono::steady_clock::now();
            g_ns[s.current].fetch_add(static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(now - s.last).count()),
                                      std::memory_order_relaxed);
            s.last = now;
            previous = s.current;
            s.current = category;
        }
        ~Scope()
        {
            State &s = state();
            const auto now = std::chrono::steady_clock::now();
            g_ns[s.current].fetch_add(static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(now - s.last).count()),
                                      std::memory_order_relaxed);
            s.last = now;
            s.current = previous;
        }
        Scope(const Scope &) = delete;
        Scope &operator=(const Scope &) = delete;
    };
}
