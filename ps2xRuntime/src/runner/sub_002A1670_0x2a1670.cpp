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

// Function: sub_002A1670
// Address: 0x2a1670 - 0x2a172c
void sub_002A1670_0x2a1670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1670_0x2a1670");
#endif

    switch (ctx->pc) {
        case 0x2a16a0u: goto label_2a16a0;
        case 0x2a16c4u: goto label_2a16c4;
        case 0x2a16dcu: goto label_2a16dc;
        case 0x2a16f8u: goto label_2a16f8;
        default: break;
    }

    ctx->pc = 0x2a1670u;

    // 0x2a1670: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a1670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a1674: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a1674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a1678: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a1678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a167c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a167cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a1680: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a1684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a1684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a168c: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x2a168cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a1690: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x2a1690u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a1694: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A1694u;
    {
        const bool branch_taken_0x2a1694 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1694u;
        // 0x2a1698: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1694) {
            ctx->pc = 0x2A1710u;
            goto label_2a1710;
        }
    }
    ctx->pc = 0x2A169Cu;
    // 0x2a169c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a169cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a16a0:
    // 0x2a16a0: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x2a16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x2a16a4: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x2a16a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a16a8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2a16a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a16ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a16acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a16b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A16B0u;
    {
        const bool branch_taken_0x2a16b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16B0u;
        // 0x2a16b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a16b0) {
            ctx->pc = 0x2A16D0u;
            goto label_2a16d0;
        }
    }
    ctx->pc = 0x2A16B8u;
    // 0x2a16b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a16b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a16bc: 0xc0a85cc  jal         func_2A1730
    ctx->pc = 0x2A16BCu;
    SET_GPR_U32(ctx, 31, 0x2A16C4u);
    ctx->pc = 0x2A16C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16BCu;
    // 0x2a16c0: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1730u, 0x2A16BCu, 0x2A16C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16C4u;
label_2a16c4:
    // 0x2a16c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A16C4u;
    {
        const bool branch_taken_0x2a16c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a16c4) {
            ctx->pc = 0x2A16F8u;
            goto label_2a16f8;
        }
    }
    ctx->pc = 0x2A16CCu;
    // 0x2a16cc: 0x0  nop
    ctx->pc = 0x2a16ccu;
    // NOP
label_2a16d0:
    // 0x2a16d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a16d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a16d4: 0xc0a8604  jal         func_2A1810
    ctx->pc = 0x2A16D4u;
    SET_GPR_U32(ctx, 31, 0x2A16DCu);
    ctx->pc = 0x2A16D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16D4u;
    // 0x2a16d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1810u, 0x2A16D4u, 0x2A16DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16DCu;
label_2a16dc:
    // 0x2a16dc: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2a16dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a16e0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2a16e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2a16e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A16E4u;
    {
        const bool branch_taken_0x2a16e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16E4u;
        // 0x2a16e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a16e4) {
            ctx->pc = 0x2A16F8u;
            goto label_2a16f8;
        }
    }
    ctx->pc = 0x2A16ECu;
    // 0x2a16ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a16ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a16f0: 0xc0a86e0  jal         func_2A1B80
    ctx->pc = 0x2A16F0u;
    SET_GPR_U32(ctx, 31, 0x2A16F8u);
    ctx->pc = 0x2A16F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16F0u;
    // 0x2a16f4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1B80u, 0x2A16F0u, 0x2A16F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16F8u;
label_2a16f8:
    // 0x2a16f8: 0x96430068  lhu         $v1, 0x68($s2)
    ctx->pc = 0x2a16f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x2a16fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a16fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a1700: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2a1700u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a1704: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2A1704u;
    {
        const bool branch_taken_0x2a1704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1704u;
        // 0x2a1708: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1704) {
            ctx->pc = 0x2A16A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a16a0;
        }
    }
    ctx->pc = 0x2A170Cu;
    // 0x2a170c: 0x0  nop
    ctx->pc = 0x2a170cu;
    // NOP
label_2a1710:
    // 0x2a1710: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a1710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1714: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a1714u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1718: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a1718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a171c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a171cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1724: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1724u;
        // 0x2a1728: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A172Cu;
}
