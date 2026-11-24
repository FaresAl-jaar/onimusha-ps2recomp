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

// Function: sub_00229528
// Address: 0x229528 - 0x2296c4
void sub_00229528_0x229528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229528_0x229528");
#endif

    switch (ctx->pc) {
        case 0x229528u: goto label_229528;
        case 0x22952cu: goto label_22952c;
        case 0x229530u: goto label_229530;
        case 0x229534u: goto label_229534;
        case 0x229538u: goto label_229538;
        case 0x22953cu: goto label_22953c;
        case 0x229540u: goto label_229540;
        case 0x229544u: goto label_229544;
        case 0x229548u: goto label_229548;
        case 0x22954cu: goto label_22954c;
        case 0x229550u: goto label_229550;
        case 0x229554u: goto label_229554;
        case 0x229558u: goto label_229558;
        case 0x22955cu: goto label_22955c;
        case 0x229560u: goto label_229560;
        case 0x229564u: goto label_229564;
        case 0x229568u: goto label_229568;
        case 0x22956cu: goto label_22956c;
        case 0x229570u: goto label_229570;
        case 0x229574u: goto label_229574;
        case 0x229578u: goto label_229578;
        case 0x22957cu: goto label_22957c;
        case 0x229580u: goto label_229580;
        case 0x229584u: goto label_229584;
        case 0x229588u: goto label_229588;
        case 0x22958cu: goto label_22958c;
        case 0x229590u: goto label_229590;
        case 0x229594u: goto label_229594;
        case 0x229598u: goto label_229598;
        case 0x22959cu: goto label_22959c;
        case 0x2295a0u: goto label_2295a0;
        case 0x2295a4u: goto label_2295a4;
        case 0x2295a8u: goto label_2295a8;
        case 0x2295acu: goto label_2295ac;
        case 0x2295b0u: goto label_2295b0;
        case 0x2295b4u: goto label_2295b4;
        case 0x2295b8u: goto label_2295b8;
        case 0x2295bcu: goto label_2295bc;
        case 0x2295c0u: goto label_2295c0;
        case 0x2295c4u: goto label_2295c4;
        case 0x2295c8u: goto label_2295c8;
        case 0x2295ccu: goto label_2295cc;
        case 0x2295d0u: goto label_2295d0;
        case 0x2295d4u: goto label_2295d4;
        case 0x2295d8u: goto label_2295d8;
        case 0x2295dcu: goto label_2295dc;
        case 0x2295e0u: goto label_2295e0;
        case 0x2295e4u: goto label_2295e4;
        case 0x2295e8u: goto label_2295e8;
        case 0x2295ecu: goto label_2295ec;
        case 0x2295f0u: goto label_2295f0;
        case 0x2295f4u: goto label_2295f4;
        case 0x2295f8u: goto label_2295f8;
        case 0x2295fcu: goto label_2295fc;
        case 0x229600u: goto label_229600;
        case 0x229604u: goto label_229604;
        case 0x229608u: goto label_229608;
        case 0x22960cu: goto label_22960c;
        case 0x229610u: goto label_229610;
        case 0x229614u: goto label_229614;
        case 0x229618u: goto label_229618;
        case 0x22961cu: goto label_22961c;
        case 0x229620u: goto label_229620;
        case 0x229624u: goto label_229624;
        case 0x229628u: goto label_229628;
        case 0x22962cu: goto label_22962c;
        case 0x229630u: goto label_229630;
        case 0x229634u: goto label_229634;
        case 0x229638u: goto label_229638;
        case 0x22963cu: goto label_22963c;
        case 0x229640u: goto label_229640;
        case 0x229644u: goto label_229644;
        case 0x229648u: goto label_229648;
        case 0x22964cu: goto label_22964c;
        case 0x229650u: goto label_229650;
        case 0x229654u: goto label_229654;
        case 0x229658u: goto label_229658;
        case 0x22965cu: goto label_22965c;
        case 0x229660u: goto label_229660;
        case 0x229664u: goto label_229664;
        case 0x229668u: goto label_229668;
        case 0x22966cu: goto label_22966c;
        case 0x229670u: goto label_229670;
        case 0x229674u: goto label_229674;
        case 0x229678u: goto label_229678;
        case 0x22967cu: goto label_22967c;
        case 0x229680u: goto label_229680;
        case 0x229684u: goto label_229684;
        case 0x229688u: goto label_229688;
        case 0x22968cu: goto label_22968c;
        case 0x229690u: goto label_229690;
        case 0x229694u: goto label_229694;
        case 0x229698u: goto label_229698;
        case 0x22969cu: goto label_22969c;
        case 0x2296a0u: goto label_2296a0;
        case 0x2296a4u: goto label_2296a4;
        case 0x2296a8u: goto label_2296a8;
        case 0x2296acu: goto label_2296ac;
        case 0x2296b0u: goto label_2296b0;
        case 0x2296b4u: goto label_2296b4;
        case 0x2296b8u: goto label_2296b8;
        case 0x2296bcu: goto label_2296bc;
        case 0x2296c0u: goto label_2296c0;
        default: break;
    }

    ctx->pc = 0x229528u;

label_229528:
    // 0x229528: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x229528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22952c:
    // 0x22952c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22952cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_229530:
    // 0x229530: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x229530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229534:
    // 0x229534: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x229534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_229538:
    // 0x229538: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x229538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22953c:
    // 0x22953c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22953cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_229540:
    // 0x229540: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x229540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_229544:
    // 0x229544: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x229544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_229548:
    // 0x229548: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x229548u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_22954c:
    // 0x22954c: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_229550:
    if (ctx->pc == 0x229550u) {
        ctx->pc = 0x229550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22954Cu;
        // 0x229550: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229554u;
        goto label_229554;
    }
    ctx->pc = 0x22954Cu;
    {
        const bool branch_taken_0x22954c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x229550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22954Cu;
        // 0x229550: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22954c) {
            ctx->pc = 0x229574u;
            goto label_229574;
        }
    }
    ctx->pc = 0x229554u;
label_229554:
    // 0x229554: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x229554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_229558:
    // 0x229558: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x229558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_22955c:
    // 0x22955c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x22955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_229560:
    // 0x229560: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x229560u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_229564:
    // 0x229564: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x229564u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_229568:
    // 0x229568: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x229568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22956c:
    // 0x22956c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_229570:
    if (ctx->pc == 0x229570u) {
        ctx->pc = 0x229570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22956Cu;
        // 0x229570: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229574u;
        goto label_229574;
    }
    ctx->pc = 0x22956Cu;
    {
        const bool branch_taken_0x22956c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22956Cu;
        // 0x229570: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22956c) {
            ctx->pc = 0x229558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229558;
        }
    }
    ctx->pc = 0x229574u;
label_229574:
    // 0x229574: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x229574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_229578:
    // 0x229578: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x229578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_22957c:
    // 0x22957c: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
label_229580:
    if (ctx->pc == 0x229580u) {
        ctx->pc = 0x229580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22957Cu;
        // 0x229580: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229584u;
        goto label_229584;
    }
    ctx->pc = 0x22957Cu;
    {
        const bool branch_taken_0x22957c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x229580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22957Cu;
        // 0x229580: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22957c) {
            ctx->pc = 0x229610u;
            goto label_229610;
        }
    }
    ctx->pc = 0x229584u;
label_229584:
    // 0x229584: 0x26330004  addiu       $s3, $s1, 0x4
    ctx->pc = 0x229584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_229588:
    // 0x229588: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x229588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_22958c:
    // 0x22958c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x22958cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_229590:
    // 0x229590: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x229590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_229594:
    // 0x229594: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x229594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_229598:
    // 0x229598: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x229598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_22959c:
    // 0x22959c: 0x40f809  jalr        $v0
label_2295a0:
    if (ctx->pc == 0x2295A0u) {
        ctx->pc = 0x2295A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22959Cu;
        // 0x2295a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2295A4u;
        goto label_2295a4;
    }
    ctx->pc = 0x22959Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2295A4u);
        ctx->pc = 0x2295A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22959Cu;
        // 0x2295a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22959Cu, 0x2295A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2295A4u;
label_2295a4:
    // 0x2295a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2295a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2295a8:
    // 0x2295a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2295a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2295ac:
    // 0x2295ac: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2295acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2295b0:
    // 0x2295b0: 0x40f809  jalr        $v0
label_2295b4:
    if (ctx->pc == 0x2295B4u) {
        ctx->pc = 0x2295B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295B0u;
        // 0x2295b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2295B8u;
        goto label_2295b8;
    }
    ctx->pc = 0x2295B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2295B8u);
        ctx->pc = 0x2295B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295B0u;
        // 0x2295b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2295B0u, 0x2295B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2295B8u;
label_2295b8:
    // 0x2295b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2295b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2295bc:
    // 0x2295bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2295bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2295c0:
    // 0x2295c0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2295c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2295c4:
    // 0x2295c4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2295c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2295c8:
    // 0x2295c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2295c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2295cc:
    // 0x2295cc: 0x40f809  jalr        $v0
label_2295d0:
    if (ctx->pc == 0x2295D0u) {
        ctx->pc = 0x2295D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295CCu;
        // 0x2295d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2295D4u;
        goto label_2295d4;
    }
    ctx->pc = 0x2295CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2295D4u);
        ctx->pc = 0x2295D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295CCu;
        // 0x2295d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2295CCu, 0x2295D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2295D4u;
label_2295d4:
    // 0x2295d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2295d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2295d8:
    // 0x2295d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2295d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2295dc:
    // 0x2295dc: 0xc049590  jal         func_125640
label_2295e0:
    if (ctx->pc == 0x2295E0u) {
        ctx->pc = 0x2295E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295DCu;
        // 0x2295e0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2295E4u;
        goto label_2295e4;
    }
    ctx->pc = 0x2295DCu;
    SET_GPR_U32(ctx, 31, 0x2295E4u);
    ctx->pc = 0x2295E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2295DCu;
    // 0x2295e0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2295DCu, 0x2295E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2295E4u;
label_2295e4:
    // 0x2295e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2295e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2295e8:
    // 0x2295e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2295e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2295ec:
    // 0x2295ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2295ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2295f0:
    // 0x2295f0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2295f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2295f4:
    // 0x2295f4: 0x40f809  jalr        $v0
label_2295f8:
    if (ctx->pc == 0x2295F8u) {
        ctx->pc = 0x2295F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295F4u;
        // 0x2295f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2295FCu;
        goto label_2295fc;
    }
    ctx->pc = 0x2295F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2295FCu);
        ctx->pc = 0x2295F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295F4u;
        // 0x2295f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2295F4u, 0x2295FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2295FCu;
label_2295fc:
    // 0x2295fc: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x2295fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_229600:
    // 0x229600: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x229600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_229604:
    // 0x229604: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_229608:
    if (ctx->pc == 0x229608u) {
        ctx->pc = 0x229608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229604u;
        // 0x229608: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22960Cu;
        goto label_22960c;
    }
    ctx->pc = 0x229604u;
    {
        const bool branch_taken_0x229604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229604u;
        // 0x229608: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229604) {
            ctx->pc = 0x229588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229588;
        }
    }
    ctx->pc = 0x22960Cu;
label_22960c:
    // 0x22960c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x22960cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_229610:
    // 0x229610: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_229614:
    if (ctx->pc == 0x229614u) {
        ctx->pc = 0x229614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229610u;
        // 0x229614: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229618u;
        goto label_229618;
    }
    ctx->pc = 0x229610u;
    {
        const bool branch_taken_0x229610 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x229614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229610u;
        // 0x229614: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229610) {
            ctx->pc = 0x2296A0u;
            goto label_2296a0;
        }
    }
    ctx->pc = 0x229618u;
label_229618:
    // 0x229618: 0x2633000c  addiu       $s3, $s1, 0xC
    ctx->pc = 0x229618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_22961c:
    // 0x22961c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x22961cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_229620:
    // 0x229620: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x229620u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_229624:
    // 0x229624: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x229624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_229628:
    // 0x229628: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x229628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22962c:
    // 0x22962c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x22962cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_229630:
    // 0x229630: 0x40f809  jalr        $v0
label_229634:
    if (ctx->pc == 0x229634u) {
        ctx->pc = 0x229634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229630u;
        // 0x229634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229638u;
        goto label_229638;
    }
    ctx->pc = 0x229630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229638u);
        ctx->pc = 0x229634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229630u;
        // 0x229634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229630u, 0x229638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229638u;
label_229638:
    // 0x229638: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x229638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22963c:
    // 0x22963c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_229640:
    // 0x229640: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x229640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_229644:
    // 0x229644: 0x40f809  jalr        $v0
label_229648:
    if (ctx->pc == 0x229648u) {
        ctx->pc = 0x229648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229644u;
        // 0x229648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22964Cu;
        goto label_22964c;
    }
    ctx->pc = 0x229644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22964Cu);
        ctx->pc = 0x229648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229644u;
        // 0x229648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229644u, 0x22964Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22964Cu;
label_22964c:
    // 0x22964c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_229650:
    // 0x229650: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x229650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229654:
    // 0x229654: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x229654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_229658:
    // 0x229658: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x229658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_22965c:
    // 0x22965c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_229660:
    // 0x229660: 0x40f809  jalr        $v0
label_229664:
    if (ctx->pc == 0x229664u) {
        ctx->pc = 0x229664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229660u;
        // 0x229664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229668u;
        goto label_229668;
    }
    ctx->pc = 0x229660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229668u);
        ctx->pc = 0x229664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229660u;
        // 0x229664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229660u, 0x229668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229668u;
label_229668:
    // 0x229668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x229668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22966c:
    // 0x22966c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x22966cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_229670:
    // 0x229670: 0xc049590  jal         func_125640
label_229674:
    if (ctx->pc == 0x229674u) {
        ctx->pc = 0x229674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229670u;
        // 0x229674: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229678u;
        goto label_229678;
    }
    ctx->pc = 0x229670u;
    SET_GPR_U32(ctx, 31, 0x229678u);
    ctx->pc = 0x229674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229670u;
    // 0x229674: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x229670u, 0x229678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229678u;
label_229678:
    // 0x229678: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x229678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22967c:
    // 0x22967c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22967cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_229680:
    // 0x229680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x229680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229684:
    // 0x229684: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x229684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_229688:
    // 0x229688: 0x60f809  jalr        $v1
label_22968c:
    if (ctx->pc == 0x22968Cu) {
        ctx->pc = 0x22968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229688u;
        // 0x22968c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229690u;
        goto label_229690;
    }
    ctx->pc = 0x229688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x229690u);
        ctx->pc = 0x22968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229688u;
        // 0x22968c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229688u, 0x229690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229690u;
label_229690:
    // 0x229690: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x229690u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_229694:
    // 0x229694: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x229694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_229698:
    // 0x229698: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
label_22969c:
    if (ctx->pc == 0x22969Cu) {
        ctx->pc = 0x22969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229698u;
        // 0x22969c: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2296A0u;
        goto label_2296a0;
    }
    ctx->pc = 0x229698u;
    {
        const bool branch_taken_0x229698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229698) {
            ctx->pc = 0x22969Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229698u;
            // 0x22969c: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229620;
        }
    }
    ctx->pc = 0x2296A0u;
label_2296a0:
    // 0x2296a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2296a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2296a4:
    // 0x2296a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2296a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2296a8:
    // 0x2296a8: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x2296a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_2296ac:
    // 0x2296ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2296acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2296b0:
    // 0x2296b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2296b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2296b4:
    // 0x2296b4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2296b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2296b8:
    // 0x2296b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2296b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2296bc:
    // 0x2296bc: 0x3e00008  jr          $ra
label_2296c0:
    if (ctx->pc == 0x2296C0u) {
        ctx->pc = 0x2296C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296BCu;
        // 0x2296c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2296C4u;
        goto label_fallthrough_0x2296bc;
    }
    ctx->pc = 0x2296BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2296C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296BCu;
        // 0x2296c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2296BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2296bc:
    ctx->pc = 0x2296C4u;
}
