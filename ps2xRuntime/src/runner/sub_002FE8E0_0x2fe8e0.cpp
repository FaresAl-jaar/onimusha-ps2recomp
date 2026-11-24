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

// Function: sub_002FE8E0
// Address: 0x2fe8e0 - 0x2fe8f4
void sub_002FE8E0_0x2fe8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE8E0_0x2fe8e0");
#endif

    ctx->pc = 0x2fe8e0u;

    // 0x2fe8e0: 0xac850100  sw          $a1, 0x100($a0)
    ctx->pc = 0x2fe8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 5));
    // 0x2fe8e4: 0xac860104  sw          $a2, 0x104($a0)
    ctx->pc = 0x2fe8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 6));
    // 0x2fe8e8: 0xac870108  sw          $a3, 0x108($a0)
    ctx->pc = 0x2fe8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 7));
    // 0x2fe8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE8ECu;
        // 0x2fe8f0: 0xac88010c  sw          $t0, 0x10C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE8F4u;
}
