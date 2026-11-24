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

// Function: sub_003C1780
// Address: 0x3c1780 - 0x3c178c
void sub_003C1780_0x3c1780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1780_0x3c1780");
#endif

    ctx->pc = 0x3c1780u;

    // 0x3c1780: 0xac8500a8  sw          $a1, 0xA8($a0)
    ctx->pc = 0x3c1780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
    // 0x3c1784: 0x3e00008  jr          $ra
    ctx->pc = 0x3C1784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1784u;
        // 0x3c1788: 0xac8600ac  sw          $a2, 0xAC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C178Cu;
}
