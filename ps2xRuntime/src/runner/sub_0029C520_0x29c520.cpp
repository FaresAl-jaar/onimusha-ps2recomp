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

// Function: sub_0029C520
// Address: 0x29c520 - 0x29c674
void sub_0029C520_0x29c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C520_0x29c520");
#endif

    switch (ctx->pc) {
        case 0x29c520u: goto label_29c520;
        case 0x29c524u: goto label_29c524;
        case 0x29c528u: goto label_29c528;
        case 0x29c52cu: goto label_29c52c;
        case 0x29c530u: goto label_29c530;
        case 0x29c534u: goto label_29c534;
        case 0x29c538u: goto label_29c538;
        case 0x29c53cu: goto label_29c53c;
        case 0x29c540u: goto label_29c540;
        case 0x29c544u: goto label_29c544;
        case 0x29c548u: goto label_29c548;
        case 0x29c54cu: goto label_29c54c;
        case 0x29c550u: goto label_29c550;
        case 0x29c554u: goto label_29c554;
        case 0x29c558u: goto label_29c558;
        case 0x29c55cu: goto label_29c55c;
        case 0x29c560u: goto label_29c560;
        case 0x29c564u: goto label_29c564;
        case 0x29c568u: goto label_29c568;
        case 0x29c56cu: goto label_29c56c;
        case 0x29c570u: goto label_29c570;
        case 0x29c574u: goto label_29c574;
        case 0x29c578u: goto label_29c578;
        case 0x29c57cu: goto label_29c57c;
        case 0x29c580u: goto label_29c580;
        case 0x29c584u: goto label_29c584;
        case 0x29c588u: goto label_29c588;
        case 0x29c58cu: goto label_29c58c;
        case 0x29c590u: goto label_29c590;
        case 0x29c594u: goto label_29c594;
        case 0x29c598u: goto label_29c598;
        case 0x29c59cu: goto label_29c59c;
        case 0x29c5a0u: goto label_29c5a0;
        case 0x29c5a4u: goto label_29c5a4;
        case 0x29c5a8u: goto label_29c5a8;
        case 0x29c5acu: goto label_29c5ac;
        case 0x29c5b0u: goto label_29c5b0;
        case 0x29c5b4u: goto label_29c5b4;
        case 0x29c5b8u: goto label_29c5b8;
        case 0x29c5bcu: goto label_29c5bc;
        case 0x29c5c0u: goto label_29c5c0;
        case 0x29c5c4u: goto label_29c5c4;
        case 0x29c5c8u: goto label_29c5c8;
        case 0x29c5ccu: goto label_29c5cc;
        case 0x29c5d0u: goto label_29c5d0;
        case 0x29c5d4u: goto label_29c5d4;
        case 0x29c5d8u: goto label_29c5d8;
        case 0x29c5dcu: goto label_29c5dc;
        case 0x29c5e0u: goto label_29c5e0;
        case 0x29c5e4u: goto label_29c5e4;
        case 0x29c5e8u: goto label_29c5e8;
        case 0x29c5ecu: goto label_29c5ec;
        case 0x29c5f0u: goto label_29c5f0;
        case 0x29c5f4u: goto label_29c5f4;
        case 0x29c5f8u: goto label_29c5f8;
        case 0x29c5fcu: goto label_29c5fc;
        case 0x29c600u: goto label_29c600;
        case 0x29c604u: goto label_29c604;
        case 0x29c608u: goto label_29c608;
        case 0x29c60cu: goto label_29c60c;
        case 0x29c610u: goto label_29c610;
        case 0x29c614u: goto label_29c614;
        case 0x29c618u: goto label_29c618;
        case 0x29c61cu: goto label_29c61c;
        case 0x29c620u: goto label_29c620;
        case 0x29c624u: goto label_29c624;
        case 0x29c628u: goto label_29c628;
        case 0x29c62cu: goto label_29c62c;
        case 0x29c630u: goto label_29c630;
        case 0x29c634u: goto label_29c634;
        case 0x29c638u: goto label_29c638;
        case 0x29c63cu: goto label_29c63c;
        case 0x29c640u: goto label_29c640;
        case 0x29c644u: goto label_29c644;
        case 0x29c648u: goto label_29c648;
        case 0x29c64cu: goto label_29c64c;
        case 0x29c650u: goto label_29c650;
        case 0x29c654u: goto label_29c654;
        case 0x29c658u: goto label_29c658;
        case 0x29c65cu: goto label_29c65c;
        case 0x29c660u: goto label_29c660;
        case 0x29c664u: goto label_29c664;
        case 0x29c668u: goto label_29c668;
        case 0x29c66cu: goto label_29c66c;
        case 0x29c670u: goto label_29c670;
        default: break;
    }

    ctx->pc = 0x29c520u;

label_29c520:
    // 0x29c520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29c524:
    // 0x29c524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29c528:
    // 0x29c528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29c52c:
    // 0x29c52c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29c52cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c530:
    // 0x29c530: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29c534:
    // 0x29c534: 0x8e250500  lw          $a1, 0x500($s1)
    ctx->pc = 0x29c534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1280)));
label_29c538:
    // 0x29c538: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x29c538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_29c53c:
    // 0x29c53c: 0xc07cce0  jal         func_1F3380
label_29c540:
    if (ctx->pc == 0x29C540u) {
        ctx->pc = 0x29C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C53Cu;
        // 0x29c540: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C544u;
        goto label_29c544;
    }
    ctx->pc = 0x29C53Cu;
    SET_GPR_U32(ctx, 31, 0x29C544u);
    ctx->pc = 0x29C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C53Cu;
    // 0x29c540: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x29C53Cu, 0x29C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C544u;
label_29c544:
    // 0x29c544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c548:
    // 0x29c548: 0xc0a6d4c  jal         func_29B530
label_29c54c:
    if (ctx->pc == 0x29C54Cu) {
        ctx->pc = 0x29C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C548u;
        // 0x29c54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C550u;
        goto label_29c550;
    }
    ctx->pc = 0x29C548u;
    SET_GPR_U32(ctx, 31, 0x29C550u);
    ctx->pc = 0x29C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C548u;
    // 0x29c54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B530u, 0x29C548u, 0x29C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C550u;
label_29c550:
    // 0x29c550: 0x9622050a  lhu         $v0, 0x50A($s1)
    ctx->pc = 0x29c550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1290)));
label_29c554:
    // 0x29c554: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29c554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_29c558:
    // 0x29c558: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_29c55c:
    if (ctx->pc == 0x29C55Cu) {
        ctx->pc = 0x29C560u;
        goto label_29c560;
    }
    ctx->pc = 0x29C558u;
    {
        const bool branch_taken_0x29c558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c558) {
            ctx->pc = 0x29C5C0u;
            goto label_29c5c0;
        }
    }
    ctx->pc = 0x29C560u;
label_29c560:
    // 0x29c560: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x29c560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_29c564:
    // 0x29c564: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29c564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_29c568:
    // 0x29c568: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29c568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29c56c:
    // 0x29c56c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29c56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_29c570:
    // 0x29c570: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c574:
    // 0x29c574: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_29c578:
    if (ctx->pc == 0x29C578u) {
        ctx->pc = 0x29C57Cu;
        goto label_29c57c;
    }
    ctx->pc = 0x29C574u;
    {
        const bool branch_taken_0x29c574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c574) {
            ctx->pc = 0x29C5C0u;
            goto label_29c5c0;
        }
    }
    ctx->pc = 0x29C57Cu;
label_29c57c:
    // 0x29c57c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x29c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_29c580:
    // 0x29c580: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29c580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_29c584:
    // 0x29c584: 0x92250504  lbu         $a1, 0x504($s1)
    ctx->pc = 0x29c584u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1284)));
label_29c588:
    // 0x29c588: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x29c588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_29c58c:
    // 0x29c58c: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x29c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_29c590:
    // 0x29c590: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x29c590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_29c594:
    // 0x29c594: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29c594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_29c598:
    // 0x29c598: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x29c598u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_29c59c:
    // 0x29c59c: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x29c59cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_29c5a0:
    // 0x29c5a0: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x29c5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_29c5a4:
    // 0x29c5a4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x29c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_29c5a8:
    // 0x29c5a8: 0x92230504  lbu         $v1, 0x504($s1)
    ctx->pc = 0x29c5a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1284)));
label_29c5ac:
    // 0x29c5ac: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x29c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_29c5b0:
    // 0x29c5b0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x29c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_29c5b4:
    // 0x29c5b4: 0xc0968b8  jal         func_25A2E0
label_29c5b8:
    if (ctx->pc == 0x29C5B8u) {
        ctx->pc = 0x29C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5B4u;
        // 0x29c5b8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C5BCu;
        goto label_29c5bc;
    }
    ctx->pc = 0x29C5B4u;
    SET_GPR_U32(ctx, 31, 0x29C5BCu);
    ctx->pc = 0x29C5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C5B4u;
    // 0x29c5b8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2E0u, 0x29C5B4u, 0x29C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C5BCu;
label_29c5bc:
    // 0x29c5bc: 0x0  nop
    ctx->pc = 0x29c5bcu;
    // NOP
label_29c5c0:
    // 0x29c5c0: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x29c5c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_29c5c4:
    // 0x29c5c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x29c5c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_29c5c8:
    // 0x29c5c8: 0x320f809  jalr        $t9
label_29c5cc:
    if (ctx->pc == 0x29C5CCu) {
        ctx->pc = 0x29C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5C8u;
        // 0x29c5cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C5D0u;
        goto label_29c5d0;
    }
    ctx->pc = 0x29C5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29C5D0u);
        ctx->pc = 0x29C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5C8u;
        // 0x29c5cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C5C8u, 0x29C5D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C5D0u;
label_29c5d0:
    // 0x29c5d0: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x29c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_29c5d4:
    // 0x29c5d4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x29c5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_29c5d8:
    // 0x29c5d8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x29c5d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29c5dc:
    // 0x29c5dc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_29c5e0:
    // 0x29c5e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_29c5e4:
    // 0x29c5e4: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_29c5e8:
    if (ctx->pc == 0x29C5E8u) {
        ctx->pc = 0x29C5ECu;
        goto label_29c5ec;
    }
    ctx->pc = 0x29C5E4u;
    {
        const bool branch_taken_0x29c5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c5e4) {
            ctx->pc = 0x29C660u;
            goto label_29c660;
        }
    }
    ctx->pc = 0x29C5ECu;
label_29c5ec:
    // 0x29c5ec: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x29c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_29c5f0:
    // 0x29c5f0: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_29c5f4:
    if (ctx->pc == 0x29C5F4u) {
        ctx->pc = 0x29C5F8u;
        goto label_29c5f8;
    }
    ctx->pc = 0x29C5F0u;
    {
        const bool branch_taken_0x29c5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c5f0) {
            ctx->pc = 0x29C660u;
            goto label_29c660;
        }
    }
    ctx->pc = 0x29C5F8u;
label_29c5f8:
    // 0x29c5f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29c5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29c5fc:
    // 0x29c5fc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x29c5fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_29c600:
    // 0x29c600: 0x320f809  jalr        $t9
label_29c604:
    if (ctx->pc == 0x29C604u) {
        ctx->pc = 0x29C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C600u;
        // 0x29c604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C608u;
        goto label_29c608;
    }
    ctx->pc = 0x29C600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29C608u);
        ctx->pc = 0x29C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C600u;
        // 0x29c604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C600u, 0x29C608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C608u;
label_29c608:
    // 0x29c608: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x29c608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_29c60c:
    // 0x29c60c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x29c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_29c610:
    // 0x29c610: 0x30420600  andi        $v0, $v0, 0x600
    ctx->pc = 0x29c610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1536);
label_29c614:
    // 0x29c614: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_29c618:
    if (ctx->pc == 0x29C618u) {
        ctx->pc = 0x29C61Cu;
        goto label_29c61c;
    }
    ctx->pc = 0x29C614u;
    {
        const bool branch_taken_0x29c614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c614) {
            ctx->pc = 0x29C648u;
            goto label_29c648;
        }
    }
    ctx->pc = 0x29C61Cu;
label_29c61c:
    // 0x29c61c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29c61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29c620:
    // 0x29c620: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x29c620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_29c624:
    // 0x29c624: 0x320f809  jalr        $t9
label_29c628:
    if (ctx->pc == 0x29C628u) {
        ctx->pc = 0x29C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C624u;
        // 0x29c628: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C62Cu;
        goto label_29c62c;
    }
    ctx->pc = 0x29C624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29C62Cu);
        ctx->pc = 0x29C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C624u;
        // 0x29c628: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C624u, 0x29C62Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C62Cu;
label_29c62c:
    // 0x29c62c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x29c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_29c630:
    // 0x29c630: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x29c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_29c634:
    // 0x29c634: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29c638:
    if (ctx->pc == 0x29C638u) {
        ctx->pc = 0x29C63Cu;
        goto label_29c63c;
    }
    ctx->pc = 0x29C634u;
    {
        const bool branch_taken_0x29c634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c634) {
            ctx->pc = 0x29C648u;
            goto label_29c648;
        }
    }
    ctx->pc = 0x29C63Cu;
label_29c63c:
    // 0x29c63c: 0x92220508  lbu         $v0, 0x508($s1)
    ctx->pc = 0x29c63cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1288)));
label_29c640:
    // 0x29c640: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29c640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_29c644:
    // 0x29c644: 0xa2220508  sb          $v0, 0x508($s1)
    ctx->pc = 0x29c644u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1288), (uint8_t)GPR_U32(ctx, 2));
label_29c648:
    // 0x29c648: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x29c648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_29c64c:
    // 0x29c64c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29c64cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29c650:
    // 0x29c650: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x29c650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_29c654:
    // 0x29c654: 0x320f809  jalr        $t9
label_29c658:
    if (ctx->pc == 0x29C658u) {
        ctx->pc = 0x29C65Cu;
        goto label_29c65c;
    }
    ctx->pc = 0x29C654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29C65Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C654u, 0x29C65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C65Cu;
label_29c65c:
    // 0x29c65c: 0x0  nop
    ctx->pc = 0x29c65cu;
    // NOP
label_29c660:
    // 0x29c660: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29c660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29c664:
    // 0x29c664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29c668:
    // 0x29c668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c66c:
    // 0x29c66c: 0x3e00008  jr          $ra
label_29c670:
    if (ctx->pc == 0x29C670u) {
        ctx->pc = 0x29C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C66Cu;
        // 0x29c670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C674u;
        goto label_fallthrough_0x29c66c;
    }
    ctx->pc = 0x29C66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C66Cu;
        // 0x29c670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29c66c:
    ctx->pc = 0x29C674u;
}
