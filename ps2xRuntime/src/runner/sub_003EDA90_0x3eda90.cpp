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

// Function: sub_003EDA90
// Address: 0x3eda90 - 0x3eda98
void sub_003EDA90_0x3eda90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDA90_0x3eda90");
#endif

    ctx->pc = 0x3eda90u;

    // 0x3eda90: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA90u;
        // 0x3eda94: 0xa7848d28  sh          $a0, -0x72D8($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937896), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDA98u;
}
