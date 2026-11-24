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

// Function: sub_001E7630
// Address: 0x1e7630 - 0x1e77d8
void sub_001E7630_0x1e7630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7630_0x1e7630");
#endif

    switch (ctx->pc) {
        case 0x1e7630u: goto label_1e7630;
        case 0x1e7634u: goto label_1e7634;
        case 0x1e7638u: goto label_1e7638;
        case 0x1e763cu: goto label_1e763c;
        case 0x1e7640u: goto label_1e7640;
        case 0x1e7644u: goto label_1e7644;
        case 0x1e7648u: goto label_1e7648;
        case 0x1e764cu: goto label_1e764c;
        case 0x1e7650u: goto label_1e7650;
        case 0x1e7654u: goto label_1e7654;
        case 0x1e7658u: goto label_1e7658;
        case 0x1e765cu: goto label_1e765c;
        case 0x1e7660u: goto label_1e7660;
        case 0x1e7664u: goto label_1e7664;
        case 0x1e7668u: goto label_1e7668;
        case 0x1e766cu: goto label_1e766c;
        case 0x1e7670u: goto label_1e7670;
        case 0x1e7674u: goto label_1e7674;
        case 0x1e7678u: goto label_1e7678;
        case 0x1e767cu: goto label_1e767c;
        case 0x1e7680u: goto label_1e7680;
        case 0x1e7684u: goto label_1e7684;
        case 0x1e7688u: goto label_1e7688;
        case 0x1e768cu: goto label_1e768c;
        case 0x1e7690u: goto label_1e7690;
        case 0x1e7694u: goto label_1e7694;
        case 0x1e7698u: goto label_1e7698;
        case 0x1e769cu: goto label_1e769c;
        case 0x1e76a0u: goto label_1e76a0;
        case 0x1e76a4u: goto label_1e76a4;
        case 0x1e76a8u: goto label_1e76a8;
        case 0x1e76acu: goto label_1e76ac;
        case 0x1e76b0u: goto label_1e76b0;
        case 0x1e76b4u: goto label_1e76b4;
        case 0x1e76b8u: goto label_1e76b8;
        case 0x1e76bcu: goto label_1e76bc;
        case 0x1e76c0u: goto label_1e76c0;
        case 0x1e76c4u: goto label_1e76c4;
        case 0x1e76c8u: goto label_1e76c8;
        case 0x1e76ccu: goto label_1e76cc;
        case 0x1e76d0u: goto label_1e76d0;
        case 0x1e76d4u: goto label_1e76d4;
        case 0x1e76d8u: goto label_1e76d8;
        case 0x1e76dcu: goto label_1e76dc;
        case 0x1e76e0u: goto label_1e76e0;
        case 0x1e76e4u: goto label_1e76e4;
        case 0x1e76e8u: goto label_1e76e8;
        case 0x1e76ecu: goto label_1e76ec;
        case 0x1e76f0u: goto label_1e76f0;
        case 0x1e76f4u: goto label_1e76f4;
        case 0x1e76f8u: goto label_1e76f8;
        case 0x1e76fcu: goto label_1e76fc;
        case 0x1e7700u: goto label_1e7700;
        case 0x1e7704u: goto label_1e7704;
        case 0x1e7708u: goto label_1e7708;
        case 0x1e770cu: goto label_1e770c;
        case 0x1e7710u: goto label_1e7710;
        case 0x1e7714u: goto label_1e7714;
        case 0x1e7718u: goto label_1e7718;
        case 0x1e771cu: goto label_1e771c;
        case 0x1e7720u: goto label_1e7720;
        case 0x1e7724u: goto label_1e7724;
        case 0x1e7728u: goto label_1e7728;
        case 0x1e772cu: goto label_1e772c;
        case 0x1e7730u: goto label_1e7730;
        case 0x1e7734u: goto label_1e7734;
        case 0x1e7738u: goto label_1e7738;
        case 0x1e773cu: goto label_1e773c;
        case 0x1e7740u: goto label_1e7740;
        case 0x1e7744u: goto label_1e7744;
        case 0x1e7748u: goto label_1e7748;
        case 0x1e774cu: goto label_1e774c;
        case 0x1e7750u: goto label_1e7750;
        case 0x1e7754u: goto label_1e7754;
        case 0x1e7758u: goto label_1e7758;
        case 0x1e775cu: goto label_1e775c;
        case 0x1e7760u: goto label_1e7760;
        case 0x1e7764u: goto label_1e7764;
        case 0x1e7768u: goto label_1e7768;
        case 0x1e776cu: goto label_1e776c;
        case 0x1e7770u: goto label_1e7770;
        case 0x1e7774u: goto label_1e7774;
        case 0x1e7778u: goto label_1e7778;
        case 0x1e777cu: goto label_1e777c;
        case 0x1e7780u: goto label_1e7780;
        case 0x1e7784u: goto label_1e7784;
        case 0x1e7788u: goto label_1e7788;
        case 0x1e778cu: goto label_1e778c;
        case 0x1e7790u: goto label_1e7790;
        case 0x1e7794u: goto label_1e7794;
        case 0x1e7798u: goto label_1e7798;
        case 0x1e779cu: goto label_1e779c;
        case 0x1e77a0u: goto label_1e77a0;
        case 0x1e77a4u: goto label_1e77a4;
        case 0x1e77a8u: goto label_1e77a8;
        case 0x1e77acu: goto label_1e77ac;
        case 0x1e77b0u: goto label_1e77b0;
        case 0x1e77b4u: goto label_1e77b4;
        case 0x1e77b8u: goto label_1e77b8;
        case 0x1e77bcu: goto label_1e77bc;
        case 0x1e77c0u: goto label_1e77c0;
        case 0x1e77c4u: goto label_1e77c4;
        case 0x1e77c8u: goto label_1e77c8;
        case 0x1e77ccu: goto label_1e77cc;
        case 0x1e77d0u: goto label_1e77d0;
        case 0x1e77d4u: goto label_1e77d4;
        default: break;
    }

    ctx->pc = 0x1e7630u;

label_1e7630:
    // 0x1e7630: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e7630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1e7634:
    // 0x1e7634: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e7634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e7638:
    // 0x1e7638: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e7638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e763c:
    // 0x1e763c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e7640:
    // 0x1e7640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e7644:
    // 0x1e7644: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e7648:
    // 0x1e7648: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e764c:
    // 0x1e764c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e764cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7650:
    // 0x1e7650: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e7654:
    if (ctx->pc == 0x1E7654u) {
        ctx->pc = 0x1E7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7650u;
        // 0x1e7654: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7658u;
        goto label_1e7658;
    }
    ctx->pc = 0x1E7650u;
    {
        const bool branch_taken_0x1e7650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7650u;
        // 0x1e7654: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7650) {
            ctx->pc = 0x1E7660u;
            goto label_1e7660;
        }
    }
    ctx->pc = 0x1E7658u;
label_1e7658:
    // 0x1e7658: 0x10000059  b           . + 4 + (0x59 << 2)
label_1e765c:
    if (ctx->pc == 0x1E765Cu) {
        ctx->pc = 0x1E765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7658u;
        // 0x1e765c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7660u;
        goto label_1e7660;
    }
    ctx->pc = 0x1E7658u;
    {
        const bool branch_taken_0x1e7658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7658u;
        // 0x1e765c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7658) {
            ctx->pc = 0x1E77C0u;
            goto label_1e77c0;
        }
    }
    ctx->pc = 0x1E7660u;
label_1e7660:
    // 0x1e7660: 0x7a230060  lq          $v1, 0x60($s1)
    ctx->pc = 0x1e7660u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 96)));
label_1e7664:
    // 0x1e7664: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e7664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e7668:
    // 0x1e7668: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x1e7668u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_1e766c:
    // 0x1e766c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x1e766cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1e7670:
    // 0x1e7670: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e7670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e7674:
    // 0x1e7674: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x1e7674u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e7678:
    // 0x1e7678: 0x86230040  lh          $v1, 0x40($s1)
    ctx->pc = 0x1e7678u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
label_1e767c:
    // 0x1e767c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e7680:
    if (ctx->pc == 0x1E7680u) {
        ctx->pc = 0x1E7684u;
        goto label_1e7684;
    }
    ctx->pc = 0x1E767Cu;
    {
        const bool branch_taken_0x1e767c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e767c) {
            ctx->pc = 0x1E76A0u;
            goto label_1e76a0;
        }
    }
    ctx->pc = 0x1E7684u;
label_1e7684:
    // 0x1e7684: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x1e7684u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1e7688:
    // 0x1e7688: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e7688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e768c:
    // 0x1e768c: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e7690:
    if (ctx->pc == 0x1E7690u) {
        ctx->pc = 0x1E7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E768Cu;
        // 0x1e7690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7694u;
        goto label_1e7694;
    }
    ctx->pc = 0x1E768Cu;
    {
        const bool branch_taken_0x1e768c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E768Cu;
        // 0x1e7690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e768c) {
            ctx->pc = 0x1E76C8u;
            goto label_1e76c8;
        }
    }
    ctx->pc = 0x1E7694u;
label_1e7694:
    // 0x1e7694: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x1e7694u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e7698:
    // 0x1e7698: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e769c:
    if (ctx->pc == 0x1E769Cu) {
        ctx->pc = 0x1E769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7698u;
        // 0x1e769c: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E76A0u;
        goto label_1e76a0;
    }
    ctx->pc = 0x1E7698u;
    {
        const bool branch_taken_0x1e7698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7698u;
        // 0x1e769c: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7698) {
            ctx->pc = 0x1E76C8u;
            goto label_1e76c8;
        }
    }
    ctx->pc = 0x1E76A0u;
label_1e76a0:
    // 0x1e76a0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x1e76a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1e76a4:
    // 0x1e76a4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e76a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e76a8:
    // 0x1e76a8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e76ac:
    if (ctx->pc == 0x1E76ACu) {
        ctx->pc = 0x1E76B0u;
        goto label_1e76b0;
    }
    ctx->pc = 0x1E76A8u;
    {
        const bool branch_taken_0x1e76a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e76a8) {
            ctx->pc = 0x1E76C8u;
            goto label_1e76c8;
        }
    }
    ctx->pc = 0x1E76B0u;
label_1e76b0:
    // 0x1e76b0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e76b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e76b4:
    // 0x1e76b4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e76b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e76b8:
    // 0x1e76b8: 0x320f809  jalr        $t9
label_1e76bc:
    if (ctx->pc == 0x1E76BCu) {
        ctx->pc = 0x1E76C0u;
        goto label_1e76c0;
    }
    ctx->pc = 0x1E76B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E76C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E76B8u, 0x1E76C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E76C0u;
label_1e76c0:
    // 0x1e76c0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1e76c4:
    if (ctx->pc == 0x1E76C4u) {
        ctx->pc = 0x1E76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76C0u;
        // 0x1e76c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E76C8u;
        goto label_1e76c8;
    }
    ctx->pc = 0x1E76C0u;
    {
        const bool branch_taken_0x1e76c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76C0u;
        // 0x1e76c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e76c0) {
            ctx->pc = 0x1E77C0u;
            goto label_1e77c0;
        }
    }
    ctx->pc = 0x1E76C8u;
label_1e76c8:
    // 0x1e76c8: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x1e76c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1e76cc:
    // 0x1e76cc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1e76ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_1e76d0:
    // 0x1e76d0: 0xc07cce0  jal         func_1F3380
label_1e76d4:
    if (ctx->pc == 0x1E76D4u) {
        ctx->pc = 0x1E76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76D0u;
        // 0x1e76d4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E76D8u;
        goto label_1e76d8;
    }
    ctx->pc = 0x1E76D0u;
    SET_GPR_U32(ctx, 31, 0x1E76D8u);
    ctx->pc = 0x1E76D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E76D0u;
    // 0x1e76d4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x1E76D0u, 0x1E76D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E76D8u;
label_1e76d8:
    // 0x1e76d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e76dc:
    if (ctx->pc == 0x1E76DCu) {
        ctx->pc = 0x1E76E0u;
        goto label_1e76e0;
    }
    ctx->pc = 0x1E76D8u;
    {
        const bool branch_taken_0x1e76d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e76d8) {
            ctx->pc = 0x1E76F8u;
            goto label_1e76f8;
        }
    }
    ctx->pc = 0x1E76E0u;
label_1e76e0:
    // 0x1e76e0: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x1e76e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_1e76e4:
    // 0x1e76e4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1e76e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1e76e8:
    // 0x1e76e8: 0xac430148  sw          $v1, 0x148($v0)
    ctx->pc = 0x1e76e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 3));
label_1e76ec:
    // 0x1e76ec: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x1e76ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_1e76f0:
    // 0x1e76f0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1e76f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1e76f4:
    // 0x1e76f4: 0xac430148  sw          $v1, 0x148($v0)
    ctx->pc = 0x1e76f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 3));
label_1e76f8:
    // 0x1e76f8: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1e76f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1e76fc:
    // 0x1e76fc: 0xc076800  jal         func_1DA000
label_1e7700:
    if (ctx->pc == 0x1E7700u) {
        ctx->pc = 0x1E7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76FCu;
        // 0x1e7700: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7704u;
        goto label_1e7704;
    }
    ctx->pc = 0x1E76FCu;
    SET_GPR_U32(ctx, 31, 0x1E7704u);
    ctx->pc = 0x1E7700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E76FCu;
    // 0x1e7700: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E76FCu, 0x1E7704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7704u;
label_1e7704:
    // 0x1e7704: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1e7704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1e7708:
    // 0x1e7708: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1e7708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_1e770c:
    // 0x1e770c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1e770cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1e7710:
    // 0x1e7710: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x1e7710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_1e7714:
    // 0x1e7714: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1e7714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1e7718:
    // 0x1e7718: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1e7718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1e771c:
    // 0x1e771c: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x1e771cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_1e7720:
    // 0x1e7720: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1e7720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1e7724:
    // 0x1e7724: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1e7724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1e7728:
    // 0x1e7728: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1e7728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_1e772c:
    // 0x1e772c: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x1e772cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1e7730:
    // 0x1e7730: 0xc07cce0  jal         func_1F3380
label_1e7734:
    if (ctx->pc == 0x1E7734u) {
        ctx->pc = 0x1E7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7730u;
        // 0x1e7734: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7738u;
        goto label_1e7738;
    }
    ctx->pc = 0x1E7730u;
    SET_GPR_U32(ctx, 31, 0x1E7738u);
    ctx->pc = 0x1E7734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7730u;
    // 0x1e7734: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x1E7730u, 0x1E7738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7738u;
label_1e7738:
    // 0x1e7738: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e7738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e773c:
    // 0x1e773c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_1e7740:
    if (ctx->pc == 0x1E7740u) {
        ctx->pc = 0x1E7744u;
        goto label_1e7744;
    }
    ctx->pc = 0x1E773Cu;
    {
        const bool branch_taken_0x1e773c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e773c) {
            ctx->pc = 0x1E7760u;
            goto label_1e7760;
        }
    }
    ctx->pc = 0x1E7744u;
label_1e7744:
    // 0x1e7744: 0x8e390020  lw          $t9, 0x20($s1)
    ctx->pc = 0x1e7744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1e7748:
    // 0x1e7748: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e7748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e774c:
    // 0x1e774c: 0x320f809  jalr        $t9
label_1e7750:
    if (ctx->pc == 0x1E7750u) {
        ctx->pc = 0x1E7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E774Cu;
        // 0x1e7750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7754u;
        goto label_1e7754;
    }
    ctx->pc = 0x1E774Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7754u);
        ctx->pc = 0x1E7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E774Cu;
        // 0x1e7750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E774Cu, 0x1E7754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E7754u;
label_1e7754:
    // 0x1e7754: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1e7758:
    if (ctx->pc == 0x1E7758u) {
        ctx->pc = 0x1E7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7754u;
        // 0x1e7758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E775Cu;
        goto label_1e775c;
    }
    ctx->pc = 0x1E7754u;
    {
        const bool branch_taken_0x1e7754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7754u;
        // 0x1e7758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7754) {
            ctx->pc = 0x1E77C0u;
            goto label_1e77c0;
        }
    }
    ctx->pc = 0x1E775Cu;
label_1e775c:
    // 0x1e775c: 0x0  nop
    ctx->pc = 0x1e775cu;
    // NOP
label_1e7760:
    // 0x1e7760: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e7760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e7764:
    // 0x1e7764: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e7764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7768:
    // 0x1e7768: 0xc07679c  jal         func_1D9E70
label_1e776c:
    if (ctx->pc == 0x1E776Cu) {
        ctx->pc = 0x1E776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7768u;
        // 0x1e776c: 0x26260060  addiu       $a2, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7770u;
        goto label_1e7770;
    }
    ctx->pc = 0x1E7768u;
    SET_GPR_U32(ctx, 31, 0x1E7770u);
    ctx->pc = 0x1E776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7768u;
    // 0x1e776c: 0x26260060  addiu       $a2, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E7768u, 0x1E7770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7770u;
label_1e7770:
    // 0x1e7770: 0x26250034  addiu       $a1, $s1, 0x34
    ctx->pc = 0x1e7770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_1e7774:
    // 0x1e7774: 0xc076570  jal         func_1D95C0
label_1e7778:
    if (ctx->pc == 0x1E7778u) {
        ctx->pc = 0x1E7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7774u;
        // 0x1e7778: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E777Cu;
        goto label_1e777c;
    }
    ctx->pc = 0x1E7774u;
    SET_GPR_U32(ctx, 31, 0x1E777Cu);
    ctx->pc = 0x1E7778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7774u;
    // 0x1e7778: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95C0u, 0x1E7774u, 0x1E777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E777Cu;
label_1e777c:
    // 0x1e777c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e777cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7780:
    // 0x1e7780: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e7780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e7784:
    // 0x1e7784: 0xc0767b4  jal         func_1D9ED0
label_1e7788:
    if (ctx->pc == 0x1E7788u) {
        ctx->pc = 0x1E7788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7784u;
        // 0x1e7788: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E778Cu;
        goto label_1e778c;
    }
    ctx->pc = 0x1E7784u;
    SET_GPR_U32(ctx, 31, 0x1E778Cu);
    ctx->pc = 0x1E7788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7784u;
    // 0x1e7788: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E7784u, 0x1E778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E778Cu;
label_1e778c:
    // 0x1e778c: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1e778cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_1e7790:
    // 0x1e7790: 0xc0763bc  jal         func_1D8EF0
label_1e7794:
    if (ctx->pc == 0x1E7794u) {
        ctx->pc = 0x1E7794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7790u;
        // 0x1e7794: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7798u;
        goto label_1e7798;
    }
    ctx->pc = 0x1E7790u;
    SET_GPR_U32(ctx, 31, 0x1E7798u);
    ctx->pc = 0x1E7794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7790u;
    // 0x1e7794: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x1E7790u, 0x1E7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7798u;
label_1e7798:
    // 0x1e7798: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1e7798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e779c:
    // 0x1e779c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e779cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1e77a0:
    // 0x1e77a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e77a4:
    // 0x1e77a4: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1e77a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1e77a8:
    // 0x1e77a8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1e77a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e77ac:
    // 0x1e77ac: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1e77acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_1e77b0:
    // 0x1e77b0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1e77b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e77b4:
    // 0x1e77b4: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x1e77b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_1e77b8:
    // 0x1e77b8: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x1e77b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_1e77bc:
    // 0x1e77bc: 0x0  nop
    ctx->pc = 0x1e77bcu;
    // NOP
label_1e77c0:
    // 0x1e77c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e77c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e77c4:
    // 0x1e77c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e77c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e77c8:
    // 0x1e77c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e77c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e77cc:
    // 0x1e77cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e77ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e77d0:
    // 0x1e77d0: 0x3e00008  jr          $ra
label_1e77d4:
    if (ctx->pc == 0x1E77D4u) {
        ctx->pc = 0x1E77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77D0u;
        // 0x1e77d4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E77D8u;
        goto label_fallthrough_0x1e77d0;
    }
    ctx->pc = 0x1E77D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77D0u;
        // 0x1e77d4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E77D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e77d0:
    ctx->pc = 0x1E77D8u;
}
