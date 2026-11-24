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

// Function: sub_0022BB70
// Address: 0x22bb70 - 0x22bb7c
void sub_0022BB70_0x22bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BB70_0x22bb70");
#endif

    ctx->pc = 0x22bb70u;

    // 0x22bb70: 0xac86007c  sw          $a2, 0x7C($a0)
    ctx->pc = 0x22bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 6));
    // 0x22bb74: 0x3e00008  jr          $ra
    ctx->pc = 0x22BB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB74u;
        // 0x22bb78: 0xac850078  sw          $a1, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BB7Cu;
}
