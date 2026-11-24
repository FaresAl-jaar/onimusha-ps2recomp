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

// Function: sub_00248060
// Address: 0x248060 - 0x248120
void sub_00248060_0x248060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248060_0x248060");
#endif

    switch (ctx->pc) {
        case 0x248090u: goto label_248090;
        case 0x2480b0u: goto label_2480b0;
        case 0x2480b8u: goto label_2480b8;
        case 0x2480c0u: goto label_2480c0;
        case 0x2480c8u: goto label_2480c8;
        case 0x2480d4u: goto label_2480d4;
        case 0x2480ecu: goto label_2480ec;
        case 0x248100u: goto label_248100;
        default: break;
    }

    ctx->pc = 0x248060u;

    // 0x248060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x248060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x248064: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x248064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x248068: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24806c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x24806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x248070: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x248070u;
    {
        const bool branch_taken_0x248070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x248074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248070u;
        // 0x248074: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248070) {
            ctx->pc = 0x248088u;
            goto label_248088;
        }
    }
    ctx->pc = 0x248078u;
    // 0x248078: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x248078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24807c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x24807Cu;
    {
        const bool branch_taken_0x24807c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24807Cu;
        // 0x248080: 0x24a5ce78  addiu       $a1, $a1, -0x3188 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24807c) {
            ctx->pc = 0x2480F8u;
            goto label_2480f8;
        }
    }
    ctx->pc = 0x248084u;
    // 0x248084: 0x0  nop
    ctx->pc = 0x248084u;
    // NOP
label_248088:
    // 0x248088: 0xc09246a  jal         func_2491A8
    ctx->pc = 0x248088u;
    SET_GPR_U32(ctx, 31, 0x248090u);
    ctx->pc = 0x24808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248088u;
    // 0x24808c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2491A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491A8u, 0x248088u, 0x248090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248090u;
label_248090:
    // 0x248090: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x248090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x248094: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x248094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x248098: 0x24710a10  addiu       $s1, $v1, 0xA10
    ctx->pc = 0x248098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2576));
    // 0x24809c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24809cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2480a0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2480A0u;
    {
        const bool branch_taken_0x2480a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2480A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480A0u;
        // 0x2480a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480a0) {
            ctx->pc = 0x24810Cu;
            goto label_24810c;
        }
    }
    ctx->pc = 0x2480A8u;
    // 0x2480a8: 0xc09224e  jal         func_248938
    ctx->pc = 0x2480A8u;
    SET_GPR_U32(ctx, 31, 0x2480B0u);
    ctx->pc = 0x248938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248938u, 0x2480A8u, 0x2480B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480B0u;
label_2480b0:
    // 0x2480b0: 0xc091a44  jal         func_246910
    ctx->pc = 0x2480B0u;
    SET_GPR_U32(ctx, 31, 0x2480B8u);
    ctx->pc = 0x2480B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2480B0u;
    // 0x2480b4: 0x34048200  ori         $a0, $zero, 0x8200 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x2480B0u, 0x2480B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480B8u;
label_2480b8:
    // 0x2480b8: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x2480B8u;
    SET_GPR_U32(ctx, 31, 0x2480C0u);
    ctx->pc = 0x2480BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2480B8u;
    // 0x2480bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x2480B8u, 0x2480C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480C0u;
label_2480c0:
    // 0x2480c0: 0xc091a44  jal         func_246910
    ctx->pc = 0x2480C0u;
    SET_GPR_U32(ctx, 31, 0x2480C8u);
    ctx->pc = 0x2480C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2480C0u;
    // 0x2480c4: 0x34048201  ori         $a0, $zero, 0x8201 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33281);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x2480C0u, 0x2480C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480C8u;
label_2480c8:
    // 0x2480c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2480c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2480cc: 0xc091f58  jal         func_247D60
    ctx->pc = 0x2480CCu;
    SET_GPR_U32(ctx, 31, 0x2480D4u);
    ctx->pc = 0x2480D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2480CCu;
    // 0x2480d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D60u, 0x2480CCu, 0x2480D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480D4u;
label_2480d4:
    // 0x2480d4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2480d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2480d8: 0x2484cea8  addiu       $a0, $a0, -0x3158
    ctx->pc = 0x2480d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954664));
    // 0x2480dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2480DCu;
    {
        const bool branch_taken_0x2480dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2480E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480DCu;
        // 0x2480e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480dc) {
            ctx->pc = 0x248108u;
            goto label_248108;
        }
    }
    ctx->pc = 0x2480E4u;
    // 0x2480e4: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x2480E4u;
    SET_GPR_U32(ctx, 31, 0x2480ECu);
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x2480E4u, 0x2480ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480ECu;
label_2480ec:
    // 0x2480ec: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2480ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2480f0: 0x24a5ced0  addiu       $a1, $a1, -0x3130
    ctx->pc = 0x2480f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954704));
    // 0x2480f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2480f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2480f8:
    // 0x2480f8: 0xc091f4c  jal         func_247D30
    ctx->pc = 0x2480F8u;
    SET_GPR_U32(ctx, 31, 0x248100u);
    ctx->pc = 0x247D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D30u, 0x2480F8u, 0x248100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248100u;
label_248100:
    // 0x248100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x248100u;
    {
        const bool branch_taken_0x248100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248100u;
        // 0x248104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248100) {
            ctx->pc = 0x24810Cu;
            goto label_24810c;
        }
    }
    ctx->pc = 0x248108u;
label_248108:
    // 0x248108: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x248108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_24810c:
    // 0x24810c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x24810cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248110: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x248110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x248114: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x248114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248118: 0x3e00008  jr          $ra
    ctx->pc = 0x248118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248118u;
        // 0x24811c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248120u;
}
