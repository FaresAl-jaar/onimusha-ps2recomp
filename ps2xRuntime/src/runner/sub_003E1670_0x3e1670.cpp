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

// Function: sub_003E1670
// Address: 0x3e1670 - 0x3e177c
void sub_003E1670_0x3e1670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1670_0x3e1670");
#endif

    switch (ctx->pc) {
        case 0x3e1688u: goto label_3e1688;
        case 0x3e16a0u: goto label_3e16a0;
        case 0x3e16c4u: goto label_3e16c4;
        case 0x3e16d8u: goto label_3e16d8;
        case 0x3e16ecu: goto label_3e16ec;
        case 0x3e1724u: goto label_3e1724;
        case 0x3e1738u: goto label_3e1738;
        case 0x3e174cu: goto label_3e174c;
        default: break;
    }

    ctx->pc = 0x3e1670u;

    // 0x3e1670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e1670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e1674: 0x240402a0  addiu       $a0, $zero, 0x2A0
    ctx->pc = 0x3e1674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x3e1678: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e1678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e167c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e167cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e1680: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3E1680u;
    SET_GPR_U32(ctx, 31, 0x3E1688u);
    ctx->pc = 0x3E1684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1680u;
    // 0x3e1684: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3E1680u, 0x3E1688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1688u;
label_3e1688:
    // 0x3e1688: 0xaf828cf8  sw          $v0, -0x7308($gp)
    ctx->pc = 0x3e1688u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 2));
    // 0x3e168c: 0x8f848cf8  lw          $a0, -0x7308($gp)
    ctx->pc = 0x3e168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1690: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3E1690u;
    {
        const bool branch_taken_0x3e1690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1690u;
        // 0x3e1694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1690) {
            ctx->pc = 0x3E1768u;
            goto label_3e1768;
        }
    }
    ctx->pc = 0x3E1698u;
    // 0x3e1698: 0xc049590  jal         func_125640
    ctx->pc = 0x3E1698u;
    SET_GPR_U32(ctx, 31, 0x3E16A0u);
    ctx->pc = 0x3E169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1698u;
    // 0x3e169c: 0x240602a0  addiu       $a2, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3E1698u, 0x3E16A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E16A0u;
label_3e16a0:
    // 0x3e16a0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3e16a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3e16a4: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e16a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e16a8: 0x8c3095c0  lw          $s0, -0x6A40($at)
    ctx->pc = 0x3e16a8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3e16ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e16acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e16b0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3e16b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3e16b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e16b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e16b8: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e16bc: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3E16BCu;
    SET_GPR_U32(ctx, 31, 0x3E16C4u);
    ctx->pc = 0x3E16C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E16BCu;
    // 0x3e16c0: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3E16BCu, 0x3E16C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E16C4u;
label_3e16c4:
    // 0x3e16c4: 0x96020068  lhu         $v0, 0x68($s0)
    ctx->pc = 0x3e16c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e16c8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3e16c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3e16cc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3E16CCu;
    {
        const bool branch_taken_0x3e16cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E16D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E16CCu;
        // 0x3e16d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e16cc) {
            ctx->pc = 0x3E1700u;
            goto label_3e1700;
        }
    }
    ctx->pc = 0x3E16D4u;
    // 0x3e16d4: 0x0  nop
    ctx->pc = 0x3e16d4u;
    // NOP
label_3e16d8:
    // 0x3e16d8: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x3e16d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3e16dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e16dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e16e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e16e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e16e4: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3E16E4u;
    SET_GPR_U32(ctx, 31, 0x3E16ECu);
    ctx->pc = 0x3E16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E16E4u;
    // 0x3e16e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3E16E4u, 0x3E16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E16ECu;
label_3e16ec:
    // 0x3e16ec: 0x96020068  lhu         $v0, 0x68($s0)
    ctx->pc = 0x3e16ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e16f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e16f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3e16f4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3e16f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3e16f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3E16F8u;
    {
        const bool branch_taken_0x3e16f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e16f8) {
            ctx->pc = 0x3E16D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e16d8;
        }
    }
    ctx->pc = 0x3E1700u;
label_3e1700:
    // 0x3e1700: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3e1700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3e1704: 0x8c30b870  lw          $s0, -0x4790($at)
    ctx->pc = 0x3e1704u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x80B870u));
    // 0x3e1708: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e1708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e170c: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e1710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1714: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x3e1714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x3e1718: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e1718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e171c: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3E171Cu;
    SET_GPR_U32(ctx, 31, 0x3E1724u);
    ctx->pc = 0x3E1720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E171Cu;
    // 0x3e1720: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3E171Cu, 0x3E1724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1724u;
label_3e1724:
    // 0x3e1724: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3e1724u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e1728: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3e1728u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e172c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3E172Cu;
    {
        const bool branch_taken_0x3e172c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E172Cu;
        // 0x3e1730: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e172c) {
            ctx->pc = 0x3E1760u;
            goto label_3e1760;
        }
    }
    ctx->pc = 0x3E1734u;
    // 0x3e1734: 0x0  nop
    ctx->pc = 0x3e1734u;
    // NOP
label_3e1738:
    // 0x3e1738: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x3e1738u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3e173c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e1740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1744: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3E1744u;
    SET_GPR_U32(ctx, 31, 0x3E174Cu);
    ctx->pc = 0x3E1748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1744u;
    // 0x3e1748: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3E1744u, 0x3E174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E174Cu;
label_3e174c:
    // 0x3e174c: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3e174cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e1750: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e1750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3e1754: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3e1754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e1758: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3E1758u;
    {
        const bool branch_taken_0x3e1758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1758) {
            ctx->pc = 0x3E1738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1738;
        }
    }
    ctx->pc = 0x3E1760u;
label_3e1760:
    // 0x3e1760: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x3e1760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1764: 0xa0600290  sb          $zero, 0x290($v1)
    ctx->pc = 0x3e1764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 656), (uint8_t)GPR_U32(ctx, 0));
label_3e1768:
    // 0x3e1768: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e1768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e176c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e176cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e1770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e1774: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1774u;
        // 0x3e1778: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E177Cu;
}
