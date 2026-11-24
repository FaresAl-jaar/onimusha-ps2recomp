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

// Function: sub_003BFB90
// Address: 0x3bfb90 - 0x3bfba8
void sub_003BFB90_0x3bfb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFB90_0x3bfb90");
#endif

    ctx->pc = 0x3bfb90u;

    // 0x3bfb90: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3bfb90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfb94: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3bfb94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfb98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3bfb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfb9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3bfb9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfba0: 0x80efe40  j           func_3BF900
    ctx->pc = 0x3BFBA0u;
    ctx->pc = 0x3BFBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFBA0u;
    // 0x3bfba4: 0x27848c94  addiu       $a0, $gp, -0x736C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937748));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF900u;
    sub_003BF900_0x3bf900(rdram, ctx, runtime); return;
    ctx->pc = 0x3BFBA8u;
}
