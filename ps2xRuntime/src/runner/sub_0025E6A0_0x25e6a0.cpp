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

// Function: sub_0025E6A0
// Address: 0x25e6a0 - 0x25e6b4
void sub_0025E6A0_0x25e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E6A0_0x25e6a0");
#endif

    ctx->pc = 0x25e6a0u;

    // 0x25e6a0: 0xa0850014  sb          $a1, 0x14($a0)
    ctx->pc = 0x25e6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 5));
    // 0x25e6a4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x25e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x25e6a8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x25e6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x25e6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x25E6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6ACu;
        // 0x25e6b0: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E6B4u;
}
