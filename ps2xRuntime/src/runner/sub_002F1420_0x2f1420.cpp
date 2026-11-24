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

// Function: sub_002F1420
// Address: 0x2f1420 - 0x2f1438
void sub_002F1420_0x2f1420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1420_0x2f1420");
#endif

    ctx->pc = 0x2f1420u;

    // 0x2f1420: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f1420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1424: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f1424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f142c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f142cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1430: 0x80c0400  j           func_301000
    ctx->pc = 0x2F1430u;
    ctx->pc = 0x2F1434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1430u;
    // 0x2f1434: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301000u;
    sub_00301000_0x301000(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1438u;
}
