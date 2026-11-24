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

// Function: sub_002F1460
// Address: 0x2f1460 - 0x2f147c
void sub_002F1460_0x2f1460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1460_0x2f1460");
#endif

    ctx->pc = 0x2f1460u;

    // 0x2f1460: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1464: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f1464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1468: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f146c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f146cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1474: 0x80ca094  j           func_328250
    ctx->pc = 0x2F1474u;
    ctx->pc = 0x2F1478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1474u;
    // 0x2f1478: 0x2409001c  addiu       $t1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328250u;
    sub_00328250_0x328250(rdram, ctx, runtime); return;
    ctx->pc = 0x2F147Cu;
}
