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

// Function: sub_002F1200
// Address: 0x2f1200 - 0x2f1220
void sub_002F1200_0x2f1200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1200_0x2f1200");
#endif

    ctx->pc = 0x2f1200u;

    // 0x2f1200: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1204: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f1204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1208: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f120c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f120cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1210: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f1210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1214: 0x24090022  addiu       $t1, $zero, 0x22
    ctx->pc = 0x2f1214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2f1218: 0x80d54b0  j           func_3552C0
    ctx->pc = 0x2F1218u;
    ctx->pc = 0x2F121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1218u;
    // 0x2f121c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3552C0u;
    sub_003552C0_0x3552c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1220u;
}
