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

// Function: sub_003E0F90
// Address: 0x3e0f90 - 0x3e10ac
void sub_003E0F90_0x3e0f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0F90_0x3e0f90");
#endif

    switch (ctx->pc) {
        case 0x3e0fa8u: goto label_3e0fa8;
        case 0x3e0fd4u: goto label_3e0fd4;
        case 0x3e0fe8u: goto label_3e0fe8;
        case 0x3e1004u: goto label_3e1004;
        case 0x3e1044u: goto label_3e1044;
        case 0x3e1058u: goto label_3e1058;
        case 0x3e1074u: goto label_3e1074;
        case 0x3e1098u: goto label_3e1098;
        default: break;
    }

    ctx->pc = 0x3e0f90u;

    // 0x3e0f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e0f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e0f94: 0x240403a0  addiu       $a0, $zero, 0x3A0
    ctx->pc = 0x3e0f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 928));
    // 0x3e0f98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e0f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e0f9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e0f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e0fa0: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3E0FA0u;
    SET_GPR_U32(ctx, 31, 0x3E0FA8u);
    ctx->pc = 0x3E0FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0FA0u;
    // 0x3e0fa4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3E0FA0u, 0x3E0FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0FA8u;
label_3e0fa8:
    // 0x3e0fa8: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x3e0fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
    // 0x3e0fac: 0x8f838cf4  lw          $v1, -0x730C($gp)
    ctx->pc = 0x3e0facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
    // 0x3e0fb0: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3E0FB0u;
    {
        const bool branch_taken_0x3e0fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0FB0u;
        // 0x3e0fb4: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0fb0) {
            ctx->pc = 0x3E1098u;
            goto label_3e1098;
        }
    }
    ctx->pc = 0x3E0FB8u;
    // 0x3e0fb8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3e0fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e0fbc: 0x8c3095c0  lw          $s0, -0x6A40($at)
    ctx->pc = 0x3e0fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940096)));
    // 0x3e0fc0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3e0fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3e0fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e0fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0fc8: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x3e0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
    // 0x3e0fcc: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3E0FCCu;
    SET_GPR_U32(ctx, 31, 0x3E0FD4u);
    ctx->pc = 0x3E0FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0FCCu;
    // 0x3e0fd0: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3E0FCCu, 0x3E0FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0FD4u;
label_3e0fd4:
    // 0x3e0fd4: 0x96020068  lhu         $v0, 0x68($s0)
    ctx->pc = 0x3e0fd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e0fd8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3e0fd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3e0fdc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E0FDCu;
    {
        const bool branch_taken_0x3e0fdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0FDCu;
        // 0x3e0fe0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0fdc) {
            ctx->pc = 0x3E1020u;
            goto label_3e1020;
        }
    }
    ctx->pc = 0x3E0FE4u;
    // 0x3e0fe4: 0x0  nop
    ctx->pc = 0x3e0fe4u;
    // NOP
label_3e0fe8:
    // 0x3e0fe8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3e0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3e0fec: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0FECu;
    {
        const bool branch_taken_0x3e0fec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E0FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0FECu;
        // 0x3e0ff0: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0fec) {
            ctx->pc = 0x3E1008u;
            goto label_3e1008;
        }
    }
    ctx->pc = 0x3E0FF4u;
    // 0x3e0ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e0ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0ff8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e0ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e0ffc: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3E0FFCu;
    SET_GPR_U32(ctx, 31, 0x3E1004u);
    ctx->pc = 0x3E1000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0FFCu;
    // 0x3e1000: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3E0FFCu, 0x3E1004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1004u;
label_3e1004:
    // 0x3e1004: 0x0  nop
    ctx->pc = 0x3e1004u;
    // NOP
label_3e1008:
    // 0x3e1008: 0x96020068  lhu         $v0, 0x68($s0)
    ctx->pc = 0x3e1008u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e100c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e100cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3e1010: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3e1010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3e1014: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3E1014u;
    {
        const bool branch_taken_0x3e1014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1014) {
            ctx->pc = 0x3E0FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0fe8;
        }
    }
    ctx->pc = 0x3E101Cu;
    // 0x3e101c: 0x0  nop
    ctx->pc = 0x3e101cu;
    // NOP
label_3e1020:
    // 0x3e1020: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3e1020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3e1024: 0x8c30b870  lw          $s0, -0x4790($at)
    ctx->pc = 0x3e1024u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x80B870u));
    // 0x3e1028: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3e1028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e102c: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x3e102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
    // 0x3e1030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e1030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1034: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x3e1034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x3e1038: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x3e1038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
    // 0x3e103c: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3E103Cu;
    SET_GPR_U32(ctx, 31, 0x3E1044u);
    ctx->pc = 0x3E1040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E103Cu;
    // 0x3e1040: 0x244501d0  addiu       $a1, $v0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3E103Cu, 0x3E1044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1044u;
label_3e1044:
    // 0x3e1044: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3e1044u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e1048: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3e1048u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e104c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E104Cu;
    {
        const bool branch_taken_0x3e104c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E104Cu;
        // 0x3e1050: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e104c) {
            ctx->pc = 0x3E1090u;
            goto label_3e1090;
        }
    }
    ctx->pc = 0x3E1054u;
    // 0x3e1054: 0x0  nop
    ctx->pc = 0x3e1054u;
    // NOP
label_3e1058:
    // 0x3e1058: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e1058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e105c: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E105Cu;
    {
        const bool branch_taken_0x3e105c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E105Cu;
        // 0x3e1060: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e105c) {
            ctx->pc = 0x3E1078u;
            goto label_3e1078;
        }
    }
    ctx->pc = 0x3E1064u;
    // 0x3e1064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e1064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e1068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e106c: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3E106Cu;
    SET_GPR_U32(ctx, 31, 0x3E1074u);
    ctx->pc = 0x3E1070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E106Cu;
    // 0x3e1070: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3E106Cu, 0x3E1074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1074u;
label_3e1074:
    // 0x3e1074: 0x0  nop
    ctx->pc = 0x3e1074u;
    // NOP
label_3e1078:
    // 0x3e1078: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3e1078u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e107c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e107cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3e1080: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3e1080u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e1084: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x3E1084u;
    {
        const bool branch_taken_0x3e1084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1084) {
            ctx->pc = 0x3E1058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1058;
        }
    }
    ctx->pc = 0x3E108Cu;
    // 0x3e108c: 0x0  nop
    ctx->pc = 0x3e108cu;
    // NOP
label_3e1090:
    // 0x3e1090: 0xc0f83dc  jal         func_3E0F70
    ctx->pc = 0x3E1090u;
    SET_GPR_U32(ctx, 31, 0x3E1098u);
    ctx->pc = 0x3E0F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0F70u, 0x3E1090u, 0x3E1098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1098u;
label_3e1098:
    // 0x3e1098: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e1098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e109c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e109cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e10a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e10a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e10a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E10A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E10A4u;
        // 0x3e10a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E10A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E10ACu;
}
