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

// Function: sub_002F2290
// Address: 0x2f2290 - 0x2f22b8
void sub_002F2290_0x2f2290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2290_0x2f2290");
#endif

    ctx->pc = 0x2f2290u;

    // 0x2f2290: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2f2290u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2294: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f2294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2298: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f2298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f229c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2f229cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22a0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2f22a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f22a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22a8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f22a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22ac: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2f22acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f22b0: 0x80f4dac  j           func_3D36B0
    ctx->pc = 0x2F22B0u;
    ctx->pc = 0x2F22B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F22B0u;
    // 0x2f22b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D36B0u;
    sub_003D36B0_0x3d36b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F22B8u;
}
