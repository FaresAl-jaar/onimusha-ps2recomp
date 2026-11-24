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

// Function: sub_00381620
// Address: 0x381620 - 0x381700
void sub_00381620_0x381620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381620_0x381620");
#endif

    switch (ctx->pc) {
        case 0x381620u: goto label_381620;
        case 0x381624u: goto label_381624;
        case 0x381628u: goto label_381628;
        case 0x38162cu: goto label_38162c;
        case 0x381630u: goto label_381630;
        case 0x381634u: goto label_381634;
        case 0x381638u: goto label_381638;
        case 0x38163cu: goto label_38163c;
        case 0x381640u: goto label_381640;
        case 0x381644u: goto label_381644;
        case 0x381648u: goto label_381648;
        case 0x38164cu: goto label_38164c;
        case 0x381650u: goto label_381650;
        case 0x381654u: goto label_381654;
        case 0x381658u: goto label_381658;
        case 0x38165cu: goto label_38165c;
        case 0x381660u: goto label_381660;
        case 0x381664u: goto label_381664;
        case 0x381668u: goto label_381668;
        case 0x38166cu: goto label_38166c;
        case 0x381670u: goto label_381670;
        case 0x381674u: goto label_381674;
        case 0x381678u: goto label_381678;
        case 0x38167cu: goto label_38167c;
        case 0x381680u: goto label_381680;
        case 0x381684u: goto label_381684;
        case 0x381688u: goto label_381688;
        case 0x38168cu: goto label_38168c;
        case 0x381690u: goto label_381690;
        case 0x381694u: goto label_381694;
        case 0x381698u: goto label_381698;
        case 0x38169cu: goto label_38169c;
        case 0x3816a0u: goto label_3816a0;
        case 0x3816a4u: goto label_3816a4;
        case 0x3816a8u: goto label_3816a8;
        case 0x3816acu: goto label_3816ac;
        case 0x3816b0u: goto label_3816b0;
        case 0x3816b4u: goto label_3816b4;
        case 0x3816b8u: goto label_3816b8;
        case 0x3816bcu: goto label_3816bc;
        case 0x3816c0u: goto label_3816c0;
        case 0x3816c4u: goto label_3816c4;
        case 0x3816c8u: goto label_3816c8;
        case 0x3816ccu: goto label_3816cc;
        case 0x3816d0u: goto label_3816d0;
        case 0x3816d4u: goto label_3816d4;
        case 0x3816d8u: goto label_3816d8;
        case 0x3816dcu: goto label_3816dc;
        case 0x3816e0u: goto label_3816e0;
        case 0x3816e4u: goto label_3816e4;
        case 0x3816e8u: goto label_3816e8;
        case 0x3816ecu: goto label_3816ec;
        case 0x3816f0u: goto label_3816f0;
        case 0x3816f4u: goto label_3816f4;
        case 0x3816f8u: goto label_3816f8;
        case 0x3816fcu: goto label_3816fc;
        default: break;
    }

    ctx->pc = 0x381620u;

label_381620:
    // 0x381620: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x381620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_381624:
    // 0x381624: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x381624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_381628:
    // 0x381628: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x381628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_38162c:
    // 0x38162c: 0x2406006f  addiu       $a2, $zero, 0x6F
    ctx->pc = 0x38162cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_381630:
    // 0x381630: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x381630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_381634:
    // 0x381634: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x381634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381638:
    // 0x381638: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x381638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38163c:
    // 0x38163c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x38163cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_381640:
    // 0x381640: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x381640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_381644:
    // 0x381644: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x381644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_381648:
    // 0x381648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x381648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38164c:
    // 0x38164c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38164cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381650:
    // 0x381650: 0xc050ed4  jal         func_143B50
label_381654:
    if (ctx->pc == 0x381654u) {
        ctx->pc = 0x381654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381650u;
        // 0x381654: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381658u;
        goto label_381658;
    }
    ctx->pc = 0x381650u;
    SET_GPR_U32(ctx, 31, 0x381658u);
    ctx->pc = 0x381654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381650u;
    // 0x381654: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x381650u, 0x381658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381658u;
label_381658:
    // 0x381658: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_38165c:
    if (ctx->pc == 0x38165Cu) {
        ctx->pc = 0x38165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381658u;
        // 0x38165c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381660u;
        goto label_381660;
    }
    ctx->pc = 0x381658u;
    {
        const bool branch_taken_0x381658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381658u;
        // 0x38165c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381658) {
            ctx->pc = 0x3816E0u;
            goto label_3816e0;
        }
    }
    ctx->pc = 0x381660u;
label_381660:
    // 0x381660: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x381660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_381664:
    // 0x381664: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x381664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_381668:
    // 0x381668: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x381668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_38166c:
    // 0x38166c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38166cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_381670:
    // 0x381670: 0xc0b2ebc  jal         func_2CBAF0
label_381674:
    if (ctx->pc == 0x381674u) {
        ctx->pc = 0x381674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381670u;
        // 0x381674: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381678u;
        goto label_381678;
    }
    ctx->pc = 0x381670u;
    SET_GPR_U32(ctx, 31, 0x381678u);
    ctx->pc = 0x381674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381670u;
    // 0x381674: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x381670u, 0x381678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381678u;
label_381678:
    // 0x381678: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x381678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38167c:
    // 0x38167c: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_381680:
    if (ctx->pc == 0x381680u) {
        ctx->pc = 0x381684u;
        goto label_381684;
    }
    ctx->pc = 0x38167Cu;
    {
        const bool branch_taken_0x38167c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x38167c) {
            ctx->pc = 0x3816C0u;
            goto label_3816c0;
        }
    }
    ctx->pc = 0x381684u;
label_381684:
    // 0x381684: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x381684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_381688:
    // 0x381688: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x381688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_38168c:
    // 0x38168c: 0x320f809  jalr        $t9
label_381690:
    if (ctx->pc == 0x381690u) {
        ctx->pc = 0x381690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38168Cu;
        // 0x381690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381694u;
        goto label_381694;
    }
    ctx->pc = 0x38168Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x381694u);
        ctx->pc = 0x381690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38168Cu;
        // 0x381690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38168Cu, 0x381694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x381694u;
label_381694:
    // 0x381694: 0xa2512b20  sb          $s1, 0x2B20($s2)
    ctx->pc = 0x381694u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11040), (uint8_t)GPR_U32(ctx, 17));
label_381698:
    // 0x381698: 0x92432b21  lbu         $v1, 0x2B21($s2)
    ctx->pc = 0x381698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11041)));
label_38169c:
    // 0x38169c: 0x306300e3  andi        $v1, $v1, 0xE3
    ctx->pc = 0x38169cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)227);
label_3816a0:
    // 0x3816a0: 0xa2432b21  sb          $v1, 0x2B21($s2)
    ctx->pc = 0x3816a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11041), (uint8_t)GPR_U32(ctx, 3));
label_3816a4:
    // 0x3816a4: 0x92432b21  lbu         $v1, 0x2B21($s2)
    ctx->pc = 0x3816a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11041)));
label_3816a8:
    // 0x3816a8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3816a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_3816ac:
    // 0x3816ac: 0xa2432b21  sb          $v1, 0x2B21($s2)
    ctx->pc = 0x3816acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11041), (uint8_t)GPR_U32(ctx, 3));
label_3816b0:
    // 0x3816b0: 0xa6402b22  sh          $zero, 0x2B22($s2)
    ctx->pc = 0x3816b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11042), (uint16_t)GPR_U32(ctx, 0));
label_3816b4:
    // 0x3816b4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3816b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3816b8:
    // 0x3816b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3816bc:
    if (ctx->pc == 0x3816BCu) {
        ctx->pc = 0x3816BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3816B8u;
        // 0x3816bc: 0xae032b20  sw          $v1, 0x2B20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3816C0u;
        goto label_3816c0;
    }
    ctx->pc = 0x3816B8u;
    {
        const bool branch_taken_0x3816b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3816BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3816B8u;
        // 0x3816bc: 0xae032b20  sw          $v1, 0x2B20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3816b8) {
            ctx->pc = 0x3816C8u;
            goto label_3816c8;
        }
    }
    ctx->pc = 0x3816C0u;
label_3816c0:
    // 0x3816c0: 0xae002b20  sw          $zero, 0x2B20($s0)
    ctx->pc = 0x3816c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 0));
label_3816c4:
    // 0x3816c4: 0x0  nop
    ctx->pc = 0x3816c4u;
    // NOP
label_3816c8:
    // 0x3816c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3816c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3816cc:
    // 0x3816cc: 0x2e630004  sltiu       $v1, $s3, 0x4
    ctx->pc = 0x3816ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3816d0:
    // 0x3816d0: 0x2631000a  addiu       $s1, $s1, 0xA
    ctx->pc = 0x3816d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_3816d4:
    // 0x3816d4: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_3816d8:
    if (ctx->pc == 0x3816D8u) {
        ctx->pc = 0x3816D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3816D4u;
        // 0x3816d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3816DCu;
        goto label_3816dc;
    }
    ctx->pc = 0x3816D4u;
    {
        const bool branch_taken_0x3816d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3816D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3816D4u;
        // 0x3816d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3816d4) {
            ctx->pc = 0x381668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381668;
        }
    }
    ctx->pc = 0x3816DCu;
label_3816dc:
    // 0x3816dc: 0x0  nop
    ctx->pc = 0x3816dcu;
    // NOP
label_3816e0:
    // 0x3816e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3816e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3816e4:
    // 0x3816e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3816e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3816e8:
    // 0x3816e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3816e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3816ec:
    // 0x3816ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3816ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3816f0:
    // 0x3816f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3816f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3816f4:
    // 0x3816f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3816f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3816f8:
    // 0x3816f8: 0x3e00008  jr          $ra
label_3816fc:
    if (ctx->pc == 0x3816FCu) {
        ctx->pc = 0x3816FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3816F8u;
        // 0x3816fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381700u;
        goto label_fallthrough_0x3816f8;
    }
    ctx->pc = 0x3816F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3816FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3816F8u;
        // 0x3816fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3816F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3816f8:
    ctx->pc = 0x381700u;
}
