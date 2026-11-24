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

// Function: sub_001E08B0
// Address: 0x1e08b0 - 0x1e08c8
void sub_001E08B0_0x1e08b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E08B0_0x1e08b0");
#endif

    ctx->pc = 0x1e08b0u;

    // 0x1e08b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e08b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e08b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E08B4u;
    {
        const bool branch_taken_0x1e08b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e08b4) {
            ctx->pc = 0x1E08C0u;
            goto label_1e08c0;
        }
    }
    ctx->pc = 0x1E08BCu;
    // 0x1e08bc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1e08bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1e08c0:
    // 0x1e08c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E08C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E08C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E08C8u;
}
