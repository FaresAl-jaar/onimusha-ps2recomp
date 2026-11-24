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

// Function: sub_002F0BD0
// Address: 0x2f0bd0 - 0x2f0bf0
void sub_002F0BD0_0x2f0bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0BD0_0x2f0bd0");
#endif

    ctx->pc = 0x2f0bd0u;

    // 0x2f0bd0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f0bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0bd4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f0bd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0bd8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f0bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0bdc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f0bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0be0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0be4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f0be4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0be8: 0x80c05b0  j           func_3016C0
    ctx->pc = 0x2F0BE8u;
    ctx->pc = 0x2F0BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0BE8u;
    // 0x2f0bec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3016C0u;
    sub_003016C0_0x3016c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0BF0u;
}
