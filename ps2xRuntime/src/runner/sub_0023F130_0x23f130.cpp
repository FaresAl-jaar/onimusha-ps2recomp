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

// Function: sub_0023F130
// Address: 0x23f130 - 0x23f16c
void sub_0023F130_0x23f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F130_0x23f130");
#endif

    ctx->pc = 0x23f130u;

    // 0x23f130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f134: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x23f134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x23f138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f13c: 0x2463c688  addiu       $v1, $v1, -0x3978
    ctx->pc = 0x23f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952584));
    // 0x23f140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23f140u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CC688u));
    // 0x23f144: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23f148: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F148u;
    {
        const bool branch_taken_0x23f148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F148u;
        // 0x23f14c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f148) {
            ctx->pc = 0x23F160u;
            goto label_23f160;
        }
    }
    ctx->pc = 0x23F150u;
    // 0x23f150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f154: 0x8090a8a  j           func_242A28
    ctx->pc = 0x23F154u;
    ctx->pc = 0x23F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F154u;
    // 0x23f158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242A28u;
    sub_00242A28_0x242a28(rdram, ctx, runtime); return;
    ctx->pc = 0x23F15Cu;
    // 0x23f15c: 0x0  nop
    ctx->pc = 0x23f15cu;
    // NOP
label_23f160:
    // 0x23f160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f164: 0x3e00008  jr          $ra
    ctx->pc = 0x23F164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F164u;
        // 0x23f168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F16Cu;
}
