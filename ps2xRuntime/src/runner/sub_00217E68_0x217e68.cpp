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

// Function: sub_00217E68
// Address: 0x217e68 - 0x217eb8
void sub_00217E68_0x217e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217E68_0x217e68");
#endif

    ctx->pc = 0x217e68u;

    // 0x217e68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x217e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217e6c: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x217E6Cu;
    {
        const bool branch_taken_0x217e6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x217E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E6Cu;
        // 0x217e70: 0x24840a0c  addiu       $a0, $a0, 0xA0C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217e6c) {
            ctx->pc = 0x217EA8u;
            goto label_217ea8;
        }
    }
    ctx->pc = 0x217E74u;
    // 0x217e74: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x217e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x217e78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x217E78u;
    {
        const bool branch_taken_0x217e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E78u;
        // 0x217e7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217e78) {
            ctx->pc = 0x217E98u;
            goto label_217e98;
        }
    }
    ctx->pc = 0x217E80u;
    // 0x217e80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217e84: 0x50a20009  beql        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x217E84u;
    {
        const bool branch_taken_0x217e84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x217e84) {
            ctx->pc = 0x217E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217E84u;
            // 0x217e88: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217EACu;
            goto label_217eac;
        }
    }
    ctx->pc = 0x217E8Cu;
    // 0x217e8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x217E8Cu;
    {
        const bool branch_taken_0x217e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217e8c) {
            ctx->pc = 0x217EB0u;
            goto label_217eb0;
        }
    }
    ctx->pc = 0x217E94u;
    // 0x217e94: 0x0  nop
    ctx->pc = 0x217e94u;
    // NOP
label_217e98:
    // 0x217e98: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217E98u;
    {
        const bool branch_taken_0x217e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x217e98) {
            ctx->pc = 0x217E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217E98u;
            // 0x217e9c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217EACu;
            goto label_217eac;
        }
    }
    ctx->pc = 0x217EA0u;
    // 0x217ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x217EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EA0u;
        // 0x217ea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217EA8u;
label_217ea8:
    // 0x217ea8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x217ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_217eac:
    // 0x217eac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x217eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_217eb0:
    // 0x217eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x217EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217EB8u;
}
