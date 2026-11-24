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

// Function: sub_002F1400
// Address: 0x2f1400 - 0x2f1418
void sub_002F1400_0x2f1400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1400_0x2f1400");
#endif

    ctx->pc = 0x2f1400u;

    // 0x2f1400: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f1400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1404: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f1404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f140c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f140cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1410: 0x80c031c  j           func_300C70
    ctx->pc = 0x2F1410u;
    ctx->pc = 0x2F1414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1410u;
    // 0x2f1414: 0x24080029  addiu       $t0, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300C70u;
    sub_00300C70_0x300c70(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1418u;
}
