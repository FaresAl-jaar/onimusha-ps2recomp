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

// Function: sub_00216618
// Address: 0x216618 - 0x216970
void sub_00216618_0x216618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216618_0x216618");
#endif

    switch (ctx->pc) {
        case 0x216618u: goto label_216618;
        case 0x21661cu: goto label_21661c;
        case 0x216620u: goto label_216620;
        case 0x216624u: goto label_216624;
        case 0x216628u: goto label_216628;
        case 0x21662cu: goto label_21662c;
        case 0x216630u: goto label_216630;
        case 0x216634u: goto label_216634;
        case 0x216638u: goto label_216638;
        case 0x21663cu: goto label_21663c;
        case 0x216640u: goto label_216640;
        case 0x216644u: goto label_216644;
        case 0x216648u: goto label_216648;
        case 0x21664cu: goto label_21664c;
        case 0x216650u: goto label_216650;
        case 0x216654u: goto label_216654;
        case 0x216658u: goto label_216658;
        case 0x21665cu: goto label_21665c;
        case 0x216660u: goto label_216660;
        case 0x216664u: goto label_216664;
        case 0x216668u: goto label_216668;
        case 0x21666cu: goto label_21666c;
        case 0x216670u: goto label_216670;
        case 0x216674u: goto label_216674;
        case 0x216678u: goto label_216678;
        case 0x21667cu: goto label_21667c;
        case 0x216680u: goto label_216680;
        case 0x216684u: goto label_216684;
        case 0x216688u: goto label_216688;
        case 0x21668cu: goto label_21668c;
        case 0x216690u: goto label_216690;
        case 0x216694u: goto label_216694;
        case 0x216698u: goto label_216698;
        case 0x21669cu: goto label_21669c;
        case 0x2166a0u: goto label_2166a0;
        case 0x2166a4u: goto label_2166a4;
        case 0x2166a8u: goto label_2166a8;
        case 0x2166acu: goto label_2166ac;
        case 0x2166b0u: goto label_2166b0;
        case 0x2166b4u: goto label_2166b4;
        case 0x2166b8u: goto label_2166b8;
        case 0x2166bcu: goto label_2166bc;
        case 0x2166c0u: goto label_2166c0;
        case 0x2166c4u: goto label_2166c4;
        case 0x2166c8u: goto label_2166c8;
        case 0x2166ccu: goto label_2166cc;
        case 0x2166d0u: goto label_2166d0;
        case 0x2166d4u: goto label_2166d4;
        case 0x2166d8u: goto label_2166d8;
        case 0x2166dcu: goto label_2166dc;
        case 0x2166e0u: goto label_2166e0;
        case 0x2166e4u: goto label_2166e4;
        case 0x2166e8u: goto label_2166e8;
        case 0x2166ecu: goto label_2166ec;
        case 0x2166f0u: goto label_2166f0;
        case 0x2166f4u: goto label_2166f4;
        case 0x2166f8u: goto label_2166f8;
        case 0x2166fcu: goto label_2166fc;
        case 0x216700u: goto label_216700;
        case 0x216704u: goto label_216704;
        case 0x216708u: goto label_216708;
        case 0x21670cu: goto label_21670c;
        case 0x216710u: goto label_216710;
        case 0x216714u: goto label_216714;
        case 0x216718u: goto label_216718;
        case 0x21671cu: goto label_21671c;
        case 0x216720u: goto label_216720;
        case 0x216724u: goto label_216724;
        case 0x216728u: goto label_216728;
        case 0x21672cu: goto label_21672c;
        case 0x216730u: goto label_216730;
        case 0x216734u: goto label_216734;
        case 0x216738u: goto label_216738;
        case 0x21673cu: goto label_21673c;
        case 0x216740u: goto label_216740;
        case 0x216744u: goto label_216744;
        case 0x216748u: goto label_216748;
        case 0x21674cu: goto label_21674c;
        case 0x216750u: goto label_216750;
        case 0x216754u: goto label_216754;
        case 0x216758u: goto label_216758;
        case 0x21675cu: goto label_21675c;
        case 0x216760u: goto label_216760;
        case 0x216764u: goto label_216764;
        case 0x216768u: goto label_216768;
        case 0x21676cu: goto label_21676c;
        case 0x216770u: goto label_216770;
        case 0x216774u: goto label_216774;
        case 0x216778u: goto label_216778;
        case 0x21677cu: goto label_21677c;
        case 0x216780u: goto label_216780;
        case 0x216784u: goto label_216784;
        case 0x216788u: goto label_216788;
        case 0x21678cu: goto label_21678c;
        case 0x216790u: goto label_216790;
        case 0x216794u: goto label_216794;
        case 0x216798u: goto label_216798;
        case 0x21679cu: goto label_21679c;
        case 0x2167a0u: goto label_2167a0;
        case 0x2167a4u: goto label_2167a4;
        case 0x2167a8u: goto label_2167a8;
        case 0x2167acu: goto label_2167ac;
        case 0x2167b0u: goto label_2167b0;
        case 0x2167b4u: goto label_2167b4;
        case 0x2167b8u: goto label_2167b8;
        case 0x2167bcu: goto label_2167bc;
        case 0x2167c0u: goto label_2167c0;
        case 0x2167c4u: goto label_2167c4;
        case 0x2167c8u: goto label_2167c8;
        case 0x2167ccu: goto label_2167cc;
        case 0x2167d0u: goto label_2167d0;
        case 0x2167d4u: goto label_2167d4;
        case 0x2167d8u: goto label_2167d8;
        case 0x2167dcu: goto label_2167dc;
        case 0x2167e0u: goto label_2167e0;
        case 0x2167e4u: goto label_2167e4;
        case 0x2167e8u: goto label_2167e8;
        case 0x2167ecu: goto label_2167ec;
        case 0x2167f0u: goto label_2167f0;
        case 0x2167f4u: goto label_2167f4;
        case 0x2167f8u: goto label_2167f8;
        case 0x2167fcu: goto label_2167fc;
        case 0x216800u: goto label_216800;
        case 0x216804u: goto label_216804;
        case 0x216808u: goto label_216808;
        case 0x21680cu: goto label_21680c;
        case 0x216810u: goto label_216810;
        case 0x216814u: goto label_216814;
        case 0x216818u: goto label_216818;
        case 0x21681cu: goto label_21681c;
        case 0x216820u: goto label_216820;
        case 0x216824u: goto label_216824;
        case 0x216828u: goto label_216828;
        case 0x21682cu: goto label_21682c;
        case 0x216830u: goto label_216830;
        case 0x216834u: goto label_216834;
        case 0x216838u: goto label_216838;
        case 0x21683cu: goto label_21683c;
        case 0x216840u: goto label_216840;
        case 0x216844u: goto label_216844;
        case 0x216848u: goto label_216848;
        case 0x21684cu: goto label_21684c;
        case 0x216850u: goto label_216850;
        case 0x216854u: goto label_216854;
        case 0x216858u: goto label_216858;
        case 0x21685cu: goto label_21685c;
        case 0x216860u: goto label_216860;
        case 0x216864u: goto label_216864;
        case 0x216868u: goto label_216868;
        case 0x21686cu: goto label_21686c;
        case 0x216870u: goto label_216870;
        case 0x216874u: goto label_216874;
        case 0x216878u: goto label_216878;
        case 0x21687cu: goto label_21687c;
        case 0x216880u: goto label_216880;
        case 0x216884u: goto label_216884;
        case 0x216888u: goto label_216888;
        case 0x21688cu: goto label_21688c;
        case 0x216890u: goto label_216890;
        case 0x216894u: goto label_216894;
        case 0x216898u: goto label_216898;
        case 0x21689cu: goto label_21689c;
        case 0x2168a0u: goto label_2168a0;
        case 0x2168a4u: goto label_2168a4;
        case 0x2168a8u: goto label_2168a8;
        case 0x2168acu: goto label_2168ac;
        case 0x2168b0u: goto label_2168b0;
        case 0x2168b4u: goto label_2168b4;
        case 0x2168b8u: goto label_2168b8;
        case 0x2168bcu: goto label_2168bc;
        case 0x2168c0u: goto label_2168c0;
        case 0x2168c4u: goto label_2168c4;
        case 0x2168c8u: goto label_2168c8;
        case 0x2168ccu: goto label_2168cc;
        case 0x2168d0u: goto label_2168d0;
        case 0x2168d4u: goto label_2168d4;
        case 0x2168d8u: goto label_2168d8;
        case 0x2168dcu: goto label_2168dc;
        case 0x2168e0u: goto label_2168e0;
        case 0x2168e4u: goto label_2168e4;
        case 0x2168e8u: goto label_2168e8;
        case 0x2168ecu: goto label_2168ec;
        case 0x2168f0u: goto label_2168f0;
        case 0x2168f4u: goto label_2168f4;
        case 0x2168f8u: goto label_2168f8;
        case 0x2168fcu: goto label_2168fc;
        case 0x216900u: goto label_216900;
        case 0x216904u: goto label_216904;
        case 0x216908u: goto label_216908;
        case 0x21690cu: goto label_21690c;
        case 0x216910u: goto label_216910;
        case 0x216914u: goto label_216914;
        case 0x216918u: goto label_216918;
        case 0x21691cu: goto label_21691c;
        case 0x216920u: goto label_216920;
        case 0x216924u: goto label_216924;
        case 0x216928u: goto label_216928;
        case 0x21692cu: goto label_21692c;
        case 0x216930u: goto label_216930;
        case 0x216934u: goto label_216934;
        case 0x216938u: goto label_216938;
        case 0x21693cu: goto label_21693c;
        case 0x216940u: goto label_216940;
        case 0x216944u: goto label_216944;
        case 0x216948u: goto label_216948;
        case 0x21694cu: goto label_21694c;
        case 0x216950u: goto label_216950;
        case 0x216954u: goto label_216954;
        case 0x216958u: goto label_216958;
        case 0x21695cu: goto label_21695c;
        case 0x216960u: goto label_216960;
        case 0x216964u: goto label_216964;
        case 0x216968u: goto label_216968;
        case 0x21696cu: goto label_21696c;
        default: break;
    }

    ctx->pc = 0x216618u;

label_216618:
    // 0x216618: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x216618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_21661c:
    // 0x21661c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x21661cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_216620:
    // 0x216620: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x216620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_216624:
    // 0x216624: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x216624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_216628:
    // 0x216628: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x216628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_21662c:
    // 0x21662c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21662cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_216630:
    // 0x216630: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x216630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_216634:
    // 0x216634: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x216634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_216638:
    // 0x216638: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x216638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_21663c:
    // 0x21663c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x21663cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_216640:
    // 0x216640: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x216640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_216644:
    // 0x216644: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x216644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_216648:
    // 0x216648: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x216648u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21664c:
    // 0x21664c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x21664cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_216650:
    // 0x216650: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x216650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_216654:
    // 0x216654: 0x8e931fc0  lw          $s3, 0x1FC0($s4)
    ctx->pc = 0x216654u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8128)));
label_216658:
    // 0x216658: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x216658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_21665c:
    // 0x21665c: 0x26771080  addiu       $s7, $s3, 0x1080
    ctx->pc = 0x21665cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 4224));
label_216660:
    // 0x216660: 0x2675008c  addiu       $s5, $s3, 0x8C
    ctx->pc = 0x216660u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
label_216664:
    // 0x216664: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x216664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_216668:
    // 0x216668: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x216668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_21666c:
    // 0x21666c: 0xaee00010  sw          $zero, 0x10($s7)
    ctx->pc = 0x21666cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 0));
label_216670:
    // 0x216670: 0x8ee5000c  lw          $a1, 0xC($s7)
    ctx->pc = 0x216670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_216674:
    // 0x216674: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x216674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_216678:
    // 0x216678: 0xc07fb98  jal         func_1FEE60
label_21667c:
    if (ctx->pc == 0x21667Cu) {
        ctx->pc = 0x21667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216678u;
        // 0x21667c: 0x8ee60008  lw          $a2, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216680u;
        goto label_216680;
    }
    ctx->pc = 0x216678u;
    SET_GPR_U32(ctx, 31, 0x216680u);
    ctx->pc = 0x21667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216678u;
    // 0x21667c: 0x8ee60008  lw          $a2, 0x8($s7) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE60u, 0x216678u, 0x216680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216680u;
label_216680:
    // 0x216680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216684:
    // 0x216684: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x216684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216688:
    // 0x216688: 0xc0944ce  jal         func_251338
label_21668c:
    if (ctx->pc == 0x21668Cu) {
        ctx->pc = 0x21668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216688u;
        // 0x21668c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216690u;
        goto label_216690;
    }
    ctx->pc = 0x216688u;
    SET_GPR_U32(ctx, 31, 0x216690u);
    ctx->pc = 0x21668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216688u;
    // 0x21668c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251338u, 0x216688u, 0x216690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216690u;
label_216690:
    // 0x216690: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216694:
    // 0x216694: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x216694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_216698:
    // 0x216698: 0xc07fba8  jal         func_1FEEA0
label_21669c:
    if (ctx->pc == 0x21669Cu) {
        ctx->pc = 0x21669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216698u;
        // 0x21669c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2166A0u;
        goto label_2166a0;
    }
    ctx->pc = 0x216698u;
    SET_GPR_U32(ctx, 31, 0x2166A0u);
    ctx->pc = 0x21669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216698u;
    // 0x21669c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEA0u, 0x216698u, 0x2166A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166A0u;
label_2166a0:
    // 0x2166a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2166a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2166a4:
    // 0x2166a4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2166a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_2166a8:
    // 0x2166a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2166a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2166ac:
    // 0x2166ac: 0xc0944ce  jal         func_251338
label_2166b0:
    if (ctx->pc == 0x2166B0u) {
        ctx->pc = 0x2166B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166ACu;
        // 0x2166b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2166B4u;
        goto label_2166b4;
    }
    ctx->pc = 0x2166ACu;
    SET_GPR_U32(ctx, 31, 0x2166B4u);
    ctx->pc = 0x2166B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166ACu;
    // 0x2166b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251338u, 0x2166ACu, 0x2166B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166B4u;
label_2166b4:
    // 0x2166b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2166b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2166b8:
    // 0x2166b8: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x2166b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2166bc:
    // 0x2166bc: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x2166bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2166c0:
    // 0x2166c0: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x2166c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
label_2166c4:
    // 0x2166c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2166c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2166c8:
    // 0x2166c8: 0xc085960  jal         func_216580
label_2166cc:
    if (ctx->pc == 0x2166CCu) {
        ctx->pc = 0x2166CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166C8u;
        // 0x2166cc: 0x34e70f04  ori         $a3, $a3, 0xF04 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3844);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2166D0u;
        goto label_2166d0;
    }
    ctx->pc = 0x2166C8u;
    SET_GPR_U32(ctx, 31, 0x2166D0u);
    ctx->pc = 0x2166CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166C8u;
    // 0x2166cc: 0x34e70f04  ori         $a3, $a3, 0xF04 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3844);
    ctx->in_delay_slot = false;
    ctx->pc = 0x216580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216580u, 0x2166C8u, 0x2166D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166D0u;
label_2166d0:
    // 0x2166d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2166d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2166d4:
    // 0x2166d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2166d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2166d8:
    // 0x2166d8: 0xc085936  jal         func_2164D8
label_2166dc:
    if (ctx->pc == 0x2166DCu) {
        ctx->pc = 0x2166DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166D8u;
        // 0x2166dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2166E0u;
        goto label_2166e0;
    }
    ctx->pc = 0x2166D8u;
    SET_GPR_U32(ctx, 31, 0x2166E0u);
    ctx->pc = 0x2166DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166D8u;
    // 0x2166dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2164D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2164D8u, 0x2166D8u, 0x2166E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166E0u;
label_2166e0:
    // 0x2166e0: 0x16000097  bnez        $s0, . + 4 + (0x97 << 2)
label_2166e4:
    if (ctx->pc == 0x2166E4u) {
        ctx->pc = 0x2166E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166E0u;
        // 0x2166e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2166E8u;
        goto label_2166e8;
    }
    ctx->pc = 0x2166E0u;
    {
        const bool branch_taken_0x2166e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2166E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166E0u;
        // 0x2166e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166e0) {
            ctx->pc = 0x216940u;
            goto label_216940;
        }
    }
    ctx->pc = 0x2166E8u;
label_2166e8:
    // 0x2166e8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2166e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2166ec:
    // 0x2166ec: 0x2410fffe  addiu       $s0, $zero, -0x2
    ctx->pc = 0x2166ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2166f0:
    // 0x2166f0: 0x10700093  beq         $v1, $s0, . + 4 + (0x93 << 2)
label_2166f4:
    if (ctx->pc == 0x2166F4u) {
        ctx->pc = 0x2166F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166F0u;
        // 0x2166f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2166F8u;
        goto label_2166f8;
    }
    ctx->pc = 0x2166F0u;
    {
        const bool branch_taken_0x2166f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2166F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166F0u;
        // 0x2166f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166f0) {
            ctx->pc = 0x216940u;
            goto label_216940;
        }
    }
    ctx->pc = 0x2166F8u;
label_2166f8:
    // 0x2166f8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2166f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2166fc:
    // 0x2166fc: 0xc07fae2  jal         func_1FEB88
label_216700:
    if (ctx->pc == 0x216700u) {
        ctx->pc = 0x216700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166FCu;
        // 0x216700: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216704u;
        goto label_216704;
    }
    ctx->pc = 0x2166FCu;
    SET_GPR_U32(ctx, 31, 0x216704u);
    ctx->pc = 0x216700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166FCu;
    // 0x216700: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB88u, 0x2166FCu, 0x216704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216704u;
label_216704:
    // 0x216704: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x216704u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216708:
    // 0x216708: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_21670c:
    if (ctx->pc == 0x21670Cu) {
        ctx->pc = 0x21670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216708u;
        // 0x21670c: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216710u;
        goto label_216710;
    }
    ctx->pc = 0x216708u;
    {
        const bool branch_taken_0x216708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216708u;
        // 0x21670c: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216708) {
            ctx->pc = 0x216728u;
            goto label_216728;
        }
    }
    ctx->pc = 0x216710u;
label_216710:
    // 0x216710: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x216710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_216714:
    // 0x216714: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x216714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_216718:
    // 0x216718: 0xc0848e0  jal         func_212380
label_21671c:
    if (ctx->pc == 0x21671Cu) {
        ctx->pc = 0x21671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216718u;
        // 0x21671c: 0x34a50f05  ori         $a1, $a1, 0xF05 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3845);
        ctx->in_delay_slot = false;
        ctx->pc = 0x216720u;
        goto label_216720;
    }
    ctx->pc = 0x216718u;
    SET_GPR_U32(ctx, 31, 0x216720u);
    ctx->pc = 0x21671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216718u;
    // 0x21671c: 0x34a50f05  ori         $a1, $a1, 0xF05 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3845);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x216718u, 0x216720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216720u;
label_216720:
    // 0x216720: 0x10000088  b           . + 4 + (0x88 << 2)
label_216724:
    if (ctx->pc == 0x216724u) {
        ctx->pc = 0x216724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216720u;
        // 0x216724: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216728u;
        goto label_216728;
    }
    ctx->pc = 0x216720u;
    {
        const bool branch_taken_0x216720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216720u;
        // 0x216724: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216720) {
            ctx->pc = 0x216944u;
            goto label_216944;
        }
    }
    ctx->pc = 0x216728u;
label_216728:
    // 0x216728: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x216728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_21672c:
    // 0x21672c: 0x30710040  andi        $s1, $v1, 0x40
    ctx->pc = 0x21672cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_216730:
    // 0x216730: 0x5220001e  beql        $s1, $zero, . + 4 + (0x1E << 2)
label_216734:
    if (ctx->pc == 0x216734u) {
        ctx->pc = 0x216734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216730u;
        // 0x216734: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216738u;
        goto label_216738;
    }
    ctx->pc = 0x216730u;
    {
        const bool branch_taken_0x216730 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x216730) {
            ctx->pc = 0x216734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216730u;
            // 0x216734: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2167ACu;
            goto label_2167ac;
        }
    }
    ctx->pc = 0x216738u;
label_216738:
    // 0x216738: 0x8e84090c  lw          $a0, 0x90C($s4)
    ctx->pc = 0x216738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2316)));
label_21673c:
    // 0x21673c: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
label_216740:
    if (ctx->pc == 0x216740u) {
        ctx->pc = 0x216740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21673Cu;
        // 0x216740: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216744u;
        goto label_216744;
    }
    ctx->pc = 0x21673Cu;
    {
        const bool branch_taken_0x21673c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x216740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21673Cu;
        // 0x216740: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21673c) {
            ctx->pc = 0x216768u;
            goto label_216768;
        }
    }
    ctx->pc = 0x216744u;
label_216744:
    // 0x216744: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x216744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_216748:
    // 0x216748: 0x5483007d  bnel        $a0, $v1, . + 4 + (0x7D << 2)
label_21674c:
    if (ctx->pc == 0x21674Cu) {
        ctx->pc = 0x21674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216748u;
        // 0x21674c: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216750u;
        goto label_216750;
    }
    ctx->pc = 0x216748u;
    {
        const bool branch_taken_0x216748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x216748) {
            ctx->pc = 0x21674Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216748u;
            // 0x21674c: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216940u;
            goto label_216940;
        }
    }
    ctx->pc = 0x216750u;
label_216750:
    // 0x216750: 0x8e840910  lw          $a0, 0x910($s4)
    ctx->pc = 0x216750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2320)));
label_216754:
    // 0x216754: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x216754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_216758:
    // 0x216758: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_21675c:
    if (ctx->pc == 0x21675Cu) {
        ctx->pc = 0x216760u;
        goto label_216760;
    }
    ctx->pc = 0x216758u;
    {
        const bool branch_taken_0x216758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x216758) {
            ctx->pc = 0x216768u;
            goto label_216768;
        }
    }
    ctx->pc = 0x216760u;
label_216760:
    // 0x216760: 0x10000077  b           . + 4 + (0x77 << 2)
label_216764:
    if (ctx->pc == 0x216764u) {
        ctx->pc = 0x216764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216760u;
        // 0x216764: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216768u;
        goto label_216768;
    }
    ctx->pc = 0x216760u;
    {
        const bool branch_taken_0x216760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216760u;
        // 0x216764: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216760) {
            ctx->pc = 0x216940u;
            goto label_216940;
        }
    }
    ctx->pc = 0x216768u;
label_216768:
    // 0x216768: 0xc087ed0  jal         func_21FB40
label_21676c:
    if (ctx->pc == 0x21676Cu) {
        ctx->pc = 0x21676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216768u;
        // 0x21676c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216770u;
        goto label_216770;
    }
    ctx->pc = 0x216768u;
    SET_GPR_U32(ctx, 31, 0x216770u);
    ctx->pc = 0x21676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216768u;
    // 0x21676c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x216768u, 0x216770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216770u;
label_216770:
    // 0x216770: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x216770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_216774:
    // 0x216774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x216774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216778:
    // 0x216778: 0xc087ed0  jal         func_21FB40
label_21677c:
    if (ctx->pc == 0x21677Cu) {
        ctx->pc = 0x21677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216778u;
        // 0x21677c: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216780u;
        goto label_216780;
    }
    ctx->pc = 0x216778u;
    SET_GPR_U32(ctx, 31, 0x216780u);
    ctx->pc = 0x21677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216778u;
    // 0x21677c: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x216778u, 0x216780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216780u;
label_216780:
    // 0x216780: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_216784:
    if (ctx->pc == 0x216784u) {
        ctx->pc = 0x216784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216780u;
        // 0x216784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216788u;
        goto label_216788;
    }
    ctx->pc = 0x216780u;
    {
        const bool branch_taken_0x216780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x216784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216780u;
        // 0x216784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216780) {
            ctx->pc = 0x2167A8u;
            goto label_2167a8;
        }
    }
    ctx->pc = 0x216788u;
label_216788:
    // 0x216788: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x216788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_21678c:
    // 0x21678c: 0x200f809  jalr        $s0
label_216790:
    if (ctx->pc == 0x216790u) {
        ctx->pc = 0x216790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21678Cu;
        // 0x216790: 0x8ea60004  lw          $a2, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216794u;
        goto label_216794;
    }
    ctx->pc = 0x21678Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x216794u);
        ctx->pc = 0x216790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21678Cu;
        // 0x216790: 0x8ea60004  lw          $a2, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21678Cu, 0x216794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216794u;
label_216794:
    // 0x216794: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_216798:
    if (ctx->pc == 0x216798u) {
        ctx->pc = 0x216798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216794u;
        // 0x216798: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21679Cu;
        goto label_21679c;
    }
    ctx->pc = 0x216794u;
    {
        const bool branch_taken_0x216794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216794u;
        // 0x216798: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216794) {
            ctx->pc = 0x2167A8u;
            goto label_2167a8;
        }
    }
    ctx->pc = 0x21679Cu;
label_21679c:
    // 0x21679c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21679cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2167a0:
    // 0x2167a0: 0x10000067  b           . + 4 + (0x67 << 2)
label_2167a4:
    if (ctx->pc == 0x2167A4u) {
        ctx->pc = 0x2167A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167A0u;
        // 0x2167a4: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2167A8u;
        goto label_2167a8;
    }
    ctx->pc = 0x2167A0u;
    {
        const bool branch_taken_0x2167a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2167A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167A0u;
        // 0x2167a4: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2167a0) {
            ctx->pc = 0x216940u;
            goto label_216940;
        }
    }
    ctx->pc = 0x2167A8u;
label_2167a8:
    // 0x2167a8: 0x8ea40018  lw          $a0, 0x18($s5)
    ctx->pc = 0x2167a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_2167ac:
    // 0x2167ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2167acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2167b0:
    // 0x2167b0: 0x54860003  bnel        $a0, $a2, . + 4 + (0x3 << 2)
label_2167b4:
    if (ctx->pc == 0x2167B4u) {
        ctx->pc = 0x2167B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167B0u;
        // 0x2167b4: 0x8e850038  lw          $a1, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2167B8u;
        goto label_2167b8;
    }
    ctx->pc = 0x2167B0u;
    {
        const bool branch_taken_0x2167b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x2167b0) {
            ctx->pc = 0x2167B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2167B0u;
            // 0x2167b4: 0x8e850038  lw          $a1, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2167C0u;
            goto label_2167c0;
        }
    }
    ctx->pc = 0x2167B8u;
label_2167b8:
    // 0x2167b8: 0x10000019  b           . + 4 + (0x19 << 2)
label_2167bc:
    if (ctx->pc == 0x2167BCu) {
        ctx->pc = 0x2167BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167B8u;
        // 0x2167bc: 0xae600174  sw          $zero, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2167C0u;
        goto label_2167c0;
    }
    ctx->pc = 0x2167B8u;
    {
        const bool branch_taken_0x2167b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2167BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167B8u;
        // 0x2167bc: 0xae600174  sw          $zero, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2167b8) {
            ctx->pc = 0x216820u;
            goto label_216820;
        }
    }
    ctx->pc = 0x2167C0u;
label_2167c0:
    // 0x2167c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2167c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2167c4:
    // 0x2167c4: 0x54a20017  bnel        $a1, $v0, . + 4 + (0x17 << 2)
label_2167c8:
    if (ctx->pc == 0x2167C8u) {
        ctx->pc = 0x2167C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167C4u;
        // 0x2167c8: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2167CCu;
        goto label_2167cc;
    }
    ctx->pc = 0x2167C4u;
    {
        const bool branch_taken_0x2167c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2167c4) {
            ctx->pc = 0x2167C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2167C4u;
            // 0x2167c8: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216824u;
            goto label_216824;
        }
    }
    ctx->pc = 0x2167CCu;
label_2167cc:
    // 0x2167cc: 0x8e630164  lw          $v1, 0x164($s3)
    ctx->pc = 0x2167ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_2167d0:
    // 0x2167d0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_2167d4:
    if (ctx->pc == 0x2167D4u) {
        ctx->pc = 0x2167D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167D0u;
        // 0x2167d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2167D8u;
        goto label_2167d8;
    }
    ctx->pc = 0x2167D0u;
    {
        const bool branch_taken_0x2167d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2167D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167D0u;
        // 0x2167d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2167d0) {
            ctx->pc = 0x216820u;
            goto label_216820;
        }
    }
    ctx->pc = 0x2167D8u;
label_2167d8:
    // 0x2167d8: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
label_2167dc:
    if (ctx->pc == 0x2167DCu) {
        ctx->pc = 0x2167DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167D8u;
        // 0x2167dc: 0x8c630070  lw          $v1, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2167E0u;
        goto label_2167e0;
    }
    ctx->pc = 0x2167D8u;
    {
        const bool branch_taken_0x2167d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2167DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167D8u;
        // 0x2167dc: 0x8c630070  lw          $v1, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2167d8) {
            ctx->pc = 0x216808u;
            goto label_216808;
        }
    }
    ctx->pc = 0x2167E0u;
label_2167e0:
    // 0x2167e0: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2167e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2167e4:
    // 0x2167e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2167e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2167e8:
    // 0x2167e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2167ec:
    if (ctx->pc == 0x2167ECu) {
        ctx->pc = 0x2167ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167E8u;
        // 0x2167ec: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2167F0u;
        goto label_2167f0;
    }
    ctx->pc = 0x2167E8u;
    {
        const bool branch_taken_0x2167e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2167ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167E8u;
        // 0x2167ec: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2167e8) {
            ctx->pc = 0x216824u;
            goto label_216824;
        }
    }
    ctx->pc = 0x2167F0u;
label_2167f0:
    // 0x2167f0: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x2167f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_2167f4:
    // 0x2167f4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2167f8:
    if (ctx->pc == 0x2167F8u) {
        ctx->pc = 0x2167F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167F4u;
        // 0x2167f8: 0x26e60010  addiu       $a2, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2167FCu;
        goto label_2167fc;
    }
    ctx->pc = 0x2167F4u;
    {
        const bool branch_taken_0x2167f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2167f4) {
            ctx->pc = 0x2167F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2167F4u;
            // 0x2167f8: 0x26e60010  addiu       $a2, $s7, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216828u;
            goto label_216828;
        }
    }
    ctx->pc = 0x2167FCu;
label_2167fc:
    // 0x2167fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_216800:
    if (ctx->pc == 0x216800u) {
        ctx->pc = 0x216800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167FCu;
        // 0x216800: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216804u;
        goto label_216804;
    }
    ctx->pc = 0x2167FCu;
    {
        const bool branch_taken_0x2167fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167FCu;
        // 0x216800: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2167fc) {
            ctx->pc = 0x216820u;
            goto label_216820;
        }
    }
    ctx->pc = 0x216804u;
label_216804:
    // 0x216804: 0x0  nop
    ctx->pc = 0x216804u;
    // NOP
label_216808:
    // 0x216808: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
label_21680c:
    if (ctx->pc == 0x21680Cu) {
        ctx->pc = 0x21680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216808u;
        // 0x21680c: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216810u;
        goto label_216810;
    }
    ctx->pc = 0x216808u;
    {
        const bool branch_taken_0x216808 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x21680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216808u;
        // 0x21680c: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216808) {
            ctx->pc = 0x216824u;
            goto label_216824;
        }
    }
    ctx->pc = 0x216810u;
label_216810:
    // 0x216810: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x216810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_216814:
    // 0x216814: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x216814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_216818:
    // 0x216818: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_21681c:
    if (ctx->pc == 0x21681Cu) {
        ctx->pc = 0x21681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216818u;
        // 0x21681c: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216820u;
        goto label_216820;
    }
    ctx->pc = 0x216818u;
    {
        const bool branch_taken_0x216818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216818) {
            ctx->pc = 0x21681Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216818u;
            // 0x21681c: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216820u;
            goto label_216820;
        }
    }
    ctx->pc = 0x216820u;
label_216820:
    // 0x216820: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x216820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_216824:
    // 0x216824: 0x26e60010  addiu       $a2, $s7, 0x10
    ctx->pc = 0x216824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_216828:
    // 0x216828: 0xc07fb9e  jal         func_1FEE78
label_21682c:
    if (ctx->pc == 0x21682Cu) {
        ctx->pc = 0x21682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216828u;
        // 0x21682c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216830u;
        goto label_216830;
    }
    ctx->pc = 0x216828u;
    SET_GPR_U32(ctx, 31, 0x216830u);
    ctx->pc = 0x21682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216828u;
    // 0x21682c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE78u, 0x216828u, 0x216830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216830u;
label_216830:
    // 0x216830: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x216830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_216834:
    // 0x216834: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x216834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_216838:
    // 0x216838: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_21683c:
    if (ctx->pc == 0x21683Cu) {
        ctx->pc = 0x21683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216838u;
        // 0x21683c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216840u;
        goto label_216840;
    }
    ctx->pc = 0x216838u;
    {
        const bool branch_taken_0x216838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216838u;
        // 0x21683c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216838) {
            ctx->pc = 0x216850u;
            goto label_216850;
        }
    }
    ctx->pc = 0x216840u;
label_216840:
    // 0x216840: 0xae63010c  sw          $v1, 0x10C($s3)
    ctx->pc = 0x216840u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 3));
label_216844:
    // 0x216844: 0x10000003  b           . + 4 + (0x3 << 2)
label_216848:
    if (ctx->pc == 0x216848u) {
        ctx->pc = 0x216848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216844u;
        // 0x216848: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21684Cu;
        goto label_21684c;
    }
    ctx->pc = 0x216844u;
    {
        const bool branch_taken_0x216844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216844u;
        // 0x216848: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216844) {
            ctx->pc = 0x216854u;
            goto label_216854;
        }
    }
    ctx->pc = 0x21684Cu;
label_21684c:
    // 0x21684c: 0x0  nop
    ctx->pc = 0x21684cu;
    // NOP
label_216850:
    // 0x216850: 0xae600110  sw          $zero, 0x110($s3)
    ctx->pc = 0x216850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 0));
label_216854:
    // 0x216854: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
label_216858:
    if (ctx->pc == 0x216858u) {
        ctx->pc = 0x216858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216854u;
        // 0x216858: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21685Cu;
        goto label_21685c;
    }
    ctx->pc = 0x216854u;
    {
        const bool branch_taken_0x216854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x216854) {
            ctx->pc = 0x216858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216854u;
            // 0x216858: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2168ACu;
            goto label_2168ac;
        }
    }
    ctx->pc = 0x21685Cu;
label_21685c:
    // 0x21685c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x21685cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_216860:
    // 0x216860: 0xc087ed0  jal         func_21FB40
label_216864:
    if (ctx->pc == 0x216864u) {
        ctx->pc = 0x216864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216860u;
        // 0x216864: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216868u;
        goto label_216868;
    }
    ctx->pc = 0x216860u;
    SET_GPR_U32(ctx, 31, 0x216868u);
    ctx->pc = 0x216864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216860u;
    // 0x216864: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x216860u, 0x216868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216868u;
label_216868:
    // 0x216868: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x216868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21686c:
    // 0x21686c: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x21686cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_216870:
    // 0x216870: 0xc087ed0  jal         func_21FB40
label_216874:
    if (ctx->pc == 0x216874u) {
        ctx->pc = 0x216874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216870u;
        // 0x216874: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216878u;
        goto label_216878;
    }
    ctx->pc = 0x216870u;
    SET_GPR_U32(ctx, 31, 0x216878u);
    ctx->pc = 0x216874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216870u;
    // 0x216874: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x216870u, 0x216878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216878u;
label_216878:
    // 0x216878: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_21687c:
    if (ctx->pc == 0x21687Cu) {
        ctx->pc = 0x21687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216878u;
        // 0x21687c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216880u;
        goto label_216880;
    }
    ctx->pc = 0x216878u;
    {
        const bool branch_taken_0x216878 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216878u;
        // 0x21687c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216878) {
            ctx->pc = 0x2168A8u;
            goto label_2168a8;
        }
    }
    ctx->pc = 0x216880u;
label_216880:
    // 0x216880: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x216880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_216884:
    // 0x216884: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x216884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216888:
    // 0x216888: 0xc07f6bc  jal         func_1FDAF0
label_21688c:
    if (ctx->pc == 0x21688Cu) {
        ctx->pc = 0x21688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216888u;
        // 0x21688c: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216890u;
        goto label_216890;
    }
    ctx->pc = 0x216888u;
    SET_GPR_U32(ctx, 31, 0x216890u);
    ctx->pc = 0x21688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216888u;
    // 0x21688c: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x216888u, 0x216890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216890u;
label_216890:
    // 0x216890: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_216894:
    if (ctx->pc == 0x216894u) {
        ctx->pc = 0x216894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216890u;
        // 0x216894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216898u;
        goto label_216898;
    }
    ctx->pc = 0x216890u;
    {
        const bool branch_taken_0x216890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216890u;
        // 0x216894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216890) {
            ctx->pc = 0x2168A8u;
            goto label_2168a8;
        }
    }
    ctx->pc = 0x216898u;
label_216898:
    // 0x216898: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x216898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_21689c:
    // 0x21689c: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x21689cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2168a0:
    // 0x2168a0: 0x220f809  jalr        $s1
label_2168a4:
    if (ctx->pc == 0x2168A4u) {
        ctx->pc = 0x2168A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168A0u;
        // 0x2168a4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168A8u;
        goto label_2168a8;
    }
    ctx->pc = 0x2168A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x2168A8u);
        ctx->pc = 0x2168A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168A0u;
        // 0x2168a4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2168A0u, 0x2168A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2168A8u;
label_2168a8:
    // 0x2168a8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2168a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2168ac:
    // 0x2168ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2168acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2168b0:
    // 0x2168b0: 0xc07f6bc  jal         func_1FDAF0
label_2168b4:
    if (ctx->pc == 0x2168B4u) {
        ctx->pc = 0x2168B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168B0u;
        // 0x2168b4: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168B8u;
        goto label_2168b8;
    }
    ctx->pc = 0x2168B0u;
    SET_GPR_U32(ctx, 31, 0x2168B8u);
    ctx->pc = 0x2168B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168B0u;
    // 0x2168b4: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x2168B0u, 0x2168B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168B8u;
label_2168b8:
    // 0x2168b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2168b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2168bc:
    // 0x2168bc: 0x8e690110  lw          $t1, 0x110($s3)
    ctx->pc = 0x2168bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_2168c0:
    // 0x2168c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2168c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2168c4:
    // 0x2168c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2168c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2168c8:
    // 0x2168c8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2168c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2168cc:
    // 0x2168cc: 0xc085a5c  jal         func_216970
label_2168d0:
    if (ctx->pc == 0x2168D0u) {
        ctx->pc = 0x2168D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168CCu;
        // 0x2168d0: 0x27a80008  addiu       $t0, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168D4u;
        goto label_2168d4;
    }
    ctx->pc = 0x2168CCu;
    SET_GPR_U32(ctx, 31, 0x2168D4u);
    ctx->pc = 0x2168D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168CCu;
    // 0x2168d0: 0x27a80008  addiu       $t0, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216970u, 0x2168CCu, 0x2168D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168D4u;
label_2168d4:
    // 0x2168d4: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x2168d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
label_2168d8:
    // 0x2168d8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2168d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2168dc:
    // 0x2168dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2168dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2168e0:
    // 0x2168e0: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x2168e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2168e4:
    // 0x2168e4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2168e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2168e8:
    // 0x2168e8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_2168ec:
    if (ctx->pc == 0x2168ECu) {
        ctx->pc = 0x2168ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168E8u;
        // 0x2168ec: 0xfe641120  sd          $a0, 0x1120($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 4384), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168F0u;
        goto label_2168f0;
    }
    ctx->pc = 0x2168E8u;
    {
        const bool branch_taken_0x2168e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2168ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168E8u;
        // 0x2168ec: 0xfe641120  sd          $a0, 0x1120($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 4384), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168e8) {
            ctx->pc = 0x216940u;
            goto label_216940;
        }
    }
    ctx->pc = 0x2168F0u;
label_2168f0:
    // 0x2168f0: 0x8e660110  lw          $a2, 0x110($s3)
    ctx->pc = 0x2168f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_2168f4:
    // 0x2168f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2168f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2168f8:
    // 0x2168f8: 0xc085b00  jal         func_216C00
label_2168fc:
    if (ctx->pc == 0x2168FCu) {
        ctx->pc = 0x2168FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168F8u;
        // 0x2168fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216900u;
        goto label_216900;
    }
    ctx->pc = 0x2168F8u;
    SET_GPR_U32(ctx, 31, 0x216900u);
    ctx->pc = 0x2168FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168F8u;
    // 0x2168fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216C00u, 0x2168F8u, 0x216900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216900u;
label_216900:
    // 0x216900: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x216900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_216904:
    // 0x216904: 0x8e670110  lw          $a3, 0x110($s3)
    ctx->pc = 0x216904u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_216908:
    // 0x216908: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x216908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21690c:
    // 0x21690c: 0xc085bd6  jal         func_216F58
label_216910:
    if (ctx->pc == 0x216910u) {
        ctx->pc = 0x216910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21690Cu;
        // 0x216910: 0xdfa60000  ld          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216914u;
        goto label_216914;
    }
    ctx->pc = 0x21690Cu;
    SET_GPR_U32(ctx, 31, 0x216914u);
    ctx->pc = 0x216910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21690Cu;
    // 0x216910: 0xdfa60000  ld          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216F58u, 0x21690Cu, 0x216914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216914u;
label_216914:
    // 0x216914: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x216914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_216918:
    // 0x216918: 0xc085d40  jal         func_217500
label_21691c:
    if (ctx->pc == 0x21691Cu) {
        ctx->pc = 0x21691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216918u;
        // 0x21691c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216920u;
        goto label_216920;
    }
    ctx->pc = 0x216918u;
    SET_GPR_U32(ctx, 31, 0x216920u);
    ctx->pc = 0x21691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216918u;
    // 0x21691c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217500u, 0x216918u, 0x216920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216920u;
label_216920:
    // 0x216920: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x216920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_216924:
    // 0x216924: 0xc085d78  jal         func_2175E0
label_216928:
    if (ctx->pc == 0x216928u) {
        ctx->pc = 0x216928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216924u;
        // 0x216928: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21692Cu;
        goto label_21692c;
    }
    ctx->pc = 0x216924u;
    SET_GPR_U32(ctx, 31, 0x21692Cu);
    ctx->pc = 0x216928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216924u;
    // 0x216928: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x216924u, 0x21692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21692Cu;
label_21692c:
    // 0x21692c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21692cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_216930:
    // 0x216930: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x216930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_216934:
    // 0x216934: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x216934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_216938:
    // 0x216938: 0xc085dde  jal         func_217778
label_21693c:
    if (ctx->pc == 0x21693Cu) {
        ctx->pc = 0x21693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216938u;
        // 0x21693c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216940u;
        goto label_216940;
    }
    ctx->pc = 0x216938u;
    SET_GPR_U32(ctx, 31, 0x216940u);
    ctx->pc = 0x21693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216938u;
    // 0x21693c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217778u, 0x216938u, 0x216940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216940u;
label_216940:
    // 0x216940: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x216940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_216944:
    // 0x216944: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x216944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_216948:
    // 0x216948: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x216948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21694c:
    // 0x21694c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x21694cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_216950:
    // 0x216950: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x216950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_216954:
    // 0x216954: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x216954u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_216958:
    // 0x216958: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x216958u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_21695c:
    // 0x21695c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x21695cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_216960:
    // 0x216960: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x216960u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_216964:
    // 0x216964: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x216964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_216968:
    // 0x216968: 0x3e00008  jr          $ra
label_21696c:
    if (ctx->pc == 0x21696Cu) {
        ctx->pc = 0x21696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216968u;
        // 0x21696c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216970u;
        goto label_fallthrough_0x216968;
    }
    ctx->pc = 0x216968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216968u;
        // 0x21696c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x216968:
    ctx->pc = 0x216970u;
}
