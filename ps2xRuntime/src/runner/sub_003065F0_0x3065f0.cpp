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

// Function: sub_003065F0
// Address: 0x3065f0 - 0x3068e4
void sub_003065F0_0x3065f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003065F0_0x3065f0");
#endif

    switch (ctx->pc) {
        case 0x3065f0u: goto label_3065f0;
        case 0x3065f4u: goto label_3065f4;
        case 0x3065f8u: goto label_3065f8;
        case 0x3065fcu: goto label_3065fc;
        case 0x306600u: goto label_306600;
        case 0x306604u: goto label_306604;
        case 0x306608u: goto label_306608;
        case 0x30660cu: goto label_30660c;
        case 0x306610u: goto label_306610;
        case 0x306614u: goto label_306614;
        case 0x306618u: goto label_306618;
        case 0x30661cu: goto label_30661c;
        case 0x306620u: goto label_306620;
        case 0x306624u: goto label_306624;
        case 0x306628u: goto label_306628;
        case 0x30662cu: goto label_30662c;
        case 0x306630u: goto label_306630;
        case 0x306634u: goto label_306634;
        case 0x306638u: goto label_306638;
        case 0x30663cu: goto label_30663c;
        case 0x306640u: goto label_306640;
        case 0x306644u: goto label_306644;
        case 0x306648u: goto label_306648;
        case 0x30664cu: goto label_30664c;
        case 0x306650u: goto label_306650;
        case 0x306654u: goto label_306654;
        case 0x306658u: goto label_306658;
        case 0x30665cu: goto label_30665c;
        case 0x306660u: goto label_306660;
        case 0x306664u: goto label_306664;
        case 0x306668u: goto label_306668;
        case 0x30666cu: goto label_30666c;
        case 0x306670u: goto label_306670;
        case 0x306674u: goto label_306674;
        case 0x306678u: goto label_306678;
        case 0x30667cu: goto label_30667c;
        case 0x306680u: goto label_306680;
        case 0x306684u: goto label_306684;
        case 0x306688u: goto label_306688;
        case 0x30668cu: goto label_30668c;
        case 0x306690u: goto label_306690;
        case 0x306694u: goto label_306694;
        case 0x306698u: goto label_306698;
        case 0x30669cu: goto label_30669c;
        case 0x3066a0u: goto label_3066a0;
        case 0x3066a4u: goto label_3066a4;
        case 0x3066a8u: goto label_3066a8;
        case 0x3066acu: goto label_3066ac;
        case 0x3066b0u: goto label_3066b0;
        case 0x3066b4u: goto label_3066b4;
        case 0x3066b8u: goto label_3066b8;
        case 0x3066bcu: goto label_3066bc;
        case 0x3066c0u: goto label_3066c0;
        case 0x3066c4u: goto label_3066c4;
        case 0x3066c8u: goto label_3066c8;
        case 0x3066ccu: goto label_3066cc;
        case 0x3066d0u: goto label_3066d0;
        case 0x3066d4u: goto label_3066d4;
        case 0x3066d8u: goto label_3066d8;
        case 0x3066dcu: goto label_3066dc;
        case 0x3066e0u: goto label_3066e0;
        case 0x3066e4u: goto label_3066e4;
        case 0x3066e8u: goto label_3066e8;
        case 0x3066ecu: goto label_3066ec;
        case 0x3066f0u: goto label_3066f0;
        case 0x3066f4u: goto label_3066f4;
        case 0x3066f8u: goto label_3066f8;
        case 0x3066fcu: goto label_3066fc;
        case 0x306700u: goto label_306700;
        case 0x306704u: goto label_306704;
        case 0x306708u: goto label_306708;
        case 0x30670cu: goto label_30670c;
        case 0x306710u: goto label_306710;
        case 0x306714u: goto label_306714;
        case 0x306718u: goto label_306718;
        case 0x30671cu: goto label_30671c;
        case 0x306720u: goto label_306720;
        case 0x306724u: goto label_306724;
        case 0x306728u: goto label_306728;
        case 0x30672cu: goto label_30672c;
        case 0x306730u: goto label_306730;
        case 0x306734u: goto label_306734;
        case 0x306738u: goto label_306738;
        case 0x30673cu: goto label_30673c;
        case 0x306740u: goto label_306740;
        case 0x306744u: goto label_306744;
        case 0x306748u: goto label_306748;
        case 0x30674cu: goto label_30674c;
        case 0x306750u: goto label_306750;
        case 0x306754u: goto label_306754;
        case 0x306758u: goto label_306758;
        case 0x30675cu: goto label_30675c;
        case 0x306760u: goto label_306760;
        case 0x306764u: goto label_306764;
        case 0x306768u: goto label_306768;
        case 0x30676cu: goto label_30676c;
        case 0x306770u: goto label_306770;
        case 0x306774u: goto label_306774;
        case 0x306778u: goto label_306778;
        case 0x30677cu: goto label_30677c;
        case 0x306780u: goto label_306780;
        case 0x306784u: goto label_306784;
        case 0x306788u: goto label_306788;
        case 0x30678cu: goto label_30678c;
        case 0x306790u: goto label_306790;
        case 0x306794u: goto label_306794;
        case 0x306798u: goto label_306798;
        case 0x30679cu: goto label_30679c;
        case 0x3067a0u: goto label_3067a0;
        case 0x3067a4u: goto label_3067a4;
        case 0x3067a8u: goto label_3067a8;
        case 0x3067acu: goto label_3067ac;
        case 0x3067b0u: goto label_3067b0;
        case 0x3067b4u: goto label_3067b4;
        case 0x3067b8u: goto label_3067b8;
        case 0x3067bcu: goto label_3067bc;
        case 0x3067c0u: goto label_3067c0;
        case 0x3067c4u: goto label_3067c4;
        case 0x3067c8u: goto label_3067c8;
        case 0x3067ccu: goto label_3067cc;
        case 0x3067d0u: goto label_3067d0;
        case 0x3067d4u: goto label_3067d4;
        case 0x3067d8u: goto label_3067d8;
        case 0x3067dcu: goto label_3067dc;
        case 0x3067e0u: goto label_3067e0;
        case 0x3067e4u: goto label_3067e4;
        case 0x3067e8u: goto label_3067e8;
        case 0x3067ecu: goto label_3067ec;
        case 0x3067f0u: goto label_3067f0;
        case 0x3067f4u: goto label_3067f4;
        case 0x3067f8u: goto label_3067f8;
        case 0x3067fcu: goto label_3067fc;
        case 0x306800u: goto label_306800;
        case 0x306804u: goto label_306804;
        case 0x306808u: goto label_306808;
        case 0x30680cu: goto label_30680c;
        case 0x306810u: goto label_306810;
        case 0x306814u: goto label_306814;
        case 0x306818u: goto label_306818;
        case 0x30681cu: goto label_30681c;
        case 0x306820u: goto label_306820;
        case 0x306824u: goto label_306824;
        case 0x306828u: goto label_306828;
        case 0x30682cu: goto label_30682c;
        case 0x306830u: goto label_306830;
        case 0x306834u: goto label_306834;
        case 0x306838u: goto label_306838;
        case 0x30683cu: goto label_30683c;
        case 0x306840u: goto label_306840;
        case 0x306844u: goto label_306844;
        case 0x306848u: goto label_306848;
        case 0x30684cu: goto label_30684c;
        case 0x306850u: goto label_306850;
        case 0x306854u: goto label_306854;
        case 0x306858u: goto label_306858;
        case 0x30685cu: goto label_30685c;
        case 0x306860u: goto label_306860;
        case 0x306864u: goto label_306864;
        case 0x306868u: goto label_306868;
        case 0x30686cu: goto label_30686c;
        case 0x306870u: goto label_306870;
        case 0x306874u: goto label_306874;
        case 0x306878u: goto label_306878;
        case 0x30687cu: goto label_30687c;
        case 0x306880u: goto label_306880;
        case 0x306884u: goto label_306884;
        case 0x306888u: goto label_306888;
        case 0x30688cu: goto label_30688c;
        case 0x306890u: goto label_306890;
        case 0x306894u: goto label_306894;
        case 0x306898u: goto label_306898;
        case 0x30689cu: goto label_30689c;
        case 0x3068a0u: goto label_3068a0;
        case 0x3068a4u: goto label_3068a4;
        case 0x3068a8u: goto label_3068a8;
        case 0x3068acu: goto label_3068ac;
        case 0x3068b0u: goto label_3068b0;
        case 0x3068b4u: goto label_3068b4;
        case 0x3068b8u: goto label_3068b8;
        case 0x3068bcu: goto label_3068bc;
        case 0x3068c0u: goto label_3068c0;
        case 0x3068c4u: goto label_3068c4;
        case 0x3068c8u: goto label_3068c8;
        case 0x3068ccu: goto label_3068cc;
        case 0x3068d0u: goto label_3068d0;
        case 0x3068d4u: goto label_3068d4;
        case 0x3068d8u: goto label_3068d8;
        case 0x3068dcu: goto label_3068dc;
        case 0x3068e0u: goto label_3068e0;
        default: break;
    }

    ctx->pc = 0x3065f0u;

label_3065f0:
    // 0x3065f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3065f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3065f4:
    // 0x3065f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3065f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3065f8:
    // 0x3065f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3065f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3065fc:
    // 0x3065fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3065fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_306600:
    // 0x306600: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x306600u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_306604:
    // 0x306604: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x306604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_306608:
    // 0x306608: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x306608u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30660c:
    // 0x30660c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_306610:
    // 0x306610: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x306610u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_306614:
    // 0x306614: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x306614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_306618:
    // 0x306618: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x306618u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_30661c:
    // 0x30661c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30661cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_306620:
    // 0x306620: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x306620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_306624:
    // 0x306624: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x306624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_306628:
    // 0x306628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x306628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30662c:
    // 0x30662c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x30662cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_306630:
    // 0x306630: 0xc09d4d4  jal         func_275350
label_306634:
    if (ctx->pc == 0x306634u) {
        ctx->pc = 0x306634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306630u;
        // 0x306634: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306638u;
        goto label_306638;
    }
    ctx->pc = 0x306630u;
    SET_GPR_U32(ctx, 31, 0x306638u);
    ctx->pc = 0x306634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306630u;
    // 0x306634: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x306630u, 0x306638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306638u;
label_306638:
    // 0x306638: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_30663c:
    if (ctx->pc == 0x30663Cu) {
        ctx->pc = 0x30663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306638u;
        // 0x30663c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306640u;
        goto label_306640;
    }
    ctx->pc = 0x306638u;
    {
        const bool branch_taken_0x306638 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x30663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306638u;
        // 0x30663c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306638) {
            ctx->pc = 0x306650u;
            goto label_306650;
        }
    }
    ctx->pc = 0x306640u;
label_306640:
    // 0x306640: 0xc09d4d8  jal         func_275360
label_306644:
    if (ctx->pc == 0x306644u) {
        ctx->pc = 0x306644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306640u;
        // 0x306644: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306648u;
        goto label_306648;
    }
    ctx->pc = 0x306640u;
    SET_GPR_U32(ctx, 31, 0x306648u);
    ctx->pc = 0x306644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306640u;
    // 0x306644: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x306640u, 0x306648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306648u;
label_306648:
    // 0x306648: 0x1000009b  b           . + 4 + (0x9B << 2)
label_30664c:
    if (ctx->pc == 0x30664Cu) {
        ctx->pc = 0x30664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306648u;
        // 0x30664c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306650u;
        goto label_306650;
    }
    ctx->pc = 0x306648u;
    {
        const bool branch_taken_0x306648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306648u;
        // 0x30664c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306648) {
            ctx->pc = 0x3068B8u;
            goto label_3068b8;
        }
    }
    ctx->pc = 0x306650u;
label_306650:
    // 0x306650: 0xc0741a4  jal         func_1D0690
label_306654:
    if (ctx->pc == 0x306654u) {
        ctx->pc = 0x306654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306650u;
        // 0x306654: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306658u;
        goto label_306658;
    }
    ctx->pc = 0x306650u;
    SET_GPR_U32(ctx, 31, 0x306658u);
    ctx->pc = 0x306654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306650u;
    // 0x306654: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x306650u, 0x306658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306658u;
label_306658:
    // 0x306658: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x306658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30665c:
    // 0x30665c: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_306660:
    if (ctx->pc == 0x306660u) {
        ctx->pc = 0x306660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30665Cu;
        // 0x306660: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306664u;
        goto label_306664;
    }
    ctx->pc = 0x30665Cu;
    {
        const bool branch_taken_0x30665c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x306660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30665Cu;
        // 0x306660: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30665c) {
            ctx->pc = 0x306688u;
            goto label_306688;
        }
    }
    ctx->pc = 0x306664u;
label_306664:
    // 0x306664: 0xc096b00  jal         func_25AC00
label_306668:
    if (ctx->pc == 0x306668u) {
        ctx->pc = 0x30666Cu;
        goto label_30666c;
    }
    ctx->pc = 0x306664u;
    SET_GPR_U32(ctx, 31, 0x30666Cu);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x306664u, 0x30666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30666Cu;
label_30666c:
    // 0x30666c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x30666cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_306670:
    // 0x306670: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x306670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_306674:
    // 0x306674: 0x24637570  addiu       $v1, $v1, 0x7570
    ctx->pc = 0x306674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30064));
label_306678:
    // 0x306678: 0x24428290  addiu       $v0, $v0, -0x7D70
    ctx->pc = 0x306678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
label_30667c:
    // 0x30667c: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x30667cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
label_306680:
    // 0x306680: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x306680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_306684:
    // 0x306684: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x306684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_306688:
    // 0x306688: 0x12600087  beqz        $s3, . + 4 + (0x87 << 2)
label_30668c:
    if (ctx->pc == 0x30668Cu) {
        ctx->pc = 0x30668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306688u;
        // 0x30668c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306690u;
        goto label_306690;
    }
    ctx->pc = 0x306688u;
    {
        const bool branch_taken_0x306688 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306688u;
        // 0x30668c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306688) {
            ctx->pc = 0x3068A8u;
            goto label_3068a8;
        }
    }
    ctx->pc = 0x306690u;
label_306690:
    // 0x306690: 0xc09d4fc  jal         func_2753F0
label_306694:
    if (ctx->pc == 0x306694u) {
        ctx->pc = 0x306694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306690u;
        // 0x306694: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306698u;
        goto label_306698;
    }
    ctx->pc = 0x306690u;
    SET_GPR_U32(ctx, 31, 0x306698u);
    ctx->pc = 0x306694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306690u;
    // 0x306694: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x306690u, 0x306698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306698u;
label_306698:
    // 0x306698: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x306698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_30669c:
    // 0x30669c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x30669cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_3066a0:
    // 0x3066a0: 0xc09d524  jal         func_275490
label_3066a4:
    if (ctx->pc == 0x3066A4u) {
        ctx->pc = 0x3066A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066A0u;
        // 0x3066a4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3066A8u;
        goto label_3066a8;
    }
    ctx->pc = 0x3066A0u;
    SET_GPR_U32(ctx, 31, 0x3066A8u);
    ctx->pc = 0x3066A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3066A0u;
    // 0x3066a4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x3066A0u, 0x3066A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3066A8u;
label_3066a8:
    // 0x3066a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3066a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3066ac:
    // 0x3066ac: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_3066b0:
    if (ctx->pc == 0x3066B0u) {
        ctx->pc = 0x3066B4u;
        goto label_3066b4;
    }
    ctx->pc = 0x3066ACu;
    {
        const bool branch_taken_0x3066ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3066ac) {
            ctx->pc = 0x3066E8u;
            goto label_3066e8;
        }
    }
    ctx->pc = 0x3066B4u;
label_3066b4:
    // 0x3066b4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_3066b8:
    if (ctx->pc == 0x3066B8u) {
        ctx->pc = 0x3066BCu;
        goto label_3066bc;
    }
    ctx->pc = 0x3066B4u;
    {
        const bool branch_taken_0x3066b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3066b4) {
            ctx->pc = 0x3066D0u;
            goto label_3066d0;
        }
    }
    ctx->pc = 0x3066BCu;
label_3066bc:
    // 0x3066bc: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x3066bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3066c0:
    // 0x3066c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3066c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3066c4:
    // 0x3066c4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3066c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3066c8:
    // 0x3066c8: 0x320f809  jalr        $t9
label_3066cc:
    if (ctx->pc == 0x3066CCu) {
        ctx->pc = 0x3066CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066C8u;
        // 0x3066cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3066D0u;
        goto label_3066d0;
    }
    ctx->pc = 0x3066C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3066D0u);
        ctx->pc = 0x3066CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066C8u;
        // 0x3066cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3066C8u, 0x3066D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3066D0u;
label_3066d0:
    // 0x3066d0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x3066d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_3066d4:
    // 0x3066d4: 0xc09d4d8  jal         func_275360
label_3066d8:
    if (ctx->pc == 0x3066D8u) {
        ctx->pc = 0x3066D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066D4u;
        // 0x3066d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3066DCu;
        goto label_3066dc;
    }
    ctx->pc = 0x3066D4u;
    SET_GPR_U32(ctx, 31, 0x3066DCu);
    ctx->pc = 0x3066D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3066D4u;
    // 0x3066d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x3066D4u, 0x3066DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3066DCu;
label_3066dc:
    // 0x3066dc: 0x10000076  b           . + 4 + (0x76 << 2)
label_3066e0:
    if (ctx->pc == 0x3066E0u) {
        ctx->pc = 0x3066E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066DCu;
        // 0x3066e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3066E4u;
        goto label_3066e4;
    }
    ctx->pc = 0x3066DCu;
    {
        const bool branch_taken_0x3066dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3066E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066DCu;
        // 0x3066e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3066dc) {
            ctx->pc = 0x3068B8u;
            goto label_3068b8;
        }
    }
    ctx->pc = 0x3066E4u;
label_3066e4:
    // 0x3066e4: 0x0  nop
    ctx->pc = 0x3066e4u;
    // NOP
label_3066e8:
    // 0x3066e8: 0x92460013  lbu         $a2, 0x13($s2)
    ctx->pc = 0x3066e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
label_3066ec:
    // 0x3066ec: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x3066ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_3066f0:
    // 0x3066f0: 0xc09d524  jal         func_275490
label_3066f4:
    if (ctx->pc == 0x3066F4u) {
        ctx->pc = 0x3066F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066F0u;
        // 0x3066f4: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3066F8u;
        goto label_3066f8;
    }
    ctx->pc = 0x3066F0u;
    SET_GPR_U32(ctx, 31, 0x3066F8u);
    ctx->pc = 0x3066F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3066F0u;
    // 0x3066f4: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x3066F0u, 0x3066F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3066F8u;
label_3066f8:
    // 0x3066f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3066f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3066fc:
    // 0x3066fc: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_306700:
    if (ctx->pc == 0x306700u) {
        ctx->pc = 0x306704u;
        goto label_306704;
    }
    ctx->pc = 0x3066FCu;
    {
        const bool branch_taken_0x3066fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3066fc) {
            ctx->pc = 0x306738u;
            goto label_306738;
        }
    }
    ctx->pc = 0x306704u;
label_306704:
    // 0x306704: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_306708:
    if (ctx->pc == 0x306708u) {
        ctx->pc = 0x30670Cu;
        goto label_30670c;
    }
    ctx->pc = 0x306704u;
    {
        const bool branch_taken_0x306704 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x306704) {
            ctx->pc = 0x306720u;
            goto label_306720;
        }
    }
    ctx->pc = 0x30670Cu;
label_30670c:
    // 0x30670c: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x30670cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_306710:
    // 0x306710: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x306710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_306714:
    // 0x306714: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x306714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_306718:
    // 0x306718: 0x320f809  jalr        $t9
label_30671c:
    if (ctx->pc == 0x30671Cu) {
        ctx->pc = 0x30671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306718u;
        // 0x30671c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306720u;
        goto label_306720;
    }
    ctx->pc = 0x306718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306720u);
        ctx->pc = 0x30671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306718u;
        // 0x30671c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306718u, 0x306720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306720u;
label_306720:
    // 0x306720: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x306720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_306724:
    // 0x306724: 0xc09d4d8  jal         func_275360
label_306728:
    if (ctx->pc == 0x306728u) {
        ctx->pc = 0x306728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306724u;
        // 0x306728: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30672Cu;
        goto label_30672c;
    }
    ctx->pc = 0x306724u;
    SET_GPR_U32(ctx, 31, 0x30672Cu);
    ctx->pc = 0x306728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306724u;
    // 0x306728: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x306724u, 0x30672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30672Cu;
label_30672c:
    // 0x30672c: 0x10000062  b           . + 4 + (0x62 << 2)
label_306730:
    if (ctx->pc == 0x306730u) {
        ctx->pc = 0x306730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30672Cu;
        // 0x306730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306734u;
        goto label_306734;
    }
    ctx->pc = 0x30672Cu;
    {
        const bool branch_taken_0x30672c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30672Cu;
        // 0x306730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30672c) {
            ctx->pc = 0x3068B8u;
            goto label_3068b8;
        }
    }
    ctx->pc = 0x306734u;
label_306734:
    // 0x306734: 0x0  nop
    ctx->pc = 0x306734u;
    // NOP
label_306738:
    // 0x306738: 0x9626000e  lhu         $a2, 0xE($s1)
    ctx->pc = 0x306738u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_30673c:
    // 0x30673c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x30673cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_306740:
    // 0x306740: 0xc09d524  jal         func_275490
label_306744:
    if (ctx->pc == 0x306744u) {
        ctx->pc = 0x306744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306740u;
        // 0x306744: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306748u;
        goto label_306748;
    }
    ctx->pc = 0x306740u;
    SET_GPR_U32(ctx, 31, 0x306748u);
    ctx->pc = 0x306744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306740u;
    // 0x306744: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x306740u, 0x306748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306748u;
label_306748:
    // 0x306748: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x306748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30674c:
    // 0x30674c: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_306750:
    if (ctx->pc == 0x306750u) {
        ctx->pc = 0x306754u;
        goto label_306754;
    }
    ctx->pc = 0x30674Cu;
    {
        const bool branch_taken_0x30674c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30674c) {
            ctx->pc = 0x306788u;
            goto label_306788;
        }
    }
    ctx->pc = 0x306754u;
label_306754:
    // 0x306754: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_306758:
    if (ctx->pc == 0x306758u) {
        ctx->pc = 0x30675Cu;
        goto label_30675c;
    }
    ctx->pc = 0x306754u;
    {
        const bool branch_taken_0x306754 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x306754) {
            ctx->pc = 0x306770u;
            goto label_306770;
        }
    }
    ctx->pc = 0x30675Cu;
label_30675c:
    // 0x30675c: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x30675cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_306760:
    // 0x306760: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x306760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_306764:
    // 0x306764: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x306764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_306768:
    // 0x306768: 0x320f809  jalr        $t9
label_30676c:
    if (ctx->pc == 0x30676Cu) {
        ctx->pc = 0x30676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306768u;
        // 0x30676c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306770u;
        goto label_306770;
    }
    ctx->pc = 0x306768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306770u);
        ctx->pc = 0x30676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306768u;
        // 0x30676c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306768u, 0x306770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306770u;
label_306770:
    // 0x306770: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x306770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_306774:
    // 0x306774: 0xc09d4d8  jal         func_275360
label_306778:
    if (ctx->pc == 0x306778u) {
        ctx->pc = 0x306778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306774u;
        // 0x306778: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30677Cu;
        goto label_30677c;
    }
    ctx->pc = 0x306774u;
    SET_GPR_U32(ctx, 31, 0x30677Cu);
    ctx->pc = 0x306778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306774u;
    // 0x306778: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x306774u, 0x30677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30677Cu;
label_30677c:
    // 0x30677c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_306780:
    if (ctx->pc == 0x306780u) {
        ctx->pc = 0x306780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30677Cu;
        // 0x306780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306784u;
        goto label_306784;
    }
    ctx->pc = 0x30677Cu;
    {
        const bool branch_taken_0x30677c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30677Cu;
        // 0x306780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30677c) {
            ctx->pc = 0x3068B8u;
            goto label_3068b8;
        }
    }
    ctx->pc = 0x306784u;
label_306784:
    // 0x306784: 0x0  nop
    ctx->pc = 0x306784u;
    // NOP
label_306788:
    // 0x306788: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x306788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30678c:
    // 0x30678c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x30678cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_306790:
    // 0x306790: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x306790u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_306794:
    // 0x306794: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x306794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_306798:
    // 0x306798: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x306798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_30679c:
    // 0x30679c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x30679cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3067a0:
    // 0x3067a0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x3067a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3067a4:
    // 0x3067a4: 0xc096b38  jal         func_25ACE0
label_3067a8:
    if (ctx->pc == 0x3067A8u) {
        ctx->pc = 0x3067A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067A4u;
        // 0x3067a8: 0x268b0020  addiu       $t3, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067ACu;
        goto label_3067ac;
    }
    ctx->pc = 0x3067A4u;
    SET_GPR_U32(ctx, 31, 0x3067ACu);
    ctx->pc = 0x3067A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3067A4u;
    // 0x3067a8: 0x268b0020  addiu       $t3, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x3067A4u, 0x3067ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3067ACu;
label_3067ac:
    // 0x3067ac: 0x92620050  lbu         $v0, 0x50($s3)
    ctx->pc = 0x3067acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
label_3067b0:
    // 0x3067b0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3067b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3067b4:
    // 0x3067b4: 0xa2620050  sb          $v0, 0x50($s3)
    ctx->pc = 0x3067b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
label_3067b8:
    // 0x3067b8: 0xa660005a  sh          $zero, 0x5A($s3)
    ctx->pc = 0x3067b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 90), (uint16_t)GPR_U32(ctx, 0));
label_3067bc:
    // 0x3067bc: 0xa6600058  sh          $zero, 0x58($s3)
    ctx->pc = 0x3067bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 88), (uint16_t)GPR_U32(ctx, 0));
label_3067c0:
    // 0x3067c0: 0xa6600056  sh          $zero, 0x56($s3)
    ctx->pc = 0x3067c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
label_3067c4:
    // 0x3067c4: 0xa2600051  sb          $zero, 0x51($s3)
    ctx->pc = 0x3067c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 81), (uint8_t)GPR_U32(ctx, 0));
label_3067c8:
    // 0x3067c8: 0xae720070  sw          $s2, 0x70($s3)
    ctx->pc = 0x3067c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 18));
label_3067cc:
    // 0x3067cc: 0xae710074  sw          $s1, 0x74($s3)
    ctx->pc = 0x3067ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 17));
label_3067d0:
    // 0x3067d0: 0xae700078  sw          $s0, 0x78($s3)
    ctx->pc = 0x3067d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 16));
label_3067d4:
    // 0x3067d4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x3067d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_3067d8:
    // 0x3067d8: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x3067d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
label_3067dc:
    // 0x3067dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3067dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3067e0:
    // 0x3067e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3067e4:
    if (ctx->pc == 0x3067E4u) {
        ctx->pc = 0x3067E8u;
        goto label_3067e8;
    }
    ctx->pc = 0x3067E0u;
    {
        const bool branch_taken_0x3067e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3067e0) {
            ctx->pc = 0x306800u;
            goto label_306800;
        }
    }
    ctx->pc = 0x3067E8u;
label_3067e8:
    // 0x3067e8: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x3067e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_3067ec:
    // 0x3067ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3067ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3067f0:
    // 0x3067f0: 0xae620084  sw          $v0, 0x84($s3)
    ctx->pc = 0x3067f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
label_3067f4:
    // 0x3067f4: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x3067f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3067f8:
    // 0x3067f8: 0xe6600080  swc1        $f0, 0x80($s3)
    ctx->pc = 0x3067f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
label_3067fc:
    // 0x3067fc: 0x0  nop
    ctx->pc = 0x3067fcu;
    // NOP
label_306800:
    // 0x306800: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x306800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_306804:
    // 0x306804: 0x9224000c  lbu         $a0, 0xC($s1)
    ctx->pc = 0x306804u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_306808:
    // 0x306808: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x306808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30680c:
    // 0x30680c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30680cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_306810:
    // 0x306810: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x306810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_306814:
    // 0x306814: 0xc0741a4  jal         func_1D0690
label_306818:
    if (ctx->pc == 0x306818u) {
        ctx->pc = 0x306818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306814u;
        // 0x306818: 0x822018  mult        $a0, $a0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30681Cu;
        goto label_30681c;
    }
    ctx->pc = 0x306814u;
    SET_GPR_U32(ctx, 31, 0x30681Cu);
    ctx->pc = 0x306818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306814u;
    // 0x306818: 0x822018  mult        $a0, $a0, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x306814u, 0x30681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30681Cu;
label_30681c:
    // 0x30681c: 0xae62007c  sw          $v0, 0x7C($s3)
    ctx->pc = 0x30681cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 2));
label_306820:
    // 0x306820: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x306820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_306824:
    // 0x306824: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_306828:
    if (ctx->pc == 0x306828u) {
        ctx->pc = 0x306828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306824u;
        // 0x306828: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30682Cu;
        goto label_30682c;
    }
    ctx->pc = 0x306824u;
    {
        const bool branch_taken_0x306824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306824u;
        // 0x306828: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306824) {
            ctx->pc = 0x306848u;
            goto label_306848;
        }
    }
    ctx->pc = 0x30682Cu;
label_30682c:
    // 0x30682c: 0xc074268  jal         func_1D09A0
label_306830:
    if (ctx->pc == 0x306830u) {
        ctx->pc = 0x306834u;
        goto label_306834;
    }
    ctx->pc = 0x30682Cu;
    SET_GPR_U32(ctx, 31, 0x306834u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x30682Cu, 0x306834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306834u;
label_306834:
    // 0x306834: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x306834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_306838:
    // 0x306838: 0xc09d4d8  jal         func_275360
label_30683c:
    if (ctx->pc == 0x30683Cu) {
        ctx->pc = 0x30683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306838u;
        // 0x30683c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306840u;
        goto label_306840;
    }
    ctx->pc = 0x306838u;
    SET_GPR_U32(ctx, 31, 0x306840u);
    ctx->pc = 0x30683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306838u;
    // 0x30683c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x306838u, 0x306840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306840u;
label_306840:
    // 0x306840: 0x1000001d  b           . + 4 + (0x1D << 2)
label_306844:
    if (ctx->pc == 0x306844u) {
        ctx->pc = 0x306844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306840u;
        // 0x306844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306848u;
        goto label_306848;
    }
    ctx->pc = 0x306840u;
    {
        const bool branch_taken_0x306840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306840u;
        // 0x306844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306840) {
            ctx->pc = 0x3068B8u;
            goto label_3068b8;
        }
    }
    ctx->pc = 0x306848u;
label_306848:
    // 0x306848: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x306848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_30684c:
    // 0x30684c: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x30684cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_306850:
    // 0x306850: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x306850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_306854:
    // 0x306854: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x306854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_306858:
    // 0x306858: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_30685c:
    if (ctx->pc == 0x30685Cu) {
        ctx->pc = 0x30685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306858u;
        // 0x30685c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306860u;
        goto label_306860;
    }
    ctx->pc = 0x306858u;
    {
        const bool branch_taken_0x306858 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306858u;
        // 0x30685c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306858) {
            ctx->pc = 0x306890u;
            goto label_306890;
        }
    }
    ctx->pc = 0x306860u;
label_306860:
    // 0x306860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306864:
    // 0x306864: 0x24047ffe  addiu       $a0, $zero, 0x7FFE
    ctx->pc = 0x306864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_306868:
    // 0x306868: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x306868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_30686c:
    // 0x30686c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30686cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_306870:
    // 0x306870: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x306870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_306874:
    // 0x306874: 0xa4440034  sh          $a0, 0x34($v0)
    ctx->pc = 0x306874u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 4));
label_306878:
    // 0x306878: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x306878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_30687c:
    // 0x30687c: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x30687cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_306880:
    // 0x306880: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x306880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_306884:
    // 0x306884: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x306884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_306888:
    // 0x306888: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_30688c:
    if (ctx->pc == 0x30688Cu) {
        ctx->pc = 0x30688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306888u;
        // 0x30688c: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306890u;
        goto label_306890;
    }
    ctx->pc = 0x306888u;
    {
        const bool branch_taken_0x306888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306888u;
        // 0x30688c: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306888) {
            ctx->pc = 0x306868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306868;
        }
    }
    ctx->pc = 0x306890u;
label_306890:
    // 0x306890: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x306890u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_306894:
    // 0x306894: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x306894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_306898:
    // 0x306898: 0xc09d4d8  jal         func_275360
label_30689c:
    if (ctx->pc == 0x30689Cu) {
        ctx->pc = 0x30689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306898u;
        // 0x30689c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068A0u;
        goto label_3068a0;
    }
    ctx->pc = 0x306898u;
    SET_GPR_U32(ctx, 31, 0x3068A0u);
    ctx->pc = 0x30689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306898u;
    // 0x30689c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x306898u, 0x3068A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3068A0u;
label_3068a0:
    // 0x3068a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3068a4:
    if (ctx->pc == 0x3068A4u) {
        ctx->pc = 0x3068A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068A0u;
        // 0x3068a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068A8u;
        goto label_3068a8;
    }
    ctx->pc = 0x3068A0u;
    {
        const bool branch_taken_0x3068a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3068A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068A0u;
        // 0x3068a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068a0) {
            ctx->pc = 0x3068B8u;
            goto label_3068b8;
        }
    }
    ctx->pc = 0x3068A8u;
label_3068a8:
    // 0x3068a8: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x3068a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_3068ac:
    // 0x3068ac: 0xc09d4d8  jal         func_275360
label_3068b0:
    if (ctx->pc == 0x3068B0u) {
        ctx->pc = 0x3068B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068ACu;
        // 0x3068b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068B4u;
        goto label_3068b4;
    }
    ctx->pc = 0x3068ACu;
    SET_GPR_U32(ctx, 31, 0x3068B4u);
    ctx->pc = 0x3068B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3068ACu;
    // 0x3068b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x3068ACu, 0x3068B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3068B4u;
label_3068b4:
    // 0x3068b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3068b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3068b8:
    // 0x3068b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3068b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3068bc:
    // 0x3068bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3068bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3068c0:
    // 0x3068c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3068c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3068c4:
    // 0x3068c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3068c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3068c8:
    // 0x3068c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3068c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3068cc:
    // 0x3068cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3068ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3068d0:
    // 0x3068d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3068d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3068d4:
    // 0x3068d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3068d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3068d8:
    // 0x3068d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3068d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3068dc:
    // 0x3068dc: 0x3e00008  jr          $ra
label_3068e0:
    if (ctx->pc == 0x3068E0u) {
        ctx->pc = 0x3068E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068DCu;
        // 0x3068e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068E4u;
        goto label_fallthrough_0x3068dc;
    }
    ctx->pc = 0x3068DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3068E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068DCu;
        // 0x3068e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3068DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3068dc:
    ctx->pc = 0x3068E4u;
}
