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

// Function: sub_003C7A40
// Address: 0x3c7a40 - 0x3c7a50
void sub_003C7A40_0x3c7a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7A40_0x3c7a40");
#endif

    ctx->pc = 0x3c7a40u;

    // 0x3c7a40: 0xaf808cb0  sw          $zero, -0x7350($gp)
    ctx->pc = 0x3c7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 0));
    // 0x3c7a44: 0xaf808cb4  sw          $zero, -0x734C($gp)
    ctx->pc = 0x3c7a44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 0));
    // 0x3c7a48: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A48u;
        // 0x3c7a4c: 0xaf808cb8  sw          $zero, -0x7348($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7A50u;
}
