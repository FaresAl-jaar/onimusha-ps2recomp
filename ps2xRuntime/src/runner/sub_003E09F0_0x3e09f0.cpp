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

// Function: sub_003E09F0
// Address: 0x3e09f0 - 0x3e0a00
void sub_003E09F0_0x3e09f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E09F0_0x3e09f0");
#endif

    ctx->pc = 0x3e09f0u;

    // 0x3e09f0: 0xaf808ce8  sw          $zero, -0x7318($gp)
    ctx->pc = 0x3e09f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937832), GPR_U32(ctx, 0));
    // 0x3e09f4: 0xaf808cec  sw          $zero, -0x7314($gp)
    ctx->pc = 0x3e09f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937836), GPR_U32(ctx, 0));
    // 0x3e09f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E09F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09F8u;
        // 0x3e09fc: 0xaf808cf0  sw          $zero, -0x7310($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E09F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0A00u;
}
