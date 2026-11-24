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

// Function: sub_0012E6B0
// Address: 0x12e6b0 - 0x12e8d4
void sub_0012E6B0_0x12e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E6B0_0x12e6b0");
#endif

    switch (ctx->pc) {
        case 0x12e6fcu: goto label_12e6fc;
        case 0x12e78cu: goto label_12e78c;
        case 0x12e7b8u: goto label_12e7b8;
        case 0x12e7d4u: goto label_12e7d4;
        case 0x12e800u: goto label_12e800;
        case 0x12e820u: goto label_12e820;
        case 0x12e864u: goto label_12e864;
        default: break;
    }

    ctx->pc = 0x12e6b0u;

    // 0x12e6b0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x12e6b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12e6b4: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x12e6b4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12e6b8: 0x15e00067  bnez        $t7, . + 4 + (0x67 << 2)
    ctx->pc = 0x12E6B8u;
    {
        const bool branch_taken_0x12e6b8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6B8u;
        // 0x12e6bc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6b8) {
            ctx->pc = 0x12E858u;
            goto label_12e858;
        }
    }
    ctx->pc = 0x12E6C0u;
    // 0x12e6c0: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x12e6c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e6c4: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x12e6c4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12e6c8: 0x15e00063  bnez        $t7, . + 4 + (0x63 << 2)
    ctx->pc = 0x12E6C8u;
    {
        const bool branch_taken_0x12e6c8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6C8u;
        // 0x12e6cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6c8) {
            ctx->pc = 0x12E858u;
            goto label_12e858;
        }
    }
    ctx->pc = 0x12E6D0u;
    // 0x12e6d0: 0x39cf0004  xori        $t7, $t6, 0x4
    ctx->pc = 0x12e6d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
    // 0x12e6d4: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12E6D4u;
    {
        const bool branch_taken_0x12e6d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6D4u;
        // 0x12e6d8: 0x39af0004  xori        $t7, $t5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6d4) {
            ctx->pc = 0x12E704u;
            goto label_12e704;
        }
    }
    ctx->pc = 0x12E6DCu;
    // 0x12e6dc: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E6DCu;
    {
        const bool branch_taken_0x12e6dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e6dc) {
            ctx->pc = 0x12E6FCu;
            goto label_12e6fc;
        }
    }
    ctx->pc = 0x12E6E4u;
    // 0x12e6e4: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x12e6e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12e6e8: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x12e6e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12e6ec: 0x11ee0003  beq         $t7, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E6ECu;
    {
        const bool branch_taken_0x12e6ec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x12E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6ECu;
        // 0x12e6f0: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6ec) {
            ctx->pc = 0x12E6FCu;
            goto label_12e6fc;
        }
    }
    ctx->pc = 0x12E6F4u;
    // 0x12e6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x12E6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6F4u;
        // 0x12e6f8: 0x25e24578  addiu       $v0, $t7, 0x4578 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 17784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E6FCu;
label_12e6fc:
    // 0x12e6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x12E6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6FCu;
        // 0x12e700: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E704u;
label_12e704:
    // 0x12e704: 0x11e00054  beqz        $t7, . + 4 + (0x54 << 2)
    ctx->pc = 0x12E704u;
    {
        const bool branch_taken_0x12e704 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E704u;
        // 0x12e708: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e704) {
            ctx->pc = 0x12E858u;
            goto label_12e858;
        }
    }
    ctx->pc = 0x12E70Cu;
    // 0x12e70c: 0x39af0002  xori        $t7, $t5, 0x2
    ctx->pc = 0x12e70cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
    // 0x12e710: 0x15e0000f  bnez        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x12E710u;
    {
        const bool branch_taken_0x12e710 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E710u;
        // 0x12e714: 0x39cf0002  xori        $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e710) {
            ctx->pc = 0x12E750u;
            goto label_12e750;
        }
    }
    ctx->pc = 0x12E718u;
    // 0x12e718: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12E718u;
    {
        const bool branch_taken_0x12e718 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e718) {
            ctx->pc = 0x12E6FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e6fc;
        }
    }
    ctx->pc = 0x12E720u;
    // 0x12e720: 0xdc8e0000  ld          $t6, 0x0($a0)
    ctx->pc = 0x12e720u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12e724: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x12e724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e728: 0xfcce0000  sd          $t6, 0x0($a2)
    ctx->pc = 0x12e728u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 14));
    // 0x12e72c: 0xdc8f0008  ld          $t7, 0x8($a0)
    ctx->pc = 0x12e72cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12e730: 0xfccf0008  sd          $t7, 0x8($a2)
    ctx->pc = 0x12e730u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 15));
    // 0x12e734: 0xdc8e0010  ld          $t6, 0x10($a0)
    ctx->pc = 0x12e734u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12e738: 0xfcce0010  sd          $t6, 0x10($a2)
    ctx->pc = 0x12e738u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
    // 0x12e73c: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x12e73cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12e740: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x12e740u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12e744: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x12e744u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x12e748: 0x3e00008  jr          $ra
    ctx->pc = 0x12E748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E748u;
        // 0x12e74c: 0xaccf0004  sw          $t7, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E750u;
label_12e750:
    // 0x12e750: 0x11e00041  beqz        $t7, . + 4 + (0x41 << 2)
    ctx->pc = 0x12E750u;
    {
        const bool branch_taken_0x12e750 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E750u;
        // 0x12e754: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e750) {
            ctx->pc = 0x12E858u;
            goto label_12e858;
        }
    }
    ctx->pc = 0x12E758u;
    // 0x12e758: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x12e758u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12e75c: 0x8cac0008  lw          $t4, 0x8($a1)
    ctx->pc = 0x12e75cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12e760: 0xdc8b0010  ld          $t3, 0x10($a0)
    ctx->pc = 0x12e760u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12e764: 0x12c7823  subu        $t7, $t1, $t4
    ctx->pc = 0x12e764u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x12e768: 0x5e20001  bltzl       $t7, . + 4 + (0x1 << 2)
    ctx->pc = 0x12E768u;
    {
        const bool branch_taken_0x12e768 = (GPR_S64(ctx, 15) < 0);
        if (branch_taken_0x12e768) {
            ctx->pc = 0x12E76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E768u;
            // 0x12e76c: 0xf7823  negu        $t7, $t7 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E770u;
            goto label_12e770;
        }
    }
    ctx->pc = 0x12E770u;
label_12e770:
    // 0x12e770: 0x29ef0040  slti        $t7, $t7, 0x40
    ctx->pc = 0x12e770u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x12e774: 0x11e00050  beqz        $t7, . + 4 + (0x50 << 2)
    ctx->pc = 0x12E774u;
    {
        const bool branch_taken_0x12e774 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E774u;
        // 0x12e778: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e774) {
            ctx->pc = 0x12E8B8u;
            goto label_12e8b8;
        }
    }
    ctx->pc = 0x12E77Cu;
    // 0x12e77c: 0x189782a  slt         $t7, $t4, $t1
    ctx->pc = 0x12e77cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x12e780: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12E780u;
    {
        const bool branch_taken_0x12e780 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E780u;
        // 0x12e784: 0x12c782a  slt         $t7, $t1, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e780) {
            ctx->pc = 0x12E7B0u;
            goto label_12e7b0;
        }
    }
    ctx->pc = 0x12E788u;
    // 0x12e788: 0x12c6023  subu        $t4, $t1, $t4
    ctx->pc = 0x12e788u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_12e78c:
    // 0x12e78c: 0xa707a  dsrl        $t6, $t2, 1
    ctx->pc = 0x12e78cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) >> 1);
    // 0x12e790: 0x314f0001  andi        $t7, $t2, 0x1
    ctx->pc = 0x12e790u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x12e794: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12e794u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12e798: 0x0  nop
    ctx->pc = 0x12e798u;
    // NOP
    // 0x12e79c: 0x0  nop
    ctx->pc = 0x12e79cu;
    // NOP
    // 0x12e7a0: 0x1580fffa  bnez        $t4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E7A0u;
    {
        const bool branch_taken_0x12e7a0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7A0u;
        // 0x12e7a4: 0x1ee5025  or          $t2, $t7, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7a0) {
            ctx->pc = 0x12E78Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e78c;
        }
    }
    ctx->pc = 0x12E7A8u;
    // 0x12e7a8: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x12e7a8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7ac: 0x12c782a  slt         $t7, $t1, $t4
    ctx->pc = 0x12e7acu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_12e7b0:
    // 0x12e7b0: 0x51e00009  beql        $t7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E7B0u;
    {
        const bool branch_taken_0x12e7b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e7b0) {
            ctx->pc = 0x12E7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E7B0u;
            // 0x12e7b4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E7D8u;
            goto label_12e7d8;
        }
    }
    ctx->pc = 0x12E7B8u;
label_12e7b8:
    // 0x12e7b8: 0xb787a  dsrl        $t7, $t3, 1
    ctx->pc = 0x12e7b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) >> 1);
    // 0x12e7bc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x12e7bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x12e7c0: 0x316e0001  andi        $t6, $t3, 0x1
    ctx->pc = 0x12e7c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x12e7c4: 0x12c682a  slt         $t5, $t1, $t4
    ctx->pc = 0x12e7c4u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x12e7c8: 0x0  nop
    ctx->pc = 0x12e7c8u;
    // NOP
    // 0x12e7cc: 0x15a0fffa  bnez        $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E7CCu;
    {
        const bool branch_taken_0x12e7cc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7CCu;
        // 0x12e7d0: 0x1cf5825  or          $t3, $t6, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7cc) {
            ctx->pc = 0x12E7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e7b8;
        }
    }
    ctx->pc = 0x12E7D4u;
label_12e7d4:
    // 0x12e7d4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x12e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_12e7d8:
    // 0x12e7d8: 0x8caf0004  lw          $t7, 0x4($a1)
    ctx->pc = 0x12e7d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12e7dc: 0x108f0030  beq         $a0, $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x12E7DCu;
    {
        const bool branch_taken_0x12e7dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x12E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7DCu;
        // 0x12e7e0: 0x16a782f  dsubu       $t7, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7dc) {
            ctx->pc = 0x12E8A0u;
            goto label_12e8a0;
        }
    }
    ctx->pc = 0x12E7E4u;
    // 0x12e7e4: 0x14b702f  dsubu       $t6, $t2, $t3
    ctx->pc = 0x12e7e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
    // 0x12e7e8: 0x1e4700a  movz        $t6, $t7, $a0
    ctx->pc = 0x12e7e8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 15));
    // 0x12e7ec: 0x5c20027  bltzl       $t6, . + 4 + (0x27 << 2)
    ctx->pc = 0x12E7ECu;
    {
        const bool branch_taken_0x12e7ec = (GPR_S64(ctx, 14) < 0);
        if (branch_taken_0x12e7ec) {
            ctx->pc = 0x12E7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E7ECu;
            // 0x12e7f0: 0xe702f  dsubu       $t6, $zero, $t6 (Delay Slot)
            SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E88Cu;
            goto label_12e88c;
        }
    }
    ctx->pc = 0x12E7F4u;
    // 0x12e7f4: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x12e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x12e7f8: 0xfcce0010  sd          $t6, 0x10($a2)
    ctx->pc = 0x12e7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
    // 0x12e7fc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x12e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_12e800:
    // 0x12e800: 0xdccc0010  ld          $t4, 0x10($a2)
    ctx->pc = 0x12e800u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x12e804: 0x240fffe0  addiu       $t7, $zero, -0x20
    ctx->pc = 0x12e804u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x12e808: 0x240bffe0  addiu       $t3, $zero, -0x20
    ctx->pc = 0x12e808u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x12e80c: 0xf793a  dsrl        $t7, $t7, 4
    ctx->pc = 0x12e80cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 4);
    // 0x12e810: 0x658effff  daddiu      $t6, $t4, -0x1
    ctx->pc = 0x12e810u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)4294967295);
    // 0x12e814: 0x1ee782b  sltu        $t7, $t7, $t6
    ctx->pc = 0x12e814u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12e818: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x12E818u;
    {
        const bool branch_taken_0x12e818 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E818u;
        // 0x12e81c: 0xb593a  dsrl        $t3, $t3, 4 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e818) {
            ctx->pc = 0x12E860u;
            goto label_12e860;
        }
    }
    ctx->pc = 0x12E820u;
label_12e820:
    // 0x12e820: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x12e820u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12e824: 0x240ffff8  addiu       $t7, $zero, -0x8
    ctx->pc = 0x12e824u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x12e828: 0xf78fa  dsrl        $t7, $t7, 3
    ctx->pc = 0x12e828u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 3);
    // 0x12e82c: 0x1ec782b  sltu        $t7, $t7, $t4
    ctx->pc = 0x12e82cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x12e830: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E830u;
    {
        const bool branch_taken_0x12e830 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E830u;
        // 0x12e834: 0xacce0000  sw          $t6, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e830) {
            ctx->pc = 0x12E854u;
            goto label_12e854;
        }
    }
    ctx->pc = 0x12E838u;
    // 0x12e838: 0x8ccf0008  lw          $t7, 0x8($a2)
    ctx->pc = 0x12e838u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12e83c: 0xc687a  dsrl        $t5, $t4, 1
    ctx->pc = 0x12e83cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) >> 1);
    // 0x12e840: 0x318e0001  andi        $t6, $t4, 0x1
    ctx->pc = 0x12e840u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x12e844: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x12e844u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12e848: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e848u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12e84c: 0xfcce0010  sd          $t6, 0x10($a2)
    ctx->pc = 0x12e84cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
    // 0x12e850: 0xaccf0008  sw          $t7, 0x8($a2)
    ctx->pc = 0x12e850u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 15));
label_12e854:
    // 0x12e854: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x12e854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12e858:
    // 0x12e858: 0x3e00008  jr          $ra
    ctx->pc = 0x12E858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E860u;
label_12e860:
    // 0x12e860: 0x8cce0008  lw          $t6, 0x8($a2)
    ctx->pc = 0x12e860u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_12e864:
    // 0x12e864: 0xc6878  dsll        $t5, $t4, 1
    ctx->pc = 0x12e864u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 1);
    // 0x12e868: 0x65afffff  daddiu      $t7, $t5, -0x1
    ctx->pc = 0x12e868u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)4294967295);
    // 0x12e86c: 0xfccd0010  sd          $t5, 0x10($a2)
    ctx->pc = 0x12e86cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 13));
    // 0x12e870: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x12e870u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x12e874: 0x16f782b  sltu        $t7, $t3, $t7
    ctx->pc = 0x12e874u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12e878: 0xacce0008  sw          $t6, 0x8($a2)
    ctx->pc = 0x12e878u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 14));
    // 0x12e87c: 0x15e0ffe8  bnez        $t7, . + 4 + (-0x18 << 2)
    ctx->pc = 0x12E87Cu;
    {
        const bool branch_taken_0x12e87c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E87Cu;
        // 0x12e880: 0x1a0602d  daddu       $t4, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e87c) {
            ctx->pc = 0x12E820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e820;
        }
    }
    ctx->pc = 0x12E884u;
    // 0x12e884: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12E884u;
    {
        const bool branch_taken_0x12e884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E884u;
        // 0x12e888: 0x8cce0008  lw          $t6, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e884) {
            ctx->pc = 0x12E864u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e864;
        }
    }
    ctx->pc = 0x12E88Cu;
label_12e88c:
    // 0x12e88c: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x12e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x12e890: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12e890u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e894: 0xfcce0010  sd          $t6, 0x10($a2)
    ctx->pc = 0x12e894u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
    // 0x12e898: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x12E898u;
    {
        const bool branch_taken_0x12e898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E898u;
        // 0x12e89c: 0xaccf0004  sw          $t7, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e898) {
            ctx->pc = 0x12E800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e800;
        }
    }
    ctx->pc = 0x12E8A0u;
label_12e8a0:
    // 0x12e8a0: 0x16a782d  daddu       $t7, $t3, $t2
    ctx->pc = 0x12e8a0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
    // 0x12e8a4: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x12e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x12e8a8: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x12e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x12e8ac: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12e8acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8b0: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x12E8B0u;
    {
        const bool branch_taken_0x12e8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8B0u;
        // 0x12e8b4: 0xfccf0010  sd          $t7, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8b0) {
            ctx->pc = 0x12E820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e820;
        }
    }
    ctx->pc = 0x12E8B8u;
label_12e8b8:
    // 0x12e8b8: 0x189782a  slt         $t7, $t4, $t1
    ctx->pc = 0x12e8b8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x12e8bc: 0x51e00003  beql        $t7, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E8BCu;
    {
        const bool branch_taken_0x12e8bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e8bc) {
            ctx->pc = 0x12E8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E8BCu;
            // 0x12e8c0: 0x180482d  daddu       $t1, $t4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E8CCu;
            goto label_12e8cc;
        }
    }
    ctx->pc = 0x12E8C4u;
    // 0x12e8c4: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x12E8C4u;
    {
        const bool branch_taken_0x12e8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8C4u;
        // 0x12e8c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8c4) {
            ctx->pc = 0x12E7D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e7d4;
        }
    }
    ctx->pc = 0x12E8CCu;
label_12e8cc:
    // 0x12e8cc: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x12E8CCu;
    {
        const bool branch_taken_0x12e8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8CCu;
        // 0x12e8d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8cc) {
            ctx->pc = 0x12E7D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e7d4;
        }
    }
    ctx->pc = 0x12E8D4u;
}
