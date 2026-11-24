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

// Function: sub_001E2650
// Address: 0x1e2650 - 0x1e27b4
void sub_001E2650_0x1e2650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2650_0x1e2650");
#endif

    switch (ctx->pc) {
        case 0x1e2650u: goto label_1e2650;
        case 0x1e2654u: goto label_1e2654;
        case 0x1e2658u: goto label_1e2658;
        case 0x1e265cu: goto label_1e265c;
        case 0x1e2660u: goto label_1e2660;
        case 0x1e2664u: goto label_1e2664;
        case 0x1e2668u: goto label_1e2668;
        case 0x1e266cu: goto label_1e266c;
        case 0x1e2670u: goto label_1e2670;
        case 0x1e2674u: goto label_1e2674;
        case 0x1e2678u: goto label_1e2678;
        case 0x1e267cu: goto label_1e267c;
        case 0x1e2680u: goto label_1e2680;
        case 0x1e2684u: goto label_1e2684;
        case 0x1e2688u: goto label_1e2688;
        case 0x1e268cu: goto label_1e268c;
        case 0x1e2690u: goto label_1e2690;
        case 0x1e2694u: goto label_1e2694;
        case 0x1e2698u: goto label_1e2698;
        case 0x1e269cu: goto label_1e269c;
        case 0x1e26a0u: goto label_1e26a0;
        case 0x1e26a4u: goto label_1e26a4;
        case 0x1e26a8u: goto label_1e26a8;
        case 0x1e26acu: goto label_1e26ac;
        case 0x1e26b0u: goto label_1e26b0;
        case 0x1e26b4u: goto label_1e26b4;
        case 0x1e26b8u: goto label_1e26b8;
        case 0x1e26bcu: goto label_1e26bc;
        case 0x1e26c0u: goto label_1e26c0;
        case 0x1e26c4u: goto label_1e26c4;
        case 0x1e26c8u: goto label_1e26c8;
        case 0x1e26ccu: goto label_1e26cc;
        case 0x1e26d0u: goto label_1e26d0;
        case 0x1e26d4u: goto label_1e26d4;
        case 0x1e26d8u: goto label_1e26d8;
        case 0x1e26dcu: goto label_1e26dc;
        case 0x1e26e0u: goto label_1e26e0;
        case 0x1e26e4u: goto label_1e26e4;
        case 0x1e26e8u: goto label_1e26e8;
        case 0x1e26ecu: goto label_1e26ec;
        case 0x1e26f0u: goto label_1e26f0;
        case 0x1e26f4u: goto label_1e26f4;
        case 0x1e26f8u: goto label_1e26f8;
        case 0x1e26fcu: goto label_1e26fc;
        case 0x1e2700u: goto label_1e2700;
        case 0x1e2704u: goto label_1e2704;
        case 0x1e2708u: goto label_1e2708;
        case 0x1e270cu: goto label_1e270c;
        case 0x1e2710u: goto label_1e2710;
        case 0x1e2714u: goto label_1e2714;
        case 0x1e2718u: goto label_1e2718;
        case 0x1e271cu: goto label_1e271c;
        case 0x1e2720u: goto label_1e2720;
        case 0x1e2724u: goto label_1e2724;
        case 0x1e2728u: goto label_1e2728;
        case 0x1e272cu: goto label_1e272c;
        case 0x1e2730u: goto label_1e2730;
        case 0x1e2734u: goto label_1e2734;
        case 0x1e2738u: goto label_1e2738;
        case 0x1e273cu: goto label_1e273c;
        case 0x1e2740u: goto label_1e2740;
        case 0x1e2744u: goto label_1e2744;
        case 0x1e2748u: goto label_1e2748;
        case 0x1e274cu: goto label_1e274c;
        case 0x1e2750u: goto label_1e2750;
        case 0x1e2754u: goto label_1e2754;
        case 0x1e2758u: goto label_1e2758;
        case 0x1e275cu: goto label_1e275c;
        case 0x1e2760u: goto label_1e2760;
        case 0x1e2764u: goto label_1e2764;
        case 0x1e2768u: goto label_1e2768;
        case 0x1e276cu: goto label_1e276c;
        case 0x1e2770u: goto label_1e2770;
        case 0x1e2774u: goto label_1e2774;
        case 0x1e2778u: goto label_1e2778;
        case 0x1e277cu: goto label_1e277c;
        case 0x1e2780u: goto label_1e2780;
        case 0x1e2784u: goto label_1e2784;
        case 0x1e2788u: goto label_1e2788;
        case 0x1e278cu: goto label_1e278c;
        case 0x1e2790u: goto label_1e2790;
        case 0x1e2794u: goto label_1e2794;
        case 0x1e2798u: goto label_1e2798;
        case 0x1e279cu: goto label_1e279c;
        case 0x1e27a0u: goto label_1e27a0;
        case 0x1e27a4u: goto label_1e27a4;
        case 0x1e27a8u: goto label_1e27a8;
        case 0x1e27acu: goto label_1e27ac;
        case 0x1e27b0u: goto label_1e27b0;
        default: break;
    }

    ctx->pc = 0x1e2650u;

label_1e2650:
    // 0x1e2650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e2654:
    // 0x1e2654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e2658:
    // 0x1e2658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e265c:
    // 0x1e265c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e265cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e2660:
    // 0x1e2660: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e2660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e2664:
    // 0x1e2664: 0xc078684  jal         func_1E1A10
label_1e2668:
    if (ctx->pc == 0x1E2668u) {
        ctx->pc = 0x1E2668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2664u;
        // 0x1e2668: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E266Cu;
        goto label_1e266c;
    }
    ctx->pc = 0x1E2664u;
    SET_GPR_U32(ctx, 31, 0x1E266Cu);
    ctx->pc = 0x1E2668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2664u;
    // 0x1e2668: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E2664u, 0x1E266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E266Cu;
label_1e266c:
    // 0x1e266c: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x1e266cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
label_1e2670:
    // 0x1e2670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2674:
    // 0x1e2674: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1e2674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2678:
    // 0x1e2678: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1e2678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1e267c:
    // 0x1e267c: 0xa200003c  sb          $zero, 0x3C($s0)
    ctx->pc = 0x1e267cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 0));
label_1e2680:
    // 0x1e2680: 0xa2020050  sb          $v0, 0x50($s0)
    ctx->pc = 0x1e2680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 2));
label_1e2684:
    // 0x1e2684: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e2684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2688:
    // 0x1e2688: 0x78420040  lq          $v0, 0x40($v0)
    ctx->pc = 0x1e2688u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_1e268c:
    // 0x1e268c: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x1e268cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
label_1e2690:
    // 0x1e2690: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e2690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2694:
    // 0x1e2694: 0x78420040  lq          $v0, 0x40($v0)
    ctx->pc = 0x1e2694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_1e2698:
    // 0x1e2698: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1e2698u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_1e269c:
    // 0x1e269c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1e269cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1e26a0:
    // 0x1e26a0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1e26a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_1e26a4:
    // 0x1e26a4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e26a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e26a8:
    // 0x1e26a8: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1e26a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1e26ac:
    // 0x1e26ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e26acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e26b0:
    // 0x1e26b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e26b4:
    // 0x1e26b4: 0xc0741a4  jal         func_1D0690
label_1e26b8:
    if (ctx->pc == 0x1E26B8u) {
        ctx->pc = 0x1E26B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26B4u;
        // 0x1e26b8: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E26BCu;
        goto label_1e26bc;
    }
    ctx->pc = 0x1E26B4u;
    SET_GPR_U32(ctx, 31, 0x1E26BCu);
    ctx->pc = 0x1E26B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E26B4u;
    // 0x1e26b8: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x1E26B4u, 0x1E26BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E26BCu;
label_1e26bc:
    // 0x1e26bc: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1e26bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1e26c0:
    // 0x1e26c0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1e26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e26c4:
    // 0x1e26c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1e26c8:
    if (ctx->pc == 0x1E26C8u) {
        ctx->pc = 0x1E26CCu;
        goto label_1e26cc;
    }
    ctx->pc = 0x1E26C4u;
    {
        const bool branch_taken_0x1e26c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e26c4) {
            ctx->pc = 0x1E26E8u;
            goto label_1e26e8;
        }
    }
    ctx->pc = 0x1E26CCu;
label_1e26cc:
    // 0x1e26cc: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e26ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e26d0:
    // 0x1e26d0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e26d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e26d4:
    // 0x1e26d4: 0x320f809  jalr        $t9
label_1e26d8:
    if (ctx->pc == 0x1E26D8u) {
        ctx->pc = 0x1E26D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26D4u;
        // 0x1e26d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E26DCu;
        goto label_1e26dc;
    }
    ctx->pc = 0x1E26D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E26DCu);
        ctx->pc = 0x1E26D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26D4u;
        // 0x1e26d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E26D4u, 0x1E26DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E26DCu;
label_1e26dc:
    // 0x1e26dc: 0x10000030  b           . + 4 + (0x30 << 2)
label_1e26e0:
    if (ctx->pc == 0x1E26E0u) {
        ctx->pc = 0x1E26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26DCu;
        // 0x1e26e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E26E4u;
        goto label_1e26e4;
    }
    ctx->pc = 0x1E26DCu;
    {
        const bool branch_taken_0x1e26dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26DCu;
        // 0x1e26e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e26dc) {
            ctx->pc = 0x1E27A0u;
            goto label_1e27a0;
        }
    }
    ctx->pc = 0x1E26E4u;
label_1e26e4:
    // 0x1e26e4: 0x0  nop
    ctx->pc = 0x1e26e4u;
    // NOP
label_1e26e8:
    // 0x1e26e8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e26ec:
    // 0x1e26ec: 0x90430017  lbu         $v1, 0x17($v0)
    ctx->pc = 0x1e26ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
label_1e26f0:
    // 0x1e26f0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e26f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1e26f4:
    // 0x1e26f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e26f8:
    // 0x1e26f8: 0xc0741a4  jal         func_1D0690
label_1e26fc:
    if (ctx->pc == 0x1E26FCu) {
        ctx->pc = 0x1E26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26F8u;
        // 0x1e26fc: 0x622018  mult        $a0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2700u;
        goto label_1e2700;
    }
    ctx->pc = 0x1E26F8u;
    SET_GPR_U32(ctx, 31, 0x1E2700u);
    ctx->pc = 0x1E26FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E26F8u;
    // 0x1e26fc: 0x622018  mult        $a0, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x1E26F8u, 0x1E2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2700u;
label_1e2700:
    // 0x1e2700: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1e2700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_1e2704:
    // 0x1e2704: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1e2704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1e2708:
    // 0x1e2708: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1e270c:
    if (ctx->pc == 0x1E270Cu) {
        ctx->pc = 0x1E2710u;
        goto label_1e2710;
    }
    ctx->pc = 0x1E2708u;
    {
        const bool branch_taken_0x1e2708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2708) {
            ctx->pc = 0x1E2728u;
            goto label_1e2728;
        }
    }
    ctx->pc = 0x1E2710u;
label_1e2710:
    // 0x1e2710: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e2710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e2714:
    // 0x1e2714: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e2714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e2718:
    // 0x1e2718: 0x320f809  jalr        $t9
label_1e271c:
    if (ctx->pc == 0x1E271Cu) {
        ctx->pc = 0x1E271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2718u;
        // 0x1e271c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2720u;
        goto label_1e2720;
    }
    ctx->pc = 0x1E2718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2720u);
        ctx->pc = 0x1E271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2718u;
        // 0x1e271c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2718u, 0x1E2720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2720u;
label_1e2720:
    // 0x1e2720: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1e2724:
    if (ctx->pc == 0x1E2724u) {
        ctx->pc = 0x1E2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2720u;
        // 0x1e2724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2728u;
        goto label_1e2728;
    }
    ctx->pc = 0x1E2720u;
    {
        const bool branch_taken_0x1e2720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2720u;
        // 0x1e2724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2720) {
            ctx->pc = 0x1E27A0u;
            goto label_1e27a0;
        }
    }
    ctx->pc = 0x1E2728u;
label_1e2728:
    // 0x1e2728: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e2728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e272c:
    // 0x1e272c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1e272cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1e2730:
    // 0x1e2730: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e2730u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e2734:
    // 0x1e2734: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1e2738:
    if (ctx->pc == 0x1E2738u) {
        ctx->pc = 0x1E2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2734u;
        // 0x1e2738: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E273Cu;
        goto label_1e273c;
    }
    ctx->pc = 0x1E2734u;
    {
        const bool branch_taken_0x1e2734 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2734u;
        // 0x1e2738: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2734) {
            ctx->pc = 0x1E2790u;
            goto label_1e2790;
        }
    }
    ctx->pc = 0x1E273Cu;
label_1e273c:
    // 0x1e273c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e273cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2740:
    // 0x1e2740: 0x24057ffe  addiu       $a1, $zero, 0x7FFE
    ctx->pc = 0x1e2740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e2744:
    // 0x1e2744: 0x0  nop
    ctx->pc = 0x1e2744u;
    // NOP
label_1e2748:
    // 0x1e2748: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1e2748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e274c:
    // 0x1e274c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e2750:
    // 0x1e2750: 0xa4450030  sh          $a1, 0x30($v0)
    ctx->pc = 0x1e2750u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 5));
label_1e2754:
    // 0x1e2754: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1e2754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2758:
    // 0x1e2758: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1e2758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e275c:
    // 0x1e275c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1e275cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1e2760:
    // 0x1e2760: 0x90840017  lbu         $a0, 0x17($a0)
    ctx->pc = 0x1e2760u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
label_1e2764:
    // 0x1e2764: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e2764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e2768:
    // 0x1e2768: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x1e2768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1e276c:
    // 0x1e276c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1e276cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e2770:
    // 0x1e2770: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e2770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1e2774:
    // 0x1e2774: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e2774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e2778:
    // 0x1e2778: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1e2778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_1e277c:
    // 0x1e277c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e277cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2780:
    // 0x1e2780: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1e2780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1e2784:
    // 0x1e2784: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x1e2784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e2788:
    // 0x1e2788: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1e278c:
    if (ctx->pc == 0x1E278Cu) {
        ctx->pc = 0x1E278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2788u;
        // 0x1e278c: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2790u;
        goto label_1e2790;
    }
    ctx->pc = 0x1E2788u;
    {
        const bool branch_taken_0x1e2788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2788u;
        // 0x1e278c: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2788) {
            ctx->pc = 0x1E2748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2748;
        }
    }
    ctx->pc = 0x1E2790u;
label_1e2790:
    // 0x1e2790: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1e2790u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1e2794:
    // 0x1e2794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2798:
    // 0x1e2798: 0xa603003e  sh          $v1, 0x3E($s0)
    ctx->pc = 0x1e2798u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 62), (uint16_t)GPR_U32(ctx, 3));
label_1e279c:
    // 0x1e279c: 0xa200003d  sb          $zero, 0x3D($s0)
    ctx->pc = 0x1e279cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 0));
label_1e27a0:
    // 0x1e27a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e27a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e27a4:
    // 0x1e27a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e27a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e27a8:
    // 0x1e27a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e27a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e27ac:
    // 0x1e27ac: 0x3e00008  jr          $ra
label_1e27b0:
    if (ctx->pc == 0x1E27B0u) {
        ctx->pc = 0x1E27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27ACu;
        // 0x1e27b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E27B4u;
        goto label_fallthrough_0x1e27ac;
    }
    ctx->pc = 0x1E27ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27ACu;
        // 0x1e27b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E27ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e27ac:
    ctx->pc = 0x1E27B4u;
}
