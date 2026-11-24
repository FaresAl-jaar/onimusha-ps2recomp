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

// Function: sub_00270600
// Address: 0x270600 - 0x270908
void sub_00270600_0x270600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270600_0x270600");
#endif

    switch (ctx->pc) {
        case 0x270600u: goto label_270600;
        case 0x270604u: goto label_270604;
        case 0x270608u: goto label_270608;
        case 0x27060cu: goto label_27060c;
        case 0x270610u: goto label_270610;
        case 0x270614u: goto label_270614;
        case 0x270618u: goto label_270618;
        case 0x27061cu: goto label_27061c;
        case 0x270620u: goto label_270620;
        case 0x270624u: goto label_270624;
        case 0x270628u: goto label_270628;
        case 0x27062cu: goto label_27062c;
        case 0x270630u: goto label_270630;
        case 0x270634u: goto label_270634;
        case 0x270638u: goto label_270638;
        case 0x27063cu: goto label_27063c;
        case 0x270640u: goto label_270640;
        case 0x270644u: goto label_270644;
        case 0x270648u: goto label_270648;
        case 0x27064cu: goto label_27064c;
        case 0x270650u: goto label_270650;
        case 0x270654u: goto label_270654;
        case 0x270658u: goto label_270658;
        case 0x27065cu: goto label_27065c;
        case 0x270660u: goto label_270660;
        case 0x270664u: goto label_270664;
        case 0x270668u: goto label_270668;
        case 0x27066cu: goto label_27066c;
        case 0x270670u: goto label_270670;
        case 0x270674u: goto label_270674;
        case 0x270678u: goto label_270678;
        case 0x27067cu: goto label_27067c;
        case 0x270680u: goto label_270680;
        case 0x270684u: goto label_270684;
        case 0x270688u: goto label_270688;
        case 0x27068cu: goto label_27068c;
        case 0x270690u: goto label_270690;
        case 0x270694u: goto label_270694;
        case 0x270698u: goto label_270698;
        case 0x27069cu: goto label_27069c;
        case 0x2706a0u: goto label_2706a0;
        case 0x2706a4u: goto label_2706a4;
        case 0x2706a8u: goto label_2706a8;
        case 0x2706acu: goto label_2706ac;
        case 0x2706b0u: goto label_2706b0;
        case 0x2706b4u: goto label_2706b4;
        case 0x2706b8u: goto label_2706b8;
        case 0x2706bcu: goto label_2706bc;
        case 0x2706c0u: goto label_2706c0;
        case 0x2706c4u: goto label_2706c4;
        case 0x2706c8u: goto label_2706c8;
        case 0x2706ccu: goto label_2706cc;
        case 0x2706d0u: goto label_2706d0;
        case 0x2706d4u: goto label_2706d4;
        case 0x2706d8u: goto label_2706d8;
        case 0x2706dcu: goto label_2706dc;
        case 0x2706e0u: goto label_2706e0;
        case 0x2706e4u: goto label_2706e4;
        case 0x2706e8u: goto label_2706e8;
        case 0x2706ecu: goto label_2706ec;
        case 0x2706f0u: goto label_2706f0;
        case 0x2706f4u: goto label_2706f4;
        case 0x2706f8u: goto label_2706f8;
        case 0x2706fcu: goto label_2706fc;
        case 0x270700u: goto label_270700;
        case 0x270704u: goto label_270704;
        case 0x270708u: goto label_270708;
        case 0x27070cu: goto label_27070c;
        case 0x270710u: goto label_270710;
        case 0x270714u: goto label_270714;
        case 0x270718u: goto label_270718;
        case 0x27071cu: goto label_27071c;
        case 0x270720u: goto label_270720;
        case 0x270724u: goto label_270724;
        case 0x270728u: goto label_270728;
        case 0x27072cu: goto label_27072c;
        case 0x270730u: goto label_270730;
        case 0x270734u: goto label_270734;
        case 0x270738u: goto label_270738;
        case 0x27073cu: goto label_27073c;
        case 0x270740u: goto label_270740;
        case 0x270744u: goto label_270744;
        case 0x270748u: goto label_270748;
        case 0x27074cu: goto label_27074c;
        case 0x270750u: goto label_270750;
        case 0x270754u: goto label_270754;
        case 0x270758u: goto label_270758;
        case 0x27075cu: goto label_27075c;
        case 0x270760u: goto label_270760;
        case 0x270764u: goto label_270764;
        case 0x270768u: goto label_270768;
        case 0x27076cu: goto label_27076c;
        case 0x270770u: goto label_270770;
        case 0x270774u: goto label_270774;
        case 0x270778u: goto label_270778;
        case 0x27077cu: goto label_27077c;
        case 0x270780u: goto label_270780;
        case 0x270784u: goto label_270784;
        case 0x270788u: goto label_270788;
        case 0x27078cu: goto label_27078c;
        case 0x270790u: goto label_270790;
        case 0x270794u: goto label_270794;
        case 0x270798u: goto label_270798;
        case 0x27079cu: goto label_27079c;
        case 0x2707a0u: goto label_2707a0;
        case 0x2707a4u: goto label_2707a4;
        case 0x2707a8u: goto label_2707a8;
        case 0x2707acu: goto label_2707ac;
        case 0x2707b0u: goto label_2707b0;
        case 0x2707b4u: goto label_2707b4;
        case 0x2707b8u: goto label_2707b8;
        case 0x2707bcu: goto label_2707bc;
        case 0x2707c0u: goto label_2707c0;
        case 0x2707c4u: goto label_2707c4;
        case 0x2707c8u: goto label_2707c8;
        case 0x2707ccu: goto label_2707cc;
        case 0x2707d0u: goto label_2707d0;
        case 0x2707d4u: goto label_2707d4;
        case 0x2707d8u: goto label_2707d8;
        case 0x2707dcu: goto label_2707dc;
        case 0x2707e0u: goto label_2707e0;
        case 0x2707e4u: goto label_2707e4;
        case 0x2707e8u: goto label_2707e8;
        case 0x2707ecu: goto label_2707ec;
        case 0x2707f0u: goto label_2707f0;
        case 0x2707f4u: goto label_2707f4;
        case 0x2707f8u: goto label_2707f8;
        case 0x2707fcu: goto label_2707fc;
        case 0x270800u: goto label_270800;
        case 0x270804u: goto label_270804;
        case 0x270808u: goto label_270808;
        case 0x27080cu: goto label_27080c;
        case 0x270810u: goto label_270810;
        case 0x270814u: goto label_270814;
        case 0x270818u: goto label_270818;
        case 0x27081cu: goto label_27081c;
        case 0x270820u: goto label_270820;
        case 0x270824u: goto label_270824;
        case 0x270828u: goto label_270828;
        case 0x27082cu: goto label_27082c;
        case 0x270830u: goto label_270830;
        case 0x270834u: goto label_270834;
        case 0x270838u: goto label_270838;
        case 0x27083cu: goto label_27083c;
        case 0x270840u: goto label_270840;
        case 0x270844u: goto label_270844;
        case 0x270848u: goto label_270848;
        case 0x27084cu: goto label_27084c;
        case 0x270850u: goto label_270850;
        case 0x270854u: goto label_270854;
        case 0x270858u: goto label_270858;
        case 0x27085cu: goto label_27085c;
        case 0x270860u: goto label_270860;
        case 0x270864u: goto label_270864;
        case 0x270868u: goto label_270868;
        case 0x27086cu: goto label_27086c;
        case 0x270870u: goto label_270870;
        case 0x270874u: goto label_270874;
        case 0x270878u: goto label_270878;
        case 0x27087cu: goto label_27087c;
        case 0x270880u: goto label_270880;
        case 0x270884u: goto label_270884;
        case 0x270888u: goto label_270888;
        case 0x27088cu: goto label_27088c;
        case 0x270890u: goto label_270890;
        case 0x270894u: goto label_270894;
        case 0x270898u: goto label_270898;
        case 0x27089cu: goto label_27089c;
        case 0x2708a0u: goto label_2708a0;
        case 0x2708a4u: goto label_2708a4;
        case 0x2708a8u: goto label_2708a8;
        case 0x2708acu: goto label_2708ac;
        case 0x2708b0u: goto label_2708b0;
        case 0x2708b4u: goto label_2708b4;
        case 0x2708b8u: goto label_2708b8;
        case 0x2708bcu: goto label_2708bc;
        case 0x2708c0u: goto label_2708c0;
        case 0x2708c4u: goto label_2708c4;
        case 0x2708c8u: goto label_2708c8;
        case 0x2708ccu: goto label_2708cc;
        case 0x2708d0u: goto label_2708d0;
        case 0x2708d4u: goto label_2708d4;
        case 0x2708d8u: goto label_2708d8;
        case 0x2708dcu: goto label_2708dc;
        case 0x2708e0u: goto label_2708e0;
        case 0x2708e4u: goto label_2708e4;
        case 0x2708e8u: goto label_2708e8;
        case 0x2708ecu: goto label_2708ec;
        case 0x2708f0u: goto label_2708f0;
        case 0x2708f4u: goto label_2708f4;
        case 0x2708f8u: goto label_2708f8;
        case 0x2708fcu: goto label_2708fc;
        case 0x270900u: goto label_270900;
        case 0x270904u: goto label_270904;
        default: break;
    }

    ctx->pc = 0x270600u;

label_270600:
    // 0x270600: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x270600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_270604:
    // 0x270604: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x270604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_270608:
    // 0x270608: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x270608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_27060c:
    // 0x27060c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27060cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_270610:
    // 0x270610: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x270610u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_270614:
    // 0x270614: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x270614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_270618:
    // 0x270618: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x270618u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27061c:
    // 0x27061c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27061cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_270620:
    // 0x270620: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x270620u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_270624:
    // 0x270624: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x270624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_270628:
    // 0x270628: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x270628u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27062c:
    // 0x27062c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27062cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_270630:
    // 0x270630: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x270630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_270634:
    // 0x270634: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x270634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_270638:
    // 0x270638: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x270638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_27063c:
    // 0x27063c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_270640:
    // 0x270640: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x270640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_270644:
    // 0x270644: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x270644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_270648:
    // 0x270648: 0xc09d4d4  jal         func_275350
label_27064c:
    if (ctx->pc == 0x27064Cu) {
        ctx->pc = 0x27064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270648u;
        // 0x27064c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270650u;
        goto label_270650;
    }
    ctx->pc = 0x270648u;
    SET_GPR_U32(ctx, 31, 0x270650u);
    ctx->pc = 0x27064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270648u;
    // 0x27064c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x270648u, 0x270650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270650u;
label_270650:
    // 0x270650: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_270654:
    if (ctx->pc == 0x270654u) {
        ctx->pc = 0x270654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270650u;
        // 0x270654: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270658u;
        goto label_270658;
    }
    ctx->pc = 0x270650u;
    {
        const bool branch_taken_0x270650 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x270654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270650u;
        // 0x270654: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270650) {
            ctx->pc = 0x270668u;
            goto label_270668;
        }
    }
    ctx->pc = 0x270658u;
label_270658:
    // 0x270658: 0xc09d4d8  jal         func_275360
label_27065c:
    if (ctx->pc == 0x27065Cu) {
        ctx->pc = 0x27065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270658u;
        // 0x27065c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270660u;
        goto label_270660;
    }
    ctx->pc = 0x270658u;
    SET_GPR_U32(ctx, 31, 0x270660u);
    ctx->pc = 0x27065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270658u;
    // 0x27065c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x270658u, 0x270660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270660u;
label_270660:
    // 0x270660: 0x1000009d  b           . + 4 + (0x9D << 2)
label_270664:
    if (ctx->pc == 0x270664u) {
        ctx->pc = 0x270664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270660u;
        // 0x270664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270668u;
        goto label_270668;
    }
    ctx->pc = 0x270660u;
    {
        const bool branch_taken_0x270660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270660u;
        // 0x270664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270660) {
            ctx->pc = 0x2708D8u;
            goto label_2708d8;
        }
    }
    ctx->pc = 0x270668u;
label_270668:
    // 0x270668: 0xc0741a4  jal         func_1D0690
label_27066c:
    if (ctx->pc == 0x27066Cu) {
        ctx->pc = 0x27066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270668u;
        // 0x27066c: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270670u;
        goto label_270670;
    }
    ctx->pc = 0x270668u;
    SET_GPR_U32(ctx, 31, 0x270670u);
    ctx->pc = 0x27066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270668u;
    // 0x27066c: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x270668u, 0x270670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270670u;
label_270670:
    // 0x270670: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270674:
    // 0x270674: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_270678:
    if (ctx->pc == 0x270678u) {
        ctx->pc = 0x270678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270674u;
        // 0x270678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27067Cu;
        goto label_27067c;
    }
    ctx->pc = 0x270674u;
    {
        const bool branch_taken_0x270674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x270678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270674u;
        // 0x270678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270674) {
            ctx->pc = 0x2706A0u;
            goto label_2706a0;
        }
    }
    ctx->pc = 0x27067Cu;
label_27067c:
    // 0x27067c: 0xc096b00  jal         func_25AC00
label_270680:
    if (ctx->pc == 0x270680u) {
        ctx->pc = 0x270684u;
        goto label_270684;
    }
    ctx->pc = 0x27067Cu;
    SET_GPR_U32(ctx, 31, 0x270684u);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x27067Cu, 0x270684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270684u;
label_270684:
    // 0x270684: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x270684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_270688:
    // 0x270688: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x270688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_27068c:
    // 0x27068c: 0x246374e0  addiu       $v1, $v1, 0x74E0
    ctx->pc = 0x27068cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29920));
label_270690:
    // 0x270690: 0x244274c0  addiu       $v0, $v0, 0x74C0
    ctx->pc = 0x270690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29888));
label_270694:
    // 0x270694: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x270694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_270698:
    // 0x270698: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x270698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_27069c:
    // 0x27069c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x27069cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_2706a0:
    // 0x2706a0: 0x12000089  beqz        $s0, . + 4 + (0x89 << 2)
label_2706a4:
    if (ctx->pc == 0x2706A4u) {
        ctx->pc = 0x2706A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706A0u;
        // 0x2706a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706A8u;
        goto label_2706a8;
    }
    ctx->pc = 0x2706A0u;
    {
        const bool branch_taken_0x2706a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706A0u;
        // 0x2706a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706a0) {
            ctx->pc = 0x2708C8u;
            goto label_2708c8;
        }
    }
    ctx->pc = 0x2706A8u;
label_2706a8:
    // 0x2706a8: 0xc09d4fc  jal         func_2753F0
label_2706ac:
    if (ctx->pc == 0x2706ACu) {
        ctx->pc = 0x2706ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706A8u;
        // 0x2706ac: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706B0u;
        goto label_2706b0;
    }
    ctx->pc = 0x2706A8u;
    SET_GPR_U32(ctx, 31, 0x2706B0u);
    ctx->pc = 0x2706ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706A8u;
    // 0x2706ac: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2706A8u, 0x2706B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706B0u;
label_2706b0:
    // 0x2706b0: 0x326600ff  andi        $a2, $s3, 0xFF
    ctx->pc = 0x2706b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_2706b4:
    // 0x2706b4: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2706b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2706b8:
    // 0x2706b8: 0xc09d524  jal         func_275490
label_2706bc:
    if (ctx->pc == 0x2706BCu) {
        ctx->pc = 0x2706BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706B8u;
        // 0x2706bc: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706C0u;
        goto label_2706c0;
    }
    ctx->pc = 0x2706B8u;
    SET_GPR_U32(ctx, 31, 0x2706C0u);
    ctx->pc = 0x2706BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706B8u;
    // 0x2706bc: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2706B8u, 0x2706C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706C0u;
label_2706c0:
    // 0x2706c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2706c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2706c4:
    // 0x2706c4: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_2706c8:
    if (ctx->pc == 0x2706C8u) {
        ctx->pc = 0x2706CCu;
        goto label_2706cc;
    }
    ctx->pc = 0x2706C4u;
    {
        const bool branch_taken_0x2706c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2706c4) {
            ctx->pc = 0x270700u;
            goto label_270700;
        }
    }
    ctx->pc = 0x2706CCu;
label_2706cc:
    // 0x2706cc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2706d0:
    if (ctx->pc == 0x2706D0u) {
        ctx->pc = 0x2706D4u;
        goto label_2706d4;
    }
    ctx->pc = 0x2706CCu;
    {
        const bool branch_taken_0x2706cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2706cc) {
            ctx->pc = 0x2706E8u;
            goto label_2706e8;
        }
    }
    ctx->pc = 0x2706D4u;
label_2706d4:
    // 0x2706d4: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x2706d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2706d8:
    // 0x2706d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2706d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2706dc:
    // 0x2706dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2706dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2706e0:
    // 0x2706e0: 0x320f809  jalr        $t9
label_2706e4:
    if (ctx->pc == 0x2706E4u) {
        ctx->pc = 0x2706E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706E0u;
        // 0x2706e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706E8u;
        goto label_2706e8;
    }
    ctx->pc = 0x2706E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2706E8u);
        ctx->pc = 0x2706E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706E0u;
        // 0x2706e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2706E0u, 0x2706E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2706E8u;
label_2706e8:
    // 0x2706e8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2706e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2706ec:
    // 0x2706ec: 0xc09d4d8  jal         func_275360
label_2706f0:
    if (ctx->pc == 0x2706F0u) {
        ctx->pc = 0x2706F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706ECu;
        // 0x2706f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706F4u;
        goto label_2706f4;
    }
    ctx->pc = 0x2706ECu;
    SET_GPR_U32(ctx, 31, 0x2706F4u);
    ctx->pc = 0x2706F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706ECu;
    // 0x2706f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2706ECu, 0x2706F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706F4u;
label_2706f4:
    // 0x2706f4: 0x10000078  b           . + 4 + (0x78 << 2)
label_2706f8:
    if (ctx->pc == 0x2706F8u) {
        ctx->pc = 0x2706F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706F4u;
        // 0x2706f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706FCu;
        goto label_2706fc;
    }
    ctx->pc = 0x2706F4u;
    {
        const bool branch_taken_0x2706f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706F4u;
        // 0x2706f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706f4) {
            ctx->pc = 0x2708D8u;
            goto label_2708d8;
        }
    }
    ctx->pc = 0x2706FCu;
label_2706fc:
    // 0x2706fc: 0x0  nop
    ctx->pc = 0x2706fcu;
    // NOP
label_270700:
    // 0x270700: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x270700u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_270704:
    // 0x270704: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x270704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_270708:
    // 0x270708: 0xc09d524  jal         func_275490
label_27070c:
    if (ctx->pc == 0x27070Cu) {
        ctx->pc = 0x27070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270708u;
        // 0x27070c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270710u;
        goto label_270710;
    }
    ctx->pc = 0x270708u;
    SET_GPR_U32(ctx, 31, 0x270710u);
    ctx->pc = 0x27070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270708u;
    // 0x27070c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x270708u, 0x270710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270710u;
label_270710:
    // 0x270710: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270714:
    // 0x270714: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_270718:
    if (ctx->pc == 0x270718u) {
        ctx->pc = 0x27071Cu;
        goto label_27071c;
    }
    ctx->pc = 0x270714u;
    {
        const bool branch_taken_0x270714 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x270714) {
            ctx->pc = 0x270750u;
            goto label_270750;
        }
    }
    ctx->pc = 0x27071Cu;
label_27071c:
    // 0x27071c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_270720:
    if (ctx->pc == 0x270720u) {
        ctx->pc = 0x270724u;
        goto label_270724;
    }
    ctx->pc = 0x27071Cu;
    {
        const bool branch_taken_0x27071c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27071c) {
            ctx->pc = 0x270738u;
            goto label_270738;
        }
    }
    ctx->pc = 0x270724u;
label_270724:
    // 0x270724: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x270724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_270728:
    // 0x270728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27072c:
    // 0x27072c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x27072cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_270730:
    // 0x270730: 0x320f809  jalr        $t9
label_270734:
    if (ctx->pc == 0x270734u) {
        ctx->pc = 0x270734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270730u;
        // 0x270734: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270738u;
        goto label_270738;
    }
    ctx->pc = 0x270730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x270738u);
        ctx->pc = 0x270734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270730u;
        // 0x270734: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270730u, 0x270738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270738u;
label_270738:
    // 0x270738: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x270738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_27073c:
    // 0x27073c: 0xc09d4d8  jal         func_275360
label_270740:
    if (ctx->pc == 0x270740u) {
        ctx->pc = 0x270740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27073Cu;
        // 0x270740: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270744u;
        goto label_270744;
    }
    ctx->pc = 0x27073Cu;
    SET_GPR_U32(ctx, 31, 0x270744u);
    ctx->pc = 0x270740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27073Cu;
    // 0x270740: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x27073Cu, 0x270744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270744u;
label_270744:
    // 0x270744: 0x10000064  b           . + 4 + (0x64 << 2)
label_270748:
    if (ctx->pc == 0x270748u) {
        ctx->pc = 0x270748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270744u;
        // 0x270748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27074Cu;
        goto label_27074c;
    }
    ctx->pc = 0x270744u;
    {
        const bool branch_taken_0x270744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270744u;
        // 0x270748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270744) {
            ctx->pc = 0x2708D8u;
            goto label_2708d8;
        }
    }
    ctx->pc = 0x27074Cu;
label_27074c:
    // 0x27074c: 0x0  nop
    ctx->pc = 0x27074cu;
    // NOP
label_270750:
    // 0x270750: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x270750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_270754:
    // 0x270754: 0x92230006  lbu         $v1, 0x6($s1)
    ctx->pc = 0x270754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_270758:
    // 0x270758: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x270758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27075c:
    // 0x27075c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x27075cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_270760:
    // 0x270760: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x270760u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_270764:
    // 0x270764: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x270764u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270768:
    // 0x270768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27076c:
    // 0x27076c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x27076cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_270770:
    // 0x270770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x270770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270774:
    // 0x270774: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x270774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_270778:
    // 0x270778: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x270778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_27077c:
    // 0x27077c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_270780:
    // 0x270780: 0xc096b38  jal         func_25ACE0
label_270784:
    if (ctx->pc == 0x270784u) {
        ctx->pc = 0x270784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270780u;
        // 0x270784: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270788u;
        goto label_270788;
    }
    ctx->pc = 0x270780u;
    SET_GPR_U32(ctx, 31, 0x270788u);
    ctx->pc = 0x270784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270780u;
    // 0x270784: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x270780u, 0x270788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270788u;
label_270788:
    // 0x270788: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x270788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_27078c:
    // 0x27078c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_270790:
    // 0x270790: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x270790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_270794:
    // 0x270794: 0xa2030050  sb          $v1, 0x50($s0)
    ctx->pc = 0x270794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 3));
label_270798:
    // 0x270798: 0xa2020051  sb          $v0, 0x51($s0)
    ctx->pc = 0x270798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 2));
label_27079c:
    // 0x27079c: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x27079cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2707a0:
    // 0x2707a0: 0xa2020075  sb          $v0, 0x75($s0)
    ctx->pc = 0x2707a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 2));
label_2707a4:
    // 0x2707a4: 0xa2130076  sb          $s3, 0x76($s0)
    ctx->pc = 0x2707a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 118), (uint8_t)GPR_U32(ctx, 19));
label_2707a8:
    // 0x2707a8: 0xa2000074  sb          $zero, 0x74($s0)
    ctx->pc = 0x2707a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 0));
label_2707ac:
    // 0x2707ac: 0xa200007b  sb          $zero, 0x7B($s0)
    ctx->pc = 0x2707acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 123), (uint8_t)GPR_U32(ctx, 0));
label_2707b0:
    // 0x2707b0: 0xa200007a  sb          $zero, 0x7A($s0)
    ctx->pc = 0x2707b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 0));
label_2707b4:
    // 0x2707b4: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_2707b8:
    if (ctx->pc == 0x2707B8u) {
        ctx->pc = 0x2707B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707B4u;
        // 0x2707b8: 0xa6000078  sh          $zero, 0x78($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2707BCu;
        goto label_2707bc;
    }
    ctx->pc = 0x2707B4u;
    {
        const bool branch_taken_0x2707b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2707B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707B4u;
        // 0x2707b8: 0xa6000078  sh          $zero, 0x78($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707b4) {
            ctx->pc = 0x2707C8u;
            goto label_2707c8;
        }
    }
    ctx->pc = 0x2707BCu;
label_2707bc:
    // 0x2707bc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2707bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2707c0:
    // 0x2707c0: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x2707c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_2707c4:
    // 0x2707c4: 0x0  nop
    ctx->pc = 0x2707c4u;
    // NOP
label_2707c8:
    // 0x2707c8: 0xae110080  sw          $s1, 0x80($s0)
    ctx->pc = 0x2707c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
label_2707cc:
    // 0x2707cc: 0xae120084  sw          $s2, 0x84($s0)
    ctx->pc = 0x2707ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 18));
label_2707d0:
    // 0x2707d0: 0x92450006  lbu         $a1, 0x6($s2)
    ctx->pc = 0x2707d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_2707d4:
    // 0x2707d4: 0x92460007  lbu         $a2, 0x7($s2)
    ctx->pc = 0x2707d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
label_2707d8:
    // 0x2707d8: 0xc074350  jal         func_1D0D40
label_2707dc:
    if (ctx->pc == 0x2707DCu) {
        ctx->pc = 0x2707DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707D8u;
        // 0x2707dc: 0x260401b0  addiu       $a0, $s0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2707E0u;
        goto label_2707e0;
    }
    ctx->pc = 0x2707D8u;
    SET_GPR_U32(ctx, 31, 0x2707E0u);
    ctx->pc = 0x2707DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2707D8u;
    // 0x2707dc: 0x260401b0  addiu       $a0, $s0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x2707D8u, 0x2707E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2707E0u;
label_2707e0:
    // 0x2707e0: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x2707e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_2707e4:
    // 0x2707e4: 0x92460009  lbu         $a2, 0x9($s2)
    ctx->pc = 0x2707e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_2707e8:
    // 0x2707e8: 0xc074378  jal         func_1D0DE0
label_2707ec:
    if (ctx->pc == 0x2707ECu) {
        ctx->pc = 0x2707ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707E8u;
        // 0x2707ec: 0x260401b0  addiu       $a0, $s0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2707F0u;
        goto label_2707f0;
    }
    ctx->pc = 0x2707E8u;
    SET_GPR_U32(ctx, 31, 0x2707F0u);
    ctx->pc = 0x2707ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2707E8u;
    // 0x2707ec: 0x260401b0  addiu       $a0, $s0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x2707E8u, 0x2707F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2707F0u;
label_2707f0:
    // 0x2707f0: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2707f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2707f4:
    // 0x2707f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2707f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2707f8:
    // 0x2707f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2707f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2707fc:
    // 0x2707fc: 0x90450005  lbu         $a1, 0x5($v0)
    ctx->pc = 0x2707fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_270800:
    // 0x270800: 0x9042000f  lbu         $v0, 0xF($v0)
    ctx->pc = 0x270800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
label_270804:
    // 0x270804: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x270804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_270808:
    // 0x270808: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x270808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_27080c:
    // 0x27080c: 0xa6050090  sh          $a1, 0x90($s0)
    ctx->pc = 0x27080cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 5));
label_270810:
    // 0x270810: 0xa6000092  sh          $zero, 0x92($s0)
    ctx->pc = 0x270810u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 0));
label_270814:
    // 0x270814: 0xa6060094  sh          $a2, 0x94($s0)
    ctx->pc = 0x270814u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 6));
label_270818:
    // 0x270818: 0x86020090  lh          $v0, 0x90($s0)
    ctx->pc = 0x270818u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
label_27081c:
    // 0x27081c: 0xa6020096  sh          $v0, 0x96($s0)
    ctx->pc = 0x27081cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 2));
label_270820:
    // 0x270820: 0xa6050098  sh          $a1, 0x98($s0)
    ctx->pc = 0x270820u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 5));
label_270824:
    // 0x270824: 0xa600009a  sh          $zero, 0x9A($s0)
    ctx->pc = 0x270824u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 0));
label_270828:
    // 0x270828: 0xa606009c  sh          $a2, 0x9C($s0)
    ctx->pc = 0x270828u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 6));
label_27082c:
    // 0x27082c: 0x86020098  lh          $v0, 0x98($s0)
    ctx->pc = 0x27082cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_270830:
    // 0x270830: 0xa602009e  sh          $v0, 0x9E($s0)
    ctx->pc = 0x270830u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 158), (uint16_t)GPR_U32(ctx, 2));
label_270834:
    // 0x270834: 0xa60400a0  sh          $a0, 0xA0($s0)
    ctx->pc = 0x270834u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 4));
label_270838:
    // 0x270838: 0xa60000a2  sh          $zero, 0xA2($s0)
    ctx->pc = 0x270838u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 0));
label_27083c:
    // 0x27083c: 0xa60300a4  sh          $v1, 0xA4($s0)
    ctx->pc = 0x27083cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 3));
label_270840:
    // 0x270840: 0x860200a0  lh          $v0, 0xA0($s0)
    ctx->pc = 0x270840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
label_270844:
    // 0x270844: 0xa60200a6  sh          $v0, 0xA6($s0)
    ctx->pc = 0x270844u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 166), (uint16_t)GPR_U32(ctx, 2));
label_270848:
    // 0x270848: 0xa60400a8  sh          $a0, 0xA8($s0)
    ctx->pc = 0x270848u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 4));
label_27084c:
    // 0x27084c: 0xa60000aa  sh          $zero, 0xAA($s0)
    ctx->pc = 0x27084cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 170), (uint16_t)GPR_U32(ctx, 0));
label_270850:
    // 0x270850: 0xa60300ac  sh          $v1, 0xAC($s0)
    ctx->pc = 0x270850u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 172), (uint16_t)GPR_U32(ctx, 3));
label_270854:
    // 0x270854: 0x860200a8  lh          $v0, 0xA8($s0)
    ctx->pc = 0x270854u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
label_270858:
    // 0x270858: 0xa60200ae  sh          $v0, 0xAE($s0)
    ctx->pc = 0x270858u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 174), (uint16_t)GPR_U32(ctx, 2));
label_27085c:
    // 0x27085c: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x27085cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_270860:
    // 0x270860: 0x9242000f  lbu         $v0, 0xF($s2)
    ctx->pc = 0x270860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
label_270864:
    // 0x270864: 0x70628818  mult1       $s1, $v1, $v0
    ctx->pc = 0x270864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_270868:
    // 0x270868: 0xc0741a4  jal         func_1D0690
label_27086c:
    if (ctx->pc == 0x27086Cu) {
        ctx->pc = 0x27086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270868u;
        // 0x27086c: 0x112140  sll         $a0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270870u;
        goto label_270870;
    }
    ctx->pc = 0x270868u;
    SET_GPR_U32(ctx, 31, 0x270870u);
    ctx->pc = 0x27086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270868u;
    // 0x27086c: 0x112140  sll         $a0, $s1, 5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x270868u, 0x270870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270870u;
label_270870:
    // 0x270870: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x270870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_270874:
    // 0x270874: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x270874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_270878:
    // 0x270878: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x270878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_27087c:
    // 0x27087c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_270880:
    // 0x270880: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x270880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_270884:
    // 0x270884: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x270884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_270888:
    // 0x270888: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_27088c:
    if (ctx->pc == 0x27088Cu) {
        ctx->pc = 0x27088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270888u;
        // 0x27088c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270890u;
        goto label_270890;
    }
    ctx->pc = 0x270888u;
    {
        const bool branch_taken_0x270888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270888u;
        // 0x27088c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270888) {
            ctx->pc = 0x2708B0u;
            goto label_2708b0;
        }
    }
    ctx->pc = 0x270890u;
label_270890:
    // 0x270890: 0xc074268  jal         func_1D09A0
label_270894:
    if (ctx->pc == 0x270894u) {
        ctx->pc = 0x270898u;
        goto label_270898;
    }
    ctx->pc = 0x270890u;
    SET_GPR_U32(ctx, 31, 0x270898u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x270890u, 0x270898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270898u;
label_270898:
    // 0x270898: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x270898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_27089c:
    // 0x27089c: 0xc09d4d8  jal         func_275360
label_2708a0:
    if (ctx->pc == 0x2708A0u) {
        ctx->pc = 0x2708A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27089Cu;
        // 0x2708a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708A4u;
        goto label_2708a4;
    }
    ctx->pc = 0x27089Cu;
    SET_GPR_U32(ctx, 31, 0x2708A4u);
    ctx->pc = 0x2708A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27089Cu;
    // 0x2708a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x27089Cu, 0x2708A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708A4u;
label_2708a4:
    // 0x2708a4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2708a8:
    if (ctx->pc == 0x2708A8u) {
        ctx->pc = 0x2708A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708A4u;
        // 0x2708a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708ACu;
        goto label_2708ac;
    }
    ctx->pc = 0x2708A4u;
    {
        const bool branch_taken_0x2708a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2708A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708A4u;
        // 0x2708a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708a4) {
            ctx->pc = 0x2708D8u;
            goto label_2708d8;
        }
    }
    ctx->pc = 0x2708ACu;
label_2708ac:
    // 0x2708ac: 0x0  nop
    ctx->pc = 0x2708acu;
    // NOP
label_2708b0:
    // 0x2708b0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2708b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2708b4:
    // 0x2708b4: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2708b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2708b8:
    // 0x2708b8: 0xc09d4d8  jal         func_275360
label_2708bc:
    if (ctx->pc == 0x2708BCu) {
        ctx->pc = 0x2708BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708B8u;
        // 0x2708bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708C0u;
        goto label_2708c0;
    }
    ctx->pc = 0x2708B8u;
    SET_GPR_U32(ctx, 31, 0x2708C0u);
    ctx->pc = 0x2708BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2708B8u;
    // 0x2708bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2708B8u, 0x2708C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708C0u;
label_2708c0:
    // 0x2708c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2708c4:
    if (ctx->pc == 0x2708C4u) {
        ctx->pc = 0x2708C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708C0u;
        // 0x2708c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708C8u;
        goto label_2708c8;
    }
    ctx->pc = 0x2708C0u;
    {
        const bool branch_taken_0x2708c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2708C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708C0u;
        // 0x2708c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708c0) {
            ctx->pc = 0x2708D8u;
            goto label_2708d8;
        }
    }
    ctx->pc = 0x2708C8u;
label_2708c8:
    // 0x2708c8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2708c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2708cc:
    // 0x2708cc: 0xc09d4d8  jal         func_275360
label_2708d0:
    if (ctx->pc == 0x2708D0u) {
        ctx->pc = 0x2708D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708CCu;
        // 0x2708d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708D4u;
        goto label_2708d4;
    }
    ctx->pc = 0x2708CCu;
    SET_GPR_U32(ctx, 31, 0x2708D4u);
    ctx->pc = 0x2708D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2708CCu;
    // 0x2708d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2708CCu, 0x2708D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708D4u;
label_2708d4:
    // 0x2708d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2708d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2708d8:
    // 0x2708d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2708d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2708dc:
    // 0x2708dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2708dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2708e0:
    // 0x2708e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2708e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2708e4:
    // 0x2708e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2708e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2708e8:
    // 0x2708e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2708e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2708ec:
    // 0x2708ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2708ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2708f0:
    // 0x2708f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2708f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2708f4:
    // 0x2708f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2708f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2708f8:
    // 0x2708f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2708f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2708fc:
    // 0x2708fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2708fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_270900:
    // 0x270900: 0x3e00008  jr          $ra
label_270904:
    if (ctx->pc == 0x270904u) {
        ctx->pc = 0x270904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270900u;
        // 0x270904: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270908u;
        goto label_fallthrough_0x270900;
    }
    ctx->pc = 0x270900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270900u;
        // 0x270904: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x270900:
    ctx->pc = 0x270908u;
}
