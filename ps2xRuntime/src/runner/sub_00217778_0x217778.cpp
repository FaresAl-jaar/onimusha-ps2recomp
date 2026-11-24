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

// Function: sub_00217778
// Address: 0x217778 - 0x2178a4
void sub_00217778_0x217778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217778_0x217778");
#endif

    switch (ctx->pc) {
        case 0x2177ccu: goto label_2177cc;
        case 0x2177e4u: goto label_2177e4;
        case 0x217800u: goto label_217800;
        case 0x21780cu: goto label_21780c;
        case 0x217828u: goto label_217828;
        case 0x217860u: goto label_217860;
        case 0x217874u: goto label_217874;
        case 0x217880u: goto label_217880;
        default: break;
    }

    ctx->pc = 0x217778u;

    // 0x217778: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x217778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21777c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21777cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217780: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x217780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x217784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217788: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x217788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21778c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21778cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217790: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x217790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x217794: 0x2612090c  addiu       $s2, $s0, 0x90C
    ctx->pc = 0x217794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2316));
    // 0x217798: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x217798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21779c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x21779cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177a0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2177a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2177a4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2177a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177a8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2177a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2177ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2177acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2177b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2177b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2177b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177b8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2177b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2177bc: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2177BCu;
    {
        const bool branch_taken_0x2177bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2177C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177BCu;
        // 0x2177c0: 0x8e131fc0  lw          $s3, 0x1FC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177bc) {
            ctx->pc = 0x217880u;
            goto label_217880;
        }
    }
    ctx->pc = 0x2177C4u;
    // 0x2177c4: 0xc07fb24  jal         func_1FEC90
    ctx->pc = 0x2177C4u;
    SET_GPR_U32(ctx, 31, 0x2177CCu);
    ctx->pc = 0x1FEC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC90u, 0x2177C4u, 0x2177CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177CCu;
label_2177cc:
    // 0x2177cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2177CCu;
    {
        const bool branch_taken_0x2177cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2177D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177CCu;
        // 0x2177d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177cc) {
            ctx->pc = 0x2177F0u;
            goto label_2177f0;
        }
    }
    ctx->pc = 0x2177D4u;
    // 0x2177d4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x2177d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x2177d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2177d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177dc: 0xc0848e0  jal         func_212380
    ctx->pc = 0x2177DCu;
    SET_GPR_U32(ctx, 31, 0x2177E4u);
    ctx->pc = 0x2177E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177DCu;
    // 0x2177e0: 0x34a50f16  ori         $a1, $a1, 0xF16 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3862);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x2177DCu, 0x2177E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177E4u;
label_2177e4:
    // 0x2177e4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2177E4u;
    {
        const bool branch_taken_0x2177e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2177E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177E4u;
        // 0x2177e8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177e4) {
            ctx->pc = 0x217884u;
            goto label_217884;
        }
    }
    ctx->pc = 0x2177ECu;
    // 0x2177ec: 0x0  nop
    ctx->pc = 0x2177ecu;
    // NOP
label_2177f0:
    // 0x2177f0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2177f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2177f4: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x2177f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2177f8: 0xc07fb3c  jal         func_1FECF0
    ctx->pc = 0x2177F8u;
    SET_GPR_U32(ctx, 31, 0x217800u);
    ctx->pc = 0x2177FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177F8u;
    // 0x2177fc: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECF0u, 0x2177F8u, 0x217800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217800u;
label_217800:
    // 0x217800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217804: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x217804u;
    SET_GPR_U32(ctx, 31, 0x21780Cu);
    ctx->pc = 0x217808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217804u;
    // 0x217808: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x217804u, 0x21780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21780Cu;
label_21780c:
    // 0x21780c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21780cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217810: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217810u;
    {
        const bool branch_taken_0x217810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217810u;
        // 0x217814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217810) {
            ctx->pc = 0x217820u;
            goto label_217820;
        }
    }
    ctx->pc = 0x217818u;
    // 0x217818: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x217818u;
    {
        const bool branch_taken_0x217818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217818u;
        // 0x21781c: 0xae600114  sw          $zero, 0x114($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217818) {
            ctx->pc = 0x217850u;
            goto label_217850;
        }
    }
    ctx->pc = 0x217820u;
label_217820:
    // 0x217820: 0xc083e80  jal         func_20FA00
    ctx->pc = 0x217820u;
    SET_GPR_U32(ctx, 31, 0x217828u);
    ctx->pc = 0x20FA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FA00u, 0x217820u, 0x217828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217828u;
label_217828:
    // 0x217828: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x217828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21782c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21782cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217830: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x217830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x217834: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217834u;
    {
        const bool branch_taken_0x217834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x217838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217834u;
        // 0x217838: 0x64102a  slt         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217834) {
            ctx->pc = 0x217848u;
            goto label_217848;
        }
    }
    ctx->pc = 0x21783Cu;
    // 0x21783c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x21783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x217840: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x217840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x217844: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x217844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_217848:
    // 0x217848: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x217848u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x21784c: 0xae630114  sw          $v1, 0x114($s3)
    ctx->pc = 0x21784cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 3));
label_217850:
    // 0x217850: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x217850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217854: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x217854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217858: 0xc085e2a  jal         func_2178A8
    ctx->pc = 0x217858u;
    SET_GPR_U32(ctx, 31, 0x217860u);
    ctx->pc = 0x21785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217858u;
    // 0x21785c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2178A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2178A8u, 0x217858u, 0x217860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217860u;
label_217860:
    // 0x217860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x217860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217864: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x217864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217868: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x217868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21786c: 0xc085e72  jal         func_2179C8
    ctx->pc = 0x21786Cu;
    SET_GPR_U32(ctx, 31, 0x217874u);
    ctx->pc = 0x217870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21786Cu;
    // 0x217870: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2179C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2179C8u, 0x21786Cu, 0x217874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217874u;
label_217874:
    // 0x217874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217878: 0xc085e80  jal         func_217A00
    ctx->pc = 0x217878u;
    SET_GPR_U32(ctx, 31, 0x217880u);
    ctx->pc = 0x21787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217878u;
    // 0x21787c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217A00u, 0x217878u, 0x217880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217880u;
label_217880:
    // 0x217880: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x217880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_217884:
    // 0x217884: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x217884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217888: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x217888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21788c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21788cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x217890: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x217890u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217894: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x217894u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x217898: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x217898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21789c: 0x3e00008  jr          $ra
    ctx->pc = 0x21789Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2178A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21789Cu;
        // 0x2178a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21789Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2178A4u;
}
