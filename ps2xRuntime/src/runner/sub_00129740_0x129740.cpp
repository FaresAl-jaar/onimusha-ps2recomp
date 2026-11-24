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

// Function: sub_00129740
// Address: 0x129740 - 0x1298d0
void sub_00129740_0x129740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129740_0x129740");
#endif

    switch (ctx->pc) {
        case 0x129794u: goto label_129794;
        case 0x1297c8u: goto label_1297c8;
        case 0x129818u: goto label_129818;
        case 0x129840u: goto label_129840;
        default: break;
    }

    ctx->pc = 0x129740u;

    // 0x129740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x129740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129744: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x129744u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x129748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12974c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12974cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129750: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x129750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x129754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x129754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x129758: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x129758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12975c: 0x108f0038  beq         $a0, $t7, . + 4 + (0x38 << 2)
    ctx->pc = 0x12975Cu;
    {
        const bool branch_taken_0x12975c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x129760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12975Cu;
        // 0x129760: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12975c) {
            ctx->pc = 0x129840u;
            goto label_129840;
        }
    }
    ctx->pc = 0x129764u;
    // 0x129764: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x129764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x129768: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x129768u;
    {
        const bool branch_taken_0x129768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x129768) {
            ctx->pc = 0x12976Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129768u;
            // 0x12976c: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129784u;
            goto label_129784;
        }
    }
    ctx->pc = 0x129770u;
    // 0x129770: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x129770u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x129774: 0x8dee6048  lw          $t6, 0x6048($t7)
    ctx->pc = 0x129774u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x406048u));
    // 0x129778: 0xacae0054  sw          $t6, 0x54($a1)
    ctx->pc = 0x129778u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 14));
    // 0x12977c: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x12977cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129780: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x129780u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_129784:
    // 0x129784: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x129784u;
    {
        const bool branch_taken_0x129784 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x129784) {
            ctx->pc = 0x129788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129784u;
            // 0x129788: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129798u;
            goto label_129798;
        }
    }
    ctx->pc = 0x12978Cu;
    // 0x12978c: 0xc048f16  jal         func_123C58
    ctx->pc = 0x12978Cu;
    SET_GPR_U32(ctx, 31, 0x129794u);
    ctx->pc = 0x123C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123C58u, 0x12978Cu, 0x129794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129794u;
label_129794:
    // 0x129794: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x129794u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_129798:
    // 0x129798: 0x31eeffdf  andi        $t6, $t7, 0xFFDF
    ctx->pc = 0x129798u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65503);
    // 0x12979c: 0x31cf0004  andi        $t7, $t6, 0x4
    ctx->pc = 0x12979cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x1297a0: 0x15e00013  bnez        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1297A0u;
    {
        const bool branch_taken_0x1297a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1297A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297A0u;
        // 0x1297a4: 0xa60e000c  sh          $t6, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297a0) {
            ctx->pc = 0x1297F0u;
            goto label_1297f0;
        }
    }
    ctx->pc = 0x1297A8u;
    // 0x1297a8: 0x31cf0010  andi        $t7, $t6, 0x10
    ctx->pc = 0x1297a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x1297ac: 0x11e00024  beqz        $t7, . + 4 + (0x24 << 2)
    ctx->pc = 0x1297ACu;
    {
        const bool branch_taken_0x1297ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297ACu;
        // 0x1297b0: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297ac) {
            ctx->pc = 0x129840u;
            goto label_129840;
        }
    }
    ctx->pc = 0x1297B4u;
    // 0x1297b4: 0x31cf0008  andi        $t7, $t6, 0x8
    ctx->pc = 0x1297b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x1297b8: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1297B8u;
    {
        const bool branch_taken_0x1297b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1297b8) {
            ctx->pc = 0x1297BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1297B8u;
            // 0x1297bc: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1297E8u;
            goto label_1297e8;
        }
    }
    ctx->pc = 0x1297C0u;
    // 0x1297c0: 0xc048e58  jal         func_123960
    ctx->pc = 0x1297C0u;
    SET_GPR_U32(ctx, 31, 0x1297C8u);
    ctx->pc = 0x1297C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1297C0u;
    // 0x1297c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123960u, 0x1297C0u, 0x1297C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1297C8u;
label_1297c8:
    // 0x1297c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1297C8u;
    {
        const bool branch_taken_0x1297c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1297CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297C8u;
        // 0x1297cc: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297c8) {
            ctx->pc = 0x129840u;
            goto label_129840;
        }
    }
    ctx->pc = 0x1297D0u;
    // 0x1297d0: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x1297d0u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1297d4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1297d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1297d8: 0x31effff7  andi        $t7, $t7, 0xFFF7
    ctx->pc = 0x1297d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65527);
    // 0x1297dc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1297dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1297e0: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x1297e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x1297e4: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x1297e4u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1297e8:
    // 0x1297e8: 0x35ef0004  ori         $t7, $t7, 0x4
    ctx->pc = 0x1297e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4);
    // 0x1297ec: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x1297ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_1297f0:
    // 0x1297f0: 0x8e0f0030  lw          $t7, 0x30($s0)
    ctx->pc = 0x1297f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1297f4: 0x11e00018  beqz        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x1297F4u;
    {
        const bool branch_taken_0x1297f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297F4u;
        // 0x1297f8: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297f4) {
            ctx->pc = 0x129858u;
            goto label_129858;
        }
    }
    ctx->pc = 0x1297FCu;
    // 0x1297fc: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1297fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x129800: 0x8e0e0034  lw          $t6, 0x34($s0)
    ctx->pc = 0x129800u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x129804: 0x1ee782a  slt         $t7, $t7, $t6
    ctx->pc = 0x129804u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x129808: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x129808u;
    {
        const bool branch_taken_0x129808 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x129808) {
            ctx->pc = 0x12980Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129808u;
            // 0x12980c: 0x8e0e0000  lw          $t6, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129824u;
            goto label_129824;
        }
    }
    ctx->pc = 0x129810u;
    // 0x129810: 0xc04a596  jal         func_129658
    ctx->pc = 0x129810u;
    SET_GPR_U32(ctx, 31, 0x129818u);
    ctx->pc = 0x129814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129810u;
    // 0x129814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129658u, 0x129810u, 0x129818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129818u;
label_129818:
    // 0x129818: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x129818u;
    {
        const bool branch_taken_0x129818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129818u;
        // 0x12981c: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129818) {
            ctx->pc = 0x129840u;
            goto label_129840;
        }
    }
    ctx->pc = 0x129820u;
    // 0x129820: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x129820u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_129824:
    // 0x129824: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x129824u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129828: 0x25cfffff  addiu       $t7, $t6, -0x1
    ctx->pc = 0x129828u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x12982c: 0xae0f0000  sw          $t7, 0x0($s0)
    ctx->pc = 0x12982cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
    // 0x129830: 0xa1d1ffff  sb          $s1, -0x1($t6)
    ctx->pc = 0x129830u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x129834: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x129834u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x129838: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x129838u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12983c: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x12983cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
label_129840:
    // 0x129840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x129840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129844: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x129844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x129848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12984c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12984cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129850: 0x3e00008  jr          $ra
    ctx->pc = 0x129850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129850u;
        // 0x129854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129858u;
label_129858:
    // 0x129858: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x129858u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12985c: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12985Cu;
    {
        const bool branch_taken_0x12985c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12985Cu;
        // 0x129860: 0x8e0b0000  lw          $t3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12985c) {
            ctx->pc = 0x129898u;
            goto label_129898;
        }
    }
    ctx->pc = 0x129864u;
    // 0x129864: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x129864u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x129868: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x129868u;
    {
        const bool branch_taken_0x129868 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129868u;
        // 0x12986c: 0x8e0e0004  lw          $t6, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129868) {
            ctx->pc = 0x12989Cu;
            goto label_12989c;
        }
    }
    ctx->pc = 0x129870u;
    // 0x129870: 0x916fffff  lbu         $t7, -0x1($t3)
    ctx->pc = 0x129870u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294967295)));
    // 0x129874: 0x15f10009  bne         $t7, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x129874u;
    {
        const bool branch_taken_0x129874 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        if (branch_taken_0x129874) {
            ctx->pc = 0x12989Cu;
            goto label_12989c;
        }
    }
    ctx->pc = 0x12987Cu;
    // 0x12987c: 0x256fffff  addiu       $t7, $t3, -0x1
    ctx->pc = 0x12987cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x129880: 0xae0f0000  sw          $t7, 0x0($s0)
    ctx->pc = 0x129880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
    // 0x129884: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x129884u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129888: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x129888u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12988c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x12988Cu;
    {
        const bool branch_taken_0x12988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12988Cu;
        // 0x129890: 0xae0e0004  sw          $t6, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12988c) {
            ctx->pc = 0x129840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129840;
        }
    }
    ctx->pc = 0x129894u;
    // 0x129894: 0x0  nop
    ctx->pc = 0x129894u;
    // NOP
label_129898:
    // 0x129898: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x129898u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_12989c:
    // 0x12989c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12989cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1298a0: 0x260d0040  addiu       $t5, $s0, 0x40
    ctx->pc = 0x1298a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1298a4: 0xae0b0038  sw          $t3, 0x38($s0)
    ctx->pc = 0x1298a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 11));
    // 0x1298a8: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x1298a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
    // 0x1298ac: 0x260c0042  addiu       $t4, $s0, 0x42
    ctx->pc = 0x1298acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
    // 0x1298b0: 0xae0e003c  sw          $t6, 0x3C($s0)
    ctx->pc = 0x1298b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 14));
    // 0x1298b4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1298b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298b8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1298b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1298bc: 0xae0d0030  sw          $t5, 0x30($s0)
    ctx->pc = 0x1298bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 13));
    // 0x1298c0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1298c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1298c4: 0xae0c0000  sw          $t4, 0x0($s0)
    ctx->pc = 0x1298c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
    // 0x1298c8: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x1298C8u;
    {
        const bool branch_taken_0x1298c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298C8u;
        // 0x1298cc: 0xa2110042  sb          $s1, 0x42($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298c8) {
            ctx->pc = 0x129840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129840;
        }
    }
    ctx->pc = 0x1298D0u;
}
