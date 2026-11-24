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

// Function: sub_003A3570
// Address: 0x3a3570 - 0x3a35bc
void sub_003A3570_0x3a3570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3570_0x3a3570");
#endif

    switch (ctx->pc) {
        case 0x3a3580u: goto label_3a3580;
        case 0x3a3598u: goto label_3a3598;
        default: break;
    }

    ctx->pc = 0x3a3570u;

    // 0x3a3570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a3570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a3574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a3574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a3578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a357c: 0x8f858c60  lw          $a1, -0x73A0($gp)
    ctx->pc = 0x3a357cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_3a3580:
    // 0x3a3580: 0x8ca30964  lw          $v1, 0x964($a1)
    ctx->pc = 0x3a3580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2404)));
    // 0x3a3584: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A3584u;
    {
        const bool branch_taken_0x3a3584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3584u;
        // 0x3a3588: 0x24a70960  addiu       $a3, $a1, 0x960 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3584) {
            ctx->pc = 0x3A35A0u;
            goto label_3a35a0;
        }
    }
    ctx->pc = 0x3A358Cu;
    // 0x3a358c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x3a358cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x3a3590: 0xc0f0444  jal         func_3C1110
    ctx->pc = 0x3A3590u;
    SET_GPR_U32(ctx, 31, 0x3A3598u);
    ctx->pc = 0x3A3594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3590u;
    // 0x3a3594: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1110u, 0x3A3590u, 0x3A3598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3598u;
label_3a3598:
    // 0x3a3598: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3598u;
    {
        const bool branch_taken_0x3a3598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3598) {
            ctx->pc = 0x3A35B0u;
            goto label_3a35b0;
        }
    }
    ctx->pc = 0x3A35A0u;
label_3a35a0:
    // 0x3a35a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a35a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a35a4: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x3a35a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a35a8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3A35A8u;
    {
        const bool branch_taken_0x3a35a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A35ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A35A8u;
        // 0x3a35ac: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a35a8) {
            ctx->pc = 0x3A3580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3580;
        }
    }
    ctx->pc = 0x3A35B0u;
label_3a35b0:
    // 0x3a35b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a35b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a35b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A35B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A35B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A35B4u;
        // 0x3a35b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A35B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A35BCu;
}
