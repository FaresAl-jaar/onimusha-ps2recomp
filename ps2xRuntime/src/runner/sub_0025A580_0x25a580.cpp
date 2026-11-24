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

// Function: sub_0025A580
// Address: 0x25a580 - 0x25a58c
void sub_0025A580_0x25a580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A580_0x25a580");
#endif

    ctx->pc = 0x25a580u;

    // 0x25a580: 0x460e6829  min.s       $f0, $f13, $f14
    ctx->pc = 0x25a580u;
    ctx->f[0] = std::min(ctx->f[13], ctx->f[14]);
    // 0x25a584: 0x3e00008  jr          $ra
    ctx->pc = 0x25A584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A584u;
        // 0x25a588: 0x46006028  max.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A58Cu;
}
