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

// Function: sub_00233558
// Address: 0x233558 - 0x233580
void sub_00233558_0x233558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233558_0x233558");
#endif

    ctx->pc = 0x233558u;

    // 0x233558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23355c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23355cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233564: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x233564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x233568: 0x2442fcc0  addiu       $v0, $v0, -0x340
    ctx->pc = 0x233568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966464));
    // 0x23356c: 0x8c65fc3c  lw          $a1, -0x3C4($v1)
    ctx->pc = 0x23356cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BFC3Cu));
    // 0x233570: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x233570u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BFCC0u));
    // 0x233574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233578: 0x808cd12  j           func_233448
    ctx->pc = 0x233578u;
    ctx->pc = 0x23357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233578u;
    // 0x23357c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233448u;
    sub_00233448_0x233448(rdram, ctx, runtime); return;
    ctx->pc = 0x233580u;
}
