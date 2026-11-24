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

// Function: sub_003D35D0
// Address: 0x3d35d0 - 0x3d35e4
void sub_003D35D0_0x3d35d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D35D0_0x3d35d0");
#endif

    ctx->pc = 0x3d35d0u;

    // 0x3d35d0: 0xaf808cd4  sw          $zero, -0x732C($gp)
    ctx->pc = 0x3d35d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937812), GPR_U32(ctx, 0));
    // 0x3d35d4: 0xaf808cd8  sw          $zero, -0x7328($gp)
    ctx->pc = 0x3d35d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937816), GPR_U32(ctx, 0));
    // 0x3d35d8: 0xaf808cdc  sw          $zero, -0x7324($gp)
    ctx->pc = 0x3d35d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937820), GPR_U32(ctx, 0));
    // 0x3d35dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D35DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D35DCu;
        // 0x3d35e0: 0xa7808ce0  sh          $zero, -0x7320($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937824), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D35DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D35E4u;
}
