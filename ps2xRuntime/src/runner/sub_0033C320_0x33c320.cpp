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

// Function: sub_0033C320
// Address: 0x33c320 - 0x33c5d4
void sub_0033C320_0x33c320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C320_0x33c320");
#endif

    switch (ctx->pc) {
        case 0x33c320u: goto label_33c320;
        case 0x33c324u: goto label_33c324;
        case 0x33c328u: goto label_33c328;
        case 0x33c32cu: goto label_33c32c;
        case 0x33c330u: goto label_33c330;
        case 0x33c334u: goto label_33c334;
        case 0x33c338u: goto label_33c338;
        case 0x33c33cu: goto label_33c33c;
        case 0x33c340u: goto label_33c340;
        case 0x33c344u: goto label_33c344;
        case 0x33c348u: goto label_33c348;
        case 0x33c34cu: goto label_33c34c;
        case 0x33c350u: goto label_33c350;
        case 0x33c354u: goto label_33c354;
        case 0x33c358u: goto label_33c358;
        case 0x33c35cu: goto label_33c35c;
        case 0x33c360u: goto label_33c360;
        case 0x33c364u: goto label_33c364;
        case 0x33c368u: goto label_33c368;
        case 0x33c36cu: goto label_33c36c;
        case 0x33c370u: goto label_33c370;
        case 0x33c374u: goto label_33c374;
        case 0x33c378u: goto label_33c378;
        case 0x33c37cu: goto label_33c37c;
        case 0x33c380u: goto label_33c380;
        case 0x33c384u: goto label_33c384;
        case 0x33c388u: goto label_33c388;
        case 0x33c38cu: goto label_33c38c;
        case 0x33c390u: goto label_33c390;
        case 0x33c394u: goto label_33c394;
        case 0x33c398u: goto label_33c398;
        case 0x33c39cu: goto label_33c39c;
        case 0x33c3a0u: goto label_33c3a0;
        case 0x33c3a4u: goto label_33c3a4;
        case 0x33c3a8u: goto label_33c3a8;
        case 0x33c3acu: goto label_33c3ac;
        case 0x33c3b0u: goto label_33c3b0;
        case 0x33c3b4u: goto label_33c3b4;
        case 0x33c3b8u: goto label_33c3b8;
        case 0x33c3bcu: goto label_33c3bc;
        case 0x33c3c0u: goto label_33c3c0;
        case 0x33c3c4u: goto label_33c3c4;
        case 0x33c3c8u: goto label_33c3c8;
        case 0x33c3ccu: goto label_33c3cc;
        case 0x33c3d0u: goto label_33c3d0;
        case 0x33c3d4u: goto label_33c3d4;
        case 0x33c3d8u: goto label_33c3d8;
        case 0x33c3dcu: goto label_33c3dc;
        case 0x33c3e0u: goto label_33c3e0;
        case 0x33c3e4u: goto label_33c3e4;
        case 0x33c3e8u: goto label_33c3e8;
        case 0x33c3ecu: goto label_33c3ec;
        case 0x33c3f0u: goto label_33c3f0;
        case 0x33c3f4u: goto label_33c3f4;
        case 0x33c3f8u: goto label_33c3f8;
        case 0x33c3fcu: goto label_33c3fc;
        case 0x33c400u: goto label_33c400;
        case 0x33c404u: goto label_33c404;
        case 0x33c408u: goto label_33c408;
        case 0x33c40cu: goto label_33c40c;
        case 0x33c410u: goto label_33c410;
        case 0x33c414u: goto label_33c414;
        case 0x33c418u: goto label_33c418;
        case 0x33c41cu: goto label_33c41c;
        case 0x33c420u: goto label_33c420;
        case 0x33c424u: goto label_33c424;
        case 0x33c428u: goto label_33c428;
        case 0x33c42cu: goto label_33c42c;
        case 0x33c430u: goto label_33c430;
        case 0x33c434u: goto label_33c434;
        case 0x33c438u: goto label_33c438;
        case 0x33c43cu: goto label_33c43c;
        case 0x33c440u: goto label_33c440;
        case 0x33c444u: goto label_33c444;
        case 0x33c448u: goto label_33c448;
        case 0x33c44cu: goto label_33c44c;
        case 0x33c450u: goto label_33c450;
        case 0x33c454u: goto label_33c454;
        case 0x33c458u: goto label_33c458;
        case 0x33c45cu: goto label_33c45c;
        case 0x33c460u: goto label_33c460;
        case 0x33c464u: goto label_33c464;
        case 0x33c468u: goto label_33c468;
        case 0x33c46cu: goto label_33c46c;
        case 0x33c470u: goto label_33c470;
        case 0x33c474u: goto label_33c474;
        case 0x33c478u: goto label_33c478;
        case 0x33c47cu: goto label_33c47c;
        case 0x33c480u: goto label_33c480;
        case 0x33c484u: goto label_33c484;
        case 0x33c488u: goto label_33c488;
        case 0x33c48cu: goto label_33c48c;
        case 0x33c490u: goto label_33c490;
        case 0x33c494u: goto label_33c494;
        case 0x33c498u: goto label_33c498;
        case 0x33c49cu: goto label_33c49c;
        case 0x33c4a0u: goto label_33c4a0;
        case 0x33c4a4u: goto label_33c4a4;
        case 0x33c4a8u: goto label_33c4a8;
        case 0x33c4acu: goto label_33c4ac;
        case 0x33c4b0u: goto label_33c4b0;
        case 0x33c4b4u: goto label_33c4b4;
        case 0x33c4b8u: goto label_33c4b8;
        case 0x33c4bcu: goto label_33c4bc;
        case 0x33c4c0u: goto label_33c4c0;
        case 0x33c4c4u: goto label_33c4c4;
        case 0x33c4c8u: goto label_33c4c8;
        case 0x33c4ccu: goto label_33c4cc;
        case 0x33c4d0u: goto label_33c4d0;
        case 0x33c4d4u: goto label_33c4d4;
        case 0x33c4d8u: goto label_33c4d8;
        case 0x33c4dcu: goto label_33c4dc;
        case 0x33c4e0u: goto label_33c4e0;
        case 0x33c4e4u: goto label_33c4e4;
        case 0x33c4e8u: goto label_33c4e8;
        case 0x33c4ecu: goto label_33c4ec;
        case 0x33c4f0u: goto label_33c4f0;
        case 0x33c4f4u: goto label_33c4f4;
        case 0x33c4f8u: goto label_33c4f8;
        case 0x33c4fcu: goto label_33c4fc;
        case 0x33c500u: goto label_33c500;
        case 0x33c504u: goto label_33c504;
        case 0x33c508u: goto label_33c508;
        case 0x33c50cu: goto label_33c50c;
        case 0x33c510u: goto label_33c510;
        case 0x33c514u: goto label_33c514;
        case 0x33c518u: goto label_33c518;
        case 0x33c51cu: goto label_33c51c;
        case 0x33c520u: goto label_33c520;
        case 0x33c524u: goto label_33c524;
        case 0x33c528u: goto label_33c528;
        case 0x33c52cu: goto label_33c52c;
        case 0x33c530u: goto label_33c530;
        case 0x33c534u: goto label_33c534;
        case 0x33c538u: goto label_33c538;
        case 0x33c53cu: goto label_33c53c;
        case 0x33c540u: goto label_33c540;
        case 0x33c544u: goto label_33c544;
        case 0x33c548u: goto label_33c548;
        case 0x33c54cu: goto label_33c54c;
        case 0x33c550u: goto label_33c550;
        case 0x33c554u: goto label_33c554;
        case 0x33c558u: goto label_33c558;
        case 0x33c55cu: goto label_33c55c;
        case 0x33c560u: goto label_33c560;
        case 0x33c564u: goto label_33c564;
        case 0x33c568u: goto label_33c568;
        case 0x33c56cu: goto label_33c56c;
        case 0x33c570u: goto label_33c570;
        case 0x33c574u: goto label_33c574;
        case 0x33c578u: goto label_33c578;
        case 0x33c57cu: goto label_33c57c;
        case 0x33c580u: goto label_33c580;
        case 0x33c584u: goto label_33c584;
        case 0x33c588u: goto label_33c588;
        case 0x33c58cu: goto label_33c58c;
        case 0x33c590u: goto label_33c590;
        case 0x33c594u: goto label_33c594;
        case 0x33c598u: goto label_33c598;
        case 0x33c59cu: goto label_33c59c;
        case 0x33c5a0u: goto label_33c5a0;
        case 0x33c5a4u: goto label_33c5a4;
        case 0x33c5a8u: goto label_33c5a8;
        case 0x33c5acu: goto label_33c5ac;
        case 0x33c5b0u: goto label_33c5b0;
        case 0x33c5b4u: goto label_33c5b4;
        case 0x33c5b8u: goto label_33c5b8;
        case 0x33c5bcu: goto label_33c5bc;
        case 0x33c5c0u: goto label_33c5c0;
        case 0x33c5c4u: goto label_33c5c4;
        case 0x33c5c8u: goto label_33c5c8;
        case 0x33c5ccu: goto label_33c5cc;
        case 0x33c5d0u: goto label_33c5d0;
        default: break;
    }

    ctx->pc = 0x33c320u;

label_33c320:
    // 0x33c320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33c320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_33c324:
    // 0x33c324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33c324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33c328:
    // 0x33c328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33c32c:
    // 0x33c32c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33c32cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33c330:
    // 0x33c330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33c330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33c334:
    // 0x33c334: 0x8e250500  lw          $a1, 0x500($s1)
    ctx->pc = 0x33c334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1280)));
label_33c338:
    // 0x33c338: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x33c338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_33c33c:
    // 0x33c33c: 0xc07cce0  jal         func_1F3380
label_33c340:
    if (ctx->pc == 0x33C340u) {
        ctx->pc = 0x33C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C33Cu;
        // 0x33c340: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C344u;
        goto label_33c344;
    }
    ctx->pc = 0x33C33Cu;
    SET_GPR_U32(ctx, 31, 0x33C344u);
    ctx->pc = 0x33C340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C33Cu;
    // 0x33c340: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x33C33Cu, 0x33C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C344u;
label_33c344:
    // 0x33c344: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33c344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c348:
    // 0x33c348: 0x1200009d  beqz        $s0, . + 4 + (0x9D << 2)
label_33c34c:
    if (ctx->pc == 0x33C34Cu) {
        ctx->pc = 0x33C350u;
        goto label_33c350;
    }
    ctx->pc = 0x33C348u;
    {
        const bool branch_taken_0x33c348 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c348) {
            ctx->pc = 0x33C5C0u;
            goto label_33c5c0;
        }
    }
    ctx->pc = 0x33C350u;
label_33c350:
    // 0x33c350: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x33c350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_33c354:
    // 0x33c354: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33c354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_33c358:
    // 0x33c358: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_33c35c:
    if (ctx->pc == 0x33C35Cu) {
        ctx->pc = 0x33C360u;
        goto label_33c360;
    }
    ctx->pc = 0x33C358u;
    {
        const bool branch_taken_0x33c358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c358) {
            ctx->pc = 0x33C370u;
            goto label_33c370;
        }
    }
    ctx->pc = 0x33C360u;
label_33c360:
    // 0x33c360: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x33c360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_33c364:
    // 0x33c364: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x33c364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_33c368:
    // 0x33c368: 0x10000095  b           . + 4 + (0x95 << 2)
label_33c36c:
    if (ctx->pc == 0x33C36Cu) {
        ctx->pc = 0x33C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C368u;
        // 0x33c36c: 0xae230148  sw          $v1, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C370u;
        goto label_33c370;
    }
    ctx->pc = 0x33C368u;
    {
        const bool branch_taken_0x33c368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C368u;
        // 0x33c36c: 0xae230148  sw          $v1, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c368) {
            ctx->pc = 0x33C5C0u;
            goto label_33c5c0;
        }
    }
    ctx->pc = 0x33C370u;
label_33c370:
    // 0x33c370: 0x92230511  lbu         $v1, 0x511($s1)
    ctx->pc = 0x33c370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1297)));
label_33c374:
    // 0x33c374: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_33c378:
    if (ctx->pc == 0x33C378u) {
        ctx->pc = 0x33C37Cu;
        goto label_33c37c;
    }
    ctx->pc = 0x33C374u;
    {
        const bool branch_taken_0x33c374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c374) {
            ctx->pc = 0x33C450u;
            goto label_33c450;
        }
    }
    ctx->pc = 0x33C37Cu;
label_33c37c:
    // 0x33c37c: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x33c37cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_33c380:
    // 0x33c380: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x33c380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_33c384:
    // 0x33c384: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x33c384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_33c388:
    // 0x33c388: 0x34470040  ori         $a3, $v0, 0x40
    ctx->pc = 0x33c388u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_33c38c:
    // 0x33c38c: 0x7e240020  sq          $a0, 0x20($s1)
    ctx->pc = 0x33c38cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 4));
label_33c390:
    // 0x33c390: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x33c390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_33c394:
    // 0x33c394: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x33c394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
label_33c398:
    // 0x33c398: 0xa62200c0  sh          $v0, 0xC0($s1)
    ctx->pc = 0x33c398u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 2));
label_33c39c:
    // 0x33c39c: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x33c39cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
label_33c3a0:
    // 0x33c3a0: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x33c3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
label_33c3a4:
    // 0x33c3a4: 0x860200c4  lh          $v0, 0xC4($s0)
    ctx->pc = 0x33c3a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 196)));
label_33c3a8:
    // 0x33c3a8: 0xa62200c4  sh          $v0, 0xC4($s1)
    ctx->pc = 0x33c3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 196), (uint16_t)GPR_U32(ctx, 2));
label_33c3ac:
    // 0x33c3ac: 0x92260512  lbu         $a2, 0x512($s1)
    ctx->pc = 0x33c3acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1298)));
label_33c3b0:
    // 0x33c3b0: 0xa2200508  sb          $zero, 0x508($s1)
    ctx->pc = 0x33c3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1288), (uint8_t)GPR_U32(ctx, 0));
label_33c3b4:
    // 0x33c3b4: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x33c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_33c3b8:
    // 0x33c3b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33c3b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33c3bc:
    // 0x33c3bc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x33c3bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_33c3c0:
    // 0x33c3c0: 0x320f809  jalr        $t9
label_33c3c4:
    if (ctx->pc == 0x33C3C4u) {
        ctx->pc = 0x33C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3C0u;
        // 0x33c3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C3C8u;
        goto label_33c3c8;
    }
    ctx->pc = 0x33C3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C3C8u);
        ctx->pc = 0x33C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3C0u;
        // 0x33c3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C3C0u, 0x33C3C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C3C8u;
label_33c3c8:
    // 0x33c3c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c3cc:
    // 0x33c3cc: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x33c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_33c3d0:
    // 0x33c3d0: 0xa2230506  sb          $v1, 0x506($s1)
    ctx->pc = 0x33c3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1286), (uint8_t)GPR_U32(ctx, 3));
label_33c3d4:
    // 0x33c3d4: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x33c3d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
label_33c3d8:
    // 0x33c3d8: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x33c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_33c3dc:
    // 0x33c3dc: 0xa2240510  sb          $a0, 0x510($s1)
    ctx->pc = 0x33c3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1296), (uint8_t)GPR_U32(ctx, 4));
label_33c3e0:
    // 0x33c3e0: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x33c3e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_33c3e4:
    // 0x33c3e4: 0x7e240560  sq          $a0, 0x560($s1)
    ctx->pc = 0x33c3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1376), GPR_VEC(ctx, 4));
label_33c3e8:
    // 0x33c3e8: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x33c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_33c3ec:
    // 0x33c3ec: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x33c3ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_33c3f0:
    // 0x33c3f0: 0xae240148  sw          $a0, 0x148($s1)
    ctx->pc = 0x33c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 4));
label_33c3f4:
    // 0x33c3f4: 0x8e24014c  lw          $a0, 0x14C($s1)
    ctx->pc = 0x33c3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
label_33c3f8:
    // 0x33c3f8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x33c3f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_33c3fc:
    // 0x33c3fc: 0xae24014c  sw          $a0, 0x14C($s1)
    ctx->pc = 0x33c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 4));
label_33c400:
    // 0x33c400: 0x92240512  lbu         $a0, 0x512($s1)
    ctx->pc = 0x33c400u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1298)));
label_33c404:
    // 0x33c404: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_33c408:
    if (ctx->pc == 0x33C408u) {
        ctx->pc = 0x33C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C404u;
        // 0x33c408: 0x24030062  addiu       $v1, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C40Cu;
        goto label_33c40c;
    }
    ctx->pc = 0x33C404u;
    {
        const bool branch_taken_0x33c404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C404u;
        // 0x33c408: 0x24030062  addiu       $v1, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c404) {
            ctx->pc = 0x33C430u;
            goto label_33c430;
        }
    }
    ctx->pc = 0x33C40Cu;
label_33c40c:
    // 0x33c40c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_33c410:
    if (ctx->pc == 0x33C410u) {
        ctx->pc = 0x33C414u;
        goto label_33c414;
    }
    ctx->pc = 0x33C40Cu;
    {
        const bool branch_taken_0x33c40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33c40c) {
            ctx->pc = 0x33C420u;
            goto label_33c420;
        }
    }
    ctx->pc = 0x33C414u;
label_33c414:
    // 0x33c414: 0x1000000a  b           . + 4 + (0xA << 2)
label_33c418:
    if (ctx->pc == 0x33C418u) {
        ctx->pc = 0x33C41Cu;
        goto label_33c41c;
    }
    ctx->pc = 0x33C414u;
    {
        const bool branch_taken_0x33c414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c414) {
            ctx->pc = 0x33C440u;
            goto label_33c440;
        }
    }
    ctx->pc = 0x33C41Cu;
label_33c41c:
    // 0x33c41c: 0x0  nop
    ctx->pc = 0x33c41cu;
    // NOP
label_33c420:
    // 0x33c420: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x33c420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_33c424:
    // 0x33c424: 0x10000008  b           . + 4 + (0x8 << 2)
label_33c428:
    if (ctx->pc == 0x33C428u) {
        ctx->pc = 0x33C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C424u;
        // 0x33c428: 0xa2230507  sb          $v1, 0x507($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1287), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C42Cu;
        goto label_33c42c;
    }
    ctx->pc = 0x33C424u;
    {
        const bool branch_taken_0x33c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C424u;
        // 0x33c428: 0xa2230507  sb          $v1, 0x507($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1287), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c424) {
            ctx->pc = 0x33C448u;
            goto label_33c448;
        }
    }
    ctx->pc = 0x33C42Cu;
label_33c42c:
    // 0x33c42c: 0x0  nop
    ctx->pc = 0x33c42cu;
    // NOP
label_33c430:
    // 0x33c430: 0x240300a2  addiu       $v1, $zero, 0xA2
    ctx->pc = 0x33c430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_33c434:
    // 0x33c434: 0x10000004  b           . + 4 + (0x4 << 2)
label_33c438:
    if (ctx->pc == 0x33C438u) {
        ctx->pc = 0x33C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C434u;
        // 0x33c438: 0xa2230507  sb          $v1, 0x507($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1287), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C43Cu;
        goto label_33c43c;
    }
    ctx->pc = 0x33C434u;
    {
        const bool branch_taken_0x33c434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C434u;
        // 0x33c438: 0xa2230507  sb          $v1, 0x507($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1287), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c434) {
            ctx->pc = 0x33C448u;
            goto label_33c448;
        }
    }
    ctx->pc = 0x33C43Cu;
label_33c43c:
    // 0x33c43c: 0x0  nop
    ctx->pc = 0x33c43cu;
    // NOP
label_33c440:
    // 0x33c440: 0x240300d0  addiu       $v1, $zero, 0xD0
    ctx->pc = 0x33c440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_33c444:
    // 0x33c444: 0xa2230507  sb          $v1, 0x507($s1)
    ctx->pc = 0x33c444u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1287), (uint8_t)GPR_U32(ctx, 3));
label_33c448:
    // 0x33c448: 0xa2200511  sb          $zero, 0x511($s1)
    ctx->pc = 0x33c448u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1297), (uint8_t)GPR_U32(ctx, 0));
label_33c44c:
    // 0x33c44c: 0x0  nop
    ctx->pc = 0x33c44cu;
    // NOP
label_33c450:
    // 0x33c450: 0x92240506  lbu         $a0, 0x506($s1)
    ctx->pc = 0x33c450u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1286)));
label_33c454:
    // 0x33c454: 0x10800048  beqz        $a0, . + 4 + (0x48 << 2)
label_33c458:
    if (ctx->pc == 0x33C458u) {
        ctx->pc = 0x33C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C454u;
        // 0x33c458: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C45Cu;
        goto label_33c45c;
    }
    ctx->pc = 0x33C454u;
    {
        const bool branch_taken_0x33c454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C454u;
        // 0x33c458: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c454) {
            ctx->pc = 0x33C578u;
            goto label_33c578;
        }
    }
    ctx->pc = 0x33C45Cu;
label_33c45c:
    // 0x33c45c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_33c460:
    if (ctx->pc == 0x33C460u) {
        ctx->pc = 0x33C464u;
        goto label_33c464;
    }
    ctx->pc = 0x33C45Cu;
    {
        const bool branch_taken_0x33c45c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33c45c) {
            ctx->pc = 0x33C470u;
            goto label_33c470;
        }
    }
    ctx->pc = 0x33C464u;
label_33c464:
    // 0x33c464: 0x10000054  b           . + 4 + (0x54 << 2)
label_33c468:
    if (ctx->pc == 0x33C468u) {
        ctx->pc = 0x33C46Cu;
        goto label_33c46c;
    }
    ctx->pc = 0x33C464u;
    {
        const bool branch_taken_0x33c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c464) {
            ctx->pc = 0x33C5B8u;
            goto label_33c5b8;
        }
    }
    ctx->pc = 0x33C46Cu;
label_33c46c:
    // 0x33c46c: 0x0  nop
    ctx->pc = 0x33c46cu;
    // NOP
label_33c470:
    // 0x33c470: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x33c470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_33c474:
    // 0x33c474: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x33c474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_33c478:
    // 0x33c478: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33c478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_33c47c:
    // 0x33c47c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_33c480:
    if (ctx->pc == 0x33C480u) {
        ctx->pc = 0x33C484u;
        goto label_33c484;
    }
    ctx->pc = 0x33C47Cu;
    {
        const bool branch_taken_0x33c47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c47c) {
            ctx->pc = 0x33C498u;
            goto label_33c498;
        }
    }
    ctx->pc = 0x33C484u;
label_33c484:
    // 0x33c484: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x33c484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_33c488:
    // 0x33c488: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x33c488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_33c48c:
    // 0x33c48c: 0x10000006  b           . + 4 + (0x6 << 2)
label_33c490:
    if (ctx->pc == 0x33C490u) {
        ctx->pc = 0x33C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C48Cu;
        // 0x33c490: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C494u;
        goto label_33c494;
    }
    ctx->pc = 0x33C48Cu;
    {
        const bool branch_taken_0x33c48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C48Cu;
        // 0x33c490: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c48c) {
            ctx->pc = 0x33C4A8u;
            goto label_33c4a8;
        }
    }
    ctx->pc = 0x33C494u;
label_33c494:
    // 0x33c494: 0x0  nop
    ctx->pc = 0x33c494u;
    // NOP
label_33c498:
    // 0x33c498: 0x92220507  lbu         $v0, 0x507($s1)
    ctx->pc = 0x33c498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1287)));
label_33c49c:
    // 0x33c49c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_33c4a0:
    // 0x33c4a0: 0xa2220507  sb          $v0, 0x507($s1)
    ctx->pc = 0x33c4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1287), (uint8_t)GPR_U32(ctx, 2));
label_33c4a4:
    // 0x33c4a4: 0x0  nop
    ctx->pc = 0x33c4a4u;
    // NOP
label_33c4a8:
    // 0x33c4a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x33c4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33c4ac:
    // 0x33c4ac: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x33c4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_33c4b0:
    // 0x33c4b0: 0xc0414d0  jal         func_105340
label_33c4b4:
    if (ctx->pc == 0x33C4B4u) {
        ctx->pc = 0x33C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4B0u;
        // 0x33c4b4: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C4B8u;
        goto label_33c4b8;
    }
    ctx->pc = 0x33C4B0u;
    SET_GPR_U32(ctx, 31, 0x33C4B8u);
    ctx->pc = 0x33C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C4B0u;
    // 0x33c4b4: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x33C4B0u, 0x33C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C4B8u;
label_33c4b8:
    // 0x33c4b8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x33c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_33c4bc:
    // 0x33c4bc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x33c4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33c4c0:
    // 0x33c4c0: 0xc0414ca  jal         func_105328
label_33c4c4:
    if (ctx->pc == 0x33C4C4u) {
        ctx->pc = 0x33C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4C0u;
        // 0x33c4c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C4C8u;
        goto label_33c4c8;
    }
    ctx->pc = 0x33C4C0u;
    SET_GPR_U32(ctx, 31, 0x33C4C8u);
    ctx->pc = 0x33C4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C4C0u;
    // 0x33c4c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x33C4C0u, 0x33C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C4C8u;
label_33c4c8:
    // 0x33c4c8: 0x92230508  lbu         $v1, 0x508($s1)
    ctx->pc = 0x33c4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1288)));
label_33c4cc:
    // 0x33c4cc: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_33c4d0:
    if (ctx->pc == 0x33C4D0u) {
        ctx->pc = 0x33C4D4u;
        goto label_33c4d4;
    }
    ctx->pc = 0x33C4CCu;
    {
        const bool branch_taken_0x33c4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c4cc) {
            ctx->pc = 0x33C508u;
            goto label_33c508;
        }
    }
    ctx->pc = 0x33C4D4u;
label_33c4d4:
    // 0x33c4d4: 0x92230507  lbu         $v1, 0x507($s1)
    ctx->pc = 0x33c4d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1287)));
label_33c4d8:
    // 0x33c4d8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_33c4dc:
    if (ctx->pc == 0x33C4DCu) {
        ctx->pc = 0x33C4E0u;
        goto label_33c4e0;
    }
    ctx->pc = 0x33C4D8u;
    {
        const bool branch_taken_0x33c4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c4d8) {
            ctx->pc = 0x33C508u;
            goto label_33c508;
        }
    }
    ctx->pc = 0x33C4E0u;
label_33c4e0:
    // 0x33c4e0: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x33c4e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
label_33c4e4:
    // 0x33c4e4: 0x92230510  lbu         $v1, 0x510($s1)
    ctx->pc = 0x33c4e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1296)));
label_33c4e8:
    // 0x33c4e8: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
label_33c4ec:
    if (ctx->pc == 0x33C4ECu) {
        ctx->pc = 0x33C4F0u;
        goto label_33c4f0;
    }
    ctx->pc = 0x33C4E8u;
    {
        const bool branch_taken_0x33c4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x33c4e8) {
            ctx->pc = 0x33C508u;
            goto label_33c508;
        }
    }
    ctx->pc = 0x33C4F0u;
label_33c4f0:
    // 0x33c4f0: 0x8e0406ac  lw          $a0, 0x6AC($s0)
    ctx->pc = 0x33c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_33c4f4:
    // 0x33c4f4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x33c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_33c4f8:
    // 0x33c4f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x33c4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_33c4fc:
    // 0x33c4fc: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_33c500:
    if (ctx->pc == 0x33C500u) {
        ctx->pc = 0x33C504u;
        goto label_33c504;
    }
    ctx->pc = 0x33C4FCu;
    {
        const bool branch_taken_0x33c4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c4fc) {
            ctx->pc = 0x33C5B8u;
            goto label_33c5b8;
        }
    }
    ctx->pc = 0x33C504u;
label_33c504:
    // 0x33c504: 0x0  nop
    ctx->pc = 0x33c504u;
    // NOP
label_33c508:
    // 0x33c508: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x33c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_33c50c:
    // 0x33c50c: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x33c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_33c510:
    // 0x33c510: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x33c510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_33c514:
    // 0x33c514: 0x26280520  addiu       $t0, $s1, 0x520
    ctx->pc = 0x33c514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
label_33c518:
    // 0x33c518: 0x248474e0  addiu       $a0, $a0, 0x74E0
    ctx->pc = 0x33c518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29920));
label_33c51c:
    // 0x33c51c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33c51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_33c520:
    // 0x33c520: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x33c520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
label_33c524:
    // 0x33c524: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x33c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
label_33c528:
    // 0x33c528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33c528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_33c52c:
    // 0x33c52c: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x33c52cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
label_33c530:
    // 0x33c530: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x33c530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_33c534:
    // 0x33c534: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c538:
    // 0x33c538: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x33c538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_33c53c:
    // 0x33c53c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x33c53cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_33c540:
    // 0x33c540: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x33c540u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_33c544:
    // 0x33c544: 0x7d020010  sq          $v0, 0x10($t0)
    ctx->pc = 0x33c544u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 2));
label_33c548:
    // 0x33c548: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x33c548u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_33c54c:
    // 0x33c54c: 0x7d020020  sq          $v0, 0x20($t0)
    ctx->pc = 0x33c54cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 2));
label_33c550:
    // 0x33c550: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x33c550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_33c554:
    // 0x33c554: 0x7d020030  sq          $v0, 0x30($t0)
    ctx->pc = 0x33c554u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 2));
label_33c558:
    // 0x33c558: 0xa2200508  sb          $zero, 0x508($s1)
    ctx->pc = 0x33c558u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1288), (uint8_t)GPR_U32(ctx, 0));
label_33c55c:
    // 0x33c55c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x33c55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_33c560:
    // 0x33c560: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33c560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33c564:
    // 0x33c564: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x33c564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_33c568:
    // 0x33c568: 0x320f809  jalr        $t9
label_33c56c:
    if (ctx->pc == 0x33C56Cu) {
        ctx->pc = 0x33C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C568u;
        // 0x33c56c: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C570u;
        goto label_33c570;
    }
    ctx->pc = 0x33C568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C570u);
        ctx->pc = 0x33C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C568u;
        // 0x33c56c: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C568u, 0x33C570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C570u;
label_33c570:
    // 0x33c570: 0xa2200506  sb          $zero, 0x506($s1)
    ctx->pc = 0x33c570u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1286), (uint8_t)GPR_U32(ctx, 0));
label_33c574:
    // 0x33c574: 0x0  nop
    ctx->pc = 0x33c574u;
    // NOP
label_33c578:
    // 0x33c578: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x33c578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_33c57c:
    // 0x33c57c: 0x92230504  lbu         $v1, 0x504($s1)
    ctx->pc = 0x33c57cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1284)));
label_33c580:
    // 0x33c580: 0x26260520  addiu       $a2, $s1, 0x520
    ctx->pc = 0x33c580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
label_33c584:
    // 0x33c584: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x33c584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_33c588:
    // 0x33c588: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x33c588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_33c58c:
    // 0x33c58c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x33c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_33c590:
    // 0x33c590: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x33c590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_33c594:
    // 0x33c594: 0xc04144e  jal         func_105138
label_33c598:
    if (ctx->pc == 0x33C598u) {
        ctx->pc = 0x33C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C594u;
        // 0x33c598: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C59Cu;
        goto label_33c59c;
    }
    ctx->pc = 0x33C594u;
    SET_GPR_U32(ctx, 31, 0x33C59Cu);
    ctx->pc = 0x33C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C594u;
    // 0x33c598: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x33C594u, 0x33C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C59Cu;
label_33c59c:
    // 0x33c59c: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x33c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_33c5a0:
    // 0x33c5a0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x33c5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_33c5a4:
    // 0x33c5a4: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x33c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
label_33c5a8:
    // 0x33c5a8: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x33c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
label_33c5ac:
    // 0x33c5ac: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x33c5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_33c5b0:
    // 0x33c5b0: 0xae23014c  sw          $v1, 0x14C($s1)
    ctx->pc = 0x33c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 3));
label_33c5b4:
    // 0x33c5b4: 0x0  nop
    ctx->pc = 0x33c5b4u;
    // NOP
label_33c5b8:
    // 0x33c5b8: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x33c5b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_33c5bc:
    // 0x33c5bc: 0x7e230560  sq          $v1, 0x560($s1)
    ctx->pc = 0x33c5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1376), GPR_VEC(ctx, 3));
label_33c5c0:
    // 0x33c5c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33c5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33c5c4:
    // 0x33c5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33c5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33c5c8:
    // 0x33c5c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33c5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33c5cc:
    // 0x33c5cc: 0x3e00008  jr          $ra
label_33c5d0:
    if (ctx->pc == 0x33C5D0u) {
        ctx->pc = 0x33C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C5CCu;
        // 0x33c5d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C5D4u;
        goto label_fallthrough_0x33c5cc;
    }
    ctx->pc = 0x33C5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C5CCu;
        // 0x33c5d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33c5cc:
    ctx->pc = 0x33C5D4u;
}
