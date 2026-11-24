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

// Function: sub_001F5C70
// Address: 0x1f5c70 - 0x1f5cc0
void sub_001F5C70_0x1f5c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5C70_0x1f5c70");
#endif

    ctx->pc = 0x1f5c70u;

    // 0x1f5c70: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1f5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1f5c74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5c78: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5C78u;
    {
        const bool branch_taken_0x1f5c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C78u;
        // 0x1f5c7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c78) {
            ctx->pc = 0x1F5C9Cu;
            goto label_1f5c9c;
        }
    }
    ctx->pc = 0x1F5C80u;
    // 0x1f5c80: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x1f5c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x1f5c84: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5C84u;
    {
        const bool branch_taken_0x1f5c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f5c84) {
            ctx->pc = 0x1F5C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5C84u;
            // 0x1f5c88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5C9Cu;
            goto label_1f5c9c;
        }
    }
    ctx->pc = 0x1F5C8Cu;
    // 0x1f5c8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f5c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f5c90: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5C90u;
    {
        const bool branch_taken_0x1f5c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1f5c90) {
            ctx->pc = 0x1F5C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5C90u;
            // 0x1f5c94: 0x8c820134  lw          $v0, 0x134($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5CA8u;
            goto label_1f5ca8;
        }
    }
    ctx->pc = 0x1F5C98u;
    // 0x1f5c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5c9c:
    // 0x1f5c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C9Cu;
        // 0x1f5ca0: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5CA4u;
    // 0x1f5ca4: 0x0  nop
    ctx->pc = 0x1f5ca4u;
    // NOP
label_1f5ca8:
    // 0x1f5ca8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5CA8u;
    {
        const bool branch_taken_0x1f5ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CA8u;
        // 0x1f5cac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ca8) {
            ctx->pc = 0x1F5CB8u;
            goto label_1f5cb8;
        }
    }
    ctx->pc = 0x1F5CB0u;
    // 0x1f5cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CB0u;
        // 0x1f5cb4: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5CB8u;
label_1f5cb8:
    // 0x1f5cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CB8u;
        // 0x1f5cbc: 0xac850038  sw          $a1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5CC0u;
}
