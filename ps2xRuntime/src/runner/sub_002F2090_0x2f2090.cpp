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

// Function: sub_002F2090
// Address: 0x2f2090 - 0x2f20b0
void sub_002F2090_0x2f2090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2090_0x2f2090");
#endif

    ctx->pc = 0x2f2090u;

    // 0x2f2090: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f2090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2094: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f2094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2098: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f2098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f209c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f209cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f20a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20a4: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x2f20a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f20a8: 0x80f38c4  j           func_3CE310
    ctx->pc = 0x2F20A8u;
    ctx->pc = 0x2F20ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F20A8u;
    // 0x2f20ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE310u;
    sub_003CE310_0x3ce310(rdram, ctx, runtime); return;
    ctx->pc = 0x2F20B0u;
}
