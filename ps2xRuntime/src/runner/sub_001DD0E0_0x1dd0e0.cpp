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

// Function: sub_001DD0E0
// Address: 0x1dd0e0 - 0x1dd0f8
void sub_001DD0E0_0x1dd0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD0E0_0x1dd0e0");
#endif

    ctx->pc = 0x1dd0e0u;

    // 0x1dd0e0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1dd0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dd0e4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD0E4u;
    {
        const bool branch_taken_0x1dd0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd0e4) {
            ctx->pc = 0x1DD0F0u;
            goto label_1dd0f0;
        }
    }
    ctx->pc = 0x1DD0ECu;
    // 0x1dd0ec: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1dd0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1dd0f0:
    // 0x1dd0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD0F8u;
}
