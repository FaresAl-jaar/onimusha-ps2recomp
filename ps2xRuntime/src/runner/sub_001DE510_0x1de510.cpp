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

// Function: sub_001DE510
// Address: 0x1de510 - 0x1de528
void sub_001DE510_0x1de510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE510_0x1de510");
#endif

    ctx->pc = 0x1de510u;

    // 0x1de510: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1de510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1de514: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DE514u;
    {
        const bool branch_taken_0x1de514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de514) {
            ctx->pc = 0x1DE520u;
            goto label_1de520;
        }
    }
    ctx->pc = 0x1DE51Cu;
    // 0x1de51c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1de51cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1de520:
    // 0x1de520: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE528u;
}
