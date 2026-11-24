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

// Function: sub_0036FE20
// Address: 0x36fe20 - 0x36fe34
void sub_0036FE20_0x36fe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FE20_0x36fe20");
#endif

    ctx->pc = 0x36fe20u;

    // 0x36fe20: 0xa0850115  sb          $a1, 0x115($a0)
    ctx->pc = 0x36fe20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 277), (uint8_t)GPR_U32(ctx, 5));
    // 0x36fe24: 0xa0860116  sb          $a2, 0x116($a0)
    ctx->pc = 0x36fe24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 278), (uint8_t)GPR_U32(ctx, 6));
    // 0x36fe28: 0xa0870117  sb          $a3, 0x117($a0)
    ctx->pc = 0x36fe28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 279), (uint8_t)GPR_U32(ctx, 7));
    // 0x36fe2c: 0x3e00008  jr          $ra
    ctx->pc = 0x36FE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE2Cu;
        // 0x36fe30: 0xa0800118  sb          $zero, 0x118($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 280), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FE34u;
}
