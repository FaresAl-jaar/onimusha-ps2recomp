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

// Function: sub_0037C330
// Address: 0x37c330 - 0x37c698
void sub_0037C330_0x37c330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C330_0x37c330");
#endif

    switch (ctx->pc) {
        case 0x37c330u: goto label_37c330;
        case 0x37c334u: goto label_37c334;
        case 0x37c338u: goto label_37c338;
        case 0x37c33cu: goto label_37c33c;
        case 0x37c340u: goto label_37c340;
        case 0x37c344u: goto label_37c344;
        case 0x37c348u: goto label_37c348;
        case 0x37c34cu: goto label_37c34c;
        case 0x37c350u: goto label_37c350;
        case 0x37c354u: goto label_37c354;
        case 0x37c358u: goto label_37c358;
        case 0x37c35cu: goto label_37c35c;
        case 0x37c360u: goto label_37c360;
        case 0x37c364u: goto label_37c364;
        case 0x37c368u: goto label_37c368;
        case 0x37c36cu: goto label_37c36c;
        case 0x37c370u: goto label_37c370;
        case 0x37c374u: goto label_37c374;
        case 0x37c378u: goto label_37c378;
        case 0x37c37cu: goto label_37c37c;
        case 0x37c380u: goto label_37c380;
        case 0x37c384u: goto label_37c384;
        case 0x37c388u: goto label_37c388;
        case 0x37c38cu: goto label_37c38c;
        case 0x37c390u: goto label_37c390;
        case 0x37c394u: goto label_37c394;
        case 0x37c398u: goto label_37c398;
        case 0x37c39cu: goto label_37c39c;
        case 0x37c3a0u: goto label_37c3a0;
        case 0x37c3a4u: goto label_37c3a4;
        case 0x37c3a8u: goto label_37c3a8;
        case 0x37c3acu: goto label_37c3ac;
        case 0x37c3b0u: goto label_37c3b0;
        case 0x37c3b4u: goto label_37c3b4;
        case 0x37c3b8u: goto label_37c3b8;
        case 0x37c3bcu: goto label_37c3bc;
        case 0x37c3c0u: goto label_37c3c0;
        case 0x37c3c4u: goto label_37c3c4;
        case 0x37c3c8u: goto label_37c3c8;
        case 0x37c3ccu: goto label_37c3cc;
        case 0x37c3d0u: goto label_37c3d0;
        case 0x37c3d4u: goto label_37c3d4;
        case 0x37c3d8u: goto label_37c3d8;
        case 0x37c3dcu: goto label_37c3dc;
        case 0x37c3e0u: goto label_37c3e0;
        case 0x37c3e4u: goto label_37c3e4;
        case 0x37c3e8u: goto label_37c3e8;
        case 0x37c3ecu: goto label_37c3ec;
        case 0x37c3f0u: goto label_37c3f0;
        case 0x37c3f4u: goto label_37c3f4;
        case 0x37c3f8u: goto label_37c3f8;
        case 0x37c3fcu: goto label_37c3fc;
        case 0x37c400u: goto label_37c400;
        case 0x37c404u: goto label_37c404;
        case 0x37c408u: goto label_37c408;
        case 0x37c40cu: goto label_37c40c;
        case 0x37c410u: goto label_37c410;
        case 0x37c414u: goto label_37c414;
        case 0x37c418u: goto label_37c418;
        case 0x37c41cu: goto label_37c41c;
        case 0x37c420u: goto label_37c420;
        case 0x37c424u: goto label_37c424;
        case 0x37c428u: goto label_37c428;
        case 0x37c42cu: goto label_37c42c;
        case 0x37c430u: goto label_37c430;
        case 0x37c434u: goto label_37c434;
        case 0x37c438u: goto label_37c438;
        case 0x37c43cu: goto label_37c43c;
        case 0x37c440u: goto label_37c440;
        case 0x37c444u: goto label_37c444;
        case 0x37c448u: goto label_37c448;
        case 0x37c44cu: goto label_37c44c;
        case 0x37c450u: goto label_37c450;
        case 0x37c454u: goto label_37c454;
        case 0x37c458u: goto label_37c458;
        case 0x37c45cu: goto label_37c45c;
        case 0x37c460u: goto label_37c460;
        case 0x37c464u: goto label_37c464;
        case 0x37c468u: goto label_37c468;
        case 0x37c46cu: goto label_37c46c;
        case 0x37c470u: goto label_37c470;
        case 0x37c474u: goto label_37c474;
        case 0x37c478u: goto label_37c478;
        case 0x37c47cu: goto label_37c47c;
        case 0x37c480u: goto label_37c480;
        case 0x37c484u: goto label_37c484;
        case 0x37c488u: goto label_37c488;
        case 0x37c48cu: goto label_37c48c;
        case 0x37c490u: goto label_37c490;
        case 0x37c494u: goto label_37c494;
        case 0x37c498u: goto label_37c498;
        case 0x37c49cu: goto label_37c49c;
        case 0x37c4a0u: goto label_37c4a0;
        case 0x37c4a4u: goto label_37c4a4;
        case 0x37c4a8u: goto label_37c4a8;
        case 0x37c4acu: goto label_37c4ac;
        case 0x37c4b0u: goto label_37c4b0;
        case 0x37c4b4u: goto label_37c4b4;
        case 0x37c4b8u: goto label_37c4b8;
        case 0x37c4bcu: goto label_37c4bc;
        case 0x37c4c0u: goto label_37c4c0;
        case 0x37c4c4u: goto label_37c4c4;
        case 0x37c4c8u: goto label_37c4c8;
        case 0x37c4ccu: goto label_37c4cc;
        case 0x37c4d0u: goto label_37c4d0;
        case 0x37c4d4u: goto label_37c4d4;
        case 0x37c4d8u: goto label_37c4d8;
        case 0x37c4dcu: goto label_37c4dc;
        case 0x37c4e0u: goto label_37c4e0;
        case 0x37c4e4u: goto label_37c4e4;
        case 0x37c4e8u: goto label_37c4e8;
        case 0x37c4ecu: goto label_37c4ec;
        case 0x37c4f0u: goto label_37c4f0;
        case 0x37c4f4u: goto label_37c4f4;
        case 0x37c4f8u: goto label_37c4f8;
        case 0x37c4fcu: goto label_37c4fc;
        case 0x37c500u: goto label_37c500;
        case 0x37c504u: goto label_37c504;
        case 0x37c508u: goto label_37c508;
        case 0x37c50cu: goto label_37c50c;
        case 0x37c510u: goto label_37c510;
        case 0x37c514u: goto label_37c514;
        case 0x37c518u: goto label_37c518;
        case 0x37c51cu: goto label_37c51c;
        case 0x37c520u: goto label_37c520;
        case 0x37c524u: goto label_37c524;
        case 0x37c528u: goto label_37c528;
        case 0x37c52cu: goto label_37c52c;
        case 0x37c530u: goto label_37c530;
        case 0x37c534u: goto label_37c534;
        case 0x37c538u: goto label_37c538;
        case 0x37c53cu: goto label_37c53c;
        case 0x37c540u: goto label_37c540;
        case 0x37c544u: goto label_37c544;
        case 0x37c548u: goto label_37c548;
        case 0x37c54cu: goto label_37c54c;
        case 0x37c550u: goto label_37c550;
        case 0x37c554u: goto label_37c554;
        case 0x37c558u: goto label_37c558;
        case 0x37c55cu: goto label_37c55c;
        case 0x37c560u: goto label_37c560;
        case 0x37c564u: goto label_37c564;
        case 0x37c568u: goto label_37c568;
        case 0x37c56cu: goto label_37c56c;
        case 0x37c570u: goto label_37c570;
        case 0x37c574u: goto label_37c574;
        case 0x37c578u: goto label_37c578;
        case 0x37c57cu: goto label_37c57c;
        case 0x37c580u: goto label_37c580;
        case 0x37c584u: goto label_37c584;
        case 0x37c588u: goto label_37c588;
        case 0x37c58cu: goto label_37c58c;
        case 0x37c590u: goto label_37c590;
        case 0x37c594u: goto label_37c594;
        case 0x37c598u: goto label_37c598;
        case 0x37c59cu: goto label_37c59c;
        case 0x37c5a0u: goto label_37c5a0;
        case 0x37c5a4u: goto label_37c5a4;
        case 0x37c5a8u: goto label_37c5a8;
        case 0x37c5acu: goto label_37c5ac;
        case 0x37c5b0u: goto label_37c5b0;
        case 0x37c5b4u: goto label_37c5b4;
        case 0x37c5b8u: goto label_37c5b8;
        case 0x37c5bcu: goto label_37c5bc;
        case 0x37c5c0u: goto label_37c5c0;
        case 0x37c5c4u: goto label_37c5c4;
        case 0x37c5c8u: goto label_37c5c8;
        case 0x37c5ccu: goto label_37c5cc;
        case 0x37c5d0u: goto label_37c5d0;
        case 0x37c5d4u: goto label_37c5d4;
        case 0x37c5d8u: goto label_37c5d8;
        case 0x37c5dcu: goto label_37c5dc;
        case 0x37c5e0u: goto label_37c5e0;
        case 0x37c5e4u: goto label_37c5e4;
        case 0x37c5e8u: goto label_37c5e8;
        case 0x37c5ecu: goto label_37c5ec;
        case 0x37c5f0u: goto label_37c5f0;
        case 0x37c5f4u: goto label_37c5f4;
        case 0x37c5f8u: goto label_37c5f8;
        case 0x37c5fcu: goto label_37c5fc;
        case 0x37c600u: goto label_37c600;
        case 0x37c604u: goto label_37c604;
        case 0x37c608u: goto label_37c608;
        case 0x37c60cu: goto label_37c60c;
        case 0x37c610u: goto label_37c610;
        case 0x37c614u: goto label_37c614;
        case 0x37c618u: goto label_37c618;
        case 0x37c61cu: goto label_37c61c;
        case 0x37c620u: goto label_37c620;
        case 0x37c624u: goto label_37c624;
        case 0x37c628u: goto label_37c628;
        case 0x37c62cu: goto label_37c62c;
        case 0x37c630u: goto label_37c630;
        case 0x37c634u: goto label_37c634;
        case 0x37c638u: goto label_37c638;
        case 0x37c63cu: goto label_37c63c;
        case 0x37c640u: goto label_37c640;
        case 0x37c644u: goto label_37c644;
        case 0x37c648u: goto label_37c648;
        case 0x37c64cu: goto label_37c64c;
        case 0x37c650u: goto label_37c650;
        case 0x37c654u: goto label_37c654;
        case 0x37c658u: goto label_37c658;
        case 0x37c65cu: goto label_37c65c;
        case 0x37c660u: goto label_37c660;
        case 0x37c664u: goto label_37c664;
        case 0x37c668u: goto label_37c668;
        case 0x37c66cu: goto label_37c66c;
        case 0x37c670u: goto label_37c670;
        case 0x37c674u: goto label_37c674;
        case 0x37c678u: goto label_37c678;
        case 0x37c67cu: goto label_37c67c;
        case 0x37c680u: goto label_37c680;
        case 0x37c684u: goto label_37c684;
        case 0x37c688u: goto label_37c688;
        case 0x37c68cu: goto label_37c68c;
        case 0x37c690u: goto label_37c690;
        case 0x37c694u: goto label_37c694;
        default: break;
    }

    ctx->pc = 0x37c330u;

label_37c330:
    // 0x37c330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37c330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_37c334:
    // 0x37c334: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_37c338:
    // 0x37c338: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37c338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37c33c:
    // 0x37c33c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37c33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37c340:
    // 0x37c340: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37c340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37c344:
    // 0x37c344: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x37c344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_37c348:
    // 0x37c348: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x37c348u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_37c34c:
    // 0x37c34c: 0x102000cc  beqz        $at, . + 4 + (0xCC << 2)
label_37c350:
    if (ctx->pc == 0x37C350u) {
        ctx->pc = 0x37C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C34Cu;
        // 0x37c350: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C354u;
        goto label_37c354;
    }
    ctx->pc = 0x37C34Cu;
    {
        const bool branch_taken_0x37c34c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C34Cu;
        // 0x37c350: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c34c) {
            ctx->pc = 0x37C680u;
            goto label_37c680;
        }
    }
    ctx->pc = 0x37C354u;
label_37c354:
    // 0x37c354: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x37c354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
label_37c358:
    // 0x37c358: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37c358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37c35c:
    // 0x37c35c: 0x24a51d40  addiu       $a1, $a1, 0x1D40
    ctx->pc = 0x37c35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7488));
label_37c360:
    // 0x37c360: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x37c360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_37c364:
    // 0x37c364: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37c364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37c368:
    // 0x37c368: 0x600008  jr          $v1
label_37c36c:
    if (ctx->pc == 0x37C36Cu) {
        ctx->pc = 0x37C370u;
        goto label_37c370;
    }
    ctx->pc = 0x37C368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37C370u: goto label_37c370;
            case 0x37C438u: goto label_37c438;
            case 0x37C490u: goto label_37c490;
            case 0x37C500u: goto label_37c500;
            case 0x37C5E0u: goto label_37c5e0;
            case 0x37C680u: goto label_37c680;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C368u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37C370u;
label_37c370:
    // 0x37c370: 0x9605065a  lhu         $a1, 0x65A($s0)
    ctx->pc = 0x37c370u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1626)));
label_37c374:
    // 0x37c374: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
label_37c378:
    if (ctx->pc == 0x37C378u) {
        ctx->pc = 0x37C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C374u;
        // 0x37c378: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C37Cu;
        goto label_37c37c;
    }
    ctx->pc = 0x37C374u;
    {
        const bool branch_taken_0x37c374 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C374u;
        // 0x37c378: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c374) {
            ctx->pc = 0x37C3A0u;
            goto label_37c3a0;
        }
    }
    ctx->pc = 0x37C37Cu;
label_37c37c:
    // 0x37c37c: 0x240304c0  addiu       $v1, $zero, 0x4C0
    ctx->pc = 0x37c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_37c380:
    // 0x37c380: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x37c380u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_37c384:
    // 0x37c384: 0x148300be  bne         $a0, $v1, . + 4 + (0xBE << 2)
label_37c388:
    if (ctx->pc == 0x37C388u) {
        ctx->pc = 0x37C38Cu;
        goto label_37c38c;
    }
    ctx->pc = 0x37C384u;
    {
        const bool branch_taken_0x37c384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x37c384) {
            ctx->pc = 0x37C680u;
            goto label_37c680;
        }
    }
    ctx->pc = 0x37C38Cu;
label_37c38c:
    // 0x37c38c: 0x92030781  lbu         $v1, 0x781($s0)
    ctx->pc = 0x37c38cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1921)));
label_37c390:
    // 0x37c390: 0x106000bb  beqz        $v1, . + 4 + (0xBB << 2)
label_37c394:
    if (ctx->pc == 0x37C394u) {
        ctx->pc = 0x37C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C390u;
        // 0x37c394: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C398u;
        goto label_37c398;
    }
    ctx->pc = 0x37C390u;
    {
        const bool branch_taken_0x37c390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C390u;
        // 0x37c394: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c390) {
            ctx->pc = 0x37C680u;
            goto label_37c680;
        }
    }
    ctx->pc = 0x37C398u;
label_37c398:
    // 0x37c398: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_37c39c:
    if (ctx->pc == 0x37C39Cu) {
        ctx->pc = 0x37C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C398u;
        // 0x37c39c: 0xa2030781  sb          $v1, 0x781($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1921), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C3A0u;
        goto label_37c3a0;
    }
    ctx->pc = 0x37C398u;
    {
        const bool branch_taken_0x37c398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C398u;
        // 0x37c39c: 0xa2030781  sb          $v1, 0x781($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1921), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c398) {
            ctx->pc = 0x37C680u;
            goto label_37c680;
        }
    }
    ctx->pc = 0x37C3A0u;
label_37c3a0:
    // 0x37c3a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37c3a4:
    // 0x37c3a4: 0x10a300b6  beq         $a1, $v1, . + 4 + (0xB6 << 2)
label_37c3a8:
    if (ctx->pc == 0x37C3A8u) {
        ctx->pc = 0x37C3ACu;
        goto label_37c3ac;
    }
    ctx->pc = 0x37C3A4u;
    {
        const bool branch_taken_0x37c3a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37c3a4) {
            ctx->pc = 0x37C680u;
            goto label_37c680;
        }
    }
    ctx->pc = 0x37C3ACu;
label_37c3ac:
    // 0x37c3ac: 0x92052b78  lbu         $a1, 0x2B78($s0)
    ctx->pc = 0x37c3acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
label_37c3b0:
    // 0x37c3b0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x37c3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_37c3b4:
    // 0x37c3b4: 0x240304c0  addiu       $v1, $zero, 0x4C0
    ctx->pc = 0x37c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_37c3b8:
    // 0x37c3b8: 0x34a50020  ori         $a1, $a1, 0x20
    ctx->pc = 0x37c3b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
label_37c3bc:
    // 0x37c3bc: 0xa2052b78  sb          $a1, 0x2B78($s0)
    ctx->pc = 0x37c3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11128), (uint8_t)GPR_U32(ctx, 5));
label_37c3c0:
    // 0x37c3c0: 0x94256ac4  lhu         $a1, 0x6AC4($at)
    ctx->pc = 0x37c3c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_37c3c4:
    // 0x37c3c4: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
label_37c3c8:
    if (ctx->pc == 0x37C3C8u) {
        ctx->pc = 0x37C3CCu;
        goto label_37c3cc;
    }
    ctx->pc = 0x37C3C4u;
    {
        const bool branch_taken_0x37c3c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x37c3c4) {
            ctx->pc = 0x37C418u;
            goto label_37c418;
        }
    }
    ctx->pc = 0x37C3CCu;
label_37c3cc:
    // 0x37c3cc: 0x92062b78  lbu         $a2, 0x2B78($s0)
    ctx->pc = 0x37c3ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
label_37c3d0:
    // 0x37c3d0: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x37c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
label_37c3d4:
    // 0x37c3d4: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x37c3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_37c3d8:
    // 0x37c3d8: 0x24030095  addiu       $v1, $zero, 0x95
    ctx->pc = 0x37c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_37c3dc:
    // 0x37c3dc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37c3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_37c3e0:
    // 0x37c3e0: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x37c3e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
label_37c3e4:
    // 0x37c3e4: 0xa2062b78  sb          $a2, 0x2B78($s0)
    ctx->pc = 0x37c3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11128), (uint8_t)GPR_U32(ctx, 6));
label_37c3e8:
    // 0x37c3e8: 0x8e060148  lw          $a2, 0x148($s0)
    ctx->pc = 0x37c3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_37c3ec:
    // 0x37c3ec: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x37c3ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_37c3f0:
    // 0x37c3f0: 0xae050148  sw          $a1, 0x148($s0)
    ctx->pc = 0x37c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 5));
label_37c3f4:
    // 0x37c3f4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x37c3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_37c3f8:
    // 0x37c3f8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x37c3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_37c3fc:
    // 0x37c3fc: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x37c3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
label_37c400:
    // 0x37c400: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x37c400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
label_37c404:
    // 0x37c404: 0xc0e049c  jal         func_381270
label_37c408:
    if (ctx->pc == 0x37C408u) {
        ctx->pc = 0x37C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C404u;
        // 0x37c408: 0xae0207ec  sw          $v0, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C40Cu;
        goto label_37c40c;
    }
    ctx->pc = 0x37C404u;
    SET_GPR_U32(ctx, 31, 0x37C40Cu);
    ctx->pc = 0x37C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C404u;
    // 0x37c408: 0xae0207ec  sw          $v0, 0x7EC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381270u, 0x37C404u, 0x37C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C40Cu;
label_37c40c:
    // 0x37c40c: 0x10000006  b           . + 4 + (0x6 << 2)
label_37c410:
    if (ctx->pc == 0x37C410u) {
        ctx->pc = 0x37C414u;
        goto label_37c414;
    }
    ctx->pc = 0x37C40Cu;
    {
        const bool branch_taken_0x37c40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c40c) {
            ctx->pc = 0x37C428u;
            goto label_37c428;
        }
    }
    ctx->pc = 0x37C414u;
label_37c414:
    // 0x37c414: 0x0  nop
    ctx->pc = 0x37c414u;
    // NOP
label_37c418:
    // 0x37c418: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x37c418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_37c41c:
    // 0x37c41c: 0x10000098  b           . + 4 + (0x98 << 2)
label_37c420:
    if (ctx->pc == 0x37C420u) {
        ctx->pc = 0x37C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C41Cu;
        // 0x37c420: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C424u;
        goto label_37c424;
    }
    ctx->pc = 0x37C41Cu;
    {
        const bool branch_taken_0x37c41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C41Cu;
        // 0x37c420: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c41c) {
            ctx->pc = 0x37C680u;
            goto label_37c680;
        }
    }
    ctx->pc = 0x37C424u;
label_37c424:
    // 0x37c424: 0x0  nop
    ctx->pc = 0x37c424u;
    // NOP
label_37c428:
    // 0x37c428: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x37c428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_37c42c:
    // 0x37c42c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_37c430:
    // 0x37c430: 0x10000093  b           . + 4 + (0x93 << 2)
label_37c434:
    if (ctx->pc == 0x37C434u) {
        ctx->pc = 0x37C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C430u;
        // 0x37c434: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C438u;
        goto label_37c438;
    }
    ctx->pc = 0x37C430u;
    {
        const bool branch_taken_0x37c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C430u;
        // 0x37c434: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c430) {
            ctx->pc = 0x37C680u;
            goto label_37c680;
        }
    }
    ctx->pc = 0x37C438u;
label_37c438:
    // 0x37c438: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x37c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_37c43c:
    // 0x37c43c: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x37c43cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
label_37c440:
    // 0x37c440: 0x2863011d  slti        $v1, $v1, 0x11D
    ctx->pc = 0x37c440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)285) ? 1 : 0);
label_37c444:
    // 0x37c444: 0x1460008e  bnez        $v1, . + 4 + (0x8E << 2)
label_37c448:
    if (ctx->pc == 0x37C448u) {
        ctx->pc = 0x37C44Cu;
        goto label_37c44c;
    }
    ctx->pc = 0x37C444u;
    {
        const bool branch_taken_0x37c444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c444) {
            ctx->pc = 0x37C680u;
            goto label_37c680;
        }
    }
    ctx->pc = 0x37C44Cu;
label_37c44c:
    // 0x37c44c: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x37c44cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_37c450:
    // 0x37c450: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37c450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_37c454:
    // 0x37c454: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x37c454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
label_37c458:
    // 0x37c458: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37c458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_37c45c:
    // 0x37c45c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x37c45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_37c460:
    // 0x37c460: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37c460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
label_37c464:
    // 0x37c464: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37c464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c468:
    // 0x37c468: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37c468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c46c:
    // 0x37c46c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37c46cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c470:
    // 0x37c470: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x37c470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_37c474:
    // 0x37c474: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x37c474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_37c478:
    // 0x37c478: 0xc05e9e8  jal         func_17A7A0
label_37c47c:
    if (ctx->pc == 0x37C47Cu) {
        ctx->pc = 0x37C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C478u;
        // 0x37c47c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C480u;
        goto label_37c480;
    }
    ctx->pc = 0x37C478u;
    SET_GPR_U32(ctx, 31, 0x37C480u);
    ctx->pc = 0x37C47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C478u;
    // 0x37c47c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37C478u, 0x37C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C480u;
label_37c480:
    // 0x37c480: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x37c480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_37c484:
    // 0x37c484: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37c484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_37c488:
    // 0x37c488: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x37c488u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_37c48c:
    // 0x37c48c: 0x0  nop
    ctx->pc = 0x37c48cu;
    // NOP
label_37c490:
    // 0x37c490: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x37c490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_37c494:
    // 0x37c494: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x37c494u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
label_37c498:
    // 0x37c498: 0x2863012c  slti        $v1, $v1, 0x12C
    ctx->pc = 0x37c498u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
label_37c49c:
    // 0x37c49c: 0x14600078  bnez        $v1, . + 4 + (0x78 << 2)
label_37c4a0:
    if (ctx->pc == 0x37C4A0u) {
        ctx->pc = 0x37C4A4u;
        goto label_37c4a4;
    }
    ctx->pc = 0x37C49Cu;
    {
        const bool branch_taken_0x37c49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c49c) {
            ctx->pc = 0x37C680u;
            goto label_37c680;
        }
    }
    ctx->pc = 0x37C4A4u;
label_37c4a4:
    // 0x37c4a4: 0x92072b78  lbu         $a3, 0x2B78($s0)
    ctx->pc = 0x37c4a4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
label_37c4a8:
    // 0x37c4a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x37c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_37c4ac:
    // 0x37c4ac: 0x34437fff  ori         $v1, $v0, 0x7FFF
    ctx->pc = 0x37c4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_37c4b0:
    // 0x37c4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c4b4:
    // 0x37c4b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37c4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c4b8:
    // 0x37c4b8: 0x34e20010  ori         $v0, $a3, 0x10
    ctx->pc = 0x37c4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
label_37c4bc:
    // 0x37c4bc: 0xa2022b78  sb          $v0, 0x2B78($s0)
    ctx->pc = 0x37c4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11128), (uint8_t)GPR_U32(ctx, 2));
label_37c4c0:
    // 0x37c4c0: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x37c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
label_37c4c4:
    // 0x37c4c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x37c4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_37c4c8:
    // 0x37c4c8: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x37c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
label_37c4cc:
    // 0x37c4cc: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x37c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
label_37c4d0:
    // 0x37c4d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x37c4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_37c4d4:
    // 0x37c4d4: 0xae0206cc  sw          $v0, 0x6CC($s0)
    ctx->pc = 0x37c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
label_37c4d8:
    // 0x37c4d8: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x37c4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_37c4dc:
    // 0x37c4dc: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x37c4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_37c4e0:
    // 0x37c4e0: 0x320f809  jalr        $t9
label_37c4e4:
    if (ctx->pc == 0x37C4E4u) {
        ctx->pc = 0x37C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C4E0u;
        // 0x37c4e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C4E8u;
        goto label_37c4e8;
    }
    ctx->pc = 0x37C4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37C4E8u);
        ctx->pc = 0x37C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C4E0u;
        // 0x37c4e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C4E0u, 0x37C4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37C4E8u;
label_37c4e8:
    // 0x37c4e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37c4ec:
    // 0x37c4ec: 0xa6030786  sh          $v1, 0x786($s0)
    ctx->pc = 0x37c4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 3));
label_37c4f0:
    // 0x37c4f0: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x37c4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
label_37c4f4:
    // 0x37c4f4: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x37c4f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_37c4f8:
    // 0x37c4f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_37c4fc:
    // 0x37c4fc: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x37c4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_37c500:
    // 0x37c500: 0x3c034352  lui         $v1, 0x4352
    ctx->pc = 0x37c500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17234 << 16));
label_37c504:
    // 0x37c504: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37c508:
    // 0x37c508: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37c508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_37c50c:
    // 0x37c50c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x37c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_37c510:
    // 0x37c510: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x37c510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_37c514:
    // 0x37c514: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37c514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_37c518:
    // 0x37c518: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37c518u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_37c51c:
    // 0x37c51c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37c51cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37c520:
    // 0x37c520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37c520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c524:
    // 0x37c524: 0x0  nop
    ctx->pc = 0x37c524u;
    // NOP
label_37c528:
    // 0x37c528: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37c528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_37c52c:
    // 0x37c52c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37c52cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37c530:
    // 0x37c530: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_37c534:
    if (ctx->pc == 0x37C534u) {
        ctx->pc = 0x37C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C530u;
        // 0x37c534: 0x96050826  lhu         $a1, 0x826($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C538u;
        goto label_37c538;
    }
    ctx->pc = 0x37C530u;
    {
        const bool branch_taken_0x37c530 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C530u;
        // 0x37c534: 0x96050826  lhu         $a1, 0x826($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c530) {
            ctx->pc = 0x37C548u;
            goto label_37c548;
        }
    }
    ctx->pc = 0x37C538u;
label_37c538:
    // 0x37c538: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37c538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_37c53c:
    // 0x37c53c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37c53cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_37c540:
    // 0x37c540: 0x10000008  b           . + 4 + (0x8 << 2)
label_37c544:
    if (ctx->pc == 0x37C544u) {
        ctx->pc = 0x37C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C540u;
        // 0x37c544: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C548u;
        goto label_37c548;
    }
    ctx->pc = 0x37C540u;
    {
        const bool branch_taken_0x37c540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C540u;
        // 0x37c544: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c540) {
            ctx->pc = 0x37C564u;
            goto label_37c564;
        }
    }
    ctx->pc = 0x37C548u;
label_37c548:
    // 0x37c548: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37c548u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37c54c:
    // 0x37c54c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_37c550:
    // 0x37c550: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37c550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_37c554:
    // 0x37c554: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37c554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_37c558:
    // 0x37c558: 0x0  nop
    ctx->pc = 0x37c558u;
    // NOP
label_37c55c:
    // 0x37c55c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x37c55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_37c560:
    // 0x37c560: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x37c560u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_37c564:
    // 0x37c564: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_37c568:
    if (ctx->pc == 0x37C568u) {
        ctx->pc = 0x37C56Cu;
        goto label_37c56c;
    }
    ctx->pc = 0x37C564u;
    {
        const bool branch_taken_0x37c564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c564) {
            ctx->pc = 0x37C580u;
            goto label_37c580;
        }
    }
    ctx->pc = 0x37C56Cu;
label_37c56c:
    // 0x37c56c: 0x96030826  lhu         $v1, 0x826($s0)
    ctx->pc = 0x37c56cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
label_37c570:
    // 0x37c570: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37c570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_37c574:
    // 0x37c574: 0x10000042  b           . + 4 + (0x42 << 2)
label_37c578:
    if (ctx->pc == 0x37C578u) {
        ctx->pc = 0x37C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C574u;
        // 0x37c578: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C57Cu;
        goto label_37c57c;
    }
    ctx->pc = 0x37C574u;
    {
        const bool branch_taken_0x37c574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C574u;
        // 0x37c578: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c574) {
            ctx->pc = 0x37C680u;
            goto label_37c680;
        }
    }
    ctx->pc = 0x37C57Cu;
label_37c57c:
    // 0x37c57c: 0x0  nop
    ctx->pc = 0x37c57cu;
    // NOP
label_37c580:
    // 0x37c580: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x37c580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
label_37c584:
    // 0x37c584: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37c584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c588:
    // 0x37c588: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x37c588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c58c:
    // 0x37c58c: 0x0  nop
    ctx->pc = 0x37c58cu;
    // NOP
label_37c590:
    // 0x37c590: 0x8e252b20  lw          $a1, 0x2B20($s1)
    ctx->pc = 0x37c590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
label_37c594:
    // 0x37c594: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x37c594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_37c598:
    // 0x37c598: 0xc07cce0  jal         func_1F3380
label_37c59c:
    if (ctx->pc == 0x37C59Cu) {
        ctx->pc = 0x37C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C598u;
        // 0x37c59c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C5A0u;
        goto label_37c5a0;
    }
    ctx->pc = 0x37C598u;
    SET_GPR_U32(ctx, 31, 0x37C5A0u);
    ctx->pc = 0x37C59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C598u;
    // 0x37c59c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x37C598u, 0x37C5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C5A0u;
label_37c5a0:
    // 0x37c5a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37c5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37c5a4:
    // 0x37c5a4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_37c5a8:
    if (ctx->pc == 0x37C5A8u) {
        ctx->pc = 0x37C5ACu;
        goto label_37c5ac;
    }
    ctx->pc = 0x37C5A4u;
    {
        const bool branch_taken_0x37c5a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c5a4) {
            ctx->pc = 0x37C5C0u;
            goto label_37c5c0;
        }
    }
    ctx->pc = 0x37C5ACu;
label_37c5ac:
    // 0x37c5ac: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x37c5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_37c5b0:
    // 0x37c5b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37c5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37c5b4:
    // 0x37c5b4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x37c5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_37c5b8:
    // 0x37c5b8: 0x320f809  jalr        $t9
label_37c5bc:
    if (ctx->pc == 0x37C5BCu) {
        ctx->pc = 0x37C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5B8u;
        // 0x37c5bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C5C0u;
        goto label_37c5c0;
    }
    ctx->pc = 0x37C5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37C5C0u);
        ctx->pc = 0x37C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5B8u;
        // 0x37c5bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C5B8u, 0x37C5C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37C5C0u;
label_37c5c0:
    // 0x37c5c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37c5c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_37c5c4:
    // 0x37c5c4: 0x2e430004  sltiu       $v1, $s2, 0x4
    ctx->pc = 0x37c5c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_37c5c8:
    // 0x37c5c8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_37c5cc:
    if (ctx->pc == 0x37C5CCu) {
        ctx->pc = 0x37C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5C8u;
        // 0x37c5cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C5D0u;
        goto label_37c5d0;
    }
    ctx->pc = 0x37C5C8u;
    {
        const bool branch_taken_0x37c5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5C8u;
        // 0x37c5cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c5c8) {
            ctx->pc = 0x37C590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37c590;
        }
    }
    ctx->pc = 0x37C5D0u;
label_37c5d0:
    // 0x37c5d0: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x37c5d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_37c5d4:
    // 0x37c5d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37c5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_37c5d8:
    // 0x37c5d8: 0x10000029  b           . + 4 + (0x29 << 2)
label_37c5dc:
    if (ctx->pc == 0x37C5DCu) {
        ctx->pc = 0x37C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5D8u;
        // 0x37c5dc: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C5E0u;
        goto label_37c5e0;
    }
    ctx->pc = 0x37C5D8u;
    {
        const bool branch_taken_0x37c5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5D8u;
        // 0x37c5dc: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c5d8) {
            ctx->pc = 0x37C680u;
            goto label_37c680;
        }
    }
    ctx->pc = 0x37C5E0u;
label_37c5e0:
    // 0x37c5e0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x37c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_37c5e4:
    // 0x37c5e4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37c5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37c5e8:
    // 0x37c5e8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37c5e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_37c5ec:
    // 0x37c5ec: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x37c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_37c5f0:
    // 0x37c5f0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x37c5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_37c5f4:
    // 0x37c5f4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_37c5f8:
    // 0x37c5f8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37c5f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_37c5fc:
    // 0x37c5fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37c5fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37c600:
    // 0x37c600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37c600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c604:
    // 0x37c604: 0x0  nop
    ctx->pc = 0x37c604u;
    // NOP
label_37c608:
    // 0x37c608: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37c608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_37c60c:
    // 0x37c60c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37c60cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37c610:
    // 0x37c610: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_37c614:
    if (ctx->pc == 0x37C614u) {
        ctx->pc = 0x37C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C610u;
        // 0x37c614: 0x96050826  lhu         $a1, 0x826($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C618u;
        goto label_37c618;
    }
    ctx->pc = 0x37C610u;
    {
        const bool branch_taken_0x37c610 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C610u;
        // 0x37c614: 0x96050826  lhu         $a1, 0x826($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c610) {
            ctx->pc = 0x37C628u;
            goto label_37c628;
        }
    }
    ctx->pc = 0x37C618u;
label_37c618:
    // 0x37c618: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37c618u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_37c61c:
    // 0x37c61c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37c61cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_37c620:
    // 0x37c620: 0x10000008  b           . + 4 + (0x8 << 2)
label_37c624:
    if (ctx->pc == 0x37C624u) {
        ctx->pc = 0x37C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C620u;
        // 0x37c624: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C628u;
        goto label_37c628;
    }
    ctx->pc = 0x37C620u;
    {
        const bool branch_taken_0x37c620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C620u;
        // 0x37c624: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c620) {
            ctx->pc = 0x37C644u;
            goto label_37c644;
        }
    }
    ctx->pc = 0x37C628u;
label_37c628:
    // 0x37c628: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37c628u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37c62c:
    // 0x37c62c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_37c630:
    // 0x37c630: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37c630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_37c634:
    // 0x37c634: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37c634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_37c638:
    // 0x37c638: 0x0  nop
    ctx->pc = 0x37c638u;
    // NOP
label_37c63c:
    // 0x37c63c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x37c63cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_37c640:
    // 0x37c640: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x37c640u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_37c644:
    // 0x37c644: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_37c648:
    if (ctx->pc == 0x37C648u) {
        ctx->pc = 0x37C64Cu;
        goto label_37c64c;
    }
    ctx->pc = 0x37C644u;
    {
        const bool branch_taken_0x37c644 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c644) {
            ctx->pc = 0x37C660u;
            goto label_37c660;
        }
    }
    ctx->pc = 0x37C64Cu;
label_37c64c:
    // 0x37c64c: 0x96030826  lhu         $v1, 0x826($s0)
    ctx->pc = 0x37c64cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
label_37c650:
    // 0x37c650: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37c650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_37c654:
    // 0x37c654: 0x1000000a  b           . + 4 + (0xA << 2)
label_37c658:
    if (ctx->pc == 0x37C658u) {
        ctx->pc = 0x37C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C654u;
        // 0x37c658: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C65Cu;
        goto label_37c65c;
    }
    ctx->pc = 0x37C654u;
    {
        const bool branch_taken_0x37c654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C654u;
        // 0x37c658: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c654) {
            ctx->pc = 0x37C680u;
            goto label_37c680;
        }
    }
    ctx->pc = 0x37C65Cu;
label_37c65c:
    // 0x37c65c: 0x0  nop
    ctx->pc = 0x37c65cu;
    // NOP
label_37c660:
    // 0x37c660: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x37c660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
label_37c664:
    // 0x37c664: 0x92032bb4  lbu         $v1, 0x2BB4($s0)
    ctx->pc = 0x37c664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11188)));
label_37c668:
    // 0x37c668: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x37c668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_37c66c:
    // 0x37c66c: 0xa2032bb4  sb          $v1, 0x2BB4($s0)
    ctx->pc = 0x37c66cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11188), (uint8_t)GPR_U32(ctx, 3));
label_37c670:
    // 0x37c670: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x37c670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_37c674:
    // 0x37c674: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37c674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_37c678:
    // 0x37c678: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x37c678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_37c67c:
    // 0x37c67c: 0x0  nop
    ctx->pc = 0x37c67cu;
    // NOP
label_37c680:
    // 0x37c680: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37c680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_37c684:
    // 0x37c684: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37c684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37c688:
    // 0x37c688: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37c688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37c68c:
    // 0x37c68c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37c68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37c690:
    // 0x37c690: 0x3e00008  jr          $ra
label_37c694:
    if (ctx->pc == 0x37C694u) {
        ctx->pc = 0x37C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C690u;
        // 0x37c694: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C698u;
        goto label_fallthrough_0x37c690;
    }
    ctx->pc = 0x37C690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C690u;
        // 0x37c694: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37c690:
    ctx->pc = 0x37C698u;
}
