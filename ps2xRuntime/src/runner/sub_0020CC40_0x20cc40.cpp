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

// Function: sub_0020CC40
// Address: 0x20cc40 - 0x20cc5c
void sub_0020CC40_0x20cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CC40_0x20cc40");
#endif

    ctx->pc = 0x20cc40u;

    // 0x20cc40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cc44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cc48: 0x8c822004  lw          $v0, 0x2004($a0)
    ctx->pc = 0x20cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x20cc4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cc50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20cc54: 0x808eaa2  j           func_23AA88
    ctx->pc = 0x20CC54u;
    ctx->pc = 0x20CC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC54u;
    // 0x20cc58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AA88u;
    sub_0023AA88_0x23aa88(rdram, ctx, runtime); return;
    ctx->pc = 0x20CC5Cu;
}
