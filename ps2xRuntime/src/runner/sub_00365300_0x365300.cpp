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

// Function: sub_00365300
// Address: 0x365300 - 0x3655d0
void sub_00365300_0x365300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365300_0x365300");
#endif

    switch (ctx->pc) {
        case 0x365300u: goto label_365300;
        case 0x365304u: goto label_365304;
        case 0x365308u: goto label_365308;
        case 0x36530cu: goto label_36530c;
        case 0x365310u: goto label_365310;
        case 0x365314u: goto label_365314;
        case 0x365318u: goto label_365318;
        case 0x36531cu: goto label_36531c;
        case 0x365320u: goto label_365320;
        case 0x365324u: goto label_365324;
        case 0x365328u: goto label_365328;
        case 0x36532cu: goto label_36532c;
        case 0x365330u: goto label_365330;
        case 0x365334u: goto label_365334;
        case 0x365338u: goto label_365338;
        case 0x36533cu: goto label_36533c;
        case 0x365340u: goto label_365340;
        case 0x365344u: goto label_365344;
        case 0x365348u: goto label_365348;
        case 0x36534cu: goto label_36534c;
        case 0x365350u: goto label_365350;
        case 0x365354u: goto label_365354;
        case 0x365358u: goto label_365358;
        case 0x36535cu: goto label_36535c;
        case 0x365360u: goto label_365360;
        case 0x365364u: goto label_365364;
        case 0x365368u: goto label_365368;
        case 0x36536cu: goto label_36536c;
        case 0x365370u: goto label_365370;
        case 0x365374u: goto label_365374;
        case 0x365378u: goto label_365378;
        case 0x36537cu: goto label_36537c;
        case 0x365380u: goto label_365380;
        case 0x365384u: goto label_365384;
        case 0x365388u: goto label_365388;
        case 0x36538cu: goto label_36538c;
        case 0x365390u: goto label_365390;
        case 0x365394u: goto label_365394;
        case 0x365398u: goto label_365398;
        case 0x36539cu: goto label_36539c;
        case 0x3653a0u: goto label_3653a0;
        case 0x3653a4u: goto label_3653a4;
        case 0x3653a8u: goto label_3653a8;
        case 0x3653acu: goto label_3653ac;
        case 0x3653b0u: goto label_3653b0;
        case 0x3653b4u: goto label_3653b4;
        case 0x3653b8u: goto label_3653b8;
        case 0x3653bcu: goto label_3653bc;
        case 0x3653c0u: goto label_3653c0;
        case 0x3653c4u: goto label_3653c4;
        case 0x3653c8u: goto label_3653c8;
        case 0x3653ccu: goto label_3653cc;
        case 0x3653d0u: goto label_3653d0;
        case 0x3653d4u: goto label_3653d4;
        case 0x3653d8u: goto label_3653d8;
        case 0x3653dcu: goto label_3653dc;
        case 0x3653e0u: goto label_3653e0;
        case 0x3653e4u: goto label_3653e4;
        case 0x3653e8u: goto label_3653e8;
        case 0x3653ecu: goto label_3653ec;
        case 0x3653f0u: goto label_3653f0;
        case 0x3653f4u: goto label_3653f4;
        case 0x3653f8u: goto label_3653f8;
        case 0x3653fcu: goto label_3653fc;
        case 0x365400u: goto label_365400;
        case 0x365404u: goto label_365404;
        case 0x365408u: goto label_365408;
        case 0x36540cu: goto label_36540c;
        case 0x365410u: goto label_365410;
        case 0x365414u: goto label_365414;
        case 0x365418u: goto label_365418;
        case 0x36541cu: goto label_36541c;
        case 0x365420u: goto label_365420;
        case 0x365424u: goto label_365424;
        case 0x365428u: goto label_365428;
        case 0x36542cu: goto label_36542c;
        case 0x365430u: goto label_365430;
        case 0x365434u: goto label_365434;
        case 0x365438u: goto label_365438;
        case 0x36543cu: goto label_36543c;
        case 0x365440u: goto label_365440;
        case 0x365444u: goto label_365444;
        case 0x365448u: goto label_365448;
        case 0x36544cu: goto label_36544c;
        case 0x365450u: goto label_365450;
        case 0x365454u: goto label_365454;
        case 0x365458u: goto label_365458;
        case 0x36545cu: goto label_36545c;
        case 0x365460u: goto label_365460;
        case 0x365464u: goto label_365464;
        case 0x365468u: goto label_365468;
        case 0x36546cu: goto label_36546c;
        case 0x365470u: goto label_365470;
        case 0x365474u: goto label_365474;
        case 0x365478u: goto label_365478;
        case 0x36547cu: goto label_36547c;
        case 0x365480u: goto label_365480;
        case 0x365484u: goto label_365484;
        case 0x365488u: goto label_365488;
        case 0x36548cu: goto label_36548c;
        case 0x365490u: goto label_365490;
        case 0x365494u: goto label_365494;
        case 0x365498u: goto label_365498;
        case 0x36549cu: goto label_36549c;
        case 0x3654a0u: goto label_3654a0;
        case 0x3654a4u: goto label_3654a4;
        case 0x3654a8u: goto label_3654a8;
        case 0x3654acu: goto label_3654ac;
        case 0x3654b0u: goto label_3654b0;
        case 0x3654b4u: goto label_3654b4;
        case 0x3654b8u: goto label_3654b8;
        case 0x3654bcu: goto label_3654bc;
        case 0x3654c0u: goto label_3654c0;
        case 0x3654c4u: goto label_3654c4;
        case 0x3654c8u: goto label_3654c8;
        case 0x3654ccu: goto label_3654cc;
        case 0x3654d0u: goto label_3654d0;
        case 0x3654d4u: goto label_3654d4;
        case 0x3654d8u: goto label_3654d8;
        case 0x3654dcu: goto label_3654dc;
        case 0x3654e0u: goto label_3654e0;
        case 0x3654e4u: goto label_3654e4;
        case 0x3654e8u: goto label_3654e8;
        case 0x3654ecu: goto label_3654ec;
        case 0x3654f0u: goto label_3654f0;
        case 0x3654f4u: goto label_3654f4;
        case 0x3654f8u: goto label_3654f8;
        case 0x3654fcu: goto label_3654fc;
        case 0x365500u: goto label_365500;
        case 0x365504u: goto label_365504;
        case 0x365508u: goto label_365508;
        case 0x36550cu: goto label_36550c;
        case 0x365510u: goto label_365510;
        case 0x365514u: goto label_365514;
        case 0x365518u: goto label_365518;
        case 0x36551cu: goto label_36551c;
        case 0x365520u: goto label_365520;
        case 0x365524u: goto label_365524;
        case 0x365528u: goto label_365528;
        case 0x36552cu: goto label_36552c;
        case 0x365530u: goto label_365530;
        case 0x365534u: goto label_365534;
        case 0x365538u: goto label_365538;
        case 0x36553cu: goto label_36553c;
        case 0x365540u: goto label_365540;
        case 0x365544u: goto label_365544;
        case 0x365548u: goto label_365548;
        case 0x36554cu: goto label_36554c;
        case 0x365550u: goto label_365550;
        case 0x365554u: goto label_365554;
        case 0x365558u: goto label_365558;
        case 0x36555cu: goto label_36555c;
        case 0x365560u: goto label_365560;
        case 0x365564u: goto label_365564;
        case 0x365568u: goto label_365568;
        case 0x36556cu: goto label_36556c;
        case 0x365570u: goto label_365570;
        case 0x365574u: goto label_365574;
        case 0x365578u: goto label_365578;
        case 0x36557cu: goto label_36557c;
        case 0x365580u: goto label_365580;
        case 0x365584u: goto label_365584;
        case 0x365588u: goto label_365588;
        case 0x36558cu: goto label_36558c;
        case 0x365590u: goto label_365590;
        case 0x365594u: goto label_365594;
        case 0x365598u: goto label_365598;
        case 0x36559cu: goto label_36559c;
        case 0x3655a0u: goto label_3655a0;
        case 0x3655a4u: goto label_3655a4;
        case 0x3655a8u: goto label_3655a8;
        case 0x3655acu: goto label_3655ac;
        case 0x3655b0u: goto label_3655b0;
        case 0x3655b4u: goto label_3655b4;
        case 0x3655b8u: goto label_3655b8;
        case 0x3655bcu: goto label_3655bc;
        case 0x3655c0u: goto label_3655c0;
        case 0x3655c4u: goto label_3655c4;
        case 0x3655c8u: goto label_3655c8;
        case 0x3655ccu: goto label_3655cc;
        default: break;
    }

    ctx->pc = 0x365300u;

label_365300:
    // 0x365300: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x365300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_365304:
    // 0x365304: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x365304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_365308:
    // 0x365308: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x365308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_36530c:
    // 0x36530c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x36530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_365310:
    // 0x365310: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x365310u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_365314:
    // 0x365314: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x365314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_365318:
    // 0x365318: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x365318u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36531c:
    // 0x36531c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x36531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_365320:
    // 0x365320: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x365320u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_365324:
    // 0x365324: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x365324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_365328:
    // 0x365328: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x365328u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_36532c:
    // 0x36532c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36532cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_365330:
    // 0x365330: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x365330u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_365334:
    // 0x365334: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x365334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_365338:
    // 0x365338: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x365338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_36533c:
    // 0x36533c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36533cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_365340:
    // 0x365340: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x365340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_365344:
    // 0x365344: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x365344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_365348:
    // 0x365348: 0xc09d4d4  jal         func_275350
label_36534c:
    if (ctx->pc == 0x36534Cu) {
        ctx->pc = 0x36534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365348u;
        // 0x36534c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365350u;
        goto label_365350;
    }
    ctx->pc = 0x365348u;
    SET_GPR_U32(ctx, 31, 0x365350u);
    ctx->pc = 0x36534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365348u;
    // 0x36534c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x365348u, 0x365350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365350u;
label_365350:
    // 0x365350: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_365354:
    if (ctx->pc == 0x365354u) {
        ctx->pc = 0x365354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365350u;
        // 0x365354: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365358u;
        goto label_365358;
    }
    ctx->pc = 0x365350u;
    {
        const bool branch_taken_0x365350 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x365354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365350u;
        // 0x365354: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365350) {
            ctx->pc = 0x365368u;
            goto label_365368;
        }
    }
    ctx->pc = 0x365358u;
label_365358:
    // 0x365358: 0xc09d4d8  jal         func_275360
label_36535c:
    if (ctx->pc == 0x36535Cu) {
        ctx->pc = 0x36535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365358u;
        // 0x36535c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365360u;
        goto label_365360;
    }
    ctx->pc = 0x365358u;
    SET_GPR_U32(ctx, 31, 0x365360u);
    ctx->pc = 0x36535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365358u;
    // 0x36535c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x365358u, 0x365360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365360u;
label_365360:
    // 0x365360: 0x1000008f  b           . + 4 + (0x8F << 2)
label_365364:
    if (ctx->pc == 0x365364u) {
        ctx->pc = 0x365364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365360u;
        // 0x365364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365368u;
        goto label_365368;
    }
    ctx->pc = 0x365360u;
    {
        const bool branch_taken_0x365360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365360u;
        // 0x365364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365360) {
            ctx->pc = 0x3655A0u;
            goto label_3655a0;
        }
    }
    ctx->pc = 0x365368u;
label_365368:
    // 0x365368: 0xc0741a4  jal         func_1D0690
label_36536c:
    if (ctx->pc == 0x36536Cu) {
        ctx->pc = 0x36536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365368u;
        // 0x36536c: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365370u;
        goto label_365370;
    }
    ctx->pc = 0x365368u;
    SET_GPR_U32(ctx, 31, 0x365370u);
    ctx->pc = 0x36536Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365368u;
    // 0x36536c: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x365368u, 0x365370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365370u;
label_365370:
    // 0x365370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365374:
    // 0x365374: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_365378:
    if (ctx->pc == 0x365378u) {
        ctx->pc = 0x365378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365374u;
        // 0x365378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36537Cu;
        goto label_36537c;
    }
    ctx->pc = 0x365374u;
    {
        const bool branch_taken_0x365374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x365378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365374u;
        // 0x365378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365374) {
            ctx->pc = 0x3653A0u;
            goto label_3653a0;
        }
    }
    ctx->pc = 0x36537Cu;
label_36537c:
    // 0x36537c: 0xc096b00  jal         func_25AC00
label_365380:
    if (ctx->pc == 0x365380u) {
        ctx->pc = 0x365384u;
        goto label_365384;
    }
    ctx->pc = 0x36537Cu;
    SET_GPR_U32(ctx, 31, 0x365384u);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x36537Cu, 0x365384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365384u;
label_365384:
    // 0x365384: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x365384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_365388:
    // 0x365388: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x365388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_36538c:
    // 0x36538c: 0x246374e0  addiu       $v1, $v1, 0x74E0
    ctx->pc = 0x36538cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29920));
label_365390:
    // 0x365390: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x365390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
label_365394:
    // 0x365394: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x365394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_365398:
    // 0x365398: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x365398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_36539c:
    // 0x36539c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x36539cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_3653a0:
    // 0x3653a0: 0x1200007b  beqz        $s0, . + 4 + (0x7B << 2)
label_3653a4:
    if (ctx->pc == 0x3653A4u) {
        ctx->pc = 0x3653A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653A0u;
        // 0x3653a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3653A8u;
        goto label_3653a8;
    }
    ctx->pc = 0x3653A0u;
    {
        const bool branch_taken_0x3653a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3653A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653A0u;
        // 0x3653a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3653a0) {
            ctx->pc = 0x365590u;
            goto label_365590;
        }
    }
    ctx->pc = 0x3653A8u;
label_3653a8:
    // 0x3653a8: 0xc09d4fc  jal         func_2753F0
label_3653ac:
    if (ctx->pc == 0x3653ACu) {
        ctx->pc = 0x3653ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653A8u;
        // 0x3653ac: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3653B0u;
        goto label_3653b0;
    }
    ctx->pc = 0x3653A8u;
    SET_GPR_U32(ctx, 31, 0x3653B0u);
    ctx->pc = 0x3653ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3653A8u;
    // 0x3653ac: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x3653A8u, 0x3653B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653B0u;
label_3653b0:
    // 0x3653b0: 0x326600ff  andi        $a2, $s3, 0xFF
    ctx->pc = 0x3653b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_3653b4:
    // 0x3653b4: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x3653b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_3653b8:
    // 0x3653b8: 0xc09d524  jal         func_275490
label_3653bc:
    if (ctx->pc == 0x3653BCu) {
        ctx->pc = 0x3653BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653B8u;
        // 0x3653bc: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3653C0u;
        goto label_3653c0;
    }
    ctx->pc = 0x3653B8u;
    SET_GPR_U32(ctx, 31, 0x3653C0u);
    ctx->pc = 0x3653BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3653B8u;
    // 0x3653bc: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x3653B8u, 0x3653C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653C0u;
label_3653c0:
    // 0x3653c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3653c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3653c4:
    // 0x3653c4: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_3653c8:
    if (ctx->pc == 0x3653C8u) {
        ctx->pc = 0x3653CCu;
        goto label_3653cc;
    }
    ctx->pc = 0x3653C4u;
    {
        const bool branch_taken_0x3653c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3653c4) {
            ctx->pc = 0x365400u;
            goto label_365400;
        }
    }
    ctx->pc = 0x3653CCu;
label_3653cc:
    // 0x3653cc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3653d0:
    if (ctx->pc == 0x3653D0u) {
        ctx->pc = 0x3653D4u;
        goto label_3653d4;
    }
    ctx->pc = 0x3653CCu;
    {
        const bool branch_taken_0x3653cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3653cc) {
            ctx->pc = 0x3653E8u;
            goto label_3653e8;
        }
    }
    ctx->pc = 0x3653D4u;
label_3653d4:
    // 0x3653d4: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x3653d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3653d8:
    // 0x3653d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3653d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3653dc:
    // 0x3653dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3653dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3653e0:
    // 0x3653e0: 0x320f809  jalr        $t9
label_3653e4:
    if (ctx->pc == 0x3653E4u) {
        ctx->pc = 0x3653E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653E0u;
        // 0x3653e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3653E8u;
        goto label_3653e8;
    }
    ctx->pc = 0x3653E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3653E8u);
        ctx->pc = 0x3653E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653E0u;
        // 0x3653e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3653E0u, 0x3653E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3653E8u;
label_3653e8:
    // 0x3653e8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x3653e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_3653ec:
    // 0x3653ec: 0xc09d4d8  jal         func_275360
label_3653f0:
    if (ctx->pc == 0x3653F0u) {
        ctx->pc = 0x3653F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653ECu;
        // 0x3653f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3653F4u;
        goto label_3653f4;
    }
    ctx->pc = 0x3653ECu;
    SET_GPR_U32(ctx, 31, 0x3653F4u);
    ctx->pc = 0x3653F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3653ECu;
    // 0x3653f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x3653ECu, 0x3653F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653F4u;
label_3653f4:
    // 0x3653f4: 0x1000006a  b           . + 4 + (0x6A << 2)
label_3653f8:
    if (ctx->pc == 0x3653F8u) {
        ctx->pc = 0x3653F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653F4u;
        // 0x3653f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3653FCu;
        goto label_3653fc;
    }
    ctx->pc = 0x3653F4u;
    {
        const bool branch_taken_0x3653f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3653F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653F4u;
        // 0x3653f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3653f4) {
            ctx->pc = 0x3655A0u;
            goto label_3655a0;
        }
    }
    ctx->pc = 0x3653FCu;
label_3653fc:
    // 0x3653fc: 0x0  nop
    ctx->pc = 0x3653fcu;
    // NOP
label_365400:
    // 0x365400: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x365400u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_365404:
    // 0x365404: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x365404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_365408:
    // 0x365408: 0xc09d524  jal         func_275490
label_36540c:
    if (ctx->pc == 0x36540Cu) {
        ctx->pc = 0x36540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365408u;
        // 0x36540c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365410u;
        goto label_365410;
    }
    ctx->pc = 0x365408u;
    SET_GPR_U32(ctx, 31, 0x365410u);
    ctx->pc = 0x36540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365408u;
    // 0x36540c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x365408u, 0x365410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365410u;
label_365410:
    // 0x365410: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x365410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365414:
    // 0x365414: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_365418:
    if (ctx->pc == 0x365418u) {
        ctx->pc = 0x36541Cu;
        goto label_36541c;
    }
    ctx->pc = 0x365414u;
    {
        const bool branch_taken_0x365414 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x365414) {
            ctx->pc = 0x365450u;
            goto label_365450;
        }
    }
    ctx->pc = 0x36541Cu;
label_36541c:
    // 0x36541c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_365420:
    if (ctx->pc == 0x365420u) {
        ctx->pc = 0x365424u;
        goto label_365424;
    }
    ctx->pc = 0x36541Cu;
    {
        const bool branch_taken_0x36541c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36541c) {
            ctx->pc = 0x365438u;
            goto label_365438;
        }
    }
    ctx->pc = 0x365424u;
label_365424:
    // 0x365424: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365428:
    // 0x365428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36542c:
    // 0x36542c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36542cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_365430:
    // 0x365430: 0x320f809  jalr        $t9
label_365434:
    if (ctx->pc == 0x365434u) {
        ctx->pc = 0x365434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365430u;
        // 0x365434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365438u;
        goto label_365438;
    }
    ctx->pc = 0x365430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365438u);
        ctx->pc = 0x365434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365430u;
        // 0x365434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365430u, 0x365438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365438u;
label_365438:
    // 0x365438: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x365438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_36543c:
    // 0x36543c: 0xc09d4d8  jal         func_275360
label_365440:
    if (ctx->pc == 0x365440u) {
        ctx->pc = 0x365440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36543Cu;
        // 0x365440: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365444u;
        goto label_365444;
    }
    ctx->pc = 0x36543Cu;
    SET_GPR_U32(ctx, 31, 0x365444u);
    ctx->pc = 0x365440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36543Cu;
    // 0x365440: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x36543Cu, 0x365444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365444u;
label_365444:
    // 0x365444: 0x10000056  b           . + 4 + (0x56 << 2)
label_365448:
    if (ctx->pc == 0x365448u) {
        ctx->pc = 0x365448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365444u;
        // 0x365448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36544Cu;
        goto label_36544c;
    }
    ctx->pc = 0x365444u;
    {
        const bool branch_taken_0x365444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365444u;
        // 0x365448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365444) {
            ctx->pc = 0x3655A0u;
            goto label_3655a0;
        }
    }
    ctx->pc = 0x36544Cu;
label_36544c:
    // 0x36544c: 0x0  nop
    ctx->pc = 0x36544cu;
    // NOP
label_365450:
    // 0x365450: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x365450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_365454:
    // 0x365454: 0x92230006  lbu         $v1, 0x6($s1)
    ctx->pc = 0x365454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_365458:
    // 0x365458: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x365458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_36545c:
    // 0x36545c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x36545cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_365460:
    // 0x365460: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x365460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_365464:
    // 0x365464: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x365464u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_365468:
    // 0x365468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36546c:
    // 0x36546c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x36546cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_365470:
    // 0x365470: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x365470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365474:
    // 0x365474: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x365474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_365478:
    // 0x365478: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x365478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_36547c:
    // 0x36547c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36547cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_365480:
    // 0x365480: 0xc096b38  jal         func_25ACE0
label_365484:
    if (ctx->pc == 0x365484u) {
        ctx->pc = 0x365484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365480u;
        // 0x365484: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365488u;
        goto label_365488;
    }
    ctx->pc = 0x365480u;
    SET_GPR_U32(ctx, 31, 0x365488u);
    ctx->pc = 0x365484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365480u;
    // 0x365484: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x365480u, 0x365488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365488u;
label_365488:
    // 0x365488: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x365488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_36548c:
    // 0x36548c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36548cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_365490:
    // 0x365490: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x365490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_365494:
    // 0x365494: 0xa2030050  sb          $v1, 0x50($s0)
    ctx->pc = 0x365494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 3));
label_365498:
    // 0x365498: 0xa2020051  sb          $v0, 0x51($s0)
    ctx->pc = 0x365498u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 2));
label_36549c:
    // 0x36549c: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x36549cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3654a0:
    // 0x3654a0: 0xa2020075  sb          $v0, 0x75($s0)
    ctx->pc = 0x3654a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 2));
label_3654a4:
    // 0x3654a4: 0xa2130076  sb          $s3, 0x76($s0)
    ctx->pc = 0x3654a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 118), (uint8_t)GPR_U32(ctx, 19));
label_3654a8:
    // 0x3654a8: 0xa2000074  sb          $zero, 0x74($s0)
    ctx->pc = 0x3654a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 0));
label_3654ac:
    // 0x3654ac: 0xa200007b  sb          $zero, 0x7B($s0)
    ctx->pc = 0x3654acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 123), (uint8_t)GPR_U32(ctx, 0));
label_3654b0:
    // 0x3654b0: 0xa200007a  sb          $zero, 0x7A($s0)
    ctx->pc = 0x3654b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 0));
label_3654b4:
    // 0x3654b4: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_3654b8:
    if (ctx->pc == 0x3654B8u) {
        ctx->pc = 0x3654B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3654B4u;
        // 0x3654b8: 0xa6000078  sh          $zero, 0x78($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3654BCu;
        goto label_3654bc;
    }
    ctx->pc = 0x3654B4u;
    {
        const bool branch_taken_0x3654b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3654B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3654B4u;
        // 0x3654b8: 0xa6000078  sh          $zero, 0x78($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3654b4) {
            ctx->pc = 0x3654C8u;
            goto label_3654c8;
        }
    }
    ctx->pc = 0x3654BCu;
label_3654bc:
    // 0x3654bc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3654bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3654c0:
    // 0x3654c0: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x3654c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_3654c4:
    // 0x3654c4: 0x0  nop
    ctx->pc = 0x3654c4u;
    // NOP
label_3654c8:
    // 0x3654c8: 0xae110080  sw          $s1, 0x80($s0)
    ctx->pc = 0x3654c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
label_3654cc:
    // 0x3654cc: 0xae120084  sw          $s2, 0x84($s0)
    ctx->pc = 0x3654ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 18));
label_3654d0:
    // 0x3654d0: 0x92450006  lbu         $a1, 0x6($s2)
    ctx->pc = 0x3654d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_3654d4:
    // 0x3654d4: 0x92460007  lbu         $a2, 0x7($s2)
    ctx->pc = 0x3654d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
label_3654d8:
    // 0x3654d8: 0xc074350  jal         func_1D0D40
label_3654dc:
    if (ctx->pc == 0x3654DCu) {
        ctx->pc = 0x3654DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3654D8u;
        // 0x3654dc: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3654E0u;
        goto label_3654e0;
    }
    ctx->pc = 0x3654D8u;
    SET_GPR_U32(ctx, 31, 0x3654E0u);
    ctx->pc = 0x3654DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3654D8u;
    // 0x3654dc: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x3654D8u, 0x3654E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3654E0u;
label_3654e0:
    // 0x3654e0: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x3654e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_3654e4:
    // 0x3654e4: 0x92460009  lbu         $a2, 0x9($s2)
    ctx->pc = 0x3654e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_3654e8:
    // 0x3654e8: 0xc074378  jal         func_1D0DE0
label_3654ec:
    if (ctx->pc == 0x3654ECu) {
        ctx->pc = 0x3654ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3654E8u;
        // 0x3654ec: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3654F0u;
        goto label_3654f0;
    }
    ctx->pc = 0x3654E8u;
    SET_GPR_U32(ctx, 31, 0x3654F0u);
    ctx->pc = 0x3654ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3654E8u;
    // 0x3654ec: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x3654E8u, 0x3654F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3654F0u;
label_3654f0:
    // 0x3654f0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3654f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3654f4:
    // 0x3654f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3654f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3654f8:
    // 0x3654f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3654f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3654fc:
    // 0x3654fc: 0x90850005  lbu         $a1, 0x5($a0)
    ctx->pc = 0x3654fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_365500:
    // 0x365500: 0x9084000f  lbu         $a0, 0xF($a0)
    ctx->pc = 0x365500u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
label_365504:
    // 0x365504: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x365504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_365508:
    // 0x365508: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x365508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_36550c:
    // 0x36550c: 0xa6040090  sh          $a0, 0x90($s0)
    ctx->pc = 0x36550cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 4));
label_365510:
    // 0x365510: 0xa6000092  sh          $zero, 0x92($s0)
    ctx->pc = 0x365510u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 0));
label_365514:
    // 0x365514: 0xa6050094  sh          $a1, 0x94($s0)
    ctx->pc = 0x365514u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 5));
label_365518:
    // 0x365518: 0x86040090  lh          $a0, 0x90($s0)
    ctx->pc = 0x365518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
label_36551c:
    // 0x36551c: 0xa6040096  sh          $a0, 0x96($s0)
    ctx->pc = 0x36551cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 4));
label_365520:
    // 0x365520: 0xa6030098  sh          $v1, 0x98($s0)
    ctx->pc = 0x365520u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
label_365524:
    // 0x365524: 0xa600009a  sh          $zero, 0x9A($s0)
    ctx->pc = 0x365524u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 0));
label_365528:
    // 0x365528: 0xa602009c  sh          $v0, 0x9C($s0)
    ctx->pc = 0x365528u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 2));
label_36552c:
    // 0x36552c: 0x86020098  lh          $v0, 0x98($s0)
    ctx->pc = 0x36552cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_365530:
    // 0x365530: 0xa602009e  sh          $v0, 0x9E($s0)
    ctx->pc = 0x365530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 158), (uint16_t)GPR_U32(ctx, 2));
label_365534:
    // 0x365534: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x365534u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_365538:
    // 0x365538: 0x9242000f  lbu         $v0, 0xF($s2)
    ctx->pc = 0x365538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
label_36553c:
    // 0x36553c: 0x70621018  mult1       $v0, $v1, $v0
    ctx->pc = 0x36553cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_365540:
    // 0x365540: 0xc0741a4  jal         func_1D0690
label_365544:
    if (ctx->pc == 0x365544u) {
        ctx->pc = 0x365544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365540u;
        // 0x365544: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365548u;
        goto label_365548;
    }
    ctx->pc = 0x365540u;
    SET_GPR_U32(ctx, 31, 0x365548u);
    ctx->pc = 0x365544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365540u;
    // 0x365544: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x365540u, 0x365548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365548u;
label_365548:
    // 0x365548: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x365548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_36554c:
    // 0x36554c: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x36554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_365550:
    // 0x365550: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_365554:
    if (ctx->pc == 0x365554u) {
        ctx->pc = 0x365554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365550u;
        // 0x365554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365558u;
        goto label_365558;
    }
    ctx->pc = 0x365550u;
    {
        const bool branch_taken_0x365550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x365554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365550u;
        // 0x365554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365550) {
            ctx->pc = 0x365578u;
            goto label_365578;
        }
    }
    ctx->pc = 0x365558u;
label_365558:
    // 0x365558: 0xc074268  jal         func_1D09A0
label_36555c:
    if (ctx->pc == 0x36555Cu) {
        ctx->pc = 0x365560u;
        goto label_365560;
    }
    ctx->pc = 0x365558u;
    SET_GPR_U32(ctx, 31, 0x365560u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x365558u, 0x365560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365560u;
label_365560:
    // 0x365560: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x365560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_365564:
    // 0x365564: 0xc09d4d8  jal         func_275360
label_365568:
    if (ctx->pc == 0x365568u) {
        ctx->pc = 0x365568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365564u;
        // 0x365568: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36556Cu;
        goto label_36556c;
    }
    ctx->pc = 0x365564u;
    SET_GPR_U32(ctx, 31, 0x36556Cu);
    ctx->pc = 0x365568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365564u;
    // 0x365568: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x365564u, 0x36556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36556Cu;
label_36556c:
    // 0x36556c: 0x1000000c  b           . + 4 + (0xC << 2)
label_365570:
    if (ctx->pc == 0x365570u) {
        ctx->pc = 0x365570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36556Cu;
        // 0x365570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365574u;
        goto label_365574;
    }
    ctx->pc = 0x36556Cu;
    {
        const bool branch_taken_0x36556c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36556Cu;
        // 0x365570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36556c) {
            ctx->pc = 0x3655A0u;
            goto label_3655a0;
        }
    }
    ctx->pc = 0x365574u;
label_365574:
    // 0x365574: 0x0  nop
    ctx->pc = 0x365574u;
    // NOP
label_365578:
    // 0x365578: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x365578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_36557c:
    // 0x36557c: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x36557cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_365580:
    // 0x365580: 0xc09d4d8  jal         func_275360
label_365584:
    if (ctx->pc == 0x365584u) {
        ctx->pc = 0x365584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365580u;
        // 0x365584: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365588u;
        goto label_365588;
    }
    ctx->pc = 0x365580u;
    SET_GPR_U32(ctx, 31, 0x365588u);
    ctx->pc = 0x365584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365580u;
    // 0x365584: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x365580u, 0x365588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365588u;
label_365588:
    // 0x365588: 0x10000005  b           . + 4 + (0x5 << 2)
label_36558c:
    if (ctx->pc == 0x36558Cu) {
        ctx->pc = 0x36558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365588u;
        // 0x36558c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365590u;
        goto label_365590;
    }
    ctx->pc = 0x365588u;
    {
        const bool branch_taken_0x365588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365588u;
        // 0x36558c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365588) {
            ctx->pc = 0x3655A0u;
            goto label_3655a0;
        }
    }
    ctx->pc = 0x365590u;
label_365590:
    // 0x365590: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x365590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_365594:
    // 0x365594: 0xc09d4d8  jal         func_275360
label_365598:
    if (ctx->pc == 0x365598u) {
        ctx->pc = 0x365598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365594u;
        // 0x365598: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36559Cu;
        goto label_36559c;
    }
    ctx->pc = 0x365594u;
    SET_GPR_U32(ctx, 31, 0x36559Cu);
    ctx->pc = 0x365598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365594u;
    // 0x365598: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x365594u, 0x36559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36559Cu;
label_36559c:
    // 0x36559c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36559cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3655a0:
    // 0x3655a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3655a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3655a4:
    // 0x3655a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3655a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3655a8:
    // 0x3655a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3655a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3655ac:
    // 0x3655ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3655acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3655b0:
    // 0x3655b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3655b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3655b4:
    // 0x3655b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3655b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3655b8:
    // 0x3655b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3655b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3655bc:
    // 0x3655bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3655bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3655c0:
    // 0x3655c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3655c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3655c4:
    // 0x3655c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3655c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3655c8:
    // 0x3655c8: 0x3e00008  jr          $ra
label_3655cc:
    if (ctx->pc == 0x3655CCu) {
        ctx->pc = 0x3655CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3655C8u;
        // 0x3655cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3655D0u;
        goto label_fallthrough_0x3655c8;
    }
    ctx->pc = 0x3655C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3655CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3655C8u;
        // 0x3655cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3655C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3655c8:
    ctx->pc = 0x3655D0u;
}
