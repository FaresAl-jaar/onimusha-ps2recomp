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

// Function: sub_003D64E0
// Address: 0x3d64e0 - 0x3d64fc
void sub_003D64E0_0x3d64e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D64E0_0x3d64e0");
#endif

    ctx->pc = 0x3d64e0u;

    // 0x3d64e0: 0xa4802bac  sh          $zero, 0x2BAC($a0)
    ctx->pc = 0x3d64e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11180), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d64e4: 0xac802b98  sw          $zero, 0x2B98($a0)
    ctx->pc = 0x3d64e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11160), GPR_U32(ctx, 0));
    // 0x3d64e8: 0xac802b9c  sw          $zero, 0x2B9C($a0)
    ctx->pc = 0x3d64e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11164), GPR_U32(ctx, 0));
    // 0x3d64ec: 0xac802ba0  sw          $zero, 0x2BA0($a0)
    ctx->pc = 0x3d64ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11168), GPR_U32(ctx, 0));
    // 0x3d64f0: 0xac802ba4  sw          $zero, 0x2BA4($a0)
    ctx->pc = 0x3d64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11172), GPR_U32(ctx, 0));
    // 0x3d64f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D64F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64F4u;
        // 0x3d64f8: 0xac802ba8  sw          $zero, 0x2BA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D64F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D64FCu;
}
