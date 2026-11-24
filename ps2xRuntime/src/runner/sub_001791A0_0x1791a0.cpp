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

// Function: sub_001791A0
// Address: 0x1791a0 - 0x1791ac
void sub_001791A0_0x1791a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001791A0_0x1791a0");
#endif

    ctx->pc = 0x1791a0u;

    // 0x1791a0: 0xa4852de4  sh          $a1, 0x2DE4($a0)
    ctx->pc = 0x1791a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11748), (uint16_t)GPR_U32(ctx, 5));
    // 0x1791a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1791A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1791A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791A4u;
        // 0x1791a8: 0xa4862de6  sh          $a2, 0x2DE6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11750), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1791A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1791ACu;
}
