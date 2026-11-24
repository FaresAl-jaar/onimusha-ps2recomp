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

// Function: sub_001526A0
// Address: 0x1526a0 - 0x1526ac
void sub_001526A0_0x1526a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001526A0_0x1526a0");
#endif

    ctx->pc = 0x1526a0u;

    // 0x1526a0: 0xf  sync
    ctx->pc = 0x1526a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1526a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1526A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1526A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526A4u;
        // 0x1526a8: 0x42000038  ei (Delay Slot)
        ctx->cop0_status |= 0x10000; // Enable interrupts
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1526A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1526ACu;
}
