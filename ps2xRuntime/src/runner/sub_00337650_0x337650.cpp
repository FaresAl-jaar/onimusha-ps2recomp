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

// Function: sub_00337650
// Address: 0x337650 - 0x33785c
void sub_00337650_0x337650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337650_0x337650");
#endif

    switch (ctx->pc) {
        case 0x337650u: goto label_337650;
        case 0x337654u: goto label_337654;
        case 0x337658u: goto label_337658;
        case 0x33765cu: goto label_33765c;
        case 0x337660u: goto label_337660;
        case 0x337664u: goto label_337664;
        case 0x337668u: goto label_337668;
        case 0x33766cu: goto label_33766c;
        case 0x337670u: goto label_337670;
        case 0x337674u: goto label_337674;
        case 0x337678u: goto label_337678;
        case 0x33767cu: goto label_33767c;
        case 0x337680u: goto label_337680;
        case 0x337684u: goto label_337684;
        case 0x337688u: goto label_337688;
        case 0x33768cu: goto label_33768c;
        case 0x337690u: goto label_337690;
        case 0x337694u: goto label_337694;
        case 0x337698u: goto label_337698;
        case 0x33769cu: goto label_33769c;
        case 0x3376a0u: goto label_3376a0;
        case 0x3376a4u: goto label_3376a4;
        case 0x3376a8u: goto label_3376a8;
        case 0x3376acu: goto label_3376ac;
        case 0x3376b0u: goto label_3376b0;
        case 0x3376b4u: goto label_3376b4;
        case 0x3376b8u: goto label_3376b8;
        case 0x3376bcu: goto label_3376bc;
        case 0x3376c0u: goto label_3376c0;
        case 0x3376c4u: goto label_3376c4;
        case 0x3376c8u: goto label_3376c8;
        case 0x3376ccu: goto label_3376cc;
        case 0x3376d0u: goto label_3376d0;
        case 0x3376d4u: goto label_3376d4;
        case 0x3376d8u: goto label_3376d8;
        case 0x3376dcu: goto label_3376dc;
        case 0x3376e0u: goto label_3376e0;
        case 0x3376e4u: goto label_3376e4;
        case 0x3376e8u: goto label_3376e8;
        case 0x3376ecu: goto label_3376ec;
        case 0x3376f0u: goto label_3376f0;
        case 0x3376f4u: goto label_3376f4;
        case 0x3376f8u: goto label_3376f8;
        case 0x3376fcu: goto label_3376fc;
        case 0x337700u: goto label_337700;
        case 0x337704u: goto label_337704;
        case 0x337708u: goto label_337708;
        case 0x33770cu: goto label_33770c;
        case 0x337710u: goto label_337710;
        case 0x337714u: goto label_337714;
        case 0x337718u: goto label_337718;
        case 0x33771cu: goto label_33771c;
        case 0x337720u: goto label_337720;
        case 0x337724u: goto label_337724;
        case 0x337728u: goto label_337728;
        case 0x33772cu: goto label_33772c;
        case 0x337730u: goto label_337730;
        case 0x337734u: goto label_337734;
        case 0x337738u: goto label_337738;
        case 0x33773cu: goto label_33773c;
        case 0x337740u: goto label_337740;
        case 0x337744u: goto label_337744;
        case 0x337748u: goto label_337748;
        case 0x33774cu: goto label_33774c;
        case 0x337750u: goto label_337750;
        case 0x337754u: goto label_337754;
        case 0x337758u: goto label_337758;
        case 0x33775cu: goto label_33775c;
        case 0x337760u: goto label_337760;
        case 0x337764u: goto label_337764;
        case 0x337768u: goto label_337768;
        case 0x33776cu: goto label_33776c;
        case 0x337770u: goto label_337770;
        case 0x337774u: goto label_337774;
        case 0x337778u: goto label_337778;
        case 0x33777cu: goto label_33777c;
        case 0x337780u: goto label_337780;
        case 0x337784u: goto label_337784;
        case 0x337788u: goto label_337788;
        case 0x33778cu: goto label_33778c;
        case 0x337790u: goto label_337790;
        case 0x337794u: goto label_337794;
        case 0x337798u: goto label_337798;
        case 0x33779cu: goto label_33779c;
        case 0x3377a0u: goto label_3377a0;
        case 0x3377a4u: goto label_3377a4;
        case 0x3377a8u: goto label_3377a8;
        case 0x3377acu: goto label_3377ac;
        case 0x3377b0u: goto label_3377b0;
        case 0x3377b4u: goto label_3377b4;
        case 0x3377b8u: goto label_3377b8;
        case 0x3377bcu: goto label_3377bc;
        case 0x3377c0u: goto label_3377c0;
        case 0x3377c4u: goto label_3377c4;
        case 0x3377c8u: goto label_3377c8;
        case 0x3377ccu: goto label_3377cc;
        case 0x3377d0u: goto label_3377d0;
        case 0x3377d4u: goto label_3377d4;
        case 0x3377d8u: goto label_3377d8;
        case 0x3377dcu: goto label_3377dc;
        case 0x3377e0u: goto label_3377e0;
        case 0x3377e4u: goto label_3377e4;
        case 0x3377e8u: goto label_3377e8;
        case 0x3377ecu: goto label_3377ec;
        case 0x3377f0u: goto label_3377f0;
        case 0x3377f4u: goto label_3377f4;
        case 0x3377f8u: goto label_3377f8;
        case 0x3377fcu: goto label_3377fc;
        case 0x337800u: goto label_337800;
        case 0x337804u: goto label_337804;
        case 0x337808u: goto label_337808;
        case 0x33780cu: goto label_33780c;
        case 0x337810u: goto label_337810;
        case 0x337814u: goto label_337814;
        case 0x337818u: goto label_337818;
        case 0x33781cu: goto label_33781c;
        case 0x337820u: goto label_337820;
        case 0x337824u: goto label_337824;
        case 0x337828u: goto label_337828;
        case 0x33782cu: goto label_33782c;
        case 0x337830u: goto label_337830;
        case 0x337834u: goto label_337834;
        case 0x337838u: goto label_337838;
        case 0x33783cu: goto label_33783c;
        case 0x337840u: goto label_337840;
        case 0x337844u: goto label_337844;
        case 0x337848u: goto label_337848;
        case 0x33784cu: goto label_33784c;
        case 0x337850u: goto label_337850;
        case 0x337854u: goto label_337854;
        case 0x337858u: goto label_337858;
        default: break;
    }

    ctx->pc = 0x337650u;

label_337650:
    // 0x337650: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x337650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_337654:
    // 0x337654: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x337654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_337658:
    // 0x337658: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x337658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_33765c:
    // 0x33765c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33765cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_337660:
    // 0x337660: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x337660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_337664:
    // 0x337664: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x337664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_337668:
    // 0x337668: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x337668u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33766c:
    // 0x33766c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_337670:
    // 0x337670: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x337670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_337674:
    // 0x337674: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x337674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_337678:
    // 0x337678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33767c:
    // 0x33767c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_337680:
    // 0x337680: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x337680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_337684:
    // 0x337684: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x337684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_337688:
    // 0x337688: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_33768c:
    if (ctx->pc == 0x33768Cu) {
        ctx->pc = 0x33768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337688u;
        // 0x33768c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337690u;
        goto label_337690;
    }
    ctx->pc = 0x337688u;
    {
        const bool branch_taken_0x337688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337688u;
        // 0x33768c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337688) {
            ctx->pc = 0x3376D0u;
            goto label_3376d0;
        }
    }
    ctx->pc = 0x337690u;
label_337690:
    // 0x337690: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_337694:
    if (ctx->pc == 0x337694u) {
        ctx->pc = 0x337698u;
        goto label_337698;
    }
    ctx->pc = 0x337690u;
    {
        const bool branch_taken_0x337690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x337690) {
            ctx->pc = 0x3376C0u;
            goto label_3376c0;
        }
    }
    ctx->pc = 0x337698u;
label_337698:
    // 0x337698: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x337698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33769c:
    // 0x33769c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_3376a0:
    if (ctx->pc == 0x3376A0u) {
        ctx->pc = 0x3376A4u;
        goto label_3376a4;
    }
    ctx->pc = 0x33769Cu;
    {
        const bool branch_taken_0x33769c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33769c) {
            ctx->pc = 0x3376B0u;
            goto label_3376b0;
        }
    }
    ctx->pc = 0x3376A4u;
label_3376a4:
    // 0x3376a4: 0x1000000e  b           . + 4 + (0xE << 2)
label_3376a8:
    if (ctx->pc == 0x3376A8u) {
        ctx->pc = 0x3376ACu;
        goto label_3376ac;
    }
    ctx->pc = 0x3376A4u;
    {
        const bool branch_taken_0x3376a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3376a4) {
            ctx->pc = 0x3376E0u;
            goto label_3376e0;
        }
    }
    ctx->pc = 0x3376ACu;
label_3376ac:
    // 0x3376ac: 0x0  nop
    ctx->pc = 0x3376acu;
    // NOP
label_3376b0:
    // 0x3376b0: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3376b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
label_3376b4:
    // 0x3376b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3376b8:
    if (ctx->pc == 0x3376B8u) {
        ctx->pc = 0x3376B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376B4u;
        // 0x3376b8: 0x9023140d  lbu         $v1, 0x140D($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 5133)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3376BCu;
        goto label_3376bc;
    }
    ctx->pc = 0x3376B4u;
    {
        const bool branch_taken_0x3376b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3376B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376B4u;
        // 0x3376b8: 0x9023140d  lbu         $v1, 0x140D($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 5133)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376b4) {
            ctx->pc = 0x3376E8u;
            goto label_3376e8;
        }
    }
    ctx->pc = 0x3376BCu;
label_3376bc:
    // 0x3376bc: 0x0  nop
    ctx->pc = 0x3376bcu;
    // NOP
label_3376c0:
    // 0x3376c0: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3376c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
label_3376c4:
    // 0x3376c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3376c8:
    if (ctx->pc == 0x3376C8u) {
        ctx->pc = 0x3376C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376C4u;
        // 0x3376c8: 0x9023140e  lbu         $v1, 0x140E($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 5134)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3376CCu;
        goto label_3376cc;
    }
    ctx->pc = 0x3376C4u;
    {
        const bool branch_taken_0x3376c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3376C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376C4u;
        // 0x3376c8: 0x9023140e  lbu         $v1, 0x140E($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 5134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376c4) {
            ctx->pc = 0x3376E8u;
            goto label_3376e8;
        }
    }
    ctx->pc = 0x3376CCu;
label_3376cc:
    // 0x3376cc: 0x0  nop
    ctx->pc = 0x3376ccu;
    // NOP
label_3376d0:
    // 0x3376d0: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3376d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
label_3376d4:
    // 0x3376d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3376d8:
    if (ctx->pc == 0x3376D8u) {
        ctx->pc = 0x3376D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376D4u;
        // 0x3376d8: 0x9023140f  lbu         $v1, 0x140F($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 5135)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3376DCu;
        goto label_3376dc;
    }
    ctx->pc = 0x3376D4u;
    {
        const bool branch_taken_0x3376d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3376D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376D4u;
        // 0x3376d8: 0x9023140f  lbu         $v1, 0x140F($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 5135)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376d4) {
            ctx->pc = 0x3376E8u;
            goto label_3376e8;
        }
    }
    ctx->pc = 0x3376DCu;
label_3376dc:
    // 0x3376dc: 0x0  nop
    ctx->pc = 0x3376dcu;
    // NOP
label_3376e0:
    // 0x3376e0: 0x90a3000c  lbu         $v1, 0xC($a1)
    ctx->pc = 0x3376e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
label_3376e4:
    // 0x3376e4: 0x0  nop
    ctx->pc = 0x3376e4u;
    // NOP
label_3376e8:
    // 0x3376e8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3376e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3376ec:
    // 0x3376ec: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x3376ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
label_3376f0:
    // 0x3376f0: 0x2463a2f0  addiu       $v1, $v1, -0x5D10
    ctx->pc = 0x3376f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943472));
label_3376f4:
    // 0x3376f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3376f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3376f8:
    // 0x3376f8: 0x86c40024  lh          $a0, 0x24($s6)
    ctx->pc = 0x3376f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 36)));
label_3376fc:
    // 0x3376fc: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x3376fcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_337700:
    // 0x337700: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x337700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_337704:
    // 0x337704: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x337704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_337708:
    // 0x337708: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_33770c:
    if (ctx->pc == 0x33770Cu) {
        ctx->pc = 0x33770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337708u;
        // 0x33770c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337710u;
        goto label_337710;
    }
    ctx->pc = 0x337708u;
    {
        const bool branch_taken_0x337708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337708u;
        // 0x33770c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337708) {
            ctx->pc = 0x337808u;
            goto label_337808;
        }
    }
    ctx->pc = 0x337710u;
label_337710:
    // 0x337710: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x337710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_337714:
    // 0x337714: 0x0  nop
    ctx->pc = 0x337714u;
    // NOP
label_337718:
    // 0x337718: 0x1000003d  b           . + 4 + (0x3D << 2)
label_33771c:
    if (ctx->pc == 0x33771Cu) {
        ctx->pc = 0x33771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337718u;
        // 0x33771c: 0x26b40001  addiu       $s4, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337720u;
        goto label_337720;
    }
    ctx->pc = 0x337718u;
    {
        const bool branch_taken_0x337718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337718u;
        // 0x33771c: 0x26b40001  addiu       $s4, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337718) {
            ctx->pc = 0x337810u;
            goto label_337810;
        }
    }
    ctx->pc = 0x337720u;
label_337720:
    // 0x337720: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x337720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_337724:
    // 0x337724: 0x26120028  addiu       $s2, $s0, 0x28
    ctx->pc = 0x337724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_337728:
    // 0x337728: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x337728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_33772c:
    // 0x33772c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33772cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_337730:
    // 0x337730: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_337734:
    if (ctx->pc == 0x337734u) {
        ctx->pc = 0x337734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337730u;
        // 0x337734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337738u;
        goto label_337738;
    }
    ctx->pc = 0x337730u;
    {
        const bool branch_taken_0x337730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x337734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337730u;
        // 0x337734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337730) {
            ctx->pc = 0x337740u;
            goto label_337740;
        }
    }
    ctx->pc = 0x337738u;
label_337738:
    // 0x337738: 0x34c30001  ori         $v1, $a2, 0x1
    ctx->pc = 0x337738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_33773c:
    // 0x33773c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x33773cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_337740:
    // 0x337740: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x337740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_337744:
    // 0x337744: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x337744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_337748:
    // 0x337748: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x337748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_33774c:
    // 0x33774c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_337750:
    if (ctx->pc == 0x337750u) {
        ctx->pc = 0x337750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33774Cu;
        // 0x337750: 0x34c30010  ori         $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x337754u;
        goto label_337754;
    }
    ctx->pc = 0x33774Cu;
    {
        const bool branch_taken_0x33774c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x337750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33774Cu;
        // 0x337750: 0x34c30010  ori         $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33774c) {
            ctx->pc = 0x337758u;
            goto label_337758;
        }
    }
    ctx->pc = 0x337754u;
label_337754:
    // 0x337754: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x337754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_337758:
    // 0x337758: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x337758u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_33775c:
    // 0x33775c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33775cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337760:
    // 0x337760: 0x10e3001d  beq         $a3, $v1, . + 4 + (0x1D << 2)
label_337764:
    if (ctx->pc == 0x337764u) {
        ctx->pc = 0x337768u;
        goto label_337768;
    }
    ctx->pc = 0x337760u;
    {
        const bool branch_taken_0x337760 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x337760) {
            ctx->pc = 0x3377D8u;
            goto label_3377d8;
        }
    }
    ctx->pc = 0x337768u;
label_337768:
    // 0x337768: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
label_33776c:
    if (ctx->pc == 0x33776Cu) {
        ctx->pc = 0x337770u;
        goto label_337770;
    }
    ctx->pc = 0x337768u;
    {
        const bool branch_taken_0x337768 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x337768) {
            ctx->pc = 0x337788u;
            goto label_337788;
        }
    }
    ctx->pc = 0x337770u;
label_337770:
    // 0x337770: 0x94860004  lhu         $a2, 0x4($a0)
    ctx->pc = 0x337770u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_337774:
    // 0x337774: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x337774u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_337778:
    // 0x337778: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x337778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_33777c:
    // 0x33777c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_337780:
    if (ctx->pc == 0x337780u) {
        ctx->pc = 0x337784u;
        goto label_337784;
    }
    ctx->pc = 0x33777Cu;
    {
        const bool branch_taken_0x33777c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33777c) {
            ctx->pc = 0x3377D8u;
            goto label_3377d8;
        }
    }
    ctx->pc = 0x337784u;
label_337784:
    // 0x337784: 0x0  nop
    ctx->pc = 0x337784u;
    // NOP
label_337788:
    // 0x337788: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x337788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_33778c:
    // 0x33778c: 0x14e20006  bne         $a3, $v0, . + 4 + (0x6 << 2)
label_337790:
    if (ctx->pc == 0x337790u) {
        ctx->pc = 0x337794u;
        goto label_337794;
    }
    ctx->pc = 0x33778Cu;
    {
        const bool branch_taken_0x33778c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x33778c) {
            ctx->pc = 0x3377A8u;
            goto label_3377a8;
        }
    }
    ctx->pc = 0x337794u;
label_337794:
    // 0x337794: 0x2e0f809  jalr        $s7
label_337798:
    if (ctx->pc == 0x337798u) {
        ctx->pc = 0x33779Cu;
        goto label_33779c;
    }
    ctx->pc = 0x337794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x33779Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337794u, 0x33779Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33779Cu;
label_33779c:
    // 0x33779c: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_3377a0:
    if (ctx->pc == 0x3377A0u) {
        ctx->pc = 0x3377A4u;
        goto label_3377a4;
    }
    ctx->pc = 0x33779Cu;
    {
        const bool branch_taken_0x33779c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x33779c) {
            ctx->pc = 0x3377D8u;
            goto label_3377d8;
        }
    }
    ctx->pc = 0x3377A4u;
label_3377a4:
    // 0x3377a4: 0x0  nop
    ctx->pc = 0x3377a4u;
    // NOP
label_3377a8:
    // 0x3377a8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3377a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3377ac:
    // 0x3377ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3377acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3377b0:
    // 0x3377b0: 0xc049522  jal         func_125488
label_3377b4:
    if (ctx->pc == 0x3377B4u) {
        ctx->pc = 0x3377B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377B0u;
        // 0x3377b4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3377B8u;
        goto label_3377b8;
    }
    ctx->pc = 0x3377B0u;
    SET_GPR_U32(ctx, 31, 0x3377B8u);
    ctx->pc = 0x3377B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3377B0u;
    // 0x3377b4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x3377B0u, 0x3377B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3377B8u;
label_3377b8:
    // 0x3377b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3377b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3377bc:
    // 0x3377bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3377bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3377c0:
    // 0x3377c0: 0xc049522  jal         func_125488
label_3377c4:
    if (ctx->pc == 0x3377C4u) {
        ctx->pc = 0x3377C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377C0u;
        // 0x3377c4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3377C8u;
        goto label_3377c8;
    }
    ctx->pc = 0x3377C0u;
    SET_GPR_U32(ctx, 31, 0x3377C8u);
    ctx->pc = 0x3377C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3377C0u;
    // 0x3377c4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x3377C0u, 0x3377C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3377C8u;
label_3377c8:
    // 0x3377c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3377c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3377cc:
    // 0x3377cc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3377ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3377d0:
    // 0x3377d0: 0xc049522  jal         func_125488
label_3377d4:
    if (ctx->pc == 0x3377D4u) {
        ctx->pc = 0x3377D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377D0u;
        // 0x3377d4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3377D8u;
        goto label_3377d8;
    }
    ctx->pc = 0x3377D0u;
    SET_GPR_U32(ctx, 31, 0x3377D8u);
    ctx->pc = 0x3377D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3377D0u;
    // 0x3377d4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x3377D0u, 0x3377D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3377D8u;
label_3377d8:
    // 0x3377d8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x3377d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3377dc:
    // 0x3377dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3377dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3377e0:
    // 0x3377e0: 0x86c40024  lh          $a0, 0x24($s6)
    ctx->pc = 0x3377e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 36)));
label_3377e4:
    // 0x3377e4: 0x284182a  slt         $v1, $s4, $a0
    ctx->pc = 0x3377e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3377e8:
    // 0x3377e8: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
label_3377ec:
    if (ctx->pc == 0x3377ECu) {
        ctx->pc = 0x3377F0u;
        goto label_3377f0;
    }
    ctx->pc = 0x3377E8u;
    {
        const bool branch_taken_0x3377e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3377e8) {
            ctx->pc = 0x337720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337720;
        }
    }
    ctx->pc = 0x3377F0u;
label_3377f0:
    // 0x3377f0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3377f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3377f4:
    // 0x3377f4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3377f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3377f8:
    // 0x3377f8: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x3377f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3377fc:
    // 0x3377fc: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
label_337800:
    if (ctx->pc == 0x337800u) {
        ctx->pc = 0x337800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377FCu;
        // 0x337800: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337804u;
        goto label_337804;
    }
    ctx->pc = 0x3377FCu;
    {
        const bool branch_taken_0x3377fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x337800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377FCu;
        // 0x337800: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3377fc) {
            ctx->pc = 0x337718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337718;
        }
    }
    ctx->pc = 0x337804u;
label_337804:
    // 0x337804: 0x0  nop
    ctx->pc = 0x337804u;
    // NOP
label_337808:
    // 0x337808: 0x10000009  b           . + 4 + (0x9 << 2)
label_33780c:
    if (ctx->pc == 0x33780Cu) {
        ctx->pc = 0x337810u;
        goto label_337810;
    }
    ctx->pc = 0x337808u;
    {
        const bool branch_taken_0x337808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337808) {
            ctx->pc = 0x337830u;
            goto label_337830;
        }
    }
    ctx->pc = 0x337810u;
label_337810:
    // 0x337810: 0x284082a  slt         $at, $s4, $a0
    ctx->pc = 0x337810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_337814:
    // 0x337814: 0x1020fff6  beqz        $at, . + 4 + (-0xA << 2)
label_337818:
    if (ctx->pc == 0x337818u) {
        ctx->pc = 0x337818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337814u;
        // 0x337818: 0x141840  sll         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33781Cu;
        goto label_33781c;
    }
    ctx->pc = 0x337814u;
    {
        const bool branch_taken_0x337814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x337818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337814u;
        // 0x337818: 0x141840  sll         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337814) {
            ctx->pc = 0x3377F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3377f0;
        }
    }
    ctx->pc = 0x33781Cu;
label_33781c:
    // 0x33781c: 0x26330028  addiu       $s3, $s1, 0x28
    ctx->pc = 0x33781cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_337820:
    // 0x337820: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x337820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_337824:
    // 0x337824: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x337824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_337828:
    // 0x337828: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_33782c:
    if (ctx->pc == 0x33782Cu) {
        ctx->pc = 0x33782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337828u;
        // 0x33782c: 0x2c38021  addu        $s0, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337830u;
        goto label_337830;
    }
    ctx->pc = 0x337828u;
    {
        const bool branch_taken_0x337828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337828u;
        // 0x33782c: 0x2c38021  addu        $s0, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337828) {
            ctx->pc = 0x3377E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3377e0;
        }
    }
    ctx->pc = 0x337830u;
label_337830:
    // 0x337830: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x337830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_337834:
    // 0x337834: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x337834u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_337838:
    // 0x337838: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x337838u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33783c:
    // 0x33783c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33783cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_337840:
    // 0x337840: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x337840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_337844:
    // 0x337844: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x337844u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_337848:
    // 0x337848: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x337848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33784c:
    // 0x33784c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33784cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_337850:
    // 0x337850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_337854:
    // 0x337854: 0x3e00008  jr          $ra
label_337858:
    if (ctx->pc == 0x337858u) {
        ctx->pc = 0x337858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337854u;
        // 0x337858: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33785Cu;
        goto label_fallthrough_0x337854;
    }
    ctx->pc = 0x337854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337854u;
        // 0x337858: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x337854:
    ctx->pc = 0x33785Cu;
}
