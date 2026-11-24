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

// Function: sub_0037A9D0
// Address: 0x37a9d0 - 0x37a9e4
void sub_0037A9D0_0x37a9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A9D0_0x37a9d0");
#endif

    ctx->pc = 0x37a9d0u;

    // 0x37a9d0: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x37a9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x37a9d4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x37a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x37a9d8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x37a9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x37a9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x37A9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9DCu;
        // 0x37a9e0: 0xac830148  sw          $v1, 0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A9E4u;
}
