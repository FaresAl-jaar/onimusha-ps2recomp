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

// Function: sub_002F0C10
// Address: 0x2f0c10 - 0x2f0c30
void sub_002F0C10_0x2f0c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0C10_0x2f0c10");
#endif

    ctx->pc = 0x2f0c10u;

    // 0x2f0c10: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f0c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c14: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f0c14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c18: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f0c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c1c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f0c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0c24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f0c24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c28: 0x80c05b0  j           func_3016C0
    ctx->pc = 0x2F0C28u;
    ctx->pc = 0x2F0C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0C28u;
    // 0x2f0c2c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3016C0u;
    sub_003016C0_0x3016c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0C30u;
}
