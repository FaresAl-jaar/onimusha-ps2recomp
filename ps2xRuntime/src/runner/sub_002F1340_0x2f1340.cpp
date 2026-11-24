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

// Function: sub_002F1340
// Address: 0x2f1340 - 0x2f135c
void sub_002F1340_0x2f1340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1340_0x2f1340");
#endif

    ctx->pc = 0x2f1340u;

    // 0x2f1340: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1344: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f1344u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1348: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f134c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f134cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1354: 0x80f7998  j           func_3DE660
    ctx->pc = 0x2F1354u;
    ctx->pc = 0x2F1358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1354u;
    // 0x2f1358: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE660u;
    sub_003DE660_0x3de660(rdram, ctx, runtime); return;
    ctx->pc = 0x2F135Cu;
}
