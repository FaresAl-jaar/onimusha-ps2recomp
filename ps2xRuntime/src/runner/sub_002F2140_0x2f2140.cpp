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

// Function: sub_002F2140
// Address: 0x2f2140 - 0x2f215c
void sub_002F2140_0x2f2140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2140_0x2f2140");
#endif

    ctx->pc = 0x2f2140u;

    // 0x2f2140: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f2140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2144: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f2144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2148: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f2148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f214c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f214cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2154: 0x80f40b0  j           func_3D02C0
    ctx->pc = 0x2F2154u;
    ctx->pc = 0x2F2158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2154u;
    // 0x2f2158: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D02C0u;
    sub_003D02C0_0x3d02c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F215Cu;
}
