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

// Function: sub_00124810
// Address: 0x124810 - 0x12495c
void sub_00124810_0x124810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124810_0x124810");
#endif

    switch (ctx->pc) {
        case 0x124848u: goto label_124848;
        case 0x12484cu: goto label_12484c;
        case 0x124878u: goto label_124878;
        case 0x124894u: goto label_124894;
        case 0x1248a0u: goto label_1248a0;
        case 0x1248f8u: goto label_1248f8;
        case 0x124948u: goto label_124948;
        default: break;
    }

    ctx->pc = 0x124810u;

    // 0x124810: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x124810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x124814: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x124814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x124818: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x124818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x12481c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x12481cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x124820: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x124820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x124824: 0x948e000c  lhu         $t6, 0xC($a0)
    ctx->pc = 0x124824u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x124828: 0x31cf0002  andi        $t7, $t6, 0x2
    ctx->pc = 0x124828u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
    // 0x12482c: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12482Cu;
    {
        const bool branch_taken_0x12482c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12482Cu;
        // 0x124830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12482c) {
            ctx->pc = 0x124860u;
            goto label_124860;
        }
    }
    ctx->pc = 0x124834u;
    // 0x124834: 0x248e0043  addiu       $t6, $a0, 0x43
    ctx->pc = 0x124834u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 67));
    // 0x124838: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x124838u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12483c: 0xac8f0014  sw          $t7, 0x14($a0)
    ctx->pc = 0x12483cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 15));
    // 0x124840: 0xac8e0010  sw          $t6, 0x10($a0)
    ctx->pc = 0x124840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 14));
    // 0x124844: 0xac8e0000  sw          $t6, 0x0($a0)
    ctx->pc = 0x124844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
label_124848:
    // 0x124848: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x124848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_12484c:
    // 0x12484c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x12484cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124850: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x124850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x124854: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x124854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x124858: 0x3e00008  jr          $ra
    ctx->pc = 0x124858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124858u;
        // 0x12485c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124860u;
label_124860:
    // 0x124860: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x124860u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x124864: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x124864u;
    {
        const bool branch_taken_0x124864 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x124868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124864u;
        // 0x124868: 0x35cf0800  ori         $t7, $t6, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124864) {
            ctx->pc = 0x124888u;
            goto label_124888;
        }
    }
    ctx->pc = 0x12486Cu;
    // 0x12486c: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x12486cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x124870: 0xc04908a  jal         func_124228
    ctx->pc = 0x124870u;
    SET_GPR_U32(ctx, 31, 0x124878u);
    ctx->pc = 0x124874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124870u;
    // 0x124874: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124228u, 0x124870u, 0x124878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124878u;
label_124878:
    // 0x124878: 0x4410025  bgez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x124878u;
    {
        const bool branch_taken_0x124878 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x12487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124878u;
        // 0x12487c: 0x8faf0004  lw          $t7, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124878) {
            ctx->pc = 0x124910u;
            goto label_124910;
        }
    }
    ctx->pc = 0x124880u;
    // 0x124880: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x124880u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x124884: 0x35cf0800  ori         $t7, $t6, 0x800
    ctx->pc = 0x124884u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)2048);
label_124888:
    // 0x124888: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x124888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12488c: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12488cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x124890: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x124890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_124894:
    // 0x124894: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x124894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x124898: 0xc0492fe  jal         func_124BF8
    ctx->pc = 0x124898u;
    SET_GPR_U32(ctx, 31, 0x1248A0u);
    ctx->pc = 0x12489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124898u;
    // 0x12489c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124BF8u, 0x124898u, 0x1248A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1248A0u;
label_1248a0:
    // 0x1248a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1248A0u;
    {
        const bool branch_taken_0x1248a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1248A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248A0u;
        // 0x1248a4: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248a0) {
            ctx->pc = 0x1248C8u;
            goto label_1248c8;
        }
    }
    ctx->pc = 0x1248A8u;
    // 0x1248a8: 0x260d0043  addiu       $t5, $s0, 0x43
    ctx->pc = 0x1248a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x1248ac: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1248acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1248b0: 0xae0d0010  sw          $t5, 0x10($s0)
    ctx->pc = 0x1248b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 13));
    // 0x1248b4: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1248b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1248b8: 0xae0e0014  sw          $t6, 0x14($s0)
    ctx->pc = 0x1248b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 14));
    // 0x1248bc: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x1248bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x1248c0: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x1248C0u;
    {
        const bool branch_taken_0x1248c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248C0u;
        // 0x1248c4: 0xae0d0000  sw          $t5, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248c0) {
            ctx->pc = 0x124848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124848;
        }
    }
    ctx->pc = 0x1248C8u;
label_1248c8:
    // 0x1248c8: 0x3c0e0012  lui         $t6, 0x12
    ctx->pc = 0x1248c8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)18 << 16));
    // 0x1248cc: 0x8e0d0054  lw          $t5, 0x54($s0)
    ctx->pc = 0x1248ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1248d0: 0x25ce3c18  addiu       $t6, $t6, 0x3C18
    ctx->pc = 0x1248d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 15384));
    // 0x1248d4: 0x35ef0080  ori         $t7, $t7, 0x80
    ctx->pc = 0x1248d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)128);
    // 0x1248d8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1248d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1248dc: 0xadae003c  sw          $t6, 0x3C($t5)
    ctx->pc = 0x1248dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 60), GPR_U32(ctx, 14));
    // 0x1248e0: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x1248e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x1248e4: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x1248e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x1248e8: 0x1240ffd7  beqz        $s2, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1248E8u;
    {
        const bool branch_taken_0x1248e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248E8u;
        // 0x1248ec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248e8) {
            ctx->pc = 0x124848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124848;
        }
    }
    ctx->pc = 0x1248F0u;
    // 0x1248f0: 0xc0439e4  jal         func_10E790
    ctx->pc = 0x1248F0u;
    SET_GPR_U32(ctx, 31, 0x1248F8u);
    ctx->pc = 0x1248F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1248F0u;
    // 0x1248f4: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E790u, 0x1248F0u, 0x1248F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1248F8u;
label_1248f8:
    // 0x1248f8: 0x5040ffd4  beql        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1248F8u;
    {
        const bool branch_taken_0x1248f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1248f8) {
            ctx->pc = 0x1248FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1248F8u;
            // 0x1248fc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12484Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12484c;
        }
    }
    ctx->pc = 0x124900u;
    // 0x124900: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x124900u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x124904: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x124904u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x124908: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x124908u;
    {
        const bool branch_taken_0x124908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124908u;
        // 0x12490c: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124908) {
            ctx->pc = 0x124848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124848;
        }
    }
    ctx->pc = 0x124910u;
label_124910:
    // 0x124910: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x124910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x124914: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x124914u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124918: 0x31eff000  andi        $t7, $t7, 0xF000
    ctx->pc = 0x124918u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)61440);
    // 0x12491c: 0x39ee2000  xori        $t6, $t7, 0x2000
    ctx->pc = 0x12491cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)8192);
    // 0x124920: 0x15ed000b  bne         $t7, $t5, . + 4 + (0xB << 2)
    ctx->pc = 0x124920u;
    {
        const bool branch_taken_0x124920 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 13));
        ctx->pc = 0x124924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124920u;
        // 0x124924: 0x2dd20001  sltiu       $s2, $t6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124920) {
            ctx->pc = 0x124950u;
            goto label_124950;
        }
    }
    ctx->pc = 0x124928u;
    // 0x124928: 0x3c0f0012  lui         $t7, 0x12
    ctx->pc = 0x124928u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)18 << 16));
    // 0x12492c: 0x8e0e0028  lw          $t6, 0x28($s0)
    ctx->pc = 0x12492cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x124930: 0x25ef7618  addiu       $t7, $t7, 0x7618
    ctx->pc = 0x124930u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 30232));
    // 0x124934: 0x15cf0007  bne         $t6, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x124934u;
    {
        const bool branch_taken_0x124934 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x124938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124934u;
        // 0x124938: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124934) {
            ctx->pc = 0x124954u;
            goto label_124954;
        }
    }
    ctx->pc = 0x12493Cu;
    // 0x12493c: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x12493cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x124940: 0x35ef0400  ori         $t7, $t7, 0x400
    ctx->pc = 0x124940u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1024);
    // 0x124944: 0x0  nop
    ctx->pc = 0x124944u;
    // NOP
label_124948:
    // 0x124948: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x124948u;
    {
        const bool branch_taken_0x124948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124948u;
        // 0x12494c: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124948) {
            ctx->pc = 0x124894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124894;
        }
    }
    ctx->pc = 0x124950u;
label_124950:
    // 0x124950: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x124950u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_124954:
    // 0x124954: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x124954u;
    {
        const bool branch_taken_0x124954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124954u;
        // 0x124958: 0x35ef0800  ori         $t7, $t7, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124954) {
            ctx->pc = 0x124948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124948;
        }
    }
    ctx->pc = 0x12495Cu;
}
