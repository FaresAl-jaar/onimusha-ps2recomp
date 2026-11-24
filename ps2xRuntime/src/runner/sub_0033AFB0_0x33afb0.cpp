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

// Function: sub_0033AFB0
// Address: 0x33afb0 - 0x33afc4
void sub_0033AFB0_0x33afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AFB0_0x33afb0");
#endif

    ctx->pc = 0x33afb0u;

    // 0x33afb0: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x33afb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x33afb4: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x33afb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x33afb8: 0xa0870009  sb          $a3, 0x9($a0)
    ctx->pc = 0x33afb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x33afbc: 0x3e00008  jr          $ra
    ctx->pc = 0x33AFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFBCu;
        // 0x33afc0: 0xa080000a  sb          $zero, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AFC4u;
}
