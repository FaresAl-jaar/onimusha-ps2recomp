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

// Function: sub_00369790
// Address: 0x369790 - 0x369b08
void sub_00369790_0x369790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369790_0x369790");
#endif

    switch (ctx->pc) {
        case 0x3697bcu: goto label_3697bc;
        case 0x3697d0u: goto label_3697d0;
        case 0x3697e8u: goto label_3697e8;
        case 0x369810u: goto label_369810;
        case 0x369838u: goto label_369838;
        case 0x369898u: goto label_369898;
        case 0x3698b8u: goto label_3698b8;
        case 0x3698d4u: goto label_3698d4;
        case 0x3698f4u: goto label_3698f4;
        case 0x36990cu: goto label_36990c;
        case 0x36994cu: goto label_36994c;
        case 0x36995cu: goto label_36995c;
        case 0x369974u: goto label_369974;
        case 0x369984u: goto label_369984;
        case 0x3699b0u: goto label_3699b0;
        case 0x3699d0u: goto label_3699d0;
        case 0x3699d8u: goto label_3699d8;
        case 0x3699e4u: goto label_3699e4;
        case 0x369a48u: goto label_369a48;
        case 0x369af0u: goto label_369af0;
        default: break;
    }

    ctx->pc = 0x369790u;

    // 0x369790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x369790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x369794: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x369794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x369798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x369798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36979c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36979cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3697a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3697a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3697a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3697a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3697a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3697a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3697ac: 0x8e450570  lw          $a1, 0x570($s2)
    ctx->pc = 0x3697acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    // 0x3697b0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3697b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3697b4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3697B4u;
    SET_GPR_U32(ctx, 31, 0x3697BCu);
    ctx->pc = 0x3697B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3697B4u;
    // 0x3697b8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3697B4u, 0x3697BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3697BCu;
label_3697bc:
    // 0x3697bc: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3697BCu;
    {
        const bool branch_taken_0x3697bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3697C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3697BCu;
        // 0x3697c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3697bc) {
            ctx->pc = 0x3697D8u;
            goto label_3697d8;
        }
    }
    ctx->pc = 0x3697C4u;
    // 0x3697c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3697c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3697c8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3697C8u;
    SET_GPR_U32(ctx, 31, 0x3697D0u);
    ctx->pc = 0x3697CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3697C8u;
    // 0x3697cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3697C8u, 0x3697D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3697D0u;
label_3697d0:
    // 0x3697d0: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x3697D0u;
    {
        const bool branch_taken_0x3697d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3697d0) {
            ctx->pc = 0x369AF0u;
            goto label_369af0;
        }
    }
    ctx->pc = 0x3697D8u;
label_3697d8:
    // 0x3697d8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3697D8u;
    {
        const bool branch_taken_0x3697d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3697DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3697D8u;
        // 0x3697dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3697d8) {
            ctx->pc = 0x3697F0u;
            goto label_3697f0;
        }
    }
    ctx->pc = 0x3697E0u;
    // 0x3697e0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3697E0u;
    SET_GPR_U32(ctx, 31, 0x3697E8u);
    ctx->pc = 0x3697E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3697E0u;
    // 0x3697e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3697E0u, 0x3697E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3697E8u;
label_3697e8:
    // 0x3697e8: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x3697E8u;
    {
        const bool branch_taken_0x3697e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3697e8) {
            ctx->pc = 0x369AF0u;
            goto label_369af0;
        }
    }
    ctx->pc = 0x3697F0u;
label_3697f0:
    // 0x3697f0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3697F0u;
    {
        const bool branch_taken_0x3697f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3697f0) {
            ctx->pc = 0x369818u;
            goto label_369818;
        }
    }
    ctx->pc = 0x3697F8u;
    // 0x3697f8: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x3697f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3697fc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3697fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x369800: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x369800u;
    {
        const bool branch_taken_0x369800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369800u;
        // 0x369804: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369800) {
            ctx->pc = 0x369818u;
            goto label_369818;
        }
    }
    ctx->pc = 0x369808u;
    // 0x369808: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x369808u;
    SET_GPR_U32(ctx, 31, 0x369810u);
    ctx->pc = 0x36980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369808u;
    // 0x36980c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x369808u, 0x369810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369810u;
label_369810:
    // 0x369810: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x369810u;
    {
        const bool branch_taken_0x369810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369810) {
            ctx->pc = 0x369AF0u;
            goto label_369af0;
        }
    }
    ctx->pc = 0x369818u;
label_369818:
    // 0x369818: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x369818u;
    {
        const bool branch_taken_0x369818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x369818) {
            ctx->pc = 0x369840u;
            goto label_369840;
        }
    }
    ctx->pc = 0x369820u;
    // 0x369820: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x369820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x369824: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x369824u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x369828: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x369828u;
    {
        const bool branch_taken_0x369828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369828u;
        // 0x36982c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369828) {
            ctx->pc = 0x369840u;
            goto label_369840;
        }
    }
    ctx->pc = 0x369830u;
    // 0x369830: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x369830u;
    SET_GPR_U32(ctx, 31, 0x369838u);
    ctx->pc = 0x369834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369830u;
    // 0x369834: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x369830u, 0x369838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369838u;
label_369838:
    // 0x369838: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x369838u;
    {
        const bool branch_taken_0x369838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369838) {
            ctx->pc = 0x369AF0u;
            goto label_369af0;
        }
    }
    ctx->pc = 0x369840u;
label_369840:
    // 0x369840: 0x92440521  lbu         $a0, 0x521($s2)
    ctx->pc = 0x369840u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x369844: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x369844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369848: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x369848u;
    {
        const bool branch_taken_0x369848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x36984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369848u;
        // 0x36984c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369848) {
            ctx->pc = 0x369940u;
            goto label_369940;
        }
    }
    ctx->pc = 0x369850u;
    // 0x369850: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x369850u;
    {
        const bool branch_taken_0x369850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x369850) {
            ctx->pc = 0x369920u;
            goto label_369920;
        }
    }
    ctx->pc = 0x369858u;
    // 0x369858: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369858u;
    {
        const bool branch_taken_0x369858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x369858) {
            ctx->pc = 0x369868u;
            goto label_369868;
        }
    }
    ctx->pc = 0x369860u;
    // 0x369860: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x369860u;
    {
        const bool branch_taken_0x369860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369860) {
            ctx->pc = 0x369AF0u;
            goto label_369af0;
        }
    }
    ctx->pc = 0x369868u;
label_369868:
    // 0x369868: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x369868u;
    {
        const bool branch_taken_0x369868 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x369868) {
            ctx->pc = 0x369900u;
            goto label_369900;
        }
    }
    ctx->pc = 0x369870u;
    // 0x369870: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x369870u;
    {
        const bool branch_taken_0x369870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x369870) {
            ctx->pc = 0x369900u;
            goto label_369900;
        }
    }
    ctx->pc = 0x369878u;
    // 0x369878: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x369878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x36987c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x36987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x369880: 0x92430582  lbu         $v1, 0x582($s2)
    ctx->pc = 0x369880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1410)));
    // 0x369884: 0x26460550  addiu       $a2, $s2, 0x550
    ctx->pc = 0x369884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x369888: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x369888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x36988c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x36988cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x369890: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x369890u;
    SET_GPR_U32(ctx, 31, 0x369898u);
    ctx->pc = 0x369894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369890u;
    // 0x369894: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x369890u, 0x369898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369898u;
label_369898:
    // 0x369898: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x369898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x36989c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x36989cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3698a0: 0x92430583  lbu         $v1, 0x583($s2)
    ctx->pc = 0x3698a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1411)));
    // 0x3698a4: 0x26460560  addiu       $a2, $s2, 0x560
    ctx->pc = 0x3698a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
    // 0x3698a8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3698a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3698ac: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3698acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3698b0: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3698B0u;
    SET_GPR_U32(ctx, 31, 0x3698B8u);
    ctx->pc = 0x3698B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3698B0u;
    // 0x3698b4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3698B0u, 0x3698B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3698B8u;
label_3698b8:
    // 0x3698b8: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x3698b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x3698bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3698bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3698c0: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x3698c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3698c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3698c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3698c8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x3698c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3698cc: 0xc0a9d0c  jal         func_2A7430
    ctx->pc = 0x3698CCu;
    SET_GPR_U32(ctx, 31, 0x3698D4u);
    ctx->pc = 0x3698D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3698CCu;
    // 0x3698d0: 0x27a90040  addiu       $t1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x3698CCu, 0x3698D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3698D4u;
label_3698d4:
    // 0x3698d4: 0xae420574  sw          $v0, 0x574($s2)
    ctx->pc = 0x3698d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1396), GPR_U32(ctx, 2));
    // 0x3698d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3698d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3698dc: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x3698dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x3698e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3698e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3698e4: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x3698e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3698e8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x3698e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3698ec: 0xc0a9d0c  jal         func_2A7430
    ctx->pc = 0x3698ECu;
    SET_GPR_U32(ctx, 31, 0x3698F4u);
    ctx->pc = 0x3698F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3698ECu;
    // 0x3698f0: 0x27a90040  addiu       $t1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x3698ECu, 0x3698F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3698F4u;
label_3698f4:
    // 0x3698f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3698F4u;
    {
        const bool branch_taken_0x3698f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3698F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3698F4u;
        // 0x3698f8: 0xae420578  sw          $v0, 0x578($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3698f4) {
            ctx->pc = 0x369910u;
            goto label_369910;
        }
    }
    ctx->pc = 0x3698FCu;
    // 0x3698fc: 0x0  nop
    ctx->pc = 0x3698fcu;
    // NOP
label_369900:
    // 0x369900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x369900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369904: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x369904u;
    SET_GPR_U32(ctx, 31, 0x36990Cu);
    ctx->pc = 0x369908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369904u;
    // 0x369908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x369904u, 0x36990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36990Cu;
label_36990c:
    // 0x36990c: 0x0  nop
    ctx->pc = 0x36990cu;
    // NOP
label_369910:
    // 0x369910: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x369910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x369914: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x369914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x369918: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x369918u;
    {
        const bool branch_taken_0x369918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369918u;
        // 0x36991c: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369918) {
            ctx->pc = 0x369AF0u;
            goto label_369af0;
        }
    }
    ctx->pc = 0x369920u;
label_369920:
    // 0x369920: 0x86420526  lh          $v0, 0x526($s2)
    ctx->pc = 0x369920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1318)));
    // 0x369924: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x369924u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x369928: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x369928u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x36992c: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x36992cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x369930: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x369930u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x369934: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x369934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x369938: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x369938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36993c: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x36993cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_369940:
    // 0x369940: 0x8e450574  lw          $a1, 0x574($s2)
    ctx->pc = 0x369940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x369944: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x369944u;
    SET_GPR_U32(ctx, 31, 0x36994Cu);
    ctx->pc = 0x369948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369944u;
    // 0x369948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x369944u, 0x36994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36994Cu;
label_36994c:
    // 0x36994c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36994Cu;
    {
        const bool branch_taken_0x36994c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36994Cu;
        // 0x369950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36994c) {
            ctx->pc = 0x369968u;
            goto label_369968;
        }
    }
    ctx->pc = 0x369954u;
    // 0x369954: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x369954u;
    SET_GPR_U32(ctx, 31, 0x36995Cu);
    ctx->pc = 0x369958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369954u;
    // 0x369958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x369954u, 0x36995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36995Cu;
label_36995c:
    // 0x36995c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x36995Cu;
    {
        const bool branch_taken_0x36995c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36995c) {
            ctx->pc = 0x369AF0u;
            goto label_369af0;
        }
    }
    ctx->pc = 0x369964u;
    // 0x369964: 0x0  nop
    ctx->pc = 0x369964u;
    // NOP
label_369968:
    // 0x369968: 0x8e450578  lw          $a1, 0x578($s2)
    ctx->pc = 0x369968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1400)));
    // 0x36996c: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x36996Cu;
    SET_GPR_U32(ctx, 31, 0x369974u);
    ctx->pc = 0x369970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36996Cu;
    // 0x369970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x36996Cu, 0x369974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369974u;
label_369974:
    // 0x369974: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x369974u;
    {
        const bool branch_taken_0x369974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369974u;
        // 0x369978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369974) {
            ctx->pc = 0x369990u;
            goto label_369990;
        }
    }
    ctx->pc = 0x36997Cu;
    // 0x36997c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x36997Cu;
    SET_GPR_U32(ctx, 31, 0x369984u);
    ctx->pc = 0x369980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36997Cu;
    // 0x369980: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x36997Cu, 0x369984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369984u;
label_369984:
    // 0x369984: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x369984u;
    {
        const bool branch_taken_0x369984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369984) {
            ctx->pc = 0x369AF0u;
            goto label_369af0;
        }
    }
    ctx->pc = 0x36998Cu;
    // 0x36998c: 0x0  nop
    ctx->pc = 0x36998cu;
    // NOP
label_369990:
    // 0x369990: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x369990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x369994: 0x92430582  lbu         $v1, 0x582($s2)
    ctx->pc = 0x369994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1410)));
    // 0x369998: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x369998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36999c: 0x26460550  addiu       $a2, $s2, 0x550
    ctx->pc = 0x36999cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x3699a0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3699a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3699a4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3699a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3699a8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3699A8u;
    SET_GPR_U32(ctx, 31, 0x3699B0u);
    ctx->pc = 0x3699ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3699A8u;
    // 0x3699ac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3699A8u, 0x3699B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3699B0u;
label_3699b0:
    // 0x3699b0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3699b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3699b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3699b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3699b8: 0x92430583  lbu         $v1, 0x583($s2)
    ctx->pc = 0x3699b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1411)));
    // 0x3699bc: 0x26460560  addiu       $a2, $s2, 0x560
    ctx->pc = 0x3699bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
    // 0x3699c0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3699c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3699c4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3699c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3699c8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3699C8u;
    SET_GPR_U32(ctx, 31, 0x3699D0u);
    ctx->pc = 0x3699CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3699C8u;
    // 0x3699cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3699C8u, 0x3699D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3699D0u;
label_3699d0:
    // 0x3699d0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3699D0u;
    SET_GPR_U32(ctx, 31, 0x3699D8u);
    ctx->pc = 0x3699D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3699D0u;
    // 0x3699d4: 0x8e440574  lw          $a0, 0x574($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3699D0u, 0x3699D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3699D8u;
label_3699d8:
    // 0x3699d8: 0x8e440578  lw          $a0, 0x578($s2)
    ctx->pc = 0x3699d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1400)));
    // 0x3699dc: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3699DCu;
    SET_GPR_U32(ctx, 31, 0x3699E4u);
    ctx->pc = 0x3699E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3699DCu;
    // 0x3699e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3699DCu, 0x3699E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3699E4u;
label_3699e4:
    // 0x3699e4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3699E4u;
    {
        const bool branch_taken_0x3699e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3699e4) {
            ctx->pc = 0x369A00u;
            goto label_369a00;
        }
    }
    ctx->pc = 0x3699ECu;
    // 0x3699ec: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3699ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3699f0: 0x7e030040  sq          $v1, 0x40($s0)
    ctx->pc = 0x3699f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
    // 0x3699f4: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3699f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3699f8: 0x7e030070  sq          $v1, 0x70($s0)
    ctx->pc = 0x3699f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 3));
    // 0x3699fc: 0x0  nop
    ctx->pc = 0x3699fcu;
    // NOP
label_369a00:
    // 0x369a00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369A00u;
    {
        const bool branch_taken_0x369a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x369a00) {
            ctx->pc = 0x369A18u;
            goto label_369a18;
        }
    }
    ctx->pc = 0x369A08u;
    // 0x369a08: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x369a08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x369a0c: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x369a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
    // 0x369a10: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x369a10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x369a14: 0x7c430070  sq          $v1, 0x70($v0)
    ctx->pc = 0x369a14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 3));
label_369a18:
    // 0x369a18: 0x92470580  lbu         $a3, 0x580($s2)
    ctx->pc = 0x369a18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1408)));
    // 0x369a1c: 0xc64e057c  lwc1        $f14, 0x57C($s2)
    ctx->pc = 0x369a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x369a20: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x369a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x369a24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x369a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x369a28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x369a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a2c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x369a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x369a30: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x369a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x369a34: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x369a34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x369a38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x369a38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x369a3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a40: 0xc0c0928  jal         func_3024A0
    ctx->pc = 0x369A40u;
    SET_GPR_U32(ctx, 31, 0x369A48u);
    ctx->pc = 0x369A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369A40u;
    // 0x369a44: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3024A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3024A0u, 0x369A40u, 0x369A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A48u;
label_369a48:
    // 0x369a48: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x369a48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x369a4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x369A4Cu;
    {
        const bool branch_taken_0x369a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x369A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369A4Cu;
        // 0x369a50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369a4c) {
            ctx->pc = 0x369A60u;
            goto label_369a60;
        }
    }
    ctx->pc = 0x369A54u;
    // 0x369a54: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x369A54u;
    {
        const bool branch_taken_0x369a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369a54) {
            ctx->pc = 0x369AE0u;
            goto label_369ae0;
        }
    }
    ctx->pc = 0x369A5Cu;
    // 0x369a5c: 0x0  nop
    ctx->pc = 0x369a5cu;
    // NOP
label_369a60:
    // 0x369a60: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x369a60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x369a64: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x369a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x369a68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x369a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x369a6c: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x369a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x369a70: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x369a70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x369a74: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x369A74u;
    {
        const bool branch_taken_0x369a74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x369a74) {
            ctx->pc = 0x369AB0u;
            goto label_369ab0;
        }
    }
    ctx->pc = 0x369A7Cu;
    // 0x369a7c: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x369a7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x369a80: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x369a80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x369a84: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x369A84u;
    {
        const bool branch_taken_0x369a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369A84u;
        // 0x369a88: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369a84) {
            ctx->pc = 0x369AD8u;
            goto label_369ad8;
        }
    }
    ctx->pc = 0x369A8Cu;
    // 0x369a8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x369a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369a90: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x369a90u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x369a94: 0x0  nop
    ctx->pc = 0x369a94u;
    // NOP
    // 0x369a98: 0x0  nop
    ctx->pc = 0x369a98u;
    // NOP
    // 0x369a9c: 0x2010  mfhi        $a0
    ctx->pc = 0x369a9cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x369aa0: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x369aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x369aa4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x369AA4u;
    {
        const bool branch_taken_0x369aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369AA4u;
        // 0x369aa8: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369aa4) {
            ctx->pc = 0x369AD8u;
            goto label_369ad8;
        }
    }
    ctx->pc = 0x369AACu;
    // 0x369aac: 0x0  nop
    ctx->pc = 0x369aacu;
    // NOP
label_369ab0:
    // 0x369ab0: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x369ab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x369ab4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x369ab4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x369ab8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x369AB8u;
    {
        const bool branch_taken_0x369ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x369ab8) {
            ctx->pc = 0x369AD8u;
            goto label_369ad8;
        }
    }
    ctx->pc = 0x369AC0u;
    // 0x369ac0: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x369ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x369ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x369ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369ac8: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x369ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x369acc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x369ACCu;
    {
        const bool branch_taken_0x369acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369ACCu;
        // 0x369ad0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369acc) {
            ctx->pc = 0x369AE0u;
            goto label_369ae0;
        }
    }
    ctx->pc = 0x369AD4u;
    // 0x369ad4: 0x0  nop
    ctx->pc = 0x369ad4u;
    // NOP
label_369ad8:
    // 0x369ad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x369ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369adc: 0x0  nop
    ctx->pc = 0x369adcu;
    // NOP
label_369ae0:
    // 0x369ae0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x369AE0u;
    {
        const bool branch_taken_0x369ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369AE0u;
        // 0x369ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369ae0) {
            ctx->pc = 0x369AF0u;
            goto label_369af0;
        }
    }
    ctx->pc = 0x369AE8u;
    // 0x369ae8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x369AE8u;
    SET_GPR_U32(ctx, 31, 0x369AF0u);
    ctx->pc = 0x369AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369AE8u;
    // 0x369aec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x369AE8u, 0x369AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369AF0u;
label_369af0:
    // 0x369af0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x369af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369af4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x369af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369af8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x369af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x369afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369b00: 0x3e00008  jr          $ra
    ctx->pc = 0x369B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369B00u;
        // 0x369b04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369B08u;
}
