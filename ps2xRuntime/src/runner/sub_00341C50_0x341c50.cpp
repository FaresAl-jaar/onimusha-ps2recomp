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

// Function: sub_00341C50
// Address: 0x341c50 - 0x341c68
void sub_00341C50_0x341c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341C50_0x341c50");
#endif

    ctx->pc = 0x341c50u;

    // 0x341c50: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x341c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x341c54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341c58: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x341c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x341c5c: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x341c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x341c60: 0x3e00008  jr          $ra
    ctx->pc = 0x341C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C60u;
        // 0x341c64: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341C68u;
}
