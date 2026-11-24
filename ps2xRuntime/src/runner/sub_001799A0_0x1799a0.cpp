#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001799A0
// Address: 0x1799a0 - 0x1799a8
void sub_001799A0_0x1799a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001799A0_0x1799a0");
#endif

    ctx->pc = 0x1799a0u;

    // 0x1799a0: 0x805e67c  j           func_1799F0
    ctx->pc = 0x1799A0u;
    ctx->pc = 0x1799F0u;
    sub_001799F0_0x1799f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1799A8u;
}
