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

// Function: sub_001DFBD0
// Address: 0x1dfbd0 - 0x1dfbe8
void sub_001DFBD0_0x1dfbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFBD0_0x1dfbd0");
#endif

    ctx->pc = 0x1dfbd0u;

    // 0x1dfbd0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1dfbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dfbd4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFBD4u;
    {
        const bool branch_taken_0x1dfbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbd4) {
            ctx->pc = 0x1DFBE0u;
            goto label_1dfbe0;
        }
    }
    ctx->pc = 0x1DFBDCu;
    // 0x1dfbdc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1dfbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1dfbe0:
    // 0x1dfbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFBE8u;
}
