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

// Function: sub_003E03E0
// Address: 0x3e03e0 - 0x3e03f8
void sub_003E03E0_0x3e03e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E03E0_0x3e03e0");
#endif

    ctx->pc = 0x3e03e0u;

    // 0x3e03e0: 0xa0802c70  sb          $zero, 0x2C70($a0)
    ctx->pc = 0x3e03e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11376), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e03e4: 0xac802b70  sw          $zero, 0x2B70($a0)
    ctx->pc = 0x3e03e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11120), GPR_U32(ctx, 0));
    // 0x3e03e8: 0xac802bc0  sw          $zero, 0x2BC0($a0)
    ctx->pc = 0x3e03e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11200), GPR_U32(ctx, 0));
    // 0x3e03ec: 0xac802c10  sw          $zero, 0x2C10($a0)
    ctx->pc = 0x3e03ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11280), GPR_U32(ctx, 0));
    // 0x3e03f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E03F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E03F0u;
        // 0x3e03f4: 0xac802c60  sw          $zero, 0x2C60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E03F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E03F8u;
}
