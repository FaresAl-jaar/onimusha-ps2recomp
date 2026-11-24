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

// Function: sub_0024B1A8
// Address: 0x24b1a8 - 0x24b1b4
void sub_0024B1A8_0x24b1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B1A8_0x24b1a8");
#endif

    ctx->pc = 0x24b1a8u;

    // 0x24b1a8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24b1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x24B1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1ACu;
        // 0x24b1b0: 0xac441114  sw          $a0, 0x1114($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4372), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B1B4u;
}
