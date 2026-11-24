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

// Function: sub_003D0140
// Address: 0x3d0140 - 0x3d0150
void sub_003D0140_0x3d0140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0140_0x3d0140");
#endif

    ctx->pc = 0x3d0140u;

    // 0x3d0140: 0xaf808cc8  sw          $zero, -0x7338($gp)
    ctx->pc = 0x3d0140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937800), GPR_U32(ctx, 0));
    // 0x3d0144: 0xaf808ccc  sw          $zero, -0x7334($gp)
    ctx->pc = 0x3d0144u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937804), GPR_U32(ctx, 0));
    // 0x3d0148: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0148u;
        // 0x3d014c: 0xaf808cd0  sw          $zero, -0x7330($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0150u;
}
