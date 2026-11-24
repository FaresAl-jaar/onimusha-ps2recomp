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

// Function: sub_003F75E0
// Address: 0x3f75e0 - 0x3f7774
void sub_003F75E0_0x3f75e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F75E0_0x3f75e0");
#endif

    switch (ctx->pc) {
        case 0x3f75e0u: goto label_3f75e0;
        case 0x3f75e4u: goto label_3f75e4;
        case 0x3f75e8u: goto label_3f75e8;
        case 0x3f75ecu: goto label_3f75ec;
        case 0x3f75f0u: goto label_3f75f0;
        case 0x3f75f4u: goto label_3f75f4;
        case 0x3f75f8u: goto label_3f75f8;
        case 0x3f75fcu: goto label_3f75fc;
        case 0x3f7600u: goto label_3f7600;
        case 0x3f7604u: goto label_3f7604;
        case 0x3f7608u: goto label_3f7608;
        case 0x3f760cu: goto label_3f760c;
        case 0x3f7610u: goto label_3f7610;
        case 0x3f7614u: goto label_3f7614;
        case 0x3f7618u: goto label_3f7618;
        case 0x3f761cu: goto label_3f761c;
        case 0x3f7620u: goto label_3f7620;
        case 0x3f7624u: goto label_3f7624;
        case 0x3f7628u: goto label_3f7628;
        case 0x3f762cu: goto label_3f762c;
        case 0x3f7630u: goto label_3f7630;
        case 0x3f7634u: goto label_3f7634;
        case 0x3f7638u: goto label_3f7638;
        case 0x3f763cu: goto label_3f763c;
        case 0x3f7640u: goto label_3f7640;
        case 0x3f7644u: goto label_3f7644;
        case 0x3f7648u: goto label_3f7648;
        case 0x3f764cu: goto label_3f764c;
        case 0x3f7650u: goto label_3f7650;
        case 0x3f7654u: goto label_3f7654;
        case 0x3f7658u: goto label_3f7658;
        case 0x3f765cu: goto label_3f765c;
        case 0x3f7660u: goto label_3f7660;
        case 0x3f7664u: goto label_3f7664;
        case 0x3f7668u: goto label_3f7668;
        case 0x3f766cu: goto label_3f766c;
        case 0x3f7670u: goto label_3f7670;
        case 0x3f7674u: goto label_3f7674;
        case 0x3f7678u: goto label_3f7678;
        case 0x3f767cu: goto label_3f767c;
        case 0x3f7680u: goto label_3f7680;
        case 0x3f7684u: goto label_3f7684;
        case 0x3f7688u: goto label_3f7688;
        case 0x3f768cu: goto label_3f768c;
        case 0x3f7690u: goto label_3f7690;
        case 0x3f7694u: goto label_3f7694;
        case 0x3f7698u: goto label_3f7698;
        case 0x3f769cu: goto label_3f769c;
        case 0x3f76a0u: goto label_3f76a0;
        case 0x3f76a4u: goto label_3f76a4;
        case 0x3f76a8u: goto label_3f76a8;
        case 0x3f76acu: goto label_3f76ac;
        case 0x3f76b0u: goto label_3f76b0;
        case 0x3f76b4u: goto label_3f76b4;
        case 0x3f76b8u: goto label_3f76b8;
        case 0x3f76bcu: goto label_3f76bc;
        case 0x3f76c0u: goto label_3f76c0;
        case 0x3f76c4u: goto label_3f76c4;
        case 0x3f76c8u: goto label_3f76c8;
        case 0x3f76ccu: goto label_3f76cc;
        case 0x3f76d0u: goto label_3f76d0;
        case 0x3f76d4u: goto label_3f76d4;
        case 0x3f76d8u: goto label_3f76d8;
        case 0x3f76dcu: goto label_3f76dc;
        case 0x3f76e0u: goto label_3f76e0;
        case 0x3f76e4u: goto label_3f76e4;
        case 0x3f76e8u: goto label_3f76e8;
        case 0x3f76ecu: goto label_3f76ec;
        case 0x3f76f0u: goto label_3f76f0;
        case 0x3f76f4u: goto label_3f76f4;
        case 0x3f76f8u: goto label_3f76f8;
        case 0x3f76fcu: goto label_3f76fc;
        case 0x3f7700u: goto label_3f7700;
        case 0x3f7704u: goto label_3f7704;
        case 0x3f7708u: goto label_3f7708;
        case 0x3f770cu: goto label_3f770c;
        case 0x3f7710u: goto label_3f7710;
        case 0x3f7714u: goto label_3f7714;
        case 0x3f7718u: goto label_3f7718;
        case 0x3f771cu: goto label_3f771c;
        case 0x3f7720u: goto label_3f7720;
        case 0x3f7724u: goto label_3f7724;
        case 0x3f7728u: goto label_3f7728;
        case 0x3f772cu: goto label_3f772c;
        case 0x3f7730u: goto label_3f7730;
        case 0x3f7734u: goto label_3f7734;
        case 0x3f7738u: goto label_3f7738;
        case 0x3f773cu: goto label_3f773c;
        case 0x3f7740u: goto label_3f7740;
        case 0x3f7744u: goto label_3f7744;
        case 0x3f7748u: goto label_3f7748;
        case 0x3f774cu: goto label_3f774c;
        case 0x3f7750u: goto label_3f7750;
        case 0x3f7754u: goto label_3f7754;
        case 0x3f7758u: goto label_3f7758;
        case 0x3f775cu: goto label_3f775c;
        case 0x3f7760u: goto label_3f7760;
        case 0x3f7764u: goto label_3f7764;
        case 0x3f7768u: goto label_3f7768;
        case 0x3f776cu: goto label_3f776c;
        case 0x3f7770u: goto label_3f7770;
        default: break;
    }

    ctx->pc = 0x3f75e0u;

label_3f75e0:
    // 0x3f75e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f75e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f75e4:
    // 0x3f75e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f75e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f75e8:
    // 0x3f75e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f75e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f75ec:
    // 0x3f75ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f75ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f75f0:
    // 0x3f75f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f75f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f75f4:
    // 0x3f75f4: 0x8e252b18  lw          $a1, 0x2B18($s1)
    ctx->pc = 0x3f75f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11032)));
label_3f75f8:
    // 0x3f75f8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3f75f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_3f75fc:
    // 0x3f75fc: 0xc07cce0  jal         func_1F3380
label_3f7600:
    if (ctx->pc == 0x3F7600u) {
        ctx->pc = 0x3F7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F75FCu;
        // 0x3f7600: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7604u;
        goto label_3f7604;
    }
    ctx->pc = 0x3F75FCu;
    SET_GPR_U32(ctx, 31, 0x3F7604u);
    ctx->pc = 0x3F7600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F75FCu;
    // 0x3f7600: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3F75FCu, 0x3F7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7604u;
label_3f7604:
    // 0x3f7604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f7604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f7608:
    // 0x3f7608: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_3f760c:
    if (ctx->pc == 0x3F760Cu) {
        ctx->pc = 0x3F7610u;
        goto label_3f7610;
    }
    ctx->pc = 0x3F7608u;
    {
        const bool branch_taken_0x3f7608 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f7608) {
            ctx->pc = 0x3F7628u;
            goto label_3f7628;
        }
    }
    ctx->pc = 0x3F7610u;
label_3f7610:
    // 0x3f7610: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x3f7610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_3f7614:
    // 0x3f7614: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3f7614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3f7618:
    // 0x3f7618: 0x320f809  jalr        $t9
label_3f761c:
    if (ctx->pc == 0x3F761Cu) {
        ctx->pc = 0x3F761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7618u;
        // 0x3f761c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7620u;
        goto label_3f7620;
    }
    ctx->pc = 0x3F7618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7620u);
        ctx->pc = 0x3F761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7618u;
        // 0x3f761c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7618u, 0x3F7620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F7620u;
label_3f7620:
    // 0x3f7620: 0x1000004f  b           . + 4 + (0x4F << 2)
label_3f7624:
    if (ctx->pc == 0x3F7624u) {
        ctx->pc = 0x3F7628u;
        goto label_3f7628;
    }
    ctx->pc = 0x3F7620u;
    {
        const bool branch_taken_0x3f7620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7620) {
            ctx->pc = 0x3F7760u;
            goto label_3f7760;
        }
    }
    ctx->pc = 0x3F7628u;
label_3f7628:
    // 0x3f7628: 0xc0a4d3c  jal         func_2934F0
label_3f762c:
    if (ctx->pc == 0x3F762Cu) {
        ctx->pc = 0x3F762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7628u;
        // 0x3f762c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7630u;
        goto label_3f7630;
    }
    ctx->pc = 0x3F7628u;
    SET_GPR_U32(ctx, 31, 0x3F7630u);
    ctx->pc = 0x3F762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7628u;
    // 0x3f762c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3F7628u, 0x3F7630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7630u;
label_3f7630:
    // 0x3f7630: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3f7630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3f7634:
    // 0x3f7634: 0x86222b20  lh          $v0, 0x2B20($s1)
    ctx->pc = 0x3f7634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11040)));
label_3f7638:
    // 0x3f7638: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x3f7638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_3f763c:
    // 0x3f763c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3f763cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3f7640:
    // 0x3f7640: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3f7640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3f7644:
    // 0x3f7644: 0x24452b80  addiu       $a1, $v0, 0x2B80
    ctx->pc = 0x3f7644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11136));
label_3f7648:
    // 0x3f7648: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x3f7648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_3f764c:
    // 0x3f764c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3f764cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3f7650:
    // 0x3f7650: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f7650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f7654:
    // 0x3f7654: 0x26262b30  addiu       $a2, $s1, 0x2B30
    ctx->pc = 0x3f7654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 11056));
label_3f7658:
    // 0x3f7658: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3f7658u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_3f765c:
    // 0x3f765c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x3f765cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_3f7660:
    // 0x3f7660: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x3f7660u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
label_3f7664:
    // 0x3f7664: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x3f7664u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_3f7668:
    // 0x3f7668: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x3f7668u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
label_3f766c:
    // 0x3f766c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x3f766cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_3f7670:
    // 0x3f7670: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x3f7670u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
label_3f7674:
    // 0x3f7674: 0x86222b20  lh          $v0, 0x2B20($s1)
    ctx->pc = 0x3f7674u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11040)));
label_3f7678:
    // 0x3f7678: 0x7a232b30  lq          $v1, 0x2B30($s1)
    ctx->pc = 0x3f7678u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 11056)));
label_3f767c:
    // 0x3f767c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3f767cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3f7680:
    // 0x3f7680: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f7680u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f7684:
    // 0x3f7684: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3f7684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3f7688:
    // 0x3f7688: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3f7688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3f768c:
    // 0x3f768c: 0x7c432bb0  sq          $v1, 0x2BB0($v0)
    ctx->pc = 0x3f768cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 11184), GPR_VEC(ctx, 3));
label_3f7690:
    // 0x3f7690: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3f7690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3f7694:
    // 0x3f7694: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3f7694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_3f7698:
    // 0x3f7698: 0xc0414d0  jal         func_105340
label_3f769c:
    if (ctx->pc == 0x3F769Cu) {
        ctx->pc = 0x3F769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7698u;
        // 0x3f769c: 0x244500b0  addiu       $a1, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F76A0u;
        goto label_3f76a0;
    }
    ctx->pc = 0x3F7698u;
    SET_GPR_U32(ctx, 31, 0x3F76A0u);
    ctx->pc = 0x3F769Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7698u;
    // 0x3f769c: 0x244500b0  addiu       $a1, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3F7698u, 0x3F76A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F76A0u;
label_3f76a0:
    // 0x3f76a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3f76a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3f76a4:
    // 0x3f76a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f76a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f76a8:
    // 0x3f76a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f76a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f76ac:
    // 0x3f76ac: 0xc0414dc  jal         func_105370
label_3f76b0:
    if (ctx->pc == 0x3F76B0u) {
        ctx->pc = 0x3F76B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F76ACu;
        // 0x3f76b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F76B4u;
        goto label_3f76b4;
    }
    ctx->pc = 0x3F76ACu;
    SET_GPR_U32(ctx, 31, 0x3F76B4u);
    ctx->pc = 0x3F76B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F76ACu;
    // 0x3f76b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3F76ACu, 0x3F76B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F76B4u;
label_3f76b4:
    // 0x3f76b4: 0x26242b30  addiu       $a0, $s1, 0x2B30
    ctx->pc = 0x3f76b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11056));
label_3f76b8:
    // 0x3f76b8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3f76b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f76bc:
    // 0x3f76bc: 0xc0414ca  jal         func_105328
label_3f76c0:
    if (ctx->pc == 0x3F76C0u) {
        ctx->pc = 0x3F76C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F76BCu;
        // 0x3f76c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F76C4u;
        goto label_3f76c4;
    }
    ctx->pc = 0x3F76BCu;
    SET_GPR_U32(ctx, 31, 0x3F76C4u);
    ctx->pc = 0x3F76C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F76BCu;
    // 0x3f76c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3F76BCu, 0x3F76C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F76C4u;
label_3f76c4:
    // 0x3f76c4: 0x86222b20  lh          $v0, 0x2B20($s1)
    ctx->pc = 0x3f76c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11040)));
label_3f76c8:
    // 0x3f76c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f76cc:
    // 0x3f76cc: 0xa6222b20  sh          $v0, 0x2B20($s1)
    ctx->pc = 0x3f76ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11040), (uint16_t)GPR_U32(ctx, 2));
label_3f76d0:
    // 0x3f76d0: 0x86222b20  lh          $v0, 0x2B20($s1)
    ctx->pc = 0x3f76d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11040)));
label_3f76d4:
    // 0x3f76d4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3f76d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3f76d8:
    // 0x3f76d8: 0xa6222b20  sh          $v0, 0x2B20($s1)
    ctx->pc = 0x3f76d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11040), (uint16_t)GPR_U32(ctx, 2));
label_3f76dc:
    // 0x3f76dc: 0x86222b22  lh          $v0, 0x2B22($s1)
    ctx->pc = 0x3f76dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11042)));
label_3f76e0:
    // 0x3f76e0: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x3f76e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_3f76e4:
    // 0x3f76e4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3f76e8:
    if (ctx->pc == 0x3F76E8u) {
        ctx->pc = 0x3F76ECu;
        goto label_3f76ec;
    }
    ctx->pc = 0x3F76E4u;
    {
        const bool branch_taken_0x3f76e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f76e4) {
            ctx->pc = 0x3F76F8u;
            goto label_3f76f8;
        }
    }
    ctx->pc = 0x3F76ECu;
label_3f76ec:
    // 0x3f76ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f76ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f76f0:
    // 0x3f76f0: 0xa6222b22  sh          $v0, 0x2B22($s1)
    ctx->pc = 0x3f76f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11042), (uint16_t)GPR_U32(ctx, 2));
label_3f76f4:
    // 0x3f76f4: 0x0  nop
    ctx->pc = 0x3f76f4u;
    // NOP
label_3f76f8:
    // 0x3f76f8: 0x86222b20  lh          $v0, 0x2B20($s1)
    ctx->pc = 0x3f76f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11040)));
label_3f76fc:
    // 0x3f76fc: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x3f76fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
label_3f7700:
    // 0x3f7700: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3f7700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_3f7704:
    // 0x3f7704: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3f7704u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_3f7708:
    // 0x3f7708: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_3f770c:
    if (ctx->pc == 0x3F770Cu) {
        ctx->pc = 0x3F770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7708u;
        // 0x3f770c: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7710u;
        goto label_3f7710;
    }
    ctx->pc = 0x3F7708u;
    {
        const bool branch_taken_0x3f7708 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3F770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7708u;
        // 0x3f770c: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7708) {
            ctx->pc = 0x3F7718u;
            goto label_3f7718;
        }
    }
    ctx->pc = 0x3F7710u;
label_3f7710:
    // 0x3f7710: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3f7710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_3f7714:
    // 0x3f7714: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3f7714u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_3f7718:
    // 0x3f7718: 0x86222b22  lh          $v0, 0x2B22($s1)
    ctx->pc = 0x3f7718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11042)));
label_3f771c:
    // 0x3f771c: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x3f771cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_3f7720:
    // 0x3f7720: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3f7720u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3f7724:
    // 0x3f7724: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x3f7724u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3f7728:
    // 0x3f7728: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3f772c:
    if (ctx->pc == 0x3F772Cu) {
        ctx->pc = 0x3F7730u;
        goto label_3f7730;
    }
    ctx->pc = 0x3F7728u;
    {
        const bool branch_taken_0x3f7728 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7728) {
            ctx->pc = 0x3F7738u;
            goto label_3f7738;
        }
    }
    ctx->pc = 0x3F7730u;
label_3f7730:
    // 0x3f7730: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3f7730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_3f7734:
    // 0x3f7734: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3f7734u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_3f7738:
    // 0x3f7738: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x3f7738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_3f773c:
    // 0x3f773c: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x3f773cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
label_3f7740:
    // 0x3f7740: 0x26262b40  addiu       $a2, $s1, 0x2B40
    ctx->pc = 0x3f7740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 11072));
label_3f7744:
    // 0x3f7744: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3f7744u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_3f7748:
    // 0x3f7748: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3f7748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3f774c:
    // 0x3f774c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3f774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3f7750:
    // 0x3f7750: 0x24452b80  addiu       $a1, $v0, 0x2B80
    ctx->pc = 0x3f7750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11136));
label_3f7754:
    // 0x3f7754: 0xc04144e  jal         func_105138
label_3f7758:
    if (ctx->pc == 0x3F7758u) {
        ctx->pc = 0x3F7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7754u;
        // 0x3f7758: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F775Cu;
        goto label_3f775c;
    }
    ctx->pc = 0x3F7754u;
    SET_GPR_U32(ctx, 31, 0x3F775Cu);
    ctx->pc = 0x3F7758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7754u;
    // 0x3f7758: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x3F7754u, 0x3F775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F775Cu;
label_3f775c:
    // 0x3f775c: 0x0  nop
    ctx->pc = 0x3f775cu;
    // NOP
label_3f7760:
    // 0x3f7760: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f7760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7764:
    // 0x3f7764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f7764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f7768:
    // 0x3f7768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f7768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f776c:
    // 0x3f776c: 0x3e00008  jr          $ra
label_3f7770:
    if (ctx->pc == 0x3F7770u) {
        ctx->pc = 0x3F7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F776Cu;
        // 0x3f7770: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7774u;
        goto label_fallthrough_0x3f776c;
    }
    ctx->pc = 0x3F776Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F776Cu;
        // 0x3f7770: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F776Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f776c:
    ctx->pc = 0x3F7774u;
}
