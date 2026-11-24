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

// Function: sub_0036FAA0
// Address: 0x36faa0 - 0x36fab0
void sub_0036FAA0_0x36faa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FAA0_0x36faa0");
#endif

    ctx->pc = 0x36faa0u;

    // 0x36faa0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36faa4: 0xa0830020  sb          $v1, 0x20($a0)
    ctx->pc = 0x36faa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x36faa8: 0x3e00008  jr          $ra
    ctx->pc = 0x36FAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FAA8u;
        // 0x36faac: 0xa0800021  sb          $zero, 0x21($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FAB0u;
}
