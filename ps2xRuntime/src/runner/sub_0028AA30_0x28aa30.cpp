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

// Function: sub_0028AA30
// Address: 0x28aa30 - 0x28aac0
void sub_0028AA30_0x28aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AA30_0x28aa30");
#endif

    switch (ctx->pc) {
        case 0x28aa68u: goto label_28aa68;
        default: break;
    }

    ctx->pc = 0x28aa30u;

    // 0x28aa30: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x28aa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x28aa34: 0x23e00  sll         $a3, $v0, 24
    ctx->pc = 0x28aa34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x28aa38: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x28aa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28aa3c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x28aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28aa40: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x28aa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x28aa44: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x28aa44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x28aa48: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x28aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x28aa4c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x28aa4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28aa50: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x28aa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x28aa54: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x28aa54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28aa58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28aa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa5c: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x28aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x28aa60: 0x246394b0  addiu       $v1, $v1, -0x6B50
    ctx->pc = 0x28aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939824));
    // 0x28aa64: 0x0  nop
    ctx->pc = 0x28aa64u;
    // NOP
label_28aa68:
    // 0x28aa68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28aa6c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28AA6Cu;
    {
        const bool branch_taken_0x28aa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aa6c) {
            ctx->pc = 0x28AAA0u;
            goto label_28aaa0;
        }
    }
    ctx->pc = 0x28AA74u;
    // 0x28aa74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28aa78: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28AA78u;
    {
        const bool branch_taken_0x28aa78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA78u;
        // 0x28aa7c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa78) {
            ctx->pc = 0x28AAA0u;
            goto label_28aaa0;
        }
    }
    ctx->pc = 0x28AA80u;
    // 0x28aa80: 0xaf848940  sw          $a0, -0x76C0($gp)
    ctx->pc = 0x28aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 4));
    // 0x28aa84: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x28aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28aa88: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x28aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x28aa8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28aa90: 0x244294b0  addiu       $v0, $v0, -0x6B50
    ctx->pc = 0x28aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939824));
    // 0x28aa94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28aa98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28AA98u;
    {
        const bool branch_taken_0x28aa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA98u;
        // 0x28aa9c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa98) {
            ctx->pc = 0x28AAB8u;
            goto label_28aab8;
        }
    }
    ctx->pc = 0x28AAA0u;
label_28aaa0:
    // 0x28aaa0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28aaa4: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x28aaa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x28aaa8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x28AAA8u;
    {
        const bool branch_taken_0x28aaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAA8u;
        // 0x28aaac: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aaa8) {
            ctx->pc = 0x28AA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28aa68;
        }
    }
    ctx->pc = 0x28AAB0u;
    // 0x28aab0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28aab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aab4: 0x0  nop
    ctx->pc = 0x28aab4u;
    // NOP
label_28aab8:
    // 0x28aab8: 0x3e00008  jr          $ra
    ctx->pc = 0x28AAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AAC0u;
}
