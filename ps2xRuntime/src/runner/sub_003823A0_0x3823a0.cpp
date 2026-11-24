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

// Function: sub_003823A0
// Address: 0x3823a0 - 0x3823a8
void sub_003823A0_0x3823a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003823A0_0x3823a0");
#endif

    ctx->pc = 0x3823a0u;

    // 0x3823a0: 0x80e45e4  j           func_391790
    ctx->pc = 0x3823A0u;
    ctx->pc = 0x391790u;
    sub_00391790_0x391790(rdram, ctx, runtime); return;
    ctx->pc = 0x3823A8u;
}
