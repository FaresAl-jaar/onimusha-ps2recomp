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

// Function: sub_003D22B0
// Address: 0x3d22b0 - 0x3d22bc
void sub_003D22B0_0x3d22b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D22B0_0x3d22b0");
#endif

    ctx->pc = 0x3d22b0u;

    // 0x3d22b0: 0xa0852b20  sb          $a1, 0x2B20($a0)
    ctx->pc = 0x3d22b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11040), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d22b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D22B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D22B4u;
        // 0x3d22b8: 0xa08529d1  sb          $a1, 0x29D1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10705), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D22B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D22BCu;
}
