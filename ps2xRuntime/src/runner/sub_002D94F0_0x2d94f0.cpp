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

// Function: sub_002D94F0
// Address: 0x2d94f0 - 0x2d94f8
void sub_002D94F0_0x2d94f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D94F0_0x2d94f0");
#endif

    ctx->pc = 0x2d94f0u;

    // 0x2d94f0: 0x80a4a1c  j           func_292870
    ctx->pc = 0x2D94F0u;
    ctx->pc = 0x292870u;
    sub_00292870_0x292870(rdram, ctx, runtime); return;
    ctx->pc = 0x2D94F8u;
}
