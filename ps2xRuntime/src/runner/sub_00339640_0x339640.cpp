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

// Function: sub_00339640
// Address: 0x339640 - 0x339734
void sub_00339640_0x339640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339640_0x339640");
#endif

    switch (ctx->pc) {
        case 0x3396d8u: goto label_3396d8;
        case 0x339714u: goto label_339714;
        default: break;
    }

    ctx->pc = 0x339640u;

    // 0x339640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x339644: 0x240319eb  addiu       $v1, $zero, 0x19EB
    ctx->pc = 0x339644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6635));
    // 0x339648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x339648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33964c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x339650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339654: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x339654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339658: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x339658u;
    {
        const bool branch_taken_0x339658 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x33965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339658u;
        // 0x33965c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339658) {
            ctx->pc = 0x339670u;
            goto label_339670;
        }
    }
    ctx->pc = 0x339660u;
    // 0x339660: 0x240319ff  addiu       $v1, $zero, 0x19FF
    ctx->pc = 0x339660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6655));
    // 0x339664: 0x16030014  bne         $s0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x339664u;
    {
        const bool branch_taken_0x339664 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x339664) {
            ctx->pc = 0x3396B8u;
            goto label_3396b8;
        }
    }
    ctx->pc = 0x33966Cu;
    // 0x33966c: 0x0  nop
    ctx->pc = 0x33966cu;
    // NOP
label_339670:
    // 0x339670: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x339670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x339674: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x339674u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x339678: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x339678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33967c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33967cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x339680: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x339680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x339684: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x339684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x339688: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x339688u;
    {
        const bool branch_taken_0x339688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x339688) {
            ctx->pc = 0x3396B8u;
            goto label_3396b8;
        }
    }
    ctx->pc = 0x339690u;
    // 0x339690: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x339690u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x339694: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x339694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x339698: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x339698u;
    {
        const bool branch_taken_0x339698 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x339698) {
            ctx->pc = 0x3396B8u;
            goto label_3396b8;
        }
    }
    ctx->pc = 0x3396A0u;
    // 0x3396a0: 0x8f848ba8  lw          $a0, -0x7458($gp)
    ctx->pc = 0x3396a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3396a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3396a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3396a8: 0x9084005b  lbu         $a0, 0x5B($a0)
    ctx->pc = 0x3396a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 91)));
    // 0x3396ac: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3396ACu;
    {
        const bool branch_taken_0x3396ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3396ac) {
            ctx->pc = 0x3396B8u;
            goto label_3396b8;
        }
    }
    ctx->pc = 0x3396B4u;
    // 0x3396b4: 0x241019d9  addiu       $s0, $zero, 0x19D9
    ctx->pc = 0x3396b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6617));
label_3396b8:
    // 0x3396b8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3396b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3396bc: 0x12030018  beq         $s0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3396BCu;
    {
        const bool branch_taken_0x3396bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3396bc) {
            ctx->pc = 0x339720u;
            goto label_339720;
        }
    }
    ctx->pc = 0x3396C4u;
    // 0x3396c4: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x3396c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x3396c8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3396c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3396cc: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x3396ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x3396d0: 0xc0ce438  jal         func_3390E0
    ctx->pc = 0x3396D0u;
    SET_GPR_U32(ctx, 31, 0x3396D8u);
    ctx->pc = 0x3396D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3396D0u;
    // 0x3396d4: 0x2406fffb  addiu       $a2, $zero, -0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3390E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3390E0u, 0x3396D0u, 0x3396D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3396D8u;
label_3396d8:
    // 0x3396d8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x3396D8u;
    {
        const bool branch_taken_0x3396d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3396d8) {
            ctx->pc = 0x339718u;
            goto label_339718;
        }
    }
    ctx->pc = 0x3396E0u;
    // 0x3396e0: 0x92220045  lbu         $v0, 0x45($s1)
    ctx->pc = 0x3396e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
    // 0x3396e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3396E4u;
    {
        const bool branch_taken_0x3396e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3396e4) {
            ctx->pc = 0x3396F8u;
            goto label_3396f8;
        }
    }
    ctx->pc = 0x3396ECu;
    // 0x3396ec: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x3396ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x3396f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3396f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3396f4: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x3396f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_3396f8:
    // 0x3396f8: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x3396f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x3396fc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3396fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339700: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x339700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339704: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x339704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x339708: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x339708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33970c: 0xc0ce420  jal         func_339080
    ctx->pc = 0x33970Cu;
    SET_GPR_U32(ctx, 31, 0x339714u);
    ctx->pc = 0x339710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33970Cu;
    // 0x339710: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339080u, 0x33970Cu, 0x339714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339714u;
label_339714:
    // 0x339714: 0x0  nop
    ctx->pc = 0x339714u;
    // NOP
label_339718:
    // 0x339718: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x339718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
    // 0x33971c: 0x0  nop
    ctx->pc = 0x33971cu;
    // NOP
label_339720:
    // 0x339720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x339720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33972c: 0x3e00008  jr          $ra
    ctx->pc = 0x33972Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33972Cu;
        // 0x339730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33972Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339734u;
}
