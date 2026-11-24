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

// Function: sub_002D95E0
// Address: 0x2d95e0 - 0x2d95f0
void sub_002D95E0_0x2d95e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D95E0_0x2d95e0");
#endif

    ctx->pc = 0x2d95e0u;

    // 0x2d95e0: 0xa4850054  sh          $a1, 0x54($a0)
    ctx->pc = 0x2d95e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d95e4: 0xa4860058  sh          $a2, 0x58($a0)
    ctx->pc = 0x2d95e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 6));
    // 0x2d95e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D95E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D95ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95E8u;
        // 0x2d95ec: 0xa4870056  sh          $a3, 0x56($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D95E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D95F0u;
}
