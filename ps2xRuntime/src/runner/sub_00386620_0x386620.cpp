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

// Function: sub_00386620
// Address: 0x386620 - 0x38677c
void sub_00386620_0x386620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386620_0x386620");
#endif

    switch (ctx->pc) {
        case 0x386620u: goto label_386620;
        case 0x386624u: goto label_386624;
        case 0x386628u: goto label_386628;
        case 0x38662cu: goto label_38662c;
        case 0x386630u: goto label_386630;
        case 0x386634u: goto label_386634;
        case 0x386638u: goto label_386638;
        case 0x38663cu: goto label_38663c;
        case 0x386640u: goto label_386640;
        case 0x386644u: goto label_386644;
        case 0x386648u: goto label_386648;
        case 0x38664cu: goto label_38664c;
        case 0x386650u: goto label_386650;
        case 0x386654u: goto label_386654;
        case 0x386658u: goto label_386658;
        case 0x38665cu: goto label_38665c;
        case 0x386660u: goto label_386660;
        case 0x386664u: goto label_386664;
        case 0x386668u: goto label_386668;
        case 0x38666cu: goto label_38666c;
        case 0x386670u: goto label_386670;
        case 0x386674u: goto label_386674;
        case 0x386678u: goto label_386678;
        case 0x38667cu: goto label_38667c;
        case 0x386680u: goto label_386680;
        case 0x386684u: goto label_386684;
        case 0x386688u: goto label_386688;
        case 0x38668cu: goto label_38668c;
        case 0x386690u: goto label_386690;
        case 0x386694u: goto label_386694;
        case 0x386698u: goto label_386698;
        case 0x38669cu: goto label_38669c;
        case 0x3866a0u: goto label_3866a0;
        case 0x3866a4u: goto label_3866a4;
        case 0x3866a8u: goto label_3866a8;
        case 0x3866acu: goto label_3866ac;
        case 0x3866b0u: goto label_3866b0;
        case 0x3866b4u: goto label_3866b4;
        case 0x3866b8u: goto label_3866b8;
        case 0x3866bcu: goto label_3866bc;
        case 0x3866c0u: goto label_3866c0;
        case 0x3866c4u: goto label_3866c4;
        case 0x3866c8u: goto label_3866c8;
        case 0x3866ccu: goto label_3866cc;
        case 0x3866d0u: goto label_3866d0;
        case 0x3866d4u: goto label_3866d4;
        case 0x3866d8u: goto label_3866d8;
        case 0x3866dcu: goto label_3866dc;
        case 0x3866e0u: goto label_3866e0;
        case 0x3866e4u: goto label_3866e4;
        case 0x3866e8u: goto label_3866e8;
        case 0x3866ecu: goto label_3866ec;
        case 0x3866f0u: goto label_3866f0;
        case 0x3866f4u: goto label_3866f4;
        case 0x3866f8u: goto label_3866f8;
        case 0x3866fcu: goto label_3866fc;
        case 0x386700u: goto label_386700;
        case 0x386704u: goto label_386704;
        case 0x386708u: goto label_386708;
        case 0x38670cu: goto label_38670c;
        case 0x386710u: goto label_386710;
        case 0x386714u: goto label_386714;
        case 0x386718u: goto label_386718;
        case 0x38671cu: goto label_38671c;
        case 0x386720u: goto label_386720;
        case 0x386724u: goto label_386724;
        case 0x386728u: goto label_386728;
        case 0x38672cu: goto label_38672c;
        case 0x386730u: goto label_386730;
        case 0x386734u: goto label_386734;
        case 0x386738u: goto label_386738;
        case 0x38673cu: goto label_38673c;
        case 0x386740u: goto label_386740;
        case 0x386744u: goto label_386744;
        case 0x386748u: goto label_386748;
        case 0x38674cu: goto label_38674c;
        case 0x386750u: goto label_386750;
        case 0x386754u: goto label_386754;
        case 0x386758u: goto label_386758;
        case 0x38675cu: goto label_38675c;
        case 0x386760u: goto label_386760;
        case 0x386764u: goto label_386764;
        case 0x386768u: goto label_386768;
        case 0x38676cu: goto label_38676c;
        case 0x386770u: goto label_386770;
        case 0x386774u: goto label_386774;
        case 0x386778u: goto label_386778;
        default: break;
    }

    ctx->pc = 0x386620u;

label_386620:
    // 0x386620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x386620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_386624:
    // 0x386624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x386624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_386628:
    // 0x386628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x386628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38662c:
    // 0x38662c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38662cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_386630:
    // 0x386630: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x386630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_386634:
    // 0x386634: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_386638:
    if (ctx->pc == 0x386638u) {
        ctx->pc = 0x386638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386634u;
        // 0x386638: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38663Cu;
        goto label_38663c;
    }
    ctx->pc = 0x386634u;
    {
        const bool branch_taken_0x386634 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386634u;
        // 0x386638: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386634) {
            ctx->pc = 0x3866E8u;
            goto label_3866e8;
        }
    }
    ctx->pc = 0x38663Cu;
label_38663c:
    // 0x38663c: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x38663cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_386640:
    // 0x386640: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x386640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_386644:
    // 0x386644: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_386648:
    if (ctx->pc == 0x386648u) {
        ctx->pc = 0x38664Cu;
        goto label_38664c;
    }
    ctx->pc = 0x386644u;
    {
        const bool branch_taken_0x386644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x386644) {
            ctx->pc = 0x3866E8u;
            goto label_3866e8;
        }
    }
    ctx->pc = 0x38664Cu;
label_38664c:
    // 0x38664c: 0x92220050  lbu         $v0, 0x50($s1)
    ctx->pc = 0x38664cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
label_386650:
    // 0x386650: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x386650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_386654:
    // 0x386654: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_386658:
    if (ctx->pc == 0x386658u) {
        ctx->pc = 0x38665Cu;
        goto label_38665c;
    }
    ctx->pc = 0x386654u;
    {
        const bool branch_taken_0x386654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x386654) {
            ctx->pc = 0x3866E8u;
            goto label_3866e8;
        }
    }
    ctx->pc = 0x38665Cu;
label_38665c:
    // 0x38665c: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x38665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_386660:
    // 0x386660: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x386660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_386664:
    // 0x386664: 0x92230114  lbu         $v1, 0x114($s1)
    ctx->pc = 0x386664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 276)));
label_386668:
    // 0x386668: 0x262600f0  addiu       $a2, $s1, 0xF0
    ctx->pc = 0x386668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_38666c:
    // 0x38666c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x38666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_386670:
    // 0x386670: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x386670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_386674:
    // 0x386674: 0xc07679c  jal         func_1D9E70
label_386678:
    if (ctx->pc == 0x386678u) {
        ctx->pc = 0x386678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386674u;
        // 0x386678: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38667Cu;
        goto label_38667c;
    }
    ctx->pc = 0x386674u;
    SET_GPR_U32(ctx, 31, 0x38667Cu);
    ctx->pc = 0x386678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386674u;
    // 0x386678: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x386674u, 0x38667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38667Cu;
label_38667c:
    // 0x38667c: 0xc097758  jal         func_25DD60
label_386680:
    if (ctx->pc == 0x386680u) {
        ctx->pc = 0x386680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38667Cu;
        // 0x386680: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386684u;
        goto label_386684;
    }
    ctx->pc = 0x38667Cu;
    SET_GPR_U32(ctx, 31, 0x386684u);
    ctx->pc = 0x386680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38667Cu;
    // 0x386680: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DD60u, 0x38667Cu, 0x386684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386684u;
label_386684:
    // 0x386684: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x386684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_386688:
    // 0x386688: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_38668c:
    if (ctx->pc == 0x38668Cu) {
        ctx->pc = 0x38668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386688u;
        // 0x38668c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386690u;
        goto label_386690;
    }
    ctx->pc = 0x386688u;
    {
        const bool branch_taken_0x386688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x38668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386688u;
        // 0x38668c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386688) {
            ctx->pc = 0x3866B8u;
            goto label_3866b8;
        }
    }
    ctx->pc = 0x386690u;
label_386690:
    // 0x386690: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
label_386694:
    if (ctx->pc == 0x386694u) {
        ctx->pc = 0x386698u;
        goto label_386698;
    }
    ctx->pc = 0x386690u;
    {
        const bool branch_taken_0x386690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x386690) {
            ctx->pc = 0x3866F0u;
            goto label_3866f0;
        }
    }
    ctx->pc = 0x386698u;
label_386698:
    // 0x386698: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38669c:
    if (ctx->pc == 0x38669Cu) {
        ctx->pc = 0x3866A0u;
        goto label_3866a0;
    }
    ctx->pc = 0x386698u;
    {
        const bool branch_taken_0x386698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x386698) {
            ctx->pc = 0x3866A8u;
            goto label_3866a8;
        }
    }
    ctx->pc = 0x3866A0u;
label_3866a0:
    // 0x3866a0: 0x10000013  b           . + 4 + (0x13 << 2)
label_3866a4:
    if (ctx->pc == 0x3866A4u) {
        ctx->pc = 0x3866A8u;
        goto label_3866a8;
    }
    ctx->pc = 0x3866A0u;
    {
        const bool branch_taken_0x3866a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3866a0) {
            ctx->pc = 0x3866F0u;
            goto label_3866f0;
        }
    }
    ctx->pc = 0x3866A8u;
label_3866a8:
    // 0x3866a8: 0xc096c30  jal         func_25B0C0
label_3866ac:
    if (ctx->pc == 0x3866ACu) {
        ctx->pc = 0x3866ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3866A8u;
        // 0x3866ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3866B0u;
        goto label_3866b0;
    }
    ctx->pc = 0x3866A8u;
    SET_GPR_U32(ctx, 31, 0x3866B0u);
    ctx->pc = 0x3866ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3866A8u;
    // 0x3866ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0C0u, 0x3866A8u, 0x3866B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3866B0u;
label_3866b0:
    // 0x3866b0: 0x1000000f  b           . + 4 + (0xF << 2)
label_3866b4:
    if (ctx->pc == 0x3866B4u) {
        ctx->pc = 0x3866B8u;
        goto label_3866b8;
    }
    ctx->pc = 0x3866B0u;
    {
        const bool branch_taken_0x3866b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3866b0) {
            ctx->pc = 0x3866F0u;
            goto label_3866f0;
        }
    }
    ctx->pc = 0x3866B8u;
label_3866b8:
    // 0x3866b8: 0xc096c30  jal         func_25B0C0
label_3866bc:
    if (ctx->pc == 0x3866BCu) {
        ctx->pc = 0x3866BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3866B8u;
        // 0x3866bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3866C0u;
        goto label_3866c0;
    }
    ctx->pc = 0x3866B8u;
    SET_GPR_U32(ctx, 31, 0x3866C0u);
    ctx->pc = 0x3866BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3866B8u;
    // 0x3866bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0C0u, 0x3866B8u, 0x3866C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3866C0u;
label_3866c0:
    // 0x3866c0: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3866c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3866c4:
    // 0x3866c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3866c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3866c8:
    // 0x3866c8: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x3866c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_3866cc:
    // 0x3866cc: 0x320f809  jalr        $t9
label_3866d0:
    if (ctx->pc == 0x3866D0u) {
        ctx->pc = 0x3866D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3866CCu;
        // 0x3866d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3866D4u;
        goto label_3866d4;
    }
    ctx->pc = 0x3866CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3866D4u);
        ctx->pc = 0x3866D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3866CCu;
        // 0x3866d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3866CCu, 0x3866D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3866D4u;
label_3866d4:
    // 0x3866d4: 0xc09da7c  jal         func_2769F0
label_3866d8:
    if (ctx->pc == 0x3866D8u) {
        ctx->pc = 0x3866D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3866D4u;
        // 0x3866d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3866DCu;
        goto label_3866dc;
    }
    ctx->pc = 0x3866D4u;
    SET_GPR_U32(ctx, 31, 0x3866DCu);
    ctx->pc = 0x3866D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3866D4u;
    // 0x3866d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2769F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2769F0u, 0x3866D4u, 0x3866DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3866DCu;
label_3866dc:
    // 0x3866dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3866e0:
    if (ctx->pc == 0x3866E0u) {
        ctx->pc = 0x3866E4u;
        goto label_3866e4;
    }
    ctx->pc = 0x3866DCu;
    {
        const bool branch_taken_0x3866dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3866dc) {
            ctx->pc = 0x3866F0u;
            goto label_3866f0;
        }
    }
    ctx->pc = 0x3866E4u;
label_3866e4:
    // 0x3866e4: 0x0  nop
    ctx->pc = 0x3866e4u;
    // NOP
label_3866e8:
    // 0x3866e8: 0xc096c30  jal         func_25B0C0
label_3866ec:
    if (ctx->pc == 0x3866ECu) {
        ctx->pc = 0x3866ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3866E8u;
        // 0x3866ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3866F0u;
        goto label_3866f0;
    }
    ctx->pc = 0x3866E8u;
    SET_GPR_U32(ctx, 31, 0x3866F0u);
    ctx->pc = 0x3866ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3866E8u;
    // 0x3866ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0C0u, 0x3866E8u, 0x3866F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3866F0u;
label_3866f0:
    // 0x3866f0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3866f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3866f4:
    // 0x3866f4: 0x78225c20  lq          $v0, 0x5C20($at)
    ctx->pc = 0x3866f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_3866f8:
    // 0x3866f8: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x3866f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_3866fc:
    // 0x3866fc: 0x7e2200b0  sq          $v0, 0xB0($s1)
    ctx->pc = 0x3866fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), GPR_VEC(ctx, 2));
label_386700:
    // 0x386700: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x386700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_386704:
    // 0x386704: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x386704u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_386708:
    // 0x386708: 0x7e2200c0  sq          $v0, 0xC0($s1)
    ctx->pc = 0x386708u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), GPR_VEC(ctx, 2));
label_38670c:
    // 0x38670c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x38670cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_386710:
    // 0x386710: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x386710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_386714:
    // 0x386714: 0x7e2200d0  sq          $v0, 0xD0($s1)
    ctx->pc = 0x386714u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), GPR_VEC(ctx, 2));
label_386718:
    // 0x386718: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x386718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_38671c:
    // 0x38671c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x38671cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_386720:
    // 0x386720: 0x7e2200e0  sq          $v0, 0xE0($s1)
    ctx->pc = 0x386720u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), GPR_VEC(ctx, 2));
label_386724:
    // 0x386724: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x386724u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_386728:
    // 0x386728: 0x7e2200e0  sq          $v0, 0xE0($s1)
    ctx->pc = 0x386728u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), GPR_VEC(ctx, 2));
label_38672c:
    // 0x38672c: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x38672cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_386730:
    // 0x386730: 0xc07ba50  jal         func_1EE940
label_386734:
    if (ctx->pc == 0x386734u) {
        ctx->pc = 0x386734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386730u;
        // 0x386734: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386738u;
        goto label_386738;
    }
    ctx->pc = 0x386730u;
    SET_GPR_U32(ctx, 31, 0x386738u);
    ctx->pc = 0x386734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386730u;
    // 0x386734: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE940u, 0x386730u, 0x386738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386738u;
label_386738:
    // 0x386738: 0x92220050  lbu         $v0, 0x50($s1)
    ctx->pc = 0x386738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
label_38673c:
    // 0x38673c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38673cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_386740:
    // 0x386740: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_386744:
    if (ctx->pc == 0x386744u) {
        ctx->pc = 0x386748u;
        goto label_386748;
    }
    ctx->pc = 0x386740u;
    {
        const bool branch_taken_0x386740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x386740) {
            ctx->pc = 0x386750u;
            goto label_386750;
        }
    }
    ctx->pc = 0x386748u;
label_386748:
    // 0x386748: 0xc07bc24  jal         func_1EF090
label_38674c:
    if (ctx->pc == 0x38674Cu) {
        ctx->pc = 0x38674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386748u;
        // 0x38674c: 0x8e240110  lw          $a0, 0x110($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386750u;
        goto label_386750;
    }
    ctx->pc = 0x386748u;
    SET_GPR_U32(ctx, 31, 0x386750u);
    ctx->pc = 0x38674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386748u;
    // 0x38674c: 0x8e240110  lw          $a0, 0x110($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF090u, 0x386748u, 0x386750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386750u;
label_386750:
    // 0x386750: 0xc07bc10  jal         func_1EF040
label_386754:
    if (ctx->pc == 0x386754u) {
        ctx->pc = 0x386754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386750u;
        // 0x386754: 0x8e240110  lw          $a0, 0x110($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386758u;
        goto label_386758;
    }
    ctx->pc = 0x386750u;
    SET_GPR_U32(ctx, 31, 0x386758u);
    ctx->pc = 0x386754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386750u;
    // 0x386754: 0x8e240110  lw          $a0, 0x110($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF040u, 0x386750u, 0x386758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386758u;
label_386758:
    // 0x386758: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38675c:
    if (ctx->pc == 0x38675Cu) {
        ctx->pc = 0x38675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386758u;
        // 0x38675c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386760u;
        goto label_386760;
    }
    ctx->pc = 0x386758u;
    {
        const bool branch_taken_0x386758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386758u;
        // 0x38675c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386758) {
            ctx->pc = 0x386768u;
            goto label_386768;
        }
    }
    ctx->pc = 0x386760u;
label_386760:
    // 0x386760: 0xc096b54  jal         func_25AD50
label_386764:
    if (ctx->pc == 0x386764u) {
        ctx->pc = 0x386768u;
        goto label_386768;
    }
    ctx->pc = 0x386760u;
    SET_GPR_U32(ctx, 31, 0x386768u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x386760u, 0x386768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386768u;
label_386768:
    // 0x386768: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x386768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38676c:
    // 0x38676c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38676cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_386770:
    // 0x386770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x386770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_386774:
    // 0x386774: 0x3e00008  jr          $ra
label_386778:
    if (ctx->pc == 0x386778u) {
        ctx->pc = 0x386778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386774u;
        // 0x386778: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38677Cu;
        goto label_fallthrough_0x386774;
    }
    ctx->pc = 0x386774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386774u;
        // 0x386778: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x386774:
    ctx->pc = 0x38677Cu;
}
