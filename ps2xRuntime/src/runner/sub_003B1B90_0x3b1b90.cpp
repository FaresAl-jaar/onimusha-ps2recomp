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

// Function: sub_003B1B90
// Address: 0x3b1b90 - 0x3b1bc0
void sub_003B1B90_0x3b1b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1B90_0x3b1b90");
#endif

    ctx->pc = 0x3b1b90u;

    // 0x3b1b90: 0x8f848c7c  lw          $a0, -0x7384($gp)
    ctx->pc = 0x3b1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
    // 0x3b1b94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b1b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b1b98: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B1B98u;
    {
        const bool branch_taken_0x3b1b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B98u;
        // 0x3b1b9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1b98) {
            ctx->pc = 0x3B1BB0u;
            goto label_3b1bb0;
        }
    }
    ctx->pc = 0x3B1BA0u;
    // 0x3b1ba0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1BA0u;
    {
        const bool branch_taken_0x3b1ba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b1ba0) {
            ctx->pc = 0x3B1BB0u;
            goto label_3b1bb0;
        }
    }
    ctx->pc = 0x3B1BA8u;
    // 0x3b1ba8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1BA8u;
    {
        const bool branch_taken_0x3b1ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1ba8) {
            ctx->pc = 0x3B1BB8u;
            goto label_3b1bb8;
        }
    }
    ctx->pc = 0x3B1BB0u;
label_3b1bb0:
    // 0x3b1bb0: 0xaf848c84  sw          $a0, -0x737C($gp)
    ctx->pc = 0x3b1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937732), GPR_U32(ctx, 4));
    // 0x3b1bb4: 0x0  nop
    ctx->pc = 0x3b1bb4u;
    // NOP
label_3b1bb8:
    // 0x3b1bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1BC0u;
}
