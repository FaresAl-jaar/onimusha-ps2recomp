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

// Function: sub_001A5F50
// Address: 0x1a5f50 - 0x1a5f80
void sub_001A5F50_0x1a5f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5F50_0x1a5f50");
#endif

    ctx->pc = 0x1a5f50u;

    // 0x1a5f50: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1a5f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1a5f54: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1a5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1a5f58: 0xac82783c  sw          $v0, 0x783C($a0)
    ctx->pc = 0x1a5f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30780), GPR_U32(ctx, 2));
    // 0x1a5f5c: 0xac837834  sw          $v1, 0x7834($a0)
    ctx->pc = 0x1a5f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30772), GPR_U32(ctx, 3));
    // 0x1a5f60: 0x8c827838  lw          $v0, 0x7838($a0)
    ctx->pc = 0x1a5f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30776)));
    // 0x1a5f64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5F64u;
    {
        const bool branch_taken_0x1a5f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f64) {
            ctx->pc = 0x1A5F78u;
            goto label_1a5f78;
        }
    }
    ctx->pc = 0x1A5F6Cu;
    // 0x1a5f6c: 0x8c827834  lw          $v0, 0x7834($a0)
    ctx->pc = 0x1a5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30772)));
    // 0x1a5f70: 0xac827838  sw          $v0, 0x7838($a0)
    ctx->pc = 0x1a5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30776), GPR_U32(ctx, 2));
    // 0x1a5f74: 0x0  nop
    ctx->pc = 0x1a5f74u;
    // NOP
label_1a5f78:
    // 0x1a5f78: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F78u;
        // 0x1a5f7c: 0x8c827834  lw          $v0, 0x7834($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30772)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5F80u;
}
