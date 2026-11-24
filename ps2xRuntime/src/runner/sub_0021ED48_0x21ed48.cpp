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

// Function: sub_0021ED48
// Address: 0x21ed48 - 0x21ed74
void sub_0021ED48_0x21ed48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021ED48_0x21ed48");
#endif

    ctx->pc = 0x21ed48u;

    // 0x21ed48: 0x8c8336b0  lw          $v1, 0x36B0($a0)
    ctx->pc = 0x21ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14000)));
    // 0x21ed4c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21ED4Cu;
    {
        const bool branch_taken_0x21ed4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ed4c) {
            ctx->pc = 0x21ED6Cu;
            goto label_21ed6c;
        }
    }
    ctx->pc = 0x21ED54u;
    // 0x21ed54: 0x8c620db8  lw          $v0, 0xDB8($v1)
    ctx->pc = 0x21ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3512)));
    // 0x21ed58: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x21ED58u;
    {
        const bool branch_taken_0x21ed58 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x21ed58) {
            ctx->pc = 0x21ED5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21ED58u;
            // 0x21ed5c: 0xac650db8  sw          $a1, 0xDB8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 3512), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21ED60u;
            goto label_21ed60;
        }
    }
    ctx->pc = 0x21ED60u;
label_21ed60:
    // 0x21ed60: 0x8c620dbc  lw          $v0, 0xDBC($v1)
    ctx->pc = 0x21ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3516)));
    // 0x21ed64: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x21ED64u;
    {
        const bool branch_taken_0x21ed64 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x21ed64) {
            ctx->pc = 0x21ED68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21ED64u;
            // 0x21ed68: 0xac660dbc  sw          $a2, 0xDBC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 3516), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21ED6Cu;
            goto label_21ed6c;
        }
    }
    ctx->pc = 0x21ED6Cu;
label_21ed6c:
    // 0x21ed6c: 0x3e00008  jr          $ra
    ctx->pc = 0x21ED6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ED6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21ED74u;
}
