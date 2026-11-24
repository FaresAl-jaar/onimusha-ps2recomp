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

// Function: sub_0025E0D0
// Address: 0x25e0d0 - 0x25e0d8
void sub_0025E0D0_0x25e0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E0D0_0x25e0d0");
#endif

    ctx->pc = 0x25e0d0u;

    // 0x25e0d0: 0x80b2e4c  j           func_2CB930
    ctx->pc = 0x25E0D0u;
    ctx->pc = 0x2CB930u;
    sub_002CB930_0x2cb930(rdram, ctx, runtime); return;
    ctx->pc = 0x25E0D8u;
}
