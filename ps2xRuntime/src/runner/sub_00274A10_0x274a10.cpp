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

// Function: sub_00274A10
// Address: 0x274a10 - 0x274ad8
void sub_00274A10_0x274a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274A10_0x274a10");
#endif

    switch (ctx->pc) {
        case 0x274a40u: goto label_274a40;
        case 0x274a50u: goto label_274a50;
        case 0x274a60u: goto label_274a60;
        case 0x274a80u: goto label_274a80;
        case 0x274a90u: goto label_274a90;
        case 0x274abcu: goto label_274abc;
        default: break;
    }

    ctx->pc = 0x274a10u;

    // 0x274a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x274a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x274a14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x274a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x274a18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x274a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x274a1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x274a20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x274a20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274a28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x274a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a2c: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x274a2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x274a30: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x274a30u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x274a34: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x274a34u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x274a38: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x274A38u;
    SET_GPR_U32(ctx, 31, 0x274A40u);
    ctx->pc = 0x274A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A38u;
    // 0x274a3c: 0x2404009b  addiu       $a0, $zero, 0x9B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x274A38u, 0x274A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A40u;
label_274a40:
    // 0x274a40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x274A40u;
    {
        const bool branch_taken_0x274a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A40u;
        // 0x274a44: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a40) {
            ctx->pc = 0x274A58u;
            goto label_274a58;
        }
    }
    ctx->pc = 0x274A48u;
    // 0x274a48: 0xc09d24c  jal         func_274930
    ctx->pc = 0x274A48u;
    SET_GPR_U32(ctx, 31, 0x274A50u);
    ctx->pc = 0x274A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A48u;
    // 0x274a4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274930u, 0x274A48u, 0x274A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A50u;
label_274a50:
    // 0x274a50: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x274A50u;
    {
        const bool branch_taken_0x274a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a50) {
            ctx->pc = 0x274AC0u;
            goto label_274ac0;
        }
    }
    ctx->pc = 0x274A58u;
label_274a58:
    // 0x274a58: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x274a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x274a5c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x274a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274a60:
    // 0x274a60: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x274a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x274a64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x274A64u;
    {
        const bool branch_taken_0x274a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a64) {
            ctx->pc = 0x274A98u;
            goto label_274a98;
        }
    }
    ctx->pc = 0x274A6Cu;
    // 0x274a6c: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x274a6cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x274a70: 0x2404009b  addiu       $a0, $zero, 0x9B
    ctx->pc = 0x274a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x274a74: 0x90470003  lbu         $a3, 0x3($v0)
    ctx->pc = 0x274a74u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x274a78: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x274A78u;
    SET_GPR_U32(ctx, 31, 0x274A80u);
    ctx->pc = 0x274A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A78u;
    // 0x274a7c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x274A78u, 0x274A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A80u;
label_274a80:
    // 0x274a80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x274A80u;
    {
        const bool branch_taken_0x274a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A80u;
        // 0x274a84: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a80) {
            ctx->pc = 0x274A98u;
            goto label_274a98;
        }
    }
    ctx->pc = 0x274A88u;
    // 0x274a88: 0xc09d24c  jal         func_274930
    ctx->pc = 0x274A88u;
    SET_GPR_U32(ctx, 31, 0x274A90u);
    ctx->pc = 0x274A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A88u;
    // 0x274a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274930u, 0x274A88u, 0x274A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A90u;
label_274a90:
    // 0x274a90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274A90u;
    {
        const bool branch_taken_0x274a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a90) {
            ctx->pc = 0x274AC0u;
            goto label_274ac0;
        }
    }
    ctx->pc = 0x274A98u;
label_274a98:
    // 0x274a98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x274a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x274a9c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x274a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x274aa0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x274AA0u;
    {
        const bool branch_taken_0x274aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AA0u;
        // 0x274aa4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274aa0) {
            ctx->pc = 0x274A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274a60;
        }
    }
    ctx->pc = 0x274AA8u;
    // 0x274aa8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x274aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x274aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x274aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ab0: 0x24427580  addiu       $v0, $v0, 0x7580
    ctx->pc = 0x274ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30080));
    // 0x274ab4: 0xc09d24c  jal         func_274930
    ctx->pc = 0x274AB4u;
    SET_GPR_U32(ctx, 31, 0x274ABCu);
    ctx->pc = 0x274AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274AB4u;
    // 0x274ab8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274930u, 0x274AB4u, 0x274ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274ABCu;
label_274abc:
    // 0x274abc: 0x0  nop
    ctx->pc = 0x274abcu;
    // NOP
label_274ac0:
    // 0x274ac0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x274ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274ac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x274ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x274AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AD0u;
        // 0x274ad4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274AD8u;
}
