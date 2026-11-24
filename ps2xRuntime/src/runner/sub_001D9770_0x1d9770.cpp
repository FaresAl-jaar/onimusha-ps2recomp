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

// Function: sub_001D9770
// Address: 0x1d9770 - 0x1d977c
void sub_001D9770_0x1d9770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9770_0x1d9770");
#endif

    ctx->pc = 0x1d9770u;

    // 0x1d9770: 0x460e6029  min.s       $f0, $f12, $f14
    ctx->pc = 0x1d9770u;
    ctx->f[0] = std::min(ctx->f[12], ctx->f[14]);
    // 0x1d9774: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9774u;
        // 0x1d9778: 0x46006828  max.s       $f0, $f13, $f0 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D977Cu;
}
