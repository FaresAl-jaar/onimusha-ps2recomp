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

// Function: sub_003C5810
// Address: 0x3c5810 - 0x3c5824
void sub_003C5810_0x3c5810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5810_0x3c5810");
#endif

    ctx->pc = 0x3c5810u;

    // 0x3c5810: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c5810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c5814: 0xa0830506  sb          $v1, 0x506($a0)
    ctx->pc = 0x3c5814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1286), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c5818: 0xa0800507  sb          $zero, 0x507($a0)
    ctx->pc = 0x3c5818u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1287), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c581c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C581Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C581Cu;
        // 0x3c5820: 0xa0800509  sb          $zero, 0x509($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1289), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C581Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5824u;
}
