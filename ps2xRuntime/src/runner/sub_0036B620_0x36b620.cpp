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

// Function: sub_0036B620
// Address: 0x36b620 - 0x36b754
void sub_0036B620_0x36b620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B620_0x36b620");
#endif

    switch (ctx->pc) {
        case 0x36b68cu: goto label_36b68c;
        default: break;
    }

    ctx->pc = 0x36b620u;

    // 0x36b620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36b620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36b624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36b624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36b628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36b628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36b62c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36b62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36b630: 0x93828bfc  lbu         $v0, -0x7404($gp)
    ctx->pc = 0x36b630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937596)));
    // 0x36b634: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36B634u;
    {
        const bool branch_taken_0x36b634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B634u;
        // 0x36b638: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b634) {
            ctx->pc = 0x36B648u;
            goto label_36b648;
        }
    }
    ctx->pc = 0x36B63Cu;
    // 0x36b63c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x36B63Cu;
    {
        const bool branch_taken_0x36b63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B63Cu;
        // 0x36b640: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b63c) {
            ctx->pc = 0x36B740u;
            goto label_36b740;
        }
    }
    ctx->pc = 0x36B644u;
    // 0x36b644: 0x0  nop
    ctx->pc = 0x36b644u;
    // NOP
label_36b648:
    // 0x36b648: 0x97828bf8  lhu         $v0, -0x7408($gp)
    ctx->pc = 0x36b648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937592)));
    // 0x36b64c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x36b64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x36b650: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x36b650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x36b654: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36B654u;
    {
        const bool branch_taken_0x36b654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B654u;
        // 0x36b658: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b654) {
            ctx->pc = 0x36B668u;
            goto label_36b668;
        }
    }
    ctx->pc = 0x36B65Cu;
    // 0x36b65c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x36B65Cu;
    {
        const bool branch_taken_0x36b65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b65c) {
            ctx->pc = 0x36B740u;
            goto label_36b740;
        }
    }
    ctx->pc = 0x36B664u;
    // 0x36b664: 0x0  nop
    ctx->pc = 0x36b664u;
    // NOP
label_36b668:
    // 0x36b668: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x36b668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b66c: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x36b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x36b670: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36b670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36b674: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x36b674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x36b678: 0x244206c0  addiu       $v0, $v0, 0x6C0
    ctx->pc = 0x36b678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x36b67c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x36b67cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b680: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x36b680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x36b684: 0xc0ce22c  jal         func_3388B0
    ctx->pc = 0x36B684u;
    SET_GPR_U32(ctx, 31, 0x36B68Cu);
    ctx->pc = 0x36B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B684u;
    // 0x36b688: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3388B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3388B0u, 0x36B684u, 0x36B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B68Cu;
label_36b68c:
    // 0x36b68c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36B68Cu;
    {
        const bool branch_taken_0x36b68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b68c) {
            ctx->pc = 0x36B6A0u;
            goto label_36b6a0;
        }
    }
    ctx->pc = 0x36B694u;
    // 0x36b694: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x36B694u;
    {
        const bool branch_taken_0x36b694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B694u;
        // 0x36b698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b694) {
            ctx->pc = 0x36B6E0u;
            goto label_36b6e0;
        }
    }
    ctx->pc = 0x36B69Cu;
    // 0x36b69c: 0x0  nop
    ctx->pc = 0x36b69cu;
    // NOP
label_36b6a0:
    // 0x36b6a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36b6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36b6a4: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x36b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x36b6a8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x36b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x36b6ac: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x36b6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x36b6b0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x36b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36b6b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36b6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36b6b8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x36b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x36b6bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x36b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36b6c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36b6c4: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x36b6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x36b6c8: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x36b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x36b6cc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x36b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x36b6d0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x36b6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x36b6d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36b6d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x36b6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36b6dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36b6dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_36b6e0:
    // 0x36b6e0: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x36b6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x36b6e4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36B6E4u;
    {
        const bool branch_taken_0x36b6e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b6e4) {
            ctx->pc = 0x36B700u;
            goto label_36b700;
        }
    }
    ctx->pc = 0x36B6ECu;
    // 0x36b6ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x36b6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36b6f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36b6f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x36b6f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x36b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x36b6f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x36b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x36b6fc: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x36b6fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_36b700:
    // 0x36b700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36b700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b704: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36B704u;
    {
        const bool branch_taken_0x36b704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x36b704) {
            ctx->pc = 0x36B720u;
            goto label_36b720;
        }
    }
    ctx->pc = 0x36B70Cu;
    // 0x36b70c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x36b70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36b710: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36b710u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x36b714: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x36b714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x36b718: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x36b718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x36b71c: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x36b71cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_36b720:
    // 0x36b720: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36b720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b724: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36B724u;
    {
        const bool branch_taken_0x36b724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x36b724) {
            ctx->pc = 0x36B740u;
            goto label_36b740;
        }
    }
    ctx->pc = 0x36B72Cu;
    // 0x36b72c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x36b72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36b730: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36b730u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x36b734: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x36b734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x36b738: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x36b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x36b73c: 0x84420026  lh          $v0, 0x26($v0)
    ctx->pc = 0x36b73cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
label_36b740:
    // 0x36b740: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36b740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36b744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36b744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36b748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b74c: 0x3e00008  jr          $ra
    ctx->pc = 0x36B74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B74Cu;
        // 0x36b750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B754u;
}
