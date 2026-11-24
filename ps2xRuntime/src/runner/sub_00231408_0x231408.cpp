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

// Function: sub_00231408
// Address: 0x231408 - 0x231440
void sub_00231408_0x231408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231408_0x231408");
#endif

    switch (ctx->pc) {
        case 0x231420u: goto label_231420;
        default: break;
    }

    ctx->pc = 0x231408u;

    // 0x231408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23140c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23140Cu;
    {
        const bool branch_taken_0x23140c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x231410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23140Cu;
        // 0x231410: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23140c) {
            ctx->pc = 0x231430u;
            goto label_231430;
        }
    }
    ctx->pc = 0x231414u;
    // 0x231414: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x231414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x231418: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x231418u;
    SET_GPR_U32(ctx, 31, 0x231420u);
    ctx->pc = 0x23141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231418u;
    // 0x23141c: 0x2484a8d0  addiu       $a0, $a0, -0x5730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x231418u, 0x231420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231420u;
label_231420:
    // 0x231420: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x231420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x231424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231428: 0x3e00008  jr          $ra
    ctx->pc = 0x231428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231428u;
        // 0x23142c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231430u;
label_231430:
    // 0x231430: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x231430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x231434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231438: 0x808e108  j           func_238420
    ctx->pc = 0x231438u;
    ctx->pc = 0x23143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231438u;
    // 0x23143c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238420u;
    sub_00238420_0x238420(rdram, ctx, runtime); return;
    ctx->pc = 0x231440u;
}
