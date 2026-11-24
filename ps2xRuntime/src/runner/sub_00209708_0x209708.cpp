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

// Function: sub_00209708
// Address: 0x209708 - 0x2097b0
void sub_00209708_0x209708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209708_0x209708");
#endif

    switch (ctx->pc) {
        case 0x20973cu: goto label_20973c;
        case 0x20976cu: goto label_20976c;
        case 0x209784u: goto label_209784;
        case 0x2097a0u: goto label_2097a0;
        default: break;
    }

    ctx->pc = 0x209708u;

    // 0x209708: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20970c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20970cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209710: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x209710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x209714: 0x24430194  addiu       $v1, $v0, 0x194
    ctx->pc = 0x209714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 404));
    // 0x209718: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x209718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x20971c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20971cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209720: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x209720u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x209724: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x209724u;
    {
        const bool branch_taken_0x209724 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x209728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209724u;
        // 0x209728: 0x8c5000a8  lw          $s0, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209724) {
            ctx->pc = 0x209748u;
            goto label_209748;
        }
    }
    ctx->pc = 0x20972Cu;
    // 0x20972c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20972cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209734: 0xc089906  jal         func_226418
    ctx->pc = 0x209734u;
    SET_GPR_U32(ctx, 31, 0x20973Cu);
    ctx->pc = 0x209738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209734u;
    // 0x209738: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226418u, 0x209734u, 0x20973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20973Cu;
label_20973c:
    // 0x20973c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x20973Cu;
    {
        const bool branch_taken_0x20973c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20973Cu;
        // 0x209740: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20973c) {
            ctx->pc = 0x2097A4u;
            goto label_2097a4;
        }
    }
    ctx->pc = 0x209744u;
    // 0x209744: 0x0  nop
    ctx->pc = 0x209744u;
    // NOP
label_209748:
    // 0x209748: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x209748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20974c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x20974cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x209750: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x209750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x209754: 0x24a58030  addiu       $a1, $a1, -0x7FD0
    ctx->pc = 0x209754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934576));
    // 0x209758: 0x24c68038  addiu       $a2, $a2, -0x7FC8
    ctx->pc = 0x209758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934584));
    // 0x20975c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x20975cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x209760: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x209760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x209764: 0xc0948e4  jal         func_252390
    ctx->pc = 0x209764u;
    SET_GPR_U32(ctx, 31, 0x20976Cu);
    ctx->pc = 0x209768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209764u;
    // 0x209768: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252390u, 0x209764u, 0x20976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20976Cu;
label_20976c:
    // 0x20976c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20976cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209774: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209774u;
    {
        const bool branch_taken_0x209774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209774u;
        // 0x209778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209774) {
            ctx->pc = 0x209790u;
            goto label_209790;
        }
    }
    ctx->pc = 0x20977Cu;
    // 0x20977c: 0xc089906  jal         func_226418
    ctx->pc = 0x20977Cu;
    SET_GPR_U32(ctx, 31, 0x209784u);
    ctx->pc = 0x226418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226418u, 0x20977Cu, 0x209784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209784u;
label_209784:
    // 0x209784: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x209784u;
    {
        const bool branch_taken_0x209784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209784u;
        // 0x209788: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209784) {
            ctx->pc = 0x2097A4u;
            goto label_2097a4;
        }
    }
    ctx->pc = 0x20978Cu;
    // 0x20978c: 0x0  nop
    ctx->pc = 0x20978cu;
    // NOP
label_209790:
    // 0x209790: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x209790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209798: 0xc089906  jal         func_226418
    ctx->pc = 0x209798u;
    SET_GPR_U32(ctx, 31, 0x2097A0u);
    ctx->pc = 0x20979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209798u;
    // 0x20979c: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226418u, 0x209798u, 0x2097A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097A0u;
label_2097a0:
    // 0x2097a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2097a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2097a4:
    // 0x2097a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2097a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2097a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2097A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2097ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097A8u;
        // 0x2097ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2097A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2097B0u;
}
