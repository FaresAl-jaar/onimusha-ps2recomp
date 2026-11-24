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

// Function: sub_002D0F20
// Address: 0x2d0f20 - 0x2d0fcc
void sub_002D0F20_0x2d0f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0F20_0x2d0f20");
#endif

    switch (ctx->pc) {
        case 0x2d0f30u: goto label_2d0f30;
        default: break;
    }

    ctx->pc = 0x2d0f20u;

    // 0x2d0f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0f28: 0xc0b4370  jal         func_2D0DC0
    ctx->pc = 0x2D0F28u;
    SET_GPR_U32(ctx, 31, 0x2D0F30u);
    ctx->pc = 0x2D0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DC0u, 0x2D0F28u, 0x2D0F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0F30u;
label_2d0f30:
    // 0x2d0f30: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D0F30u;
    {
        const bool branch_taken_0x2d0f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F30u;
        // 0x2d0f34: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f30) {
            ctx->pc = 0x2D0FB8u;
            goto label_2d0fb8;
        }
    }
    ctx->pc = 0x2D0F38u;
    // 0x2d0f38: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d0f3c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0F3Cu;
    {
        const bool branch_taken_0x2d0f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d0f3c) {
            ctx->pc = 0x2D0F50u;
            goto label_2d0f50;
        }
    }
    ctx->pc = 0x2D0F44u;
    // 0x2d0f44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2D0F44u;
    {
        const bool branch_taken_0x2d0f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F44u;
        // 0x2d0f48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f44) {
            ctx->pc = 0x2D0F98u;
            goto label_2d0f98;
        }
    }
    ctx->pc = 0x2D0F4Cu;
    // 0x2d0f4c: 0x0  nop
    ctx->pc = 0x2d0f4cu;
    // NOP
label_2d0f50:
    // 0x2d0f50: 0x28620021  slti        $v0, $v1, 0x21
    ctx->pc = 0x2d0f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2d0f54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0F54u;
    {
        const bool branch_taken_0x2d0f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F54u;
        // 0x2d0f58: 0x28610025  slti        $at, $v1, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)37) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f54) {
            ctx->pc = 0x2D0F70u;
            goto label_2d0f70;
        }
    }
    ctx->pc = 0x2D0F5Cu;
    // 0x2d0f5c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0F5Cu;
    {
        const bool branch_taken_0x2d0f5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0f5c) {
            ctx->pc = 0x2D0F70u;
            goto label_2d0f70;
        }
    }
    ctx->pc = 0x2D0F64u;
    // 0x2d0f64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D0F64u;
    {
        const bool branch_taken_0x2d0f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F64u;
        // 0x2d0f68: 0x3063000f  andi        $v1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f64) {
            ctx->pc = 0x2D0F98u;
            goto label_2d0f98;
        }
    }
    ctx->pc = 0x2D0F6Cu;
    // 0x2d0f6c: 0x0  nop
    ctx->pc = 0x2d0f6cu;
    // NOP
label_2d0f70:
    // 0x2d0f70: 0x28620018  slti        $v0, $v1, 0x18
    ctx->pc = 0x2d0f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2d0f74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0F74u;
    {
        const bool branch_taken_0x2d0f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F74u;
        // 0x2d0f78: 0x2861001d  slti        $at, $v1, 0x1D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)29) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f74) {
            ctx->pc = 0x2D0F90u;
            goto label_2d0f90;
        }
    }
    ctx->pc = 0x2D0F7Cu;
    // 0x2d0f7c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0F7Cu;
    {
        const bool branch_taken_0x2d0f7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0f7c) {
            ctx->pc = 0x2D0F90u;
            goto label_2d0f90;
        }
    }
    ctx->pc = 0x2D0F84u;
    // 0x2d0f84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0F84u;
    {
        const bool branch_taken_0x2d0f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F84u;
        // 0x2d0f88: 0x2463ffe8  addiu       $v1, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f84) {
            ctx->pc = 0x2D0F98u;
            goto label_2d0f98;
        }
    }
    ctx->pc = 0x2D0F8Cu;
    // 0x2d0f8c: 0x0  nop
    ctx->pc = 0x2d0f8cu;
    // NOP
label_2d0f90:
    // 0x2d0f90: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2d0f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d0f94: 0x0  nop
    ctx->pc = 0x2d0f94u;
    // NOP
label_2d0f98:
    // 0x2d0f98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0f9c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2d0f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0fa0: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x2d0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x2d0fa4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0fa8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2d0fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d0fac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d0facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0fb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0FB0u;
    {
        const bool branch_taken_0x2d0fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FB0u;
        // 0x2d0fb4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0fb0) {
            ctx->pc = 0x2D0FC0u;
            goto label_2d0fc0;
        }
    }
    ctx->pc = 0x2D0FB8u;
label_2d0fb8:
    // 0x2d0fb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0fbc: 0x0  nop
    ctx->pc = 0x2d0fbcu;
    // NOP
label_2d0fc0:
    // 0x2d0fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FC4u;
        // 0x2d0fc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0FCCu;
}
