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

// Function: sub_001DDE80
// Address: 0x1dde80 - 0x1dde98
void sub_001DDE80_0x1dde80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDE80_0x1dde80");
#endif

    ctx->pc = 0x1dde80u;

    // 0x1dde80: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1dde80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dde84: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDE84u;
    {
        const bool branch_taken_0x1dde84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dde84) {
            ctx->pc = 0x1DDE90u;
            goto label_1dde90;
        }
    }
    ctx->pc = 0x1DDE8Cu;
    // 0x1dde8c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1dde8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1dde90:
    // 0x1dde90: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDE98u;
}
