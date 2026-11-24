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

// Function: sub_002D1650
// Address: 0x2d1650 - 0x2d165c
void sub_002D1650_0x2d1650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1650_0x2d1650");
#endif

    ctx->pc = 0x2d1650u;

    // 0x2d1650: 0xa0a0002c  sb          $zero, 0x2C($a1)
    ctx->pc = 0x2d1650u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1654: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1654u;
        // 0x2d1658: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D165Cu;
}
