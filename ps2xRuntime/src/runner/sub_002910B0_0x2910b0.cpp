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

// Function: sub_002910B0
// Address: 0x2910b0 - 0x2910b8
void sub_002910B0_0x2910b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002910B0_0x2910b0");
#endif

    ctx->pc = 0x2910b0u;

    // 0x2910b0: 0x80e2b2c  j           func_38ACB0
    ctx->pc = 0x2910B0u;
    ctx->pc = 0x38ACB0u;
    sub_0038ACB0_0x38acb0(rdram, ctx, runtime); return;
    ctx->pc = 0x2910B8u;
}
