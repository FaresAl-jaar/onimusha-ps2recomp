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

// Function: sub_00357110
// Address: 0x357110 - 0x3574d0
void sub_00357110_0x357110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357110_0x357110");
#endif

    switch (ctx->pc) {
        case 0x357110u: goto label_357110;
        case 0x357114u: goto label_357114;
        case 0x357118u: goto label_357118;
        case 0x35711cu: goto label_35711c;
        case 0x357120u: goto label_357120;
        case 0x357124u: goto label_357124;
        case 0x357128u: goto label_357128;
        case 0x35712cu: goto label_35712c;
        case 0x357130u: goto label_357130;
        case 0x357134u: goto label_357134;
        case 0x357138u: goto label_357138;
        case 0x35713cu: goto label_35713c;
        case 0x357140u: goto label_357140;
        case 0x357144u: goto label_357144;
        case 0x357148u: goto label_357148;
        case 0x35714cu: goto label_35714c;
        case 0x357150u: goto label_357150;
        case 0x357154u: goto label_357154;
        case 0x357158u: goto label_357158;
        case 0x35715cu: goto label_35715c;
        case 0x357160u: goto label_357160;
        case 0x357164u: goto label_357164;
        case 0x357168u: goto label_357168;
        case 0x35716cu: goto label_35716c;
        case 0x357170u: goto label_357170;
        case 0x357174u: goto label_357174;
        case 0x357178u: goto label_357178;
        case 0x35717cu: goto label_35717c;
        case 0x357180u: goto label_357180;
        case 0x357184u: goto label_357184;
        case 0x357188u: goto label_357188;
        case 0x35718cu: goto label_35718c;
        case 0x357190u: goto label_357190;
        case 0x357194u: goto label_357194;
        case 0x357198u: goto label_357198;
        case 0x35719cu: goto label_35719c;
        case 0x3571a0u: goto label_3571a0;
        case 0x3571a4u: goto label_3571a4;
        case 0x3571a8u: goto label_3571a8;
        case 0x3571acu: goto label_3571ac;
        case 0x3571b0u: goto label_3571b0;
        case 0x3571b4u: goto label_3571b4;
        case 0x3571b8u: goto label_3571b8;
        case 0x3571bcu: goto label_3571bc;
        case 0x3571c0u: goto label_3571c0;
        case 0x3571c4u: goto label_3571c4;
        case 0x3571c8u: goto label_3571c8;
        case 0x3571ccu: goto label_3571cc;
        case 0x3571d0u: goto label_3571d0;
        case 0x3571d4u: goto label_3571d4;
        case 0x3571d8u: goto label_3571d8;
        case 0x3571dcu: goto label_3571dc;
        case 0x3571e0u: goto label_3571e0;
        case 0x3571e4u: goto label_3571e4;
        case 0x3571e8u: goto label_3571e8;
        case 0x3571ecu: goto label_3571ec;
        case 0x3571f0u: goto label_3571f0;
        case 0x3571f4u: goto label_3571f4;
        case 0x3571f8u: goto label_3571f8;
        case 0x3571fcu: goto label_3571fc;
        case 0x357200u: goto label_357200;
        case 0x357204u: goto label_357204;
        case 0x357208u: goto label_357208;
        case 0x35720cu: goto label_35720c;
        case 0x357210u: goto label_357210;
        case 0x357214u: goto label_357214;
        case 0x357218u: goto label_357218;
        case 0x35721cu: goto label_35721c;
        case 0x357220u: goto label_357220;
        case 0x357224u: goto label_357224;
        case 0x357228u: goto label_357228;
        case 0x35722cu: goto label_35722c;
        case 0x357230u: goto label_357230;
        case 0x357234u: goto label_357234;
        case 0x357238u: goto label_357238;
        case 0x35723cu: goto label_35723c;
        case 0x357240u: goto label_357240;
        case 0x357244u: goto label_357244;
        case 0x357248u: goto label_357248;
        case 0x35724cu: goto label_35724c;
        case 0x357250u: goto label_357250;
        case 0x357254u: goto label_357254;
        case 0x357258u: goto label_357258;
        case 0x35725cu: goto label_35725c;
        case 0x357260u: goto label_357260;
        case 0x357264u: goto label_357264;
        case 0x357268u: goto label_357268;
        case 0x35726cu: goto label_35726c;
        case 0x357270u: goto label_357270;
        case 0x357274u: goto label_357274;
        case 0x357278u: goto label_357278;
        case 0x35727cu: goto label_35727c;
        case 0x357280u: goto label_357280;
        case 0x357284u: goto label_357284;
        case 0x357288u: goto label_357288;
        case 0x35728cu: goto label_35728c;
        case 0x357290u: goto label_357290;
        case 0x357294u: goto label_357294;
        case 0x357298u: goto label_357298;
        case 0x35729cu: goto label_35729c;
        case 0x3572a0u: goto label_3572a0;
        case 0x3572a4u: goto label_3572a4;
        case 0x3572a8u: goto label_3572a8;
        case 0x3572acu: goto label_3572ac;
        case 0x3572b0u: goto label_3572b0;
        case 0x3572b4u: goto label_3572b4;
        case 0x3572b8u: goto label_3572b8;
        case 0x3572bcu: goto label_3572bc;
        case 0x3572c0u: goto label_3572c0;
        case 0x3572c4u: goto label_3572c4;
        case 0x3572c8u: goto label_3572c8;
        case 0x3572ccu: goto label_3572cc;
        case 0x3572d0u: goto label_3572d0;
        case 0x3572d4u: goto label_3572d4;
        case 0x3572d8u: goto label_3572d8;
        case 0x3572dcu: goto label_3572dc;
        case 0x3572e0u: goto label_3572e0;
        case 0x3572e4u: goto label_3572e4;
        case 0x3572e8u: goto label_3572e8;
        case 0x3572ecu: goto label_3572ec;
        case 0x3572f0u: goto label_3572f0;
        case 0x3572f4u: goto label_3572f4;
        case 0x3572f8u: goto label_3572f8;
        case 0x3572fcu: goto label_3572fc;
        case 0x357300u: goto label_357300;
        case 0x357304u: goto label_357304;
        case 0x357308u: goto label_357308;
        case 0x35730cu: goto label_35730c;
        case 0x357310u: goto label_357310;
        case 0x357314u: goto label_357314;
        case 0x357318u: goto label_357318;
        case 0x35731cu: goto label_35731c;
        case 0x357320u: goto label_357320;
        case 0x357324u: goto label_357324;
        case 0x357328u: goto label_357328;
        case 0x35732cu: goto label_35732c;
        case 0x357330u: goto label_357330;
        case 0x357334u: goto label_357334;
        case 0x357338u: goto label_357338;
        case 0x35733cu: goto label_35733c;
        case 0x357340u: goto label_357340;
        case 0x357344u: goto label_357344;
        case 0x357348u: goto label_357348;
        case 0x35734cu: goto label_35734c;
        case 0x357350u: goto label_357350;
        case 0x357354u: goto label_357354;
        case 0x357358u: goto label_357358;
        case 0x35735cu: goto label_35735c;
        case 0x357360u: goto label_357360;
        case 0x357364u: goto label_357364;
        case 0x357368u: goto label_357368;
        case 0x35736cu: goto label_35736c;
        case 0x357370u: goto label_357370;
        case 0x357374u: goto label_357374;
        case 0x357378u: goto label_357378;
        case 0x35737cu: goto label_35737c;
        case 0x357380u: goto label_357380;
        case 0x357384u: goto label_357384;
        case 0x357388u: goto label_357388;
        case 0x35738cu: goto label_35738c;
        case 0x357390u: goto label_357390;
        case 0x357394u: goto label_357394;
        case 0x357398u: goto label_357398;
        case 0x35739cu: goto label_35739c;
        case 0x3573a0u: goto label_3573a0;
        case 0x3573a4u: goto label_3573a4;
        case 0x3573a8u: goto label_3573a8;
        case 0x3573acu: goto label_3573ac;
        case 0x3573b0u: goto label_3573b0;
        case 0x3573b4u: goto label_3573b4;
        case 0x3573b8u: goto label_3573b8;
        case 0x3573bcu: goto label_3573bc;
        case 0x3573c0u: goto label_3573c0;
        case 0x3573c4u: goto label_3573c4;
        case 0x3573c8u: goto label_3573c8;
        case 0x3573ccu: goto label_3573cc;
        case 0x3573d0u: goto label_3573d0;
        case 0x3573d4u: goto label_3573d4;
        case 0x3573d8u: goto label_3573d8;
        case 0x3573dcu: goto label_3573dc;
        case 0x3573e0u: goto label_3573e0;
        case 0x3573e4u: goto label_3573e4;
        case 0x3573e8u: goto label_3573e8;
        case 0x3573ecu: goto label_3573ec;
        case 0x3573f0u: goto label_3573f0;
        case 0x3573f4u: goto label_3573f4;
        case 0x3573f8u: goto label_3573f8;
        case 0x3573fcu: goto label_3573fc;
        case 0x357400u: goto label_357400;
        case 0x357404u: goto label_357404;
        case 0x357408u: goto label_357408;
        case 0x35740cu: goto label_35740c;
        case 0x357410u: goto label_357410;
        case 0x357414u: goto label_357414;
        case 0x357418u: goto label_357418;
        case 0x35741cu: goto label_35741c;
        case 0x357420u: goto label_357420;
        case 0x357424u: goto label_357424;
        case 0x357428u: goto label_357428;
        case 0x35742cu: goto label_35742c;
        case 0x357430u: goto label_357430;
        case 0x357434u: goto label_357434;
        case 0x357438u: goto label_357438;
        case 0x35743cu: goto label_35743c;
        case 0x357440u: goto label_357440;
        case 0x357444u: goto label_357444;
        case 0x357448u: goto label_357448;
        case 0x35744cu: goto label_35744c;
        case 0x357450u: goto label_357450;
        case 0x357454u: goto label_357454;
        case 0x357458u: goto label_357458;
        case 0x35745cu: goto label_35745c;
        case 0x357460u: goto label_357460;
        case 0x357464u: goto label_357464;
        case 0x357468u: goto label_357468;
        case 0x35746cu: goto label_35746c;
        case 0x357470u: goto label_357470;
        case 0x357474u: goto label_357474;
        case 0x357478u: goto label_357478;
        case 0x35747cu: goto label_35747c;
        case 0x357480u: goto label_357480;
        case 0x357484u: goto label_357484;
        case 0x357488u: goto label_357488;
        case 0x35748cu: goto label_35748c;
        case 0x357490u: goto label_357490;
        case 0x357494u: goto label_357494;
        case 0x357498u: goto label_357498;
        case 0x35749cu: goto label_35749c;
        case 0x3574a0u: goto label_3574a0;
        case 0x3574a4u: goto label_3574a4;
        case 0x3574a8u: goto label_3574a8;
        case 0x3574acu: goto label_3574ac;
        case 0x3574b0u: goto label_3574b0;
        case 0x3574b4u: goto label_3574b4;
        case 0x3574b8u: goto label_3574b8;
        case 0x3574bcu: goto label_3574bc;
        case 0x3574c0u: goto label_3574c0;
        case 0x3574c4u: goto label_3574c4;
        case 0x3574c8u: goto label_3574c8;
        case 0x3574ccu: goto label_3574cc;
        default: break;
    }

    ctx->pc = 0x357110u;

label_357110:
    // 0x357110: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x357110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_357114:
    // 0x357114: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x357114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_357118:
    // 0x357118: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x357118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_35711c:
    // 0x35711c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x35711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_357120:
    // 0x357120: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x357120u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_357124:
    // 0x357124: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x357124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_357128:
    // 0x357128: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x357128u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_35712c:
    // 0x35712c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35712cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_357130:
    // 0x357130: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x357130u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_357134:
    // 0x357134: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x357134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_357138:
    // 0x357138: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x357138u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_35713c:
    // 0x35713c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_357140:
    // 0x357140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x357140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_357144:
    // 0x357144: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x357144u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_357148:
    // 0x357148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35714c:
    // 0x35714c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x35714cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_357150:
    // 0x357150: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x357150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_357154:
    // 0x357154: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x357154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_357158:
    // 0x357158: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x357158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35715c:
    // 0x35715c: 0xc09d4d4  jal         func_275350
label_357160:
    if (ctx->pc == 0x357160u) {
        ctx->pc = 0x357160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35715Cu;
        // 0x357160: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357164u;
        goto label_357164;
    }
    ctx->pc = 0x35715Cu;
    SET_GPR_U32(ctx, 31, 0x357164u);
    ctx->pc = 0x357160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35715Cu;
    // 0x357160: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x35715Cu, 0x357164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357164u;
label_357164:
    // 0x357164: 0xc0741a4  jal         func_1D0690
label_357168:
    if (ctx->pc == 0x357168u) {
        ctx->pc = 0x357168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357164u;
        // 0x357168: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35716Cu;
        goto label_35716c;
    }
    ctx->pc = 0x357164u;
    SET_GPR_U32(ctx, 31, 0x35716Cu);
    ctx->pc = 0x357168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357164u;
    // 0x357168: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x357164u, 0x35716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35716Cu;
label_35716c:
    // 0x35716c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35716cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357170:
    // 0x357170: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_357174:
    if (ctx->pc == 0x357174u) {
        ctx->pc = 0x357174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357170u;
        // 0x357174: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357178u;
        goto label_357178;
    }
    ctx->pc = 0x357170u;
    {
        const bool branch_taken_0x357170 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x357174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357170u;
        // 0x357174: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357170) {
            ctx->pc = 0x3571A0u;
            goto label_3571a0;
        }
    }
    ctx->pc = 0x357178u;
label_357178:
    // 0x357178: 0xc096b00  jal         func_25AC00
label_35717c:
    if (ctx->pc == 0x35717Cu) {
        ctx->pc = 0x357180u;
        goto label_357180;
    }
    ctx->pc = 0x357178u;
    SET_GPR_U32(ctx, 31, 0x357180u);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x357178u, 0x357180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357180u;
label_357180:
    // 0x357180: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x357180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_357184:
    // 0x357184: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x357184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_357188:
    // 0x357188: 0x24639090  addiu       $v1, $v1, -0x6F70
    ctx->pc = 0x357188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938768));
label_35718c:
    // 0x35718c: 0x24429070  addiu       $v0, $v0, -0x6F90
    ctx->pc = 0x35718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938736));
label_357190:
    // 0x357190: 0xae830034  sw          $v1, 0x34($s4)
    ctx->pc = 0x357190u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
label_357194:
    // 0x357194: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x357194u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
label_357198:
    // 0x357198: 0xae8000a0  sw          $zero, 0xA0($s4)
    ctx->pc = 0x357198u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 0));
label_35719c:
    // 0x35719c: 0x0  nop
    ctx->pc = 0x35719cu;
    // NOP
label_3571a0:
    // 0x3571a0: 0x128000bb  beqz        $s4, . + 4 + (0xBB << 2)
label_3571a4:
    if (ctx->pc == 0x3571A4u) {
        ctx->pc = 0x3571A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571A0u;
        // 0x3571a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3571A8u;
        goto label_3571a8;
    }
    ctx->pc = 0x3571A0u;
    {
        const bool branch_taken_0x3571a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3571A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571A0u;
        // 0x3571a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3571a0) {
            ctx->pc = 0x357490u;
            goto label_357490;
        }
    }
    ctx->pc = 0x3571A8u;
label_3571a8:
    // 0x3571a8: 0xc09d4fc  jal         func_2753F0
label_3571ac:
    if (ctx->pc == 0x3571ACu) {
        ctx->pc = 0x3571ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571A8u;
        // 0x3571ac: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3571B0u;
        goto label_3571b0;
    }
    ctx->pc = 0x3571A8u;
    SET_GPR_U32(ctx, 31, 0x3571B0u);
    ctx->pc = 0x3571ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3571A8u;
    // 0x3571ac: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x3571A8u, 0x3571B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571B0u;
label_3571b0:
    // 0x3571b0: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x3571b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_3571b4:
    // 0x3571b4: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x3571b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_3571b8:
    // 0x3571b8: 0xc09d524  jal         func_275490
label_3571bc:
    if (ctx->pc == 0x3571BCu) {
        ctx->pc = 0x3571BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571B8u;
        // 0x3571bc: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3571C0u;
        goto label_3571c0;
    }
    ctx->pc = 0x3571B8u;
    SET_GPR_U32(ctx, 31, 0x3571C0u);
    ctx->pc = 0x3571BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3571B8u;
    // 0x3571bc: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x3571B8u, 0x3571C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571C0u;
label_3571c0:
    // 0x3571c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3571c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3571c4:
    // 0x3571c4: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_3571c8:
    if (ctx->pc == 0x3571C8u) {
        ctx->pc = 0x3571CCu;
        goto label_3571cc;
    }
    ctx->pc = 0x3571C4u;
    {
        const bool branch_taken_0x3571c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3571c4) {
            ctx->pc = 0x357200u;
            goto label_357200;
        }
    }
    ctx->pc = 0x3571CCu;
label_3571cc:
    // 0x3571cc: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_3571d0:
    if (ctx->pc == 0x3571D0u) {
        ctx->pc = 0x3571D4u;
        goto label_3571d4;
    }
    ctx->pc = 0x3571CCu;
    {
        const bool branch_taken_0x3571cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3571cc) {
            ctx->pc = 0x3571E8u;
            goto label_3571e8;
        }
    }
    ctx->pc = 0x3571D4u;
label_3571d4:
    // 0x3571d4: 0x8e990034  lw          $t9, 0x34($s4)
    ctx->pc = 0x3571d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_3571d8:
    // 0x3571d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3571d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3571dc:
    // 0x3571dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3571dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3571e0:
    // 0x3571e0: 0x320f809  jalr        $t9
label_3571e4:
    if (ctx->pc == 0x3571E4u) {
        ctx->pc = 0x3571E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571E0u;
        // 0x3571e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3571E8u;
        goto label_3571e8;
    }
    ctx->pc = 0x3571E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3571E8u);
        ctx->pc = 0x3571E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571E0u;
        // 0x3571e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3571E0u, 0x3571E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3571E8u;
label_3571e8:
    // 0x3571e8: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x3571e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_3571ec:
    // 0x3571ec: 0xc09d4d8  jal         func_275360
label_3571f0:
    if (ctx->pc == 0x3571F0u) {
        ctx->pc = 0x3571F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571ECu;
        // 0x3571f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3571F4u;
        goto label_3571f4;
    }
    ctx->pc = 0x3571ECu;
    SET_GPR_U32(ctx, 31, 0x3571F4u);
    ctx->pc = 0x3571F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3571ECu;
    // 0x3571f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x3571ECu, 0x3571F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571F4u;
label_3571f4:
    // 0x3571f4: 0x100000aa  b           . + 4 + (0xAA << 2)
label_3571f8:
    if (ctx->pc == 0x3571F8u) {
        ctx->pc = 0x3571F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571F4u;
        // 0x3571f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3571FCu;
        goto label_3571fc;
    }
    ctx->pc = 0x3571F4u;
    {
        const bool branch_taken_0x3571f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3571F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571F4u;
        // 0x3571f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3571f4) {
            ctx->pc = 0x3574A0u;
            goto label_3574a0;
        }
    }
    ctx->pc = 0x3571FCu;
label_3571fc:
    // 0x3571fc: 0x0  nop
    ctx->pc = 0x3571fcu;
    // NOP
label_357200:
    // 0x357200: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x357200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_357204:
    // 0x357204: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x357204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357208:
    // 0x357208: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x357208u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35720c:
    // 0x35720c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x35720cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_357210:
    // 0x357210: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x357210u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_357214:
    // 0x357214: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x357214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_357218:
    // 0x357218: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x357218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_35721c:
    // 0x35721c: 0xc096b38  jal         func_25ACE0
label_357220:
    if (ctx->pc == 0x357220u) {
        ctx->pc = 0x357220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35721Cu;
        // 0x357220: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357224u;
        goto label_357224;
    }
    ctx->pc = 0x35721Cu;
    SET_GPR_U32(ctx, 31, 0x357224u);
    ctx->pc = 0x357220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35721Cu;
    // 0x357220: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x35721Cu, 0x357224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357224u;
label_357224:
    // 0x357224: 0xa680005a  sh          $zero, 0x5A($s4)
    ctx->pc = 0x357224u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 90), (uint16_t)GPR_U32(ctx, 0));
label_357228:
    // 0x357228: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x357228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_35722c:
    // 0x35722c: 0xa6800058  sh          $zero, 0x58($s4)
    ctx->pc = 0x35722cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 0));
label_357230:
    // 0x357230: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x357230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_357234:
    // 0x357234: 0xa6800056  sh          $zero, 0x56($s4)
    ctx->pc = 0x357234u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 86), (uint16_t)GPR_U32(ctx, 0));
label_357238:
    // 0x357238: 0xa2800051  sb          $zero, 0x51($s4)
    ctx->pc = 0x357238u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 81), (uint8_t)GPR_U32(ctx, 0));
label_35723c:
    // 0x35723c: 0xa6830084  sh          $v1, 0x84($s4)
    ctx->pc = 0x35723cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 132), (uint16_t)GPR_U32(ctx, 3));
label_357240:
    // 0x357240: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x357240u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
label_357244:
    // 0x357244: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x357244u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_357248:
    // 0x357248: 0x7e820070  sq          $v0, 0x70($s4)
    ctx->pc = 0x357248u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 112), GPR_VEC(ctx, 2));
label_35724c:
    // 0x35724c: 0xae9200a4  sw          $s2, 0xA4($s4)
    ctx->pc = 0x35724cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 18));
label_357250:
    // 0x357250: 0xae8000a8  sw          $zero, 0xA8($s4)
    ctx->pc = 0x357250u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 0));
label_357254:
    // 0x357254: 0xae8000ac  sw          $zero, 0xAC($s4)
    ctx->pc = 0x357254u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 0));
label_357258:
    // 0x357258: 0x92450004  lbu         $a1, 0x4($s2)
    ctx->pc = 0x357258u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_35725c:
    // 0x35725c: 0x92460005  lbu         $a2, 0x5($s2)
    ctx->pc = 0x35725cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_357260:
    // 0x357260: 0xc074350  jal         func_1D0D40
label_357264:
    if (ctx->pc == 0x357264u) {
        ctx->pc = 0x357264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357260u;
        // 0x357264: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357268u;
        goto label_357268;
    }
    ctx->pc = 0x357260u;
    SET_GPR_U32(ctx, 31, 0x357268u);
    ctx->pc = 0x357264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357260u;
    // 0x357264: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x357260u, 0x357268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357268u;
label_357268:
    // 0x357268: 0x92450006  lbu         $a1, 0x6($s2)
    ctx->pc = 0x357268u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_35726c:
    // 0x35726c: 0x92460007  lbu         $a2, 0x7($s2)
    ctx->pc = 0x35726cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
label_357270:
    // 0x357270: 0xc074378  jal         func_1D0DE0
label_357274:
    if (ctx->pc == 0x357274u) {
        ctx->pc = 0x357274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357270u;
        // 0x357274: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357278u;
        goto label_357278;
    }
    ctx->pc = 0x357270u;
    SET_GPR_U32(ctx, 31, 0x357278u);
    ctx->pc = 0x357274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357270u;
    // 0x357274: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x357270u, 0x357278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357278u;
label_357278:
    // 0x357278: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x357278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_35727c:
    // 0x35727c: 0xc0741a4  jal         func_1D0690
label_357280:
    if (ctx->pc == 0x357280u) {
        ctx->pc = 0x357280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35727Cu;
        // 0x357280: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357284u;
        goto label_357284;
    }
    ctx->pc = 0x35727Cu;
    SET_GPR_U32(ctx, 31, 0x357284u);
    ctx->pc = 0x357280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35727Cu;
    // 0x357280: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x35727Cu, 0x357284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357284u;
label_357284:
    // 0x357284: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x357284u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
label_357288:
    // 0x357288: 0x8e8200a0  lw          $v0, 0xA0($s4)
    ctx->pc = 0x357288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
label_35728c:
    // 0x35728c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_357290:
    if (ctx->pc == 0x357290u) {
        ctx->pc = 0x357290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35728Cu;
        // 0x357290: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357294u;
        goto label_357294;
    }
    ctx->pc = 0x35728Cu;
    {
        const bool branch_taken_0x35728c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35728Cu;
        // 0x357290: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35728c) {
            ctx->pc = 0x3572B0u;
            goto label_3572b0;
        }
    }
    ctx->pc = 0x357294u;
label_357294:
    // 0x357294: 0xc074268  jal         func_1D09A0
label_357298:
    if (ctx->pc == 0x357298u) {
        ctx->pc = 0x35729Cu;
        goto label_35729c;
    }
    ctx->pc = 0x357294u;
    SET_GPR_U32(ctx, 31, 0x35729Cu);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x357294u, 0x35729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35729Cu;
label_35729c:
    // 0x35729c: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x35729cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_3572a0:
    // 0x3572a0: 0xc09d4d8  jal         func_275360
label_3572a4:
    if (ctx->pc == 0x3572A4u) {
        ctx->pc = 0x3572A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572A0u;
        // 0x3572a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3572A8u;
        goto label_3572a8;
    }
    ctx->pc = 0x3572A0u;
    SET_GPR_U32(ctx, 31, 0x3572A8u);
    ctx->pc = 0x3572A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3572A0u;
    // 0x3572a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x3572A0u, 0x3572A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572A8u;
label_3572a8:
    // 0x3572a8: 0x1000007d  b           . + 4 + (0x7D << 2)
label_3572ac:
    if (ctx->pc == 0x3572ACu) {
        ctx->pc = 0x3572ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572A8u;
        // 0x3572ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3572B0u;
        goto label_3572b0;
    }
    ctx->pc = 0x3572A8u;
    {
        const bool branch_taken_0x3572a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3572ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572A8u;
        // 0x3572ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3572a8) {
            ctx->pc = 0x3574A0u;
            goto label_3574a0;
        }
    }
    ctx->pc = 0x3572B0u;
label_3572b0:
    // 0x3572b0: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x3572b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_3572b4:
    // 0x3572b4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3572b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3572b8:
    // 0x3572b8: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
label_3572bc:
    if (ctx->pc == 0x3572BCu) {
        ctx->pc = 0x3572BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572B8u;
        // 0x3572bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3572C0u;
        goto label_3572c0;
    }
    ctx->pc = 0x3572B8u;
    {
        const bool branch_taken_0x3572b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3572BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572B8u;
        // 0x3572bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3572b8) {
            ctx->pc = 0x357478u;
            goto label_357478;
        }
    }
    ctx->pc = 0x3572C0u;
label_3572c0:
    // 0x3572c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3572c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3572c4:
    // 0x3572c4: 0x27b500a4  addiu       $s5, $sp, 0xA4
    ctx->pc = 0x3572c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_3572c8:
    // 0x3572c8: 0x27b600a8  addiu       $s6, $sp, 0xA8
    ctx->pc = 0x3572c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_3572cc:
    // 0x3572cc: 0x0  nop
    ctx->pc = 0x3572ccu;
    // NOP
label_3572d0:
    // 0x3572d0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3572d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3572d4:
    // 0x3572d4: 0x8e8200a0  lw          $v0, 0xA0($s4)
    ctx->pc = 0x3572d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
label_3572d8:
    // 0x3572d8: 0x78235c10  lq          $v1, 0x5C10($at)
    ctx->pc = 0x3572d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23568)));
label_3572dc:
    // 0x3572dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3572dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3572e0:
    // 0x3572e0: 0x1260005f  beqz        $s3, . + 4 + (0x5F << 2)
label_3572e4:
    if (ctx->pc == 0x3572E4u) {
        ctx->pc = 0x3572E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572E0u;
        // 0x3572e4: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3572E8u;
        goto label_3572e8;
    }
    ctx->pc = 0x3572E0u;
    {
        const bool branch_taken_0x3572e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3572E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572E0u;
        // 0x3572e4: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3572e0) {
            ctx->pc = 0x357460u;
            goto label_357460;
        }
    }
    ctx->pc = 0x3572E8u;
label_3572e8:
    // 0x3572e8: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x3572e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_3572ec:
    // 0x3572ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3572ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3572f0:
    // 0x3572f0: 0x1262005b  beq         $s3, $v0, . + 4 + (0x5B << 2)
label_3572f4:
    if (ctx->pc == 0x3572F4u) {
        ctx->pc = 0x3572F8u;
        goto label_3572f8;
    }
    ctx->pc = 0x3572F0u;
    {
        const bool branch_taken_0x3572f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3572f0) {
            ctx->pc = 0x357460u;
            goto label_357460;
        }
    }
    ctx->pc = 0x3572F8u;
label_3572f8:
    // 0x3572f8: 0x8e8200a0  lw          $v0, 0xA0($s4)
    ctx->pc = 0x3572f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
label_3572fc:
    // 0x3572fc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3572fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_357300:
    // 0x357300: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x357300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_357304:
    // 0x357304: 0x26460040  addiu       $a2, $s2, 0x40
    ctx->pc = 0x357304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_357308:
    // 0x357308: 0xc0766b8  jal         func_1D9AE0
label_35730c:
    if (ctx->pc == 0x35730Cu) {
        ctx->pc = 0x35730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357308u;
        // 0x35730c: 0x508821  addu        $s1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357310u;
        goto label_357310;
    }
    ctx->pc = 0x357308u;
    SET_GPR_U32(ctx, 31, 0x357310u);
    ctx->pc = 0x35730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357308u;
    // 0x35730c: 0x508821  addu        $s1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x357308u, 0x357310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357310u;
label_357310:
    // 0x357310: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x357310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_357314:
    // 0x357314: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x357314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_357318:
    // 0x357318: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x357318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_35731c:
    // 0x35731c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x35731cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_357320:
    // 0x357320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x357320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_357324:
    // 0x357324: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x357324u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_357328:
    // 0x357328: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x357328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_35732c:
    // 0x35732c: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x35732cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
label_357330:
    // 0x357330: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_357334:
    if (ctx->pc == 0x357334u) {
        ctx->pc = 0x357334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357330u;
        // 0x357334: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357338u;
        goto label_357338;
    }
    ctx->pc = 0x357330u;
    {
        const bool branch_taken_0x357330 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x357334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357330u;
        // 0x357334: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357330) {
            ctx->pc = 0x357344u;
            goto label_357344;
        }
    }
    ctx->pc = 0x357338u;
label_357338:
    // 0x357338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x357338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35733c:
    // 0x35733c: 0x10000007  b           . + 4 + (0x7 << 2)
label_357340:
    if (ctx->pc == 0x357340u) {
        ctx->pc = 0x357340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35733Cu;
        // 0x357340: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x357344u;
        goto label_357344;
    }
    ctx->pc = 0x35733Cu;
    {
        const bool branch_taken_0x35733c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35733Cu;
        // 0x357340: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35733c) {
            ctx->pc = 0x35735Cu;
            goto label_35735c;
        }
    }
    ctx->pc = 0x357344u;
label_357344:
    // 0x357344: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x357344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_357348:
    // 0x357348: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x357348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_35734c:
    // 0x35734c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35734cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_357350:
    // 0x357350: 0x0  nop
    ctx->pc = 0x357350u;
    // NOP
label_357354:
    // 0x357354: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x357354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_357358:
    // 0x357358: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x357358u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_35735c:
    // 0x35735c: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x35735cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
label_357360:
    // 0x357360: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x357360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_357364:
    // 0x357364: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x357364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_357368:
    // 0x357368: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x357368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_35736c:
    // 0x35736c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x35736cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_357370:
    // 0x357370: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x357370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_357374:
    // 0x357374: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x357374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_357378:
    // 0x357378: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x357378u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_35737c:
    // 0x35737c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35737cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_357380:
    // 0x357380: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x357380u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_357384:
    // 0x357384: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x357384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_357388:
    // 0x357388: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x357388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35738c:
    // 0x35738c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x35738cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_357390:
    // 0x357390: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_357394:
    if (ctx->pc == 0x357394u) {
        ctx->pc = 0x357394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357390u;
        // 0x357394: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x357398u;
        goto label_357398;
    }
    ctx->pc = 0x357390u;
    {
        const bool branch_taken_0x357390 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x357394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357390u;
        // 0x357394: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x357390) {
            ctx->pc = 0x3573A4u;
            goto label_3573a4;
        }
    }
    ctx->pc = 0x357398u;
label_357398:
    // 0x357398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x357398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35739c:
    // 0x35739c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3573a0:
    if (ctx->pc == 0x3573A0u) {
        ctx->pc = 0x3573A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35739Cu;
        // 0x3573a0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3573A4u;
        goto label_3573a4;
    }
    ctx->pc = 0x35739Cu;
    {
        const bool branch_taken_0x35739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3573A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35739Cu;
        // 0x3573a0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35739c) {
            ctx->pc = 0x3573C0u;
            goto label_3573c0;
        }
    }
    ctx->pc = 0x3573A4u;
label_3573a4:
    // 0x3573a4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3573a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3573a8:
    // 0x3573a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3573a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3573ac:
    // 0x3573ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3573acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3573b0:
    // 0x3573b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3573b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3573b4:
    // 0x3573b4: 0x0  nop
    ctx->pc = 0x3573b4u;
    // NOP
label_3573b8:
    // 0x3573b8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3573b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3573bc:
    // 0x3573bc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3573bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3573c0:
    // 0x3573c0: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x3573c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
label_3573c4:
    // 0x3573c4: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x3573c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3573c8:
    // 0x3573c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3573c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3573cc:
    // 0x3573cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3573ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3573d0:
    // 0x3573d0: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x3573d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3573d4:
    // 0x3573d4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3573d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3573d8:
    // 0x3573d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3573d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3573dc:
    // 0x3573dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3573dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3573e0:
    // 0x3573e0: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x3573e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_3573e4:
    // 0x3573e4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3573e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3573e8:
    // 0x3573e8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3573e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3573ec:
    // 0x3573ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3573ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3573f0:
    // 0x3573f0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3573f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3573f4:
    // 0x3573f4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3573f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3573f8:
    // 0x3573f8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3573f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3573fc:
    // 0x3573fc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_357400:
    if (ctx->pc == 0x357400u) {
        ctx->pc = 0x357400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3573FCu;
        // 0x357400: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357404u;
        goto label_357404;
    }
    ctx->pc = 0x3573FCu;
    {
        const bool branch_taken_0x3573fc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x357400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3573FCu;
        // 0x357400: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3573fc) {
            ctx->pc = 0x357410u;
            goto label_357410;
        }
    }
    ctx->pc = 0x357404u;
label_357404:
    // 0x357404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x357404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_357408:
    // 0x357408: 0x10000007  b           . + 4 + (0x7 << 2)
label_35740c:
    if (ctx->pc == 0x35740Cu) {
        ctx->pc = 0x35740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357408u;
        // 0x35740c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x357410u;
        goto label_357410;
    }
    ctx->pc = 0x357408u;
    {
        const bool branch_taken_0x357408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357408u;
        // 0x35740c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x357408) {
            ctx->pc = 0x357428u;
            goto label_357428;
        }
    }
    ctx->pc = 0x357410u;
label_357410:
    // 0x357410: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x357410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_357414:
    // 0x357414: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x357414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_357418:
    // 0x357418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x357418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35741c:
    // 0x35741c: 0x0  nop
    ctx->pc = 0x35741cu;
    // NOP
label_357420:
    // 0x357420: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x357420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_357424:
    // 0x357424: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x357424u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_357428:
    // 0x357428: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x357428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
label_35742c:
    // 0x35742c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35742cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_357430:
    // 0x357430: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x357430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_357434:
    // 0x357434: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x357434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_357438:
    // 0x357438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x357438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35743c:
    // 0x35743c: 0x26460040  addiu       $a2, $s2, 0x40
    ctx->pc = 0x35743cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_357440:
    // 0x357440: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x357440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_357444:
    // 0x357444: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x357444u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_357448:
    // 0x357448: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x357448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35744c:
    // 0x35744c: 0xc0766a8  jal         func_1D9AA0
label_357450:
    if (ctx->pc == 0x357450u) {
        ctx->pc = 0x357450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35744Cu;
        // 0x357450: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x357454u;
        goto label_357454;
    }
    ctx->pc = 0x35744Cu;
    SET_GPR_U32(ctx, 31, 0x357454u);
    ctx->pc = 0x357450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35744Cu;
    // 0x357450: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x35744Cu, 0x357454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357454u;
label_357454:
    // 0x357454: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x357454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_357458:
    // 0x357458: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x357458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_35745c:
    // 0x35745c: 0x0  nop
    ctx->pc = 0x35745cu;
    // NOP
label_357460:
    // 0x357460: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x357460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_357464:
    // 0x357464: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x357464u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_357468:
    // 0x357468: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x357468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_35746c:
    // 0x35746c: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
label_357470:
    if (ctx->pc == 0x357470u) {
        ctx->pc = 0x357470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35746Cu;
        // 0x357470: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357474u;
        goto label_357474;
    }
    ctx->pc = 0x35746Cu;
    {
        const bool branch_taken_0x35746c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35746Cu;
        // 0x357470: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35746c) {
            ctx->pc = 0x3572D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3572d0;
        }
    }
    ctx->pc = 0x357474u;
label_357474:
    // 0x357474: 0x0  nop
    ctx->pc = 0x357474u;
    // NOP
label_357478:
    // 0x357478: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x357478u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_35747c:
    // 0x35747c: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x35747cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_357480:
    // 0x357480: 0xc09d4d8  jal         func_275360
label_357484:
    if (ctx->pc == 0x357484u) {
        ctx->pc = 0x357484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357480u;
        // 0x357484: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357488u;
        goto label_357488;
    }
    ctx->pc = 0x357480u;
    SET_GPR_U32(ctx, 31, 0x357488u);
    ctx->pc = 0x357484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357480u;
    // 0x357484: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x357480u, 0x357488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357488u;
label_357488:
    // 0x357488: 0x10000005  b           . + 4 + (0x5 << 2)
label_35748c:
    if (ctx->pc == 0x35748Cu) {
        ctx->pc = 0x35748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357488u;
        // 0x35748c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357490u;
        goto label_357490;
    }
    ctx->pc = 0x357488u;
    {
        const bool branch_taken_0x357488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357488u;
        // 0x35748c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357488) {
            ctx->pc = 0x3574A0u;
            goto label_3574a0;
        }
    }
    ctx->pc = 0x357490u;
label_357490:
    // 0x357490: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x357490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_357494:
    // 0x357494: 0xc09d4d8  jal         func_275360
label_357498:
    if (ctx->pc == 0x357498u) {
        ctx->pc = 0x357498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357494u;
        // 0x357498: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35749Cu;
        goto label_35749c;
    }
    ctx->pc = 0x357494u;
    SET_GPR_U32(ctx, 31, 0x35749Cu);
    ctx->pc = 0x357498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357494u;
    // 0x357498: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x357494u, 0x35749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35749Cu;
label_35749c:
    // 0x35749c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35749cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3574a0:
    // 0x3574a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3574a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3574a4:
    // 0x3574a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3574a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3574a8:
    // 0x3574a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3574a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3574ac:
    // 0x3574ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3574acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3574b0:
    // 0x3574b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3574b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3574b4:
    // 0x3574b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3574b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3574b8:
    // 0x3574b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3574b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3574bc:
    // 0x3574bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3574bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3574c0:
    // 0x3574c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3574c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3574c4:
    // 0x3574c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3574c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3574c8:
    // 0x3574c8: 0x3e00008  jr          $ra
label_3574cc:
    if (ctx->pc == 0x3574CCu) {
        ctx->pc = 0x3574CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574C8u;
        // 0x3574cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3574D0u;
        goto label_fallthrough_0x3574c8;
    }
    ctx->pc = 0x3574C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3574CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574C8u;
        // 0x3574cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3574C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3574c8:
    ctx->pc = 0x3574D0u;
}
