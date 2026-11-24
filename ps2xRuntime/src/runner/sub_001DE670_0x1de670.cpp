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

// Function: sub_001DE670
// Address: 0x1de670 - 0x1de7e8
void sub_001DE670_0x1de670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE670_0x1de670");
#endif

    switch (ctx->pc) {
        case 0x1de670u: goto label_1de670;
        case 0x1de674u: goto label_1de674;
        case 0x1de678u: goto label_1de678;
        case 0x1de67cu: goto label_1de67c;
        case 0x1de680u: goto label_1de680;
        case 0x1de684u: goto label_1de684;
        case 0x1de688u: goto label_1de688;
        case 0x1de68cu: goto label_1de68c;
        case 0x1de690u: goto label_1de690;
        case 0x1de694u: goto label_1de694;
        case 0x1de698u: goto label_1de698;
        case 0x1de69cu: goto label_1de69c;
        case 0x1de6a0u: goto label_1de6a0;
        case 0x1de6a4u: goto label_1de6a4;
        case 0x1de6a8u: goto label_1de6a8;
        case 0x1de6acu: goto label_1de6ac;
        case 0x1de6b0u: goto label_1de6b0;
        case 0x1de6b4u: goto label_1de6b4;
        case 0x1de6b8u: goto label_1de6b8;
        case 0x1de6bcu: goto label_1de6bc;
        case 0x1de6c0u: goto label_1de6c0;
        case 0x1de6c4u: goto label_1de6c4;
        case 0x1de6c8u: goto label_1de6c8;
        case 0x1de6ccu: goto label_1de6cc;
        case 0x1de6d0u: goto label_1de6d0;
        case 0x1de6d4u: goto label_1de6d4;
        case 0x1de6d8u: goto label_1de6d8;
        case 0x1de6dcu: goto label_1de6dc;
        case 0x1de6e0u: goto label_1de6e0;
        case 0x1de6e4u: goto label_1de6e4;
        case 0x1de6e8u: goto label_1de6e8;
        case 0x1de6ecu: goto label_1de6ec;
        case 0x1de6f0u: goto label_1de6f0;
        case 0x1de6f4u: goto label_1de6f4;
        case 0x1de6f8u: goto label_1de6f8;
        case 0x1de6fcu: goto label_1de6fc;
        case 0x1de700u: goto label_1de700;
        case 0x1de704u: goto label_1de704;
        case 0x1de708u: goto label_1de708;
        case 0x1de70cu: goto label_1de70c;
        case 0x1de710u: goto label_1de710;
        case 0x1de714u: goto label_1de714;
        case 0x1de718u: goto label_1de718;
        case 0x1de71cu: goto label_1de71c;
        case 0x1de720u: goto label_1de720;
        case 0x1de724u: goto label_1de724;
        case 0x1de728u: goto label_1de728;
        case 0x1de72cu: goto label_1de72c;
        case 0x1de730u: goto label_1de730;
        case 0x1de734u: goto label_1de734;
        case 0x1de738u: goto label_1de738;
        case 0x1de73cu: goto label_1de73c;
        case 0x1de740u: goto label_1de740;
        case 0x1de744u: goto label_1de744;
        case 0x1de748u: goto label_1de748;
        case 0x1de74cu: goto label_1de74c;
        case 0x1de750u: goto label_1de750;
        case 0x1de754u: goto label_1de754;
        case 0x1de758u: goto label_1de758;
        case 0x1de75cu: goto label_1de75c;
        case 0x1de760u: goto label_1de760;
        case 0x1de764u: goto label_1de764;
        case 0x1de768u: goto label_1de768;
        case 0x1de76cu: goto label_1de76c;
        case 0x1de770u: goto label_1de770;
        case 0x1de774u: goto label_1de774;
        case 0x1de778u: goto label_1de778;
        case 0x1de77cu: goto label_1de77c;
        case 0x1de780u: goto label_1de780;
        case 0x1de784u: goto label_1de784;
        case 0x1de788u: goto label_1de788;
        case 0x1de78cu: goto label_1de78c;
        case 0x1de790u: goto label_1de790;
        case 0x1de794u: goto label_1de794;
        case 0x1de798u: goto label_1de798;
        case 0x1de79cu: goto label_1de79c;
        case 0x1de7a0u: goto label_1de7a0;
        case 0x1de7a4u: goto label_1de7a4;
        case 0x1de7a8u: goto label_1de7a8;
        case 0x1de7acu: goto label_1de7ac;
        case 0x1de7b0u: goto label_1de7b0;
        case 0x1de7b4u: goto label_1de7b4;
        case 0x1de7b8u: goto label_1de7b8;
        case 0x1de7bcu: goto label_1de7bc;
        case 0x1de7c0u: goto label_1de7c0;
        case 0x1de7c4u: goto label_1de7c4;
        case 0x1de7c8u: goto label_1de7c8;
        case 0x1de7ccu: goto label_1de7cc;
        case 0x1de7d0u: goto label_1de7d0;
        case 0x1de7d4u: goto label_1de7d4;
        case 0x1de7d8u: goto label_1de7d8;
        case 0x1de7dcu: goto label_1de7dc;
        case 0x1de7e0u: goto label_1de7e0;
        case 0x1de7e4u: goto label_1de7e4;
        default: break;
    }

    ctx->pc = 0x1de670u;

label_1de670:
    // 0x1de670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1de674:
    // 0x1de674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1de678:
    // 0x1de678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1de67c:
    // 0x1de67c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1de67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1de680:
    // 0x1de680: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1de684:
    if (ctx->pc == 0x1DE684u) {
        ctx->pc = 0x1DE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE680u;
        // 0x1de684: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE688u;
        goto label_1de688;
    }
    ctx->pc = 0x1DE680u;
    {
        const bool branch_taken_0x1de680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE680u;
        // 0x1de684: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de680) {
            ctx->pc = 0x1DE690u;
            goto label_1de690;
        }
    }
    ctx->pc = 0x1DE688u;
label_1de688:
    // 0x1de688: 0x10000053  b           . + 4 + (0x53 << 2)
label_1de68c:
    if (ctx->pc == 0x1DE68Cu) {
        ctx->pc = 0x1DE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE688u;
        // 0x1de68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE690u;
        goto label_1de690;
    }
    ctx->pc = 0x1DE688u;
    {
        const bool branch_taken_0x1de688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE688u;
        // 0x1de68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de688) {
            ctx->pc = 0x1DE7D8u;
            goto label_1de7d8;
        }
    }
    ctx->pc = 0x1DE690u;
label_1de690:
    // 0x1de690: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1de690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1de694:
    // 0x1de694: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1de694u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1de698:
    // 0x1de698: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1de698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1de69c:
    // 0x1de69c: 0x320f809  jalr        $t9
label_1de6a0:
    if (ctx->pc == 0x1DE6A0u) {
        ctx->pc = 0x1DE6A4u;
        goto label_1de6a4;
    }
    ctx->pc = 0x1DE69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE6A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE69Cu, 0x1DE6A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE6A4u;
label_1de6a4:
    // 0x1de6a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1de6a8:
    if (ctx->pc == 0x1DE6A8u) {
        ctx->pc = 0x1DE6ACu;
        goto label_1de6ac;
    }
    ctx->pc = 0x1DE6A4u;
    {
        const bool branch_taken_0x1de6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de6a4) {
            ctx->pc = 0x1DE6C8u;
            goto label_1de6c8;
        }
    }
    ctx->pc = 0x1DE6ACu;
label_1de6ac:
    // 0x1de6ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1de6acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1de6b0:
    // 0x1de6b0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1de6b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1de6b4:
    // 0x1de6b4: 0x320f809  jalr        $t9
label_1de6b8:
    if (ctx->pc == 0x1DE6B8u) {
        ctx->pc = 0x1DE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6B4u;
        // 0x1de6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE6BCu;
        goto label_1de6bc;
    }
    ctx->pc = 0x1DE6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE6BCu);
        ctx->pc = 0x1DE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6B4u;
        // 0x1de6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE6B4u, 0x1DE6BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE6BCu;
label_1de6bc:
    // 0x1de6bc: 0x10000046  b           . + 4 + (0x46 << 2)
label_1de6c0:
    if (ctx->pc == 0x1DE6C0u) {
        ctx->pc = 0x1DE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6BCu;
        // 0x1de6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE6C4u;
        goto label_1de6c4;
    }
    ctx->pc = 0x1DE6BCu;
    {
        const bool branch_taken_0x1de6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6BCu;
        // 0x1de6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6bc) {
            ctx->pc = 0x1DE7D8u;
            goto label_1de7d8;
        }
    }
    ctx->pc = 0x1DE6C4u;
label_1de6c4:
    // 0x1de6c4: 0x0  nop
    ctx->pc = 0x1de6c4u;
    // NOP
label_1de6c8:
    // 0x1de6c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1de6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1de6cc:
    // 0x1de6cc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1de6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1de6d0:
    // 0x1de6d0: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x1de6d0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1de6d4:
    // 0x1de6d4: 0x84670006  lh          $a3, 0x6($v1)
    ctx->pc = 0x1de6d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_1de6d8:
    // 0x1de6d8: 0x84660004  lh          $a2, 0x4($v1)
    ctx->pc = 0x1de6d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1de6dc:
    // 0x1de6dc: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1de6dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1de6e0:
    // 0x1de6e0: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1de6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1de6e4:
    // 0x1de6e4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1de6e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1de6e8:
    // 0x1de6e8: 0x402826  xor         $a1, $v0, $zero
    ctx->pc = 0x1de6e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1de6ec:
    // 0x1de6ec: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1de6ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1de6f0:
    // 0x1de6f0: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1de6f0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1de6f4:
    // 0x1de6f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1de6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1de6f8:
    // 0x1de6f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1de6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1de6fc:
    // 0x1de6fc: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x1de6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1de700:
    // 0x1de700: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1de700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1de704:
    // 0x1de704: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x1de704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1de708:
    // 0x1de708: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1de708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1de70c:
    // 0x1de70c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1de70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1de710:
    // 0x1de710: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1de710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1de714:
    // 0x1de714: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1de718:
    if (ctx->pc == 0x1DE718u) {
        ctx->pc = 0x1DE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE714u;
        // 0x1de718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE71Cu;
        goto label_1de71c;
    }
    ctx->pc = 0x1DE714u;
    {
        const bool branch_taken_0x1de714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE714u;
        // 0x1de718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de714) {
            ctx->pc = 0x1DE728u;
            goto label_1de728;
        }
    }
    ctx->pc = 0x1DE71Cu;
label_1de71c:
    // 0x1de71c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1de720:
    if (ctx->pc == 0x1DE720u) {
        ctx->pc = 0x1DE724u;
        goto label_1de724;
    }
    ctx->pc = 0x1DE71Cu;
    {
        const bool branch_taken_0x1de71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de71c) {
            ctx->pc = 0x1DE7D8u;
            goto label_1de7d8;
        }
    }
    ctx->pc = 0x1DE724u;
label_1de724:
    // 0x1de724: 0x0  nop
    ctx->pc = 0x1de724u;
    // NOP
label_1de728:
    // 0x1de728: 0xc81026  xor         $v0, $a2, $t0
    ctx->pc = 0x1de728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 8));
label_1de72c:
    // 0x1de72c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1de72cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1de730:
    // 0x1de730: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1de730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1de734:
    // 0x1de734: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1de738:
    if (ctx->pc == 0x1DE738u) {
        ctx->pc = 0x1DE73Cu;
        goto label_1de73c;
    }
    ctx->pc = 0x1DE734u;
    {
        const bool branch_taken_0x1de734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de734) {
            ctx->pc = 0x1DE748u;
            goto label_1de748;
        }
    }
    ctx->pc = 0x1DE73Cu;
label_1de73c:
    // 0x1de73c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1de73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1de740:
    // 0x1de740: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1de740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1de744:
    // 0x1de744: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1de744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1de748:
    // 0x1de748: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1de748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1de74c:
    // 0x1de74c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1de74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1de750:
    // 0x1de750: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1de750u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1de754:
    // 0x1de754: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x1de754u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1de758:
    // 0x1de758: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x1de758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_1de75c:
    // 0x1de75c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1de75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1de760:
    // 0x1de760: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1de760u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1de764:
    // 0x1de764: 0x0  nop
    ctx->pc = 0x1de764u;
    // NOP
label_1de768:
    // 0x1de768: 0x0  nop
    ctx->pc = 0x1de768u;
    // NOP
label_1de76c:
    // 0x1de76c: 0x1010  mfhi        $v0
    ctx->pc = 0x1de76cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1de770:
    // 0x1de770: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1de774:
    if (ctx->pc == 0x1DE774u) {
        ctx->pc = 0x1DE778u;
        goto label_1de778;
    }
    ctx->pc = 0x1DE770u;
    {
        const bool branch_taken_0x1de770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de770) {
            ctx->pc = 0x1DE7D0u;
            goto label_1de7d0;
        }
    }
    ctx->pc = 0x1DE778u;
label_1de778:
    // 0x1de778: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x1de778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1de77c:
    // 0x1de77c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1de77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1de780:
    // 0x1de780: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x1de780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1de784:
    // 0x1de784: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1de784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1de788:
    // 0x1de788: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1de788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1de78c:
    // 0x1de78c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1de78cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1de790:
    // 0x1de790: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x1de790u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1de794:
    // 0x1de794: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1de794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1de798:
    // 0x1de798: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1de798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1de79c:
    // 0x1de79c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1de79cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1de7a0:
    // 0x1de7a0: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x1de7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1de7a4:
    // 0x1de7a4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1de7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1de7a8:
    // 0x1de7a8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1de7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1de7ac:
    // 0x1de7ac: 0x42302  srl         $a0, $a0, 12
    ctx->pc = 0x1de7acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
label_1de7b0:
    // 0x1de7b0: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1de7b0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1de7b4:
    // 0x1de7b4: 0x0  nop
    ctx->pc = 0x1de7b4u;
    // NOP
label_1de7b8:
    // 0x1de7b8: 0x0  nop
    ctx->pc = 0x1de7b8u;
    // NOP
label_1de7bc:
    // 0x1de7bc: 0x2010  mfhi        $a0
    ctx->pc = 0x1de7bcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1de7c0:
    // 0x1de7c0: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1de7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1de7c4:
    // 0x1de7c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1de7c8:
    // 0x1de7c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1de7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1de7cc:
    // 0x1de7cc: 0x0  nop
    ctx->pc = 0x1de7ccu;
    // NOP
label_1de7d0:
    // 0x1de7d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de7d4:
    // 0x1de7d4: 0x0  nop
    ctx->pc = 0x1de7d4u;
    // NOP
label_1de7d8:
    // 0x1de7d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1de7dc:
    // 0x1de7dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de7dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1de7e0:
    // 0x1de7e0: 0x3e00008  jr          $ra
label_1de7e4:
    if (ctx->pc == 0x1DE7E4u) {
        ctx->pc = 0x1DE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7E0u;
        // 0x1de7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7E8u;
        goto label_fallthrough_0x1de7e0;
    }
    ctx->pc = 0x1DE7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7E0u;
        // 0x1de7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1de7e0:
    ctx->pc = 0x1DE7E8u;
}
