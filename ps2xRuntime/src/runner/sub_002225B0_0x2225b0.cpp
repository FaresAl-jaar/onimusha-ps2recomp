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

// Function: sub_002225B0
// Address: 0x2225b0 - 0x2225c0
void sub_002225B0_0x2225b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002225B0_0x2225b0");
#endif

    ctx->pc = 0x2225b0u;

    // 0x2225b0: 0x5ca00001  bgtzl       $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2225B0u;
    {
        const bool branch_taken_0x2225b0 = (GPR_S64(ctx, 5) > 0);
        if (branch_taken_0x2225b0) {
            ctx->pc = 0x2225B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2225B0u;
            // 0x2225b4: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2225B8u;
            goto label_2225b8;
        }
    }
    ctx->pc = 0x2225B8u;
label_2225b8:
    // 0x2225b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2225B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2225B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2225C0u;
}
