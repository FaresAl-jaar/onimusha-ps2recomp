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

// Function: sub_0029D8F0
// Address: 0x29d8f0 - 0x29d8f8
void sub_0029D8F0_0x29d8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D8F0_0x29d8f0");
#endif

    ctx->pc = 0x29d8f0u;

    // 0x29d8f0: 0x80a82b0  j           func_2A0AC0
    ctx->pc = 0x29D8F0u;
    ctx->pc = 0x2A0AC0u;
    sub_002A0AC0_0x2a0ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x29D8F8u;
}
