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

// Function: sub_003C57F0
// Address: 0x3c57f0 - 0x3c5808
void sub_003C57F0_0x3c57f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C57F0_0x3c57f0");
#endif

    ctx->pc = 0x3c57f0u;

    // 0x3c57f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c57f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c57f4: 0xa0830506  sb          $v1, 0x506($a0)
    ctx->pc = 0x3c57f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1286), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c57f8: 0xa0800507  sb          $zero, 0x507($a0)
    ctx->pc = 0x3c57f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1287), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c57fc: 0xa0800509  sb          $zero, 0x509($a0)
    ctx->pc = 0x3c57fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1289), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c5800: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5800u;
        // 0x3c5804: 0xac8505b0  sw          $a1, 0x5B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1456), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5808u;
}
