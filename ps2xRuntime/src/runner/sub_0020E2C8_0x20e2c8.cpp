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

// Function: sub_0020E2C8
// Address: 0x20e2c8 - 0x20e2d8
void sub_0020E2C8_0x20e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E2C8_0x20e2c8");
#endif

    ctx->pc = 0x20e2c8u;

    // 0x20e2c8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x20e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x20e2cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x20E2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2D0u;
        // 0x20e2d4: 0xac64a1c8  sw          $a0, -0x5E38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E2D8u;
}
