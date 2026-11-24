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

// Function: sub_001873B0
// Address: 0x1873b0 - 0x1873c0
void sub_001873B0_0x1873b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001873B0_0x1873b0");
#endif

    ctx->pc = 0x1873b0u;

    // 0x1873b0: 0xac850314  sw          $a1, 0x314($a0)
    ctx->pc = 0x1873b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 788), GPR_U32(ctx, 5));
    // 0x1873b4: 0xac860318  sw          $a2, 0x318($a0)
    ctx->pc = 0x1873b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 792), GPR_U32(ctx, 6));
    // 0x1873b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1873B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1873BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873B8u;
        // 0x1873bc: 0xac87031c  sw          $a3, 0x31C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 796), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1873B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1873C0u;
}
