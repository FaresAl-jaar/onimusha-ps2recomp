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

// Function: sub_00348320
// Address: 0x348320 - 0x3485fc
void sub_00348320_0x348320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348320_0x348320");
#endif

    switch (ctx->pc) {
        case 0x348320u: goto label_348320;
        case 0x348324u: goto label_348324;
        case 0x348328u: goto label_348328;
        case 0x34832cu: goto label_34832c;
        case 0x348330u: goto label_348330;
        case 0x348334u: goto label_348334;
        case 0x348338u: goto label_348338;
        case 0x34833cu: goto label_34833c;
        case 0x348340u: goto label_348340;
        case 0x348344u: goto label_348344;
        case 0x348348u: goto label_348348;
        case 0x34834cu: goto label_34834c;
        case 0x348350u: goto label_348350;
        case 0x348354u: goto label_348354;
        case 0x348358u: goto label_348358;
        case 0x34835cu: goto label_34835c;
        case 0x348360u: goto label_348360;
        case 0x348364u: goto label_348364;
        case 0x348368u: goto label_348368;
        case 0x34836cu: goto label_34836c;
        case 0x348370u: goto label_348370;
        case 0x348374u: goto label_348374;
        case 0x348378u: goto label_348378;
        case 0x34837cu: goto label_34837c;
        case 0x348380u: goto label_348380;
        case 0x348384u: goto label_348384;
        case 0x348388u: goto label_348388;
        case 0x34838cu: goto label_34838c;
        case 0x348390u: goto label_348390;
        case 0x348394u: goto label_348394;
        case 0x348398u: goto label_348398;
        case 0x34839cu: goto label_34839c;
        case 0x3483a0u: goto label_3483a0;
        case 0x3483a4u: goto label_3483a4;
        case 0x3483a8u: goto label_3483a8;
        case 0x3483acu: goto label_3483ac;
        case 0x3483b0u: goto label_3483b0;
        case 0x3483b4u: goto label_3483b4;
        case 0x3483b8u: goto label_3483b8;
        case 0x3483bcu: goto label_3483bc;
        case 0x3483c0u: goto label_3483c0;
        case 0x3483c4u: goto label_3483c4;
        case 0x3483c8u: goto label_3483c8;
        case 0x3483ccu: goto label_3483cc;
        case 0x3483d0u: goto label_3483d0;
        case 0x3483d4u: goto label_3483d4;
        case 0x3483d8u: goto label_3483d8;
        case 0x3483dcu: goto label_3483dc;
        case 0x3483e0u: goto label_3483e0;
        case 0x3483e4u: goto label_3483e4;
        case 0x3483e8u: goto label_3483e8;
        case 0x3483ecu: goto label_3483ec;
        case 0x3483f0u: goto label_3483f0;
        case 0x3483f4u: goto label_3483f4;
        case 0x3483f8u: goto label_3483f8;
        case 0x3483fcu: goto label_3483fc;
        case 0x348400u: goto label_348400;
        case 0x348404u: goto label_348404;
        case 0x348408u: goto label_348408;
        case 0x34840cu: goto label_34840c;
        case 0x348410u: goto label_348410;
        case 0x348414u: goto label_348414;
        case 0x348418u: goto label_348418;
        case 0x34841cu: goto label_34841c;
        case 0x348420u: goto label_348420;
        case 0x348424u: goto label_348424;
        case 0x348428u: goto label_348428;
        case 0x34842cu: goto label_34842c;
        case 0x348430u: goto label_348430;
        case 0x348434u: goto label_348434;
        case 0x348438u: goto label_348438;
        case 0x34843cu: goto label_34843c;
        case 0x348440u: goto label_348440;
        case 0x348444u: goto label_348444;
        case 0x348448u: goto label_348448;
        case 0x34844cu: goto label_34844c;
        case 0x348450u: goto label_348450;
        case 0x348454u: goto label_348454;
        case 0x348458u: goto label_348458;
        case 0x34845cu: goto label_34845c;
        case 0x348460u: goto label_348460;
        case 0x348464u: goto label_348464;
        case 0x348468u: goto label_348468;
        case 0x34846cu: goto label_34846c;
        case 0x348470u: goto label_348470;
        case 0x348474u: goto label_348474;
        case 0x348478u: goto label_348478;
        case 0x34847cu: goto label_34847c;
        case 0x348480u: goto label_348480;
        case 0x348484u: goto label_348484;
        case 0x348488u: goto label_348488;
        case 0x34848cu: goto label_34848c;
        case 0x348490u: goto label_348490;
        case 0x348494u: goto label_348494;
        case 0x348498u: goto label_348498;
        case 0x34849cu: goto label_34849c;
        case 0x3484a0u: goto label_3484a0;
        case 0x3484a4u: goto label_3484a4;
        case 0x3484a8u: goto label_3484a8;
        case 0x3484acu: goto label_3484ac;
        case 0x3484b0u: goto label_3484b0;
        case 0x3484b4u: goto label_3484b4;
        case 0x3484b8u: goto label_3484b8;
        case 0x3484bcu: goto label_3484bc;
        case 0x3484c0u: goto label_3484c0;
        case 0x3484c4u: goto label_3484c4;
        case 0x3484c8u: goto label_3484c8;
        case 0x3484ccu: goto label_3484cc;
        case 0x3484d0u: goto label_3484d0;
        case 0x3484d4u: goto label_3484d4;
        case 0x3484d8u: goto label_3484d8;
        case 0x3484dcu: goto label_3484dc;
        case 0x3484e0u: goto label_3484e0;
        case 0x3484e4u: goto label_3484e4;
        case 0x3484e8u: goto label_3484e8;
        case 0x3484ecu: goto label_3484ec;
        case 0x3484f0u: goto label_3484f0;
        case 0x3484f4u: goto label_3484f4;
        case 0x3484f8u: goto label_3484f8;
        case 0x3484fcu: goto label_3484fc;
        case 0x348500u: goto label_348500;
        case 0x348504u: goto label_348504;
        case 0x348508u: goto label_348508;
        case 0x34850cu: goto label_34850c;
        case 0x348510u: goto label_348510;
        case 0x348514u: goto label_348514;
        case 0x348518u: goto label_348518;
        case 0x34851cu: goto label_34851c;
        case 0x348520u: goto label_348520;
        case 0x348524u: goto label_348524;
        case 0x348528u: goto label_348528;
        case 0x34852cu: goto label_34852c;
        case 0x348530u: goto label_348530;
        case 0x348534u: goto label_348534;
        case 0x348538u: goto label_348538;
        case 0x34853cu: goto label_34853c;
        case 0x348540u: goto label_348540;
        case 0x348544u: goto label_348544;
        case 0x348548u: goto label_348548;
        case 0x34854cu: goto label_34854c;
        case 0x348550u: goto label_348550;
        case 0x348554u: goto label_348554;
        case 0x348558u: goto label_348558;
        case 0x34855cu: goto label_34855c;
        case 0x348560u: goto label_348560;
        case 0x348564u: goto label_348564;
        case 0x348568u: goto label_348568;
        case 0x34856cu: goto label_34856c;
        case 0x348570u: goto label_348570;
        case 0x348574u: goto label_348574;
        case 0x348578u: goto label_348578;
        case 0x34857cu: goto label_34857c;
        case 0x348580u: goto label_348580;
        case 0x348584u: goto label_348584;
        case 0x348588u: goto label_348588;
        case 0x34858cu: goto label_34858c;
        case 0x348590u: goto label_348590;
        case 0x348594u: goto label_348594;
        case 0x348598u: goto label_348598;
        case 0x34859cu: goto label_34859c;
        case 0x3485a0u: goto label_3485a0;
        case 0x3485a4u: goto label_3485a4;
        case 0x3485a8u: goto label_3485a8;
        case 0x3485acu: goto label_3485ac;
        case 0x3485b0u: goto label_3485b0;
        case 0x3485b4u: goto label_3485b4;
        case 0x3485b8u: goto label_3485b8;
        case 0x3485bcu: goto label_3485bc;
        case 0x3485c0u: goto label_3485c0;
        case 0x3485c4u: goto label_3485c4;
        case 0x3485c8u: goto label_3485c8;
        case 0x3485ccu: goto label_3485cc;
        case 0x3485d0u: goto label_3485d0;
        case 0x3485d4u: goto label_3485d4;
        case 0x3485d8u: goto label_3485d8;
        case 0x3485dcu: goto label_3485dc;
        case 0x3485e0u: goto label_3485e0;
        case 0x3485e4u: goto label_3485e4;
        case 0x3485e8u: goto label_3485e8;
        case 0x3485ecu: goto label_3485ec;
        case 0x3485f0u: goto label_3485f0;
        case 0x3485f4u: goto label_3485f4;
        case 0x3485f8u: goto label_3485f8;
        default: break;
    }

    ctx->pc = 0x348320u;

label_348320:
    // 0x348320: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x348320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_348324:
    // 0x348324: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x348324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_348328:
    // 0x348328: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x348328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_34832c:
    // 0x34832c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x34832cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_348330:
    // 0x348330: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x348330u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_348334:
    // 0x348334: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x348334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_348338:
    // 0x348338: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x348338u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34833c:
    // 0x34833c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34833cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_348340:
    // 0x348340: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x348340u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_348344:
    // 0x348344: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x348344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_348348:
    // 0x348348: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x348348u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_34834c:
    // 0x34834c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34834cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_348350:
    // 0x348350: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x348350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_348354:
    // 0x348354: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x348354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_348358:
    // 0x348358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x348358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34835c:
    // 0x34835c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x34835cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_348360:
    // 0x348360: 0xc09d4d4  jal         func_275350
label_348364:
    if (ctx->pc == 0x348364u) {
        ctx->pc = 0x348364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348360u;
        // 0x348364: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348368u;
        goto label_348368;
    }
    ctx->pc = 0x348360u;
    SET_GPR_U32(ctx, 31, 0x348368u);
    ctx->pc = 0x348364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348360u;
    // 0x348364: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x348360u, 0x348368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348368u;
label_348368:
    // 0x348368: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_34836c:
    if (ctx->pc == 0x34836Cu) {
        ctx->pc = 0x34836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348368u;
        // 0x34836c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348370u;
        goto label_348370;
    }
    ctx->pc = 0x348368u;
    {
        const bool branch_taken_0x348368 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x34836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348368u;
        // 0x34836c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348368) {
            ctx->pc = 0x348380u;
            goto label_348380;
        }
    }
    ctx->pc = 0x348370u;
label_348370:
    // 0x348370: 0xc09d4d8  jal         func_275360
label_348374:
    if (ctx->pc == 0x348374u) {
        ctx->pc = 0x348374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348370u;
        // 0x348374: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348378u;
        goto label_348378;
    }
    ctx->pc = 0x348370u;
    SET_GPR_U32(ctx, 31, 0x348378u);
    ctx->pc = 0x348374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348370u;
    // 0x348374: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x348370u, 0x348378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348378u;
label_348378:
    // 0x348378: 0x10000095  b           . + 4 + (0x95 << 2)
label_34837c:
    if (ctx->pc == 0x34837Cu) {
        ctx->pc = 0x34837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348378u;
        // 0x34837c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348380u;
        goto label_348380;
    }
    ctx->pc = 0x348378u;
    {
        const bool branch_taken_0x348378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348378u;
        // 0x34837c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348378) {
            ctx->pc = 0x3485D0u;
            goto label_3485d0;
        }
    }
    ctx->pc = 0x348380u;
label_348380:
    // 0x348380: 0xc0741a4  jal         func_1D0690
label_348384:
    if (ctx->pc == 0x348384u) {
        ctx->pc = 0x348384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348380u;
        // 0x348384: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348388u;
        goto label_348388;
    }
    ctx->pc = 0x348380u;
    SET_GPR_U32(ctx, 31, 0x348388u);
    ctx->pc = 0x348384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348380u;
    // 0x348384: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x348380u, 0x348388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348388u;
label_348388:
    // 0x348388: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x348388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34838c:
    // 0x34838c: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_348390:
    if (ctx->pc == 0x348390u) {
        ctx->pc = 0x348390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34838Cu;
        // 0x348390: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348394u;
        goto label_348394;
    }
    ctx->pc = 0x34838Cu;
    {
        const bool branch_taken_0x34838c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x348390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34838Cu;
        // 0x348390: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34838c) {
            ctx->pc = 0x3483B8u;
            goto label_3483b8;
        }
    }
    ctx->pc = 0x348394u;
label_348394:
    // 0x348394: 0xc096b00  jal         func_25AC00
label_348398:
    if (ctx->pc == 0x348398u) {
        ctx->pc = 0x34839Cu;
        goto label_34839c;
    }
    ctx->pc = 0x348394u;
    SET_GPR_U32(ctx, 31, 0x34839Cu);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x348394u, 0x34839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34839Cu;
label_34839c:
    // 0x34839c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x34839cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_3483a0:
    // 0x3483a0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x3483a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_3483a4:
    // 0x3483a4: 0x24637570  addiu       $v1, $v1, 0x7570
    ctx->pc = 0x3483a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30064));
label_3483a8:
    // 0x3483a8: 0x24428cc0  addiu       $v0, $v0, -0x7340
    ctx->pc = 0x3483a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937792));
label_3483ac:
    // 0x3483ac: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x3483acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
label_3483b0:
    // 0x3483b0: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x3483b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_3483b4:
    // 0x3483b4: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x3483b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_3483b8:
    // 0x3483b8: 0x12600081  beqz        $s3, . + 4 + (0x81 << 2)
label_3483bc:
    if (ctx->pc == 0x3483BCu) {
        ctx->pc = 0x3483BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483B8u;
        // 0x3483bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3483C0u;
        goto label_3483c0;
    }
    ctx->pc = 0x3483B8u;
    {
        const bool branch_taken_0x3483b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3483BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483B8u;
        // 0x3483bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3483b8) {
            ctx->pc = 0x3485C0u;
            goto label_3485c0;
        }
    }
    ctx->pc = 0x3483C0u;
label_3483c0:
    // 0x3483c0: 0xc09d4fc  jal         func_2753F0
label_3483c4:
    if (ctx->pc == 0x3483C4u) {
        ctx->pc = 0x3483C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483C0u;
        // 0x3483c4: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3483C8u;
        goto label_3483c8;
    }
    ctx->pc = 0x3483C0u;
    SET_GPR_U32(ctx, 31, 0x3483C8u);
    ctx->pc = 0x3483C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3483C0u;
    // 0x3483c4: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x3483C0u, 0x3483C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3483C8u;
label_3483c8:
    // 0x3483c8: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x3483c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3483cc:
    // 0x3483cc: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x3483ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_3483d0:
    // 0x3483d0: 0xc09d524  jal         func_275490
label_3483d4:
    if (ctx->pc == 0x3483D4u) {
        ctx->pc = 0x3483D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483D0u;
        // 0x3483d4: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3483D8u;
        goto label_3483d8;
    }
    ctx->pc = 0x3483D0u;
    SET_GPR_U32(ctx, 31, 0x3483D8u);
    ctx->pc = 0x3483D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3483D0u;
    // 0x3483d4: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x3483D0u, 0x3483D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3483D8u;
label_3483d8:
    // 0x3483d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3483d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3483dc:
    // 0x3483dc: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_3483e0:
    if (ctx->pc == 0x3483E0u) {
        ctx->pc = 0x3483E4u;
        goto label_3483e4;
    }
    ctx->pc = 0x3483DCu;
    {
        const bool branch_taken_0x3483dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3483dc) {
            ctx->pc = 0x348418u;
            goto label_348418;
        }
    }
    ctx->pc = 0x3483E4u;
label_3483e4:
    // 0x3483e4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_3483e8:
    if (ctx->pc == 0x3483E8u) {
        ctx->pc = 0x3483ECu;
        goto label_3483ec;
    }
    ctx->pc = 0x3483E4u;
    {
        const bool branch_taken_0x3483e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3483e4) {
            ctx->pc = 0x348400u;
            goto label_348400;
        }
    }
    ctx->pc = 0x3483ECu;
label_3483ec:
    // 0x3483ec: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x3483ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3483f0:
    // 0x3483f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3483f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3483f4:
    // 0x3483f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3483f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3483f8:
    // 0x3483f8: 0x320f809  jalr        $t9
label_3483fc:
    if (ctx->pc == 0x3483FCu) {
        ctx->pc = 0x3483FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483F8u;
        // 0x3483fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348400u;
        goto label_348400;
    }
    ctx->pc = 0x3483F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x348400u);
        ctx->pc = 0x3483FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483F8u;
        // 0x3483fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3483F8u, 0x348400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x348400u;
label_348400:
    // 0x348400: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x348400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_348404:
    // 0x348404: 0xc09d4d8  jal         func_275360
label_348408:
    if (ctx->pc == 0x348408u) {
        ctx->pc = 0x348408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348404u;
        // 0x348408: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34840Cu;
        goto label_34840c;
    }
    ctx->pc = 0x348404u;
    SET_GPR_U32(ctx, 31, 0x34840Cu);
    ctx->pc = 0x348408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348404u;
    // 0x348408: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x348404u, 0x34840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34840Cu;
label_34840c:
    // 0x34840c: 0x10000070  b           . + 4 + (0x70 << 2)
label_348410:
    if (ctx->pc == 0x348410u) {
        ctx->pc = 0x348410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34840Cu;
        // 0x348410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348414u;
        goto label_348414;
    }
    ctx->pc = 0x34840Cu;
    {
        const bool branch_taken_0x34840c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34840Cu;
        // 0x348410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34840c) {
            ctx->pc = 0x3485D0u;
            goto label_3485d0;
        }
    }
    ctx->pc = 0x348414u;
label_348414:
    // 0x348414: 0x0  nop
    ctx->pc = 0x348414u;
    // NOP
label_348418:
    // 0x348418: 0x92460013  lbu         $a2, 0x13($s2)
    ctx->pc = 0x348418u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
label_34841c:
    // 0x34841c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x34841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_348420:
    // 0x348420: 0xc09d524  jal         func_275490
label_348424:
    if (ctx->pc == 0x348424u) {
        ctx->pc = 0x348424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348420u;
        // 0x348424: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348428u;
        goto label_348428;
    }
    ctx->pc = 0x348420u;
    SET_GPR_U32(ctx, 31, 0x348428u);
    ctx->pc = 0x348424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348420u;
    // 0x348424: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x348420u, 0x348428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348428u;
label_348428:
    // 0x348428: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x348428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34842c:
    // 0x34842c: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_348430:
    if (ctx->pc == 0x348430u) {
        ctx->pc = 0x348434u;
        goto label_348434;
    }
    ctx->pc = 0x34842Cu;
    {
        const bool branch_taken_0x34842c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x34842c) {
            ctx->pc = 0x348468u;
            goto label_348468;
        }
    }
    ctx->pc = 0x348434u;
label_348434:
    // 0x348434: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_348438:
    if (ctx->pc == 0x348438u) {
        ctx->pc = 0x34843Cu;
        goto label_34843c;
    }
    ctx->pc = 0x348434u;
    {
        const bool branch_taken_0x348434 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x348434) {
            ctx->pc = 0x348450u;
            goto label_348450;
        }
    }
    ctx->pc = 0x34843Cu;
label_34843c:
    // 0x34843c: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x34843cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_348440:
    // 0x348440: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x348440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_348444:
    // 0x348444: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x348444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_348448:
    // 0x348448: 0x320f809  jalr        $t9
label_34844c:
    if (ctx->pc == 0x34844Cu) {
        ctx->pc = 0x34844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348448u;
        // 0x34844c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348450u;
        goto label_348450;
    }
    ctx->pc = 0x348448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x348450u);
        ctx->pc = 0x34844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348448u;
        // 0x34844c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348448u, 0x348450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x348450u;
label_348450:
    // 0x348450: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x348450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_348454:
    // 0x348454: 0xc09d4d8  jal         func_275360
label_348458:
    if (ctx->pc == 0x348458u) {
        ctx->pc = 0x348458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348454u;
        // 0x348458: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34845Cu;
        goto label_34845c;
    }
    ctx->pc = 0x348454u;
    SET_GPR_U32(ctx, 31, 0x34845Cu);
    ctx->pc = 0x348458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348454u;
    // 0x348458: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x348454u, 0x34845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34845Cu;
label_34845c:
    // 0x34845c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_348460:
    if (ctx->pc == 0x348460u) {
        ctx->pc = 0x348460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34845Cu;
        // 0x348460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348464u;
        goto label_348464;
    }
    ctx->pc = 0x34845Cu;
    {
        const bool branch_taken_0x34845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34845Cu;
        // 0x348460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34845c) {
            ctx->pc = 0x3485D0u;
            goto label_3485d0;
        }
    }
    ctx->pc = 0x348464u;
label_348464:
    // 0x348464: 0x0  nop
    ctx->pc = 0x348464u;
    // NOP
label_348468:
    // 0x348468: 0x9626000e  lhu         $a2, 0xE($s1)
    ctx->pc = 0x348468u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_34846c:
    // 0x34846c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x34846cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_348470:
    // 0x348470: 0xc09d524  jal         func_275490
label_348474:
    if (ctx->pc == 0x348474u) {
        ctx->pc = 0x348474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348470u;
        // 0x348474: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348478u;
        goto label_348478;
    }
    ctx->pc = 0x348470u;
    SET_GPR_U32(ctx, 31, 0x348478u);
    ctx->pc = 0x348474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348470u;
    // 0x348474: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x348470u, 0x348478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348478u;
label_348478:
    // 0x348478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x348478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34847c:
    // 0x34847c: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_348480:
    if (ctx->pc == 0x348480u) {
        ctx->pc = 0x348484u;
        goto label_348484;
    }
    ctx->pc = 0x34847Cu;
    {
        const bool branch_taken_0x34847c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x34847c) {
            ctx->pc = 0x3484B8u;
            goto label_3484b8;
        }
    }
    ctx->pc = 0x348484u;
label_348484:
    // 0x348484: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_348488:
    if (ctx->pc == 0x348488u) {
        ctx->pc = 0x34848Cu;
        goto label_34848c;
    }
    ctx->pc = 0x348484u;
    {
        const bool branch_taken_0x348484 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x348484) {
            ctx->pc = 0x3484A0u;
            goto label_3484a0;
        }
    }
    ctx->pc = 0x34848Cu;
label_34848c:
    // 0x34848c: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x34848cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_348490:
    // 0x348490: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x348490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_348494:
    // 0x348494: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x348494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_348498:
    // 0x348498: 0x320f809  jalr        $t9
label_34849c:
    if (ctx->pc == 0x34849Cu) {
        ctx->pc = 0x34849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348498u;
        // 0x34849c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3484A0u;
        goto label_3484a0;
    }
    ctx->pc = 0x348498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3484A0u);
        ctx->pc = 0x34849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348498u;
        // 0x34849c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348498u, 0x3484A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3484A0u;
label_3484a0:
    // 0x3484a0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x3484a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_3484a4:
    // 0x3484a4: 0xc09d4d8  jal         func_275360
label_3484a8:
    if (ctx->pc == 0x3484A8u) {
        ctx->pc = 0x3484A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484A4u;
        // 0x3484a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3484ACu;
        goto label_3484ac;
    }
    ctx->pc = 0x3484A4u;
    SET_GPR_U32(ctx, 31, 0x3484ACu);
    ctx->pc = 0x3484A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484A4u;
    // 0x3484a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x3484A4u, 0x3484ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484ACu;
label_3484ac:
    // 0x3484ac: 0x10000048  b           . + 4 + (0x48 << 2)
label_3484b0:
    if (ctx->pc == 0x3484B0u) {
        ctx->pc = 0x3484B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484ACu;
        // 0x3484b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3484B4u;
        goto label_3484b4;
    }
    ctx->pc = 0x3484ACu;
    {
        const bool branch_taken_0x3484ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3484B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484ACu;
        // 0x3484b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3484ac) {
            ctx->pc = 0x3485D0u;
            goto label_3485d0;
        }
    }
    ctx->pc = 0x3484B4u;
label_3484b4:
    // 0x3484b4: 0x0  nop
    ctx->pc = 0x3484b4u;
    // NOP
label_3484b8:
    // 0x3484b8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3484b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3484bc:
    // 0x3484bc: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3484bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3484c0:
    // 0x3484c0: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x3484c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3484c4:
    // 0x3484c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3484c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3484c8:
    // 0x3484c8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3484c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3484cc:
    // 0x3484cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3484ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3484d0:
    // 0x3484d0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x3484d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3484d4:
    // 0x3484d4: 0xc096b38  jal         func_25ACE0
label_3484d8:
    if (ctx->pc == 0x3484D8u) {
        ctx->pc = 0x3484D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484D4u;
        // 0x3484d8: 0x268b0020  addiu       $t3, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3484DCu;
        goto label_3484dc;
    }
    ctx->pc = 0x3484D4u;
    SET_GPR_U32(ctx, 31, 0x3484DCu);
    ctx->pc = 0x3484D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484D4u;
    // 0x3484d8: 0x268b0020  addiu       $t3, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x3484D4u, 0x3484DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484DCu;
label_3484dc:
    // 0x3484dc: 0x92620050  lbu         $v0, 0x50($s3)
    ctx->pc = 0x3484dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
label_3484e0:
    // 0x3484e0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3484e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3484e4:
    // 0x3484e4: 0xa2620050  sb          $v0, 0x50($s3)
    ctx->pc = 0x3484e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
label_3484e8:
    // 0x3484e8: 0xa660005a  sh          $zero, 0x5A($s3)
    ctx->pc = 0x3484e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 90), (uint16_t)GPR_U32(ctx, 0));
label_3484ec:
    // 0x3484ec: 0xa6600058  sh          $zero, 0x58($s3)
    ctx->pc = 0x3484ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 88), (uint16_t)GPR_U32(ctx, 0));
label_3484f0:
    // 0x3484f0: 0xa6600056  sh          $zero, 0x56($s3)
    ctx->pc = 0x3484f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
label_3484f4:
    // 0x3484f4: 0xa2600051  sb          $zero, 0x51($s3)
    ctx->pc = 0x3484f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 81), (uint8_t)GPR_U32(ctx, 0));
label_3484f8:
    // 0x3484f8: 0xae720070  sw          $s2, 0x70($s3)
    ctx->pc = 0x3484f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 18));
label_3484fc:
    // 0x3484fc: 0xae710074  sw          $s1, 0x74($s3)
    ctx->pc = 0x3484fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 17));
label_348500:
    // 0x348500: 0xae700078  sw          $s0, 0x78($s3)
    ctx->pc = 0x348500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 16));
label_348504:
    // 0x348504: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x348504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
label_348508:
    // 0x348508: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x348508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34850c:
    // 0x34850c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_348510:
    if (ctx->pc == 0x348510u) {
        ctx->pc = 0x348510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34850Cu;
        // 0x348510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348514u;
        goto label_348514;
    }
    ctx->pc = 0x34850Cu;
    {
        const bool branch_taken_0x34850c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34850Cu;
        // 0x348510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34850c) {
            ctx->pc = 0x34851Cu;
            goto label_34851c;
        }
    }
    ctx->pc = 0x348514u;
label_348514:
    // 0x348514: 0x10000003  b           . + 4 + (0x3 << 2)
label_348518:
    if (ctx->pc == 0x348518u) {
        ctx->pc = 0x348518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348514u;
        // 0x348518: 0xa6620084  sh          $v0, 0x84($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34851Cu;
        goto label_34851c;
    }
    ctx->pc = 0x348514u;
    {
        const bool branch_taken_0x348514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348514u;
        // 0x348518: 0xa6620084  sh          $v0, 0x84($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348514) {
            ctx->pc = 0x348524u;
            goto label_348524;
        }
    }
    ctx->pc = 0x34851Cu;
label_34851c:
    // 0x34851c: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x34851cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
label_348520:
    // 0x348520: 0xa6620084  sh          $v0, 0x84($s3)
    ctx->pc = 0x348520u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 132), (uint16_t)GPR_U32(ctx, 2));
label_348524:
    // 0x348524: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x348524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_348528:
    // 0x348528: 0xa6620080  sh          $v0, 0x80($s3)
    ctx->pc = 0x348528u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 2));
label_34852c:
    // 0x34852c: 0xa6620082  sh          $v0, 0x82($s3)
    ctx->pc = 0x34852cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 130), (uint16_t)GPR_U32(ctx, 2));
label_348530:
    // 0x348530: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x348530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_348534:
    // 0x348534: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x348534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_348538:
    // 0x348538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x348538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34853c:
    // 0x34853c: 0xc0741a4  jal         func_1D0690
label_348540:
    if (ctx->pc == 0x348540u) {
        ctx->pc = 0x348540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34853Cu;
        // 0x348540: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348544u;
        goto label_348544;
    }
    ctx->pc = 0x34853Cu;
    SET_GPR_U32(ctx, 31, 0x348544u);
    ctx->pc = 0x348540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34853Cu;
    // 0x348540: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x34853Cu, 0x348544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348544u;
label_348544:
    // 0x348544: 0xae62007c  sw          $v0, 0x7C($s3)
    ctx->pc = 0x348544u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 2));
label_348548:
    // 0x348548: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x348548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_34854c:
    // 0x34854c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_348550:
    if (ctx->pc == 0x348550u) {
        ctx->pc = 0x348550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34854Cu;
        // 0x348550: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348554u;
        goto label_348554;
    }
    ctx->pc = 0x34854Cu;
    {
        const bool branch_taken_0x34854c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34854Cu;
        // 0x348550: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34854c) {
            ctx->pc = 0x348570u;
            goto label_348570;
        }
    }
    ctx->pc = 0x348554u;
label_348554:
    // 0x348554: 0xc074268  jal         func_1D09A0
label_348558:
    if (ctx->pc == 0x348558u) {
        ctx->pc = 0x34855Cu;
        goto label_34855c;
    }
    ctx->pc = 0x348554u;
    SET_GPR_U32(ctx, 31, 0x34855Cu);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x348554u, 0x34855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34855Cu;
label_34855c:
    // 0x34855c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x34855cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_348560:
    // 0x348560: 0xc09d4d8  jal         func_275360
label_348564:
    if (ctx->pc == 0x348564u) {
        ctx->pc = 0x348564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348560u;
        // 0x348564: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348568u;
        goto label_348568;
    }
    ctx->pc = 0x348560u;
    SET_GPR_U32(ctx, 31, 0x348568u);
    ctx->pc = 0x348564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348560u;
    // 0x348564: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x348560u, 0x348568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348568u;
label_348568:
    // 0x348568: 0x10000019  b           . + 4 + (0x19 << 2)
label_34856c:
    if (ctx->pc == 0x34856Cu) {
        ctx->pc = 0x34856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348568u;
        // 0x34856c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348570u;
        goto label_348570;
    }
    ctx->pc = 0x348568u;
    {
        const bool branch_taken_0x348568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348568u;
        // 0x34856c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348568) {
            ctx->pc = 0x3485D0u;
            goto label_3485d0;
        }
    }
    ctx->pc = 0x348570u;
label_348570:
    // 0x348570: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x348570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_348574:
    // 0x348574: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x348574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_348578:
    // 0x348578: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_34857c:
    if (ctx->pc == 0x34857Cu) {
        ctx->pc = 0x34857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348578u;
        // 0x34857c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348580u;
        goto label_348580;
    }
    ctx->pc = 0x348578u;
    {
        const bool branch_taken_0x348578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348578u;
        // 0x34857c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348578) {
            ctx->pc = 0x3485A8u;
            goto label_3485a8;
        }
    }
    ctx->pc = 0x348580u;
label_348580:
    // 0x348580: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x348580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348584:
    // 0x348584: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x348584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_348588:
    // 0x348588: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x348588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_34858c:
    // 0x34858c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34858cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_348590:
    // 0x348590: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x348590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_348594:
    // 0x348594: 0xa4430020  sh          $v1, 0x20($v0)
    ctx->pc = 0x348594u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 3));
label_348598:
    // 0x348598: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x348598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_34859c:
    // 0x34859c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x34859cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3485a0:
    // 0x3485a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_3485a4:
    if (ctx->pc == 0x3485A4u) {
        ctx->pc = 0x3485A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485A0u;
        // 0x3485a4: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485A8u;
        goto label_3485a8;
    }
    ctx->pc = 0x3485A0u;
    {
        const bool branch_taken_0x3485a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3485A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485A0u;
        // 0x3485a4: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485a0) {
            ctx->pc = 0x348588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348588;
        }
    }
    ctx->pc = 0x3485A8u;
label_3485a8:
    // 0x3485a8: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x3485a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3485ac:
    // 0x3485ac: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x3485acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_3485b0:
    // 0x3485b0: 0xc09d4d8  jal         func_275360
label_3485b4:
    if (ctx->pc == 0x3485B4u) {
        ctx->pc = 0x3485B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485B0u;
        // 0x3485b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485B8u;
        goto label_3485b8;
    }
    ctx->pc = 0x3485B0u;
    SET_GPR_U32(ctx, 31, 0x3485B8u);
    ctx->pc = 0x3485B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3485B0u;
    // 0x3485b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x3485B0u, 0x3485B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3485B8u;
label_3485b8:
    // 0x3485b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3485bc:
    if (ctx->pc == 0x3485BCu) {
        ctx->pc = 0x3485BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485B8u;
        // 0x3485bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485C0u;
        goto label_3485c0;
    }
    ctx->pc = 0x3485B8u;
    {
        const bool branch_taken_0x3485b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3485BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485B8u;
        // 0x3485bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485b8) {
            ctx->pc = 0x3485D0u;
            goto label_3485d0;
        }
    }
    ctx->pc = 0x3485C0u;
label_3485c0:
    // 0x3485c0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x3485c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_3485c4:
    // 0x3485c4: 0xc09d4d8  jal         func_275360
label_3485c8:
    if (ctx->pc == 0x3485C8u) {
        ctx->pc = 0x3485C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485C4u;
        // 0x3485c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485CCu;
        goto label_3485cc;
    }
    ctx->pc = 0x3485C4u;
    SET_GPR_U32(ctx, 31, 0x3485CCu);
    ctx->pc = 0x3485C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3485C4u;
    // 0x3485c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x3485C4u, 0x3485CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3485CCu;
label_3485cc:
    // 0x3485cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3485ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3485d0:
    // 0x3485d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3485d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3485d4:
    // 0x3485d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3485d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3485d8:
    // 0x3485d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3485d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3485dc:
    // 0x3485dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3485dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3485e0:
    // 0x3485e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3485e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3485e4:
    // 0x3485e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3485e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3485e8:
    // 0x3485e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3485e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3485ec:
    // 0x3485ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3485ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3485f0:
    // 0x3485f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3485f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3485f4:
    // 0x3485f4: 0x3e00008  jr          $ra
label_3485f8:
    if (ctx->pc == 0x3485F8u) {
        ctx->pc = 0x3485F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485F4u;
        // 0x3485f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485FCu;
        goto label_fallthrough_0x3485f4;
    }
    ctx->pc = 0x3485F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3485F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485F4u;
        // 0x3485f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3485F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3485f4:
    ctx->pc = 0x3485FCu;
}
