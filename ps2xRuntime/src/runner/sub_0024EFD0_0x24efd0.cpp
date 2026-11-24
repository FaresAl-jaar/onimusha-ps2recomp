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

// Function: sub_0024EFD0
// Address: 0x24efd0 - 0x24f0b8
void sub_0024EFD0_0x24efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EFD0_0x24efd0");
#endif

    switch (ctx->pc) {
        case 0x24f020u: goto label_24f020;
        case 0x24f030u: goto label_24f030;
        case 0x24f064u: goto label_24f064;
        case 0x24f078u: goto label_24f078;
        case 0x24f088u: goto label_24f088;
        default: break;
    }

    ctx->pc = 0x24efd0u;

    // 0x24efd0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24efd4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24efd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24efd8: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24efdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24efdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24efe0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24efe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x24efe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24efe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24efe8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24efe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24efec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24efecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24eff0: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EFF0u;
    {
        const bool branch_taken_0x24eff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EFF0u;
        // 0x24eff4: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eff0) {
            ctx->pc = 0x24F008u;
            goto label_24f008;
        }
    }
    ctx->pc = 0x24EFF8u;
    // 0x24eff8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24effc: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24effcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f000: 0x58600027  blezl       $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x24F000u;
    {
        const bool branch_taken_0x24f000 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x24f000) {
            ctx->pc = 0x24F004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F000u;
            // 0x24f004: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F0A0u;
            goto label_24f0a0;
        }
    }
    ctx->pc = 0x24F008u;
label_24f008:
    // 0x24f008: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x24f008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24f00c: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24F00Cu;
    {
        const bool branch_taken_0x24f00c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F00Cu;
        // 0x24f010: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f00c) {
            ctx->pc = 0x24F044u;
            goto label_24f044;
        }
    }
    ctx->pc = 0x24F014u;
    // 0x24f014: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x24f014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x24f018: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24f018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f01c: 0x0  nop
    ctx->pc = 0x24f01cu;
    // NOP
label_24f020:
    // 0x24f020: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F020u;
    {
        const bool branch_taken_0x24f020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F020u;
        // 0x24f024: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f020) {
            ctx->pc = 0x24F034u;
            goto label_24f034;
        }
    }
    ctx->pc = 0x24F028u;
    // 0x24f028: 0xc091cbe  jal         func_2472F8
    ctx->pc = 0x24F028u;
    SET_GPR_U32(ctx, 31, 0x24F030u);
    ctx->pc = 0x2472F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2472F8u, 0x24F028u, 0x24F030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F030u;
label_24f030:
    // 0x24f030: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x24f030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24f034:
    // 0x24f034: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24f034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24f038: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x24f038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24f03c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24F03Cu;
    {
        const bool branch_taken_0x24f03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f03c) {
            ctx->pc = 0x24F040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F03Cu;
            // 0x24f040: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f020;
        }
    }
    ctx->pc = 0x24F044u;
label_24f044:
    // 0x24f044: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x24f044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x24f048: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x24f048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24f04c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24f04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f050: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24f050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f054: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24f054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f058: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24f058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f05c: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x24F05Cu;
    SET_GPR_U32(ctx, 31, 0x24F064u);
    ctx->pc = 0x24F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F05Cu;
    // 0x24f060: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x24F05Cu, 0x24F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F064u;
label_24f064:
    // 0x24f064: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x24f064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24f068: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x24F068u;
    {
        const bool branch_taken_0x24f068 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F068u;
        // 0x24f06c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f068) {
            ctx->pc = 0x24F09Cu;
            goto label_24f09c;
        }
    }
    ctx->pc = 0x24F070u;
    // 0x24f070: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x24f070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x24f074: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24f074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24f078:
    // 0x24f078: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F078u;
    {
        const bool branch_taken_0x24f078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F078u;
        // 0x24f07c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f078) {
            ctx->pc = 0x24F08Cu;
            goto label_24f08c;
        }
    }
    ctx->pc = 0x24F080u;
    // 0x24f080: 0xc093808  jal         func_24E020
    ctx->pc = 0x24F080u;
    SET_GPR_U32(ctx, 31, 0x24F088u);
    ctx->pc = 0x24E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E020u, 0x24F080u, 0x24F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F088u;
label_24f088:
    // 0x24f088: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x24f088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24f08c:
    // 0x24f08c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24f08cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24f090: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x24f090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24f094: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24F094u;
    {
        const bool branch_taken_0x24f094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f094) {
            ctx->pc = 0x24F098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F094u;
            // 0x24f098: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f078;
        }
    }
    ctx->pc = 0x24F09Cu;
label_24f09c:
    // 0x24f09c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x24f09cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_24f0a0:
    // 0x24f0a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24f0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f0a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24f0a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24f0a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24f0a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f0ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24f0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x24F0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0B0u;
        // 0x24f0b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F0B8u;
}
