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

// Function: sub_002E1E70
// Address: 0x2e1e70 - 0x2e1e90
void sub_002E1E70_0x2e1e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1E70_0x2e1e70");
#endif

    ctx->pc = 0x2e1e70u;

    // 0x2e1e70: 0x8f848ab0  lw          $a0, -0x7550($gp)
    ctx->pc = 0x2e1e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e1e74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1E74u;
    {
        const bool branch_taken_0x2e1e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E74u;
        // 0x2e1e78: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1e74) {
            ctx->pc = 0x2E1E88u;
            goto label_2e1e88;
        }
    }
    ctx->pc = 0x2E1E7Cu;
    // 0x2e1e7c: 0xa0830031  sb          $v1, 0x31($a0)
    ctx->pc = 0x2e1e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1e80: 0xaf808ab0  sw          $zero, -0x7550($gp)
    ctx->pc = 0x2e1e80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937264), GPR_U32(ctx, 0));
    // 0x2e1e84: 0x0  nop
    ctx->pc = 0x2e1e84u;
    // NOP
label_2e1e88:
    // 0x2e1e88: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1E90u;
}
