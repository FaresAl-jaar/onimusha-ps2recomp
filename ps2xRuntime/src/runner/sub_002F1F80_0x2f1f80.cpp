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

// Function: sub_002F1F80
// Address: 0x2f1f80 - 0x2f1fa0
void sub_002F1F80_0x2f1f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1F80_0x2f1f80");
#endif

    ctx->pc = 0x2f1f80u;

    // 0x2f1f80: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f84: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2f1f84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f88: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f8c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f94: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2f1f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1f98: 0x80edb38  j           func_3B6CE0
    ctx->pc = 0x2F1F98u;
    ctx->pc = 0x2F1F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F98u;
    // 0x2f1f9c: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6CE0u;
    sub_003B6CE0_0x3b6ce0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1FA0u;
}
