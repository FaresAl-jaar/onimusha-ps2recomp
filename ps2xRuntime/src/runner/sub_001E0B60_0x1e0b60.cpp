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

// Function: sub_001E0B60
// Address: 0x1e0b60 - 0x1e0b78
void sub_001E0B60_0x1e0b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0B60_0x1e0b60");
#endif

    ctx->pc = 0x1e0b60u;

    // 0x1e0b60: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e0b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e0b64: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0B64u;
    {
        const bool branch_taken_0x1e0b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0b64) {
            ctx->pc = 0x1E0B70u;
            goto label_1e0b70;
        }
    }
    ctx->pc = 0x1E0B6Cu;
    // 0x1e0b6c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1e0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1e0b70:
    // 0x1e0b70: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0B78u;
}
