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

// Function: sub_00233530
// Address: 0x233530 - 0x233558
void sub_00233530_0x233530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233530_0x233530");
#endif

    ctx->pc = 0x233530u;

    // 0x233530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x233534: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23353c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x23353cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x233540: 0x2442fcbc  addiu       $v0, $v0, -0x344
    ctx->pc = 0x233540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966460));
    // 0x233544: 0x8c65fc38  lw          $a1, -0x3C8($v1)
    ctx->pc = 0x233544u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BFC38u));
    // 0x233548: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x233548u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BFCBCu));
    // 0x23354c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23354cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233550: 0x808cd12  j           func_233448
    ctx->pc = 0x233550u;
    ctx->pc = 0x233554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233550u;
    // 0x233554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233448u;
    sub_00233448_0x233448(rdram, ctx, runtime); return;
    ctx->pc = 0x233558u;
}
