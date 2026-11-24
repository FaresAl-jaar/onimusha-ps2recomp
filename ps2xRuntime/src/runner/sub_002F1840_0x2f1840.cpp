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

// Function: sub_002F1840
// Address: 0x2f1840 - 0x2f1860
void sub_002F1840_0x2f1840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1840_0x2f1840");
#endif

    ctx->pc = 0x2f1840u;

    // 0x2f1840: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1844: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f1844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1848: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f184c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f184cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1854: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2f1854u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1858: 0x80cbcb0  j           func_32F2C0
    ctx->pc = 0x2F1858u;
    ctx->pc = 0x2F185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1858u;
    // 0x2f185c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F2C0u;
    sub_0032F2C0_0x32f2c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1860u;
}
