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

// Function: sub_00349B10
// Address: 0x349b10 - 0x349bb0
void sub_00349B10_0x349b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349B10_0x349b10");
#endif

    switch (ctx->pc) {
        case 0x349b30u: goto label_349b30;
        case 0x349b40u: goto label_349b40;
        case 0x349b78u: goto label_349b78;
        case 0x349b88u: goto label_349b88;
        default: break;
    }

    ctx->pc = 0x349b10u;

    // 0x349b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x349b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x349b14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x349b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x349b18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x349b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x349b1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x349b20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x349b20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349b24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x349b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x349b28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x349b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349b2c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x349b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_349b30:
    // 0x349b30: 0x96050044  lhu         $a1, 0x44($s0)
    ctx->pc = 0x349b30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x349b34: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x349b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x349b38: 0xc0bce3c  jal         func_2F38F0
    ctx->pc = 0x349B38u;
    SET_GPR_U32(ctx, 31, 0x349B40u);
    ctx->pc = 0x349B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349B38u;
    // 0x349b3c: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38F0u, 0x349B38u, 0x349B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349B40u;
label_349b40:
    // 0x349b40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x349B40u;
    {
        const bool branch_taken_0x349b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349b40) {
            ctx->pc = 0x349B58u;
            goto label_349b58;
        }
    }
    ctx->pc = 0x349B48u;
    // 0x349b48: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x349b48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x349b4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x349B4Cu;
    {
        const bool branch_taken_0x349b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B4Cu;
        // 0x349b50: 0xa602004e  sh          $v0, 0x4E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349b4c) {
            ctx->pc = 0x349B60u;
            goto label_349b60;
        }
    }
    ctx->pc = 0x349B54u;
    // 0x349b54: 0x0  nop
    ctx->pc = 0x349b54u;
    // NOP
label_349b58:
    // 0x349b58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x349b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x349b5c: 0xa602004e  sh          $v0, 0x4E($s0)
    ctx->pc = 0x349b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 2));
label_349b60:
    // 0x349b60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x349b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x349b64: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x349b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x349b68: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x349B68u;
    {
        const bool branch_taken_0x349b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x349B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B68u;
        // 0x349b6c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349b68) {
            ctx->pc = 0x349B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349b30;
        }
    }
    ctx->pc = 0x349B70u;
    // 0x349b70: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x349b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349b74: 0x0  nop
    ctx->pc = 0x349b74u;
    // NOP
label_349b78:
    // 0x349b78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x349b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349b7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x349b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349b80: 0xc0d264c  jal         func_349930
    ctx->pc = 0x349B80u;
    SET_GPR_U32(ctx, 31, 0x349B88u);
    ctx->pc = 0x349B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349B80u;
    // 0x349b84: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x349930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349930u, 0x349B80u, 0x349B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349B88u;
label_349b88:
    // 0x349b88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x349b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x349b8c: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x349b8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x349b90: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x349B90u;
    {
        const bool branch_taken_0x349b90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x349b90) {
            ctx->pc = 0x349B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349b78;
        }
    }
    ctx->pc = 0x349B98u;
    // 0x349b98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x349b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x349b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x349BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349BA8u;
        // 0x349bac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349BB0u;
}
