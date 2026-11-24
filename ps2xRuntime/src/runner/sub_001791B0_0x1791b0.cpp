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

// Function: sub_001791B0
// Address: 0x1791b0 - 0x1791bc
void sub_001791B0_0x1791b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001791B0_0x1791b0");
#endif

    ctx->pc = 0x1791b0u;

    // 0x1791b0: 0xa4852de8  sh          $a1, 0x2DE8($a0)
    ctx->pc = 0x1791b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11752), (uint16_t)GPR_U32(ctx, 5));
    // 0x1791b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1791B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1791B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791B4u;
        // 0x1791b8: 0xa4862dea  sh          $a2, 0x2DEA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11754), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1791B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1791BCu;
}
