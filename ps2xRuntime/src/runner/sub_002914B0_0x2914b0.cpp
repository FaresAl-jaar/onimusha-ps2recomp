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

// Function: sub_002914B0
// Address: 0x2914b0 - 0x2914b8
void sub_002914B0_0x2914b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002914B0_0x2914b0");
#endif

    ctx->pc = 0x2914b0u;

    // 0x2914b0: 0x80a4460  j           func_291180
    ctx->pc = 0x2914B0u;
    ctx->pc = 0x291180u;
    sub_00291180_0x291180(rdram, ctx, runtime); return;
    ctx->pc = 0x2914B8u;
}
