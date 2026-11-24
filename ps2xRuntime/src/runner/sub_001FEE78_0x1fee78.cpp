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

// Function: sub_001FEE78
// Address: 0x1fee78 - 0x1feea0
void sub_001FEE78_0x1fee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEE78_0x1fee78");
#endif

    ctx->pc = 0x1fee78u;

    // 0x1fee78: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEE78u;
    {
        const bool branch_taken_0x1fee78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE78u;
        // 0x1fee7c: 0x248403ec  addiu       $a0, $a0, 0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1004));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee78) {
            ctx->pc = 0x1FEE88u;
            goto label_1fee88;
        }
    }
    ctx->pc = 0x1FEE80u;
    // 0x1fee80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fee84: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1fee84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1fee88:
    // 0x1fee88: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEE88u;
    {
        const bool branch_taken_0x1fee88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee88) {
            ctx->pc = 0x1FEE98u;
            goto label_1fee98;
        }
    }
    ctx->pc = 0x1FEE90u;
    // 0x1fee90: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fee90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fee94: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1fee94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1fee98:
    // 0x1fee98: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEEA0u;
}
