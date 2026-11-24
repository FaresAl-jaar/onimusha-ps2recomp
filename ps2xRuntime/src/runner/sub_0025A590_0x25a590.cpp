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

// Function: sub_0025A590
// Address: 0x25a590 - 0x25a598
void sub_0025A590_0x25a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A590_0x25a590");
#endif

    ctx->pc = 0x25a590u;

    // 0x25a590: 0x3e00008  jr          $ra
    ctx->pc = 0x25A590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A590u;
        // 0x25a594: 0x460d6029  min.s       $f0, $f12, $f13 (Delay Slot)
        ctx->f[0] = std::min(ctx->f[12], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A598u;
}
