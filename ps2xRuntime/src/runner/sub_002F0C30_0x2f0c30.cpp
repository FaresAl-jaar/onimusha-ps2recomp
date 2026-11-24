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

// Function: sub_002F0C30
// Address: 0x2f0c30 - 0x2f0c4c
void sub_002F0C30_0x2f0c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0C30_0x2f0c30");
#endif

    ctx->pc = 0x2f0c30u;

    // 0x2f0c30: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f0c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c34: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f0c34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c38: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f0c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c3c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f0c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0c44: 0x80ca720  j           func_329C80
    ctx->pc = 0x2F0C44u;
    ctx->pc = 0x2F0C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0C44u;
    // 0x2f0c48: 0x24090028  addiu       $t1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329C80u;
    sub_00329C80_0x329c80(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0C4Cu;
}
