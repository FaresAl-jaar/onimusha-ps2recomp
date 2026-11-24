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

// Function: sub_002F1D70
// Address: 0x2f1d70 - 0x2f1d94
void sub_002F1D70_0x2f1d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1D70_0x2f1d70");
#endif

    ctx->pc = 0x2f1d70u;

    // 0x2f1d70: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2f1d70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d74: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f1d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d78: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d7c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2f1d7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d80: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2f1d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d88: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f1d88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d8c: 0x80e42d4  j           func_390B50
    ctx->pc = 0x2F1D8Cu;
    ctx->pc = 0x2F1D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1D8Cu;
    // 0x2f1d90: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390B50u;
    sub_00390B50_0x390b50(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1D94u;
}
