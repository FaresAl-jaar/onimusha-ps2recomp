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

// Function: sub_001E0610
// Address: 0x1e0610 - 0x1e0628
void sub_001E0610_0x1e0610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0610_0x1e0610");
#endif

    ctx->pc = 0x1e0610u;

    // 0x1e0610: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e0610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e0614: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0614u;
    {
        const bool branch_taken_0x1e0614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0614) {
            ctx->pc = 0x1E0620u;
            goto label_1e0620;
        }
    }
    ctx->pc = 0x1E061Cu;
    // 0x1e061c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1e061cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1e0620:
    // 0x1e0620: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0628u;
}
