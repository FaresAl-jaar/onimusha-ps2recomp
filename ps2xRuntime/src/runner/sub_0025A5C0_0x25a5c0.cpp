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

// Function: sub_0025A5C0
// Address: 0x25a5c0 - 0x25a5c8
void sub_0025A5C0_0x25a5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A5C0_0x25a5c0");
#endif

    ctx->pc = 0x25a5c0u;

    // 0x25a5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5C0u;
        // 0x25a5c4: 0x708510e8  pminw       $v0, $a0, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A5C8u;
}
