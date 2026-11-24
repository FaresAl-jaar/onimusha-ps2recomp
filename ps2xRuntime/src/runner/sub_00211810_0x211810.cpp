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

// Function: sub_00211810
// Address: 0x211810 - 0x2118d4
void sub_00211810_0x211810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211810_0x211810");
#endif

    switch (ctx->pc) {
        case 0x211810u: goto label_211810;
        case 0x211814u: goto label_211814;
        case 0x211818u: goto label_211818;
        case 0x21181cu: goto label_21181c;
        case 0x211820u: goto label_211820;
        case 0x211824u: goto label_211824;
        case 0x211828u: goto label_211828;
        case 0x21182cu: goto label_21182c;
        case 0x211830u: goto label_211830;
        case 0x211834u: goto label_211834;
        case 0x211838u: goto label_211838;
        case 0x21183cu: goto label_21183c;
        case 0x211840u: goto label_211840;
        case 0x211844u: goto label_211844;
        case 0x211848u: goto label_211848;
        case 0x21184cu: goto label_21184c;
        case 0x211850u: goto label_211850;
        case 0x211854u: goto label_211854;
        case 0x211858u: goto label_211858;
        case 0x21185cu: goto label_21185c;
        case 0x211860u: goto label_211860;
        case 0x211864u: goto label_211864;
        case 0x211868u: goto label_211868;
        case 0x21186cu: goto label_21186c;
        case 0x211870u: goto label_211870;
        case 0x211874u: goto label_211874;
        case 0x211878u: goto label_211878;
        case 0x21187cu: goto label_21187c;
        case 0x211880u: goto label_211880;
        case 0x211884u: goto label_211884;
        case 0x211888u: goto label_211888;
        case 0x21188cu: goto label_21188c;
        case 0x211890u: goto label_211890;
        case 0x211894u: goto label_211894;
        case 0x211898u: goto label_211898;
        case 0x21189cu: goto label_21189c;
        case 0x2118a0u: goto label_2118a0;
        case 0x2118a4u: goto label_2118a4;
        case 0x2118a8u: goto label_2118a8;
        case 0x2118acu: goto label_2118ac;
        case 0x2118b0u: goto label_2118b0;
        case 0x2118b4u: goto label_2118b4;
        case 0x2118b8u: goto label_2118b8;
        case 0x2118bcu: goto label_2118bc;
        case 0x2118c0u: goto label_2118c0;
        case 0x2118c4u: goto label_2118c4;
        case 0x2118c8u: goto label_2118c8;
        case 0x2118ccu: goto label_2118cc;
        case 0x2118d0u: goto label_2118d0;
        default: break;
    }

    ctx->pc = 0x211810u;

label_211810:
    // 0x211810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_211814:
    // 0x211814: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_211818:
    // 0x211818: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x211818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21181c:
    // 0x21181c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21181cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_211820:
    // 0x211820: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x211820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_211824:
    // 0x211824: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x211824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_211828:
    // 0x211828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_21182c:
    // 0x21182c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21182cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_211830:
    // 0x211830: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x211830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_211834:
    // 0x211834: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x211834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_211838:
    // 0x211838: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x211838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_21183c:
    // 0x21183c: 0xc087ed0  jal         func_21FB40
label_211840:
    if (ctx->pc == 0x211840u) {
        ctx->pc = 0x211840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21183Cu;
        // 0x211840: 0x26330078  addiu       $s3, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211844u;
        goto label_211844;
    }
    ctx->pc = 0x21183Cu;
    SET_GPR_U32(ctx, 31, 0x211844u);
    ctx->pc = 0x211840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21183Cu;
    // 0x211840: 0x26330078  addiu       $s3, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21183Cu, 0x211844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211844u;
label_211844:
    // 0x211844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_211848:
    // 0x211848: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x211848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_21184c:
    // 0x21184c: 0xc087ed0  jal         func_21FB40
label_211850:
    if (ctx->pc == 0x211850u) {
        ctx->pc = 0x211850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21184Cu;
        // 0x211850: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211854u;
        goto label_211854;
    }
    ctx->pc = 0x21184Cu;
    SET_GPR_U32(ctx, 31, 0x211854u);
    ctx->pc = 0x211850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21184Cu;
    // 0x211850: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21184Cu, 0x211854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211854u;
label_211854:
    // 0x211854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211858:
    // 0x211858: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x211858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21185c:
    // 0x21185c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_211860:
    if (ctx->pc == 0x211860u) {
        ctx->pc = 0x211860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21185Cu;
        // 0x211860: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211864u;
        goto label_211864;
    }
    ctx->pc = 0x21185Cu;
    {
        const bool branch_taken_0x21185c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x211860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21185Cu;
        // 0x211860: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21185c) {
            ctx->pc = 0x21186Cu;
            goto label_21186c;
        }
    }
    ctx->pc = 0x211864u;
label_211864:
    // 0x211864: 0x200f809  jalr        $s0
label_211868:
    if (ctx->pc == 0x211868u) {
        ctx->pc = 0x21186Cu;
        goto label_21186c;
    }
    ctx->pc = 0x211864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x21186Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211864u, 0x21186Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21186Cu;
label_21186c:
    // 0x21186c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_211870:
    // 0x211870: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_211874:
    if (ctx->pc == 0x211874u) {
        ctx->pc = 0x211874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211870u;
        // 0x211874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211878u;
        goto label_211878;
    }
    ctx->pc = 0x211870u;
    {
        const bool branch_taken_0x211870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211870u;
        // 0x211874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211870) {
            ctx->pc = 0x2118B4u;
            goto label_2118b4;
        }
    }
    ctx->pc = 0x211878u;
label_211878:
    // 0x211878: 0x2a420801  slti        $v0, $s2, 0x801
    ctx->pc = 0x211878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2049) ? 1 : 0);
label_21187c:
    // 0x21187c: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x21187cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_211880:
    // 0x211880: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x211880u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_211884:
    // 0x211884: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x211884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_211888:
    // 0x211888: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x211888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21188c:
    // 0x21188c: 0xc07eb68  jal         func_1FADA0
label_211890:
    if (ctx->pc == 0x211890u) {
        ctx->pc = 0x211890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21188Cu;
        // 0x211890: 0x2624010c  addiu       $a0, $s1, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211894u;
        goto label_211894;
    }
    ctx->pc = 0x21188Cu;
    SET_GPR_U32(ctx, 31, 0x211894u);
    ctx->pc = 0x211890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21188Cu;
    // 0x211890: 0x2624010c  addiu       $a0, $s1, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x21188Cu, 0x211894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211894u;
label_211894:
    // 0x211894: 0xae700090  sw          $s0, 0x90($s3)
    ctx->pc = 0x211894u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 16));
label_211898:
    // 0x211898: 0xc0846a8  jal         func_211AA0
label_21189c:
    if (ctx->pc == 0x21189Cu) {
        ctx->pc = 0x21189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211898u;
        // 0x21189c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118A0u;
        goto label_2118a0;
    }
    ctx->pc = 0x211898u;
    SET_GPR_U32(ctx, 31, 0x2118A0u);
    ctx->pc = 0x21189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211898u;
    // 0x21189c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211AA0u, 0x211898u, 0x2118A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118A0u;
label_2118a0:
    // 0x2118a0: 0xc084830  jal         func_2120C0
label_2118a4:
    if (ctx->pc == 0x2118A4u) {
        ctx->pc = 0x2118A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118A0u;
        // 0x2118a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118A8u;
        goto label_2118a8;
    }
    ctx->pc = 0x2118A0u;
    SET_GPR_U32(ctx, 31, 0x2118A8u);
    ctx->pc = 0x2118A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2118A0u;
    // 0x2118a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2120C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2120C0u, 0x2118A0u, 0x2118A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118A8u;
label_2118a8:
    // 0x2118a8: 0xc084636  jal         func_2118D8
label_2118ac:
    if (ctx->pc == 0x2118ACu) {
        ctx->pc = 0x2118ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118A8u;
        // 0x2118ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118B0u;
        goto label_2118b0;
    }
    ctx->pc = 0x2118A8u;
    SET_GPR_U32(ctx, 31, 0x2118B0u);
    ctx->pc = 0x2118ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2118A8u;
    // 0x2118ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2118D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2118D8u, 0x2118A8u, 0x2118B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118B0u;
label_2118b0:
    // 0x2118b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2118b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2118b4:
    // 0x2118b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2118b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2118b8:
    // 0x2118b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2118b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2118bc:
    // 0x2118bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2118bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2118c0:
    // 0x2118c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2118c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2118c4:
    // 0x2118c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2118c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2118c8:
    // 0x2118c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2118c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2118cc:
    // 0x2118cc: 0x3e00008  jr          $ra
label_2118d0:
    if (ctx->pc == 0x2118D0u) {
        ctx->pc = 0x2118D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118CCu;
        // 0x2118d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118D4u;
        goto label_fallthrough_0x2118cc;
    }
    ctx->pc = 0x2118CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2118D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118CCu;
        // 0x2118d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2118CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2118cc:
    ctx->pc = 0x2118D4u;
}
