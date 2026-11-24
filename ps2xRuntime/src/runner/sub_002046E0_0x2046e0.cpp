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

// Function: sub_002046E0
// Address: 0x2046e0 - 0x204778
void sub_002046E0_0x2046e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002046E0_0x2046e0");
#endif

    switch (ctx->pc) {
        case 0x204718u: goto label_204718;
        default: break;
    }

    ctx->pc = 0x2046e0u;

    // 0x2046e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2046e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2046e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2046e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2046e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2046e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2046ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2046ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2046f0: 0x24930160  addiu       $s3, $a0, 0x160
    ctx->pc = 0x2046f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x2046f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2046f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2046f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2046f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2046fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2046fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x204700: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x204700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x204704: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x204704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x204708: 0x8c940178  lw          $s4, 0x178($a0)
    ctx->pc = 0x204708u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x20470c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x20470cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x204710: 0xc081608  jal         func_205820
    ctx->pc = 0x204710u;
    SET_GPR_U32(ctx, 31, 0x204718u);
    ctx->pc = 0x204714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204710u;
    // 0x204714: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205820u, 0x204710u, 0x204718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204718u;
label_204718:
    // 0x204718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20471c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20471Cu;
    {
        const bool branch_taken_0x20471c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20471c) {
            ctx->pc = 0x204720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20471Cu;
            // 0x204720: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204730u;
            goto label_204730;
        }
    }
    ctx->pc = 0x204724u;
    // 0x204724: 0x16930004  bne         $s4, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x204724u;
    {
        const bool branch_taken_0x204724 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x204724) {
            ctx->pc = 0x204738u;
            goto label_204738;
        }
    }
    ctx->pc = 0x20472Cu;
    // 0x20472c: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x20472cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_204730:
    // 0x204730: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x204730u;
    {
        const bool branch_taken_0x204730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204730u;
        // 0x204734: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204730) {
            ctx->pc = 0x204758u;
            goto label_204758;
        }
    }
    ctx->pc = 0x204738u;
label_204738:
    // 0x204738: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204738u;
    {
        const bool branch_taken_0x204738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204738u;
        // 0x20473c: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204738) {
            ctx->pc = 0x204750u;
            goto label_204750;
        }
    }
    ctx->pc = 0x204740u;
    // 0x204740: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x204740u;
    {
        const bool branch_taken_0x204740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204740) {
            ctx->pc = 0x204744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204740u;
            // 0x204744: 0xae510048  sw          $s1, 0x48($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204754u;
            goto label_204754;
        }
    }
    ctx->pc = 0x204748u;
    // 0x204748: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x204748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x20474c: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x20474cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_204750:
    // 0x204750: 0xae510048  sw          $s1, 0x48($s2)
    ctx->pc = 0x204750u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 17));
label_204754:
    // 0x204754: 0xae500044  sw          $s0, 0x44($s2)
    ctx->pc = 0x204754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 16));
label_204758:
    // 0x204758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20475c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20475cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x204760: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x204760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204764: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x204764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204768: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x204768u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20476c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20476cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x204770: 0x3e00008  jr          $ra
    ctx->pc = 0x204770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204770u;
        // 0x204774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204778u;
}
