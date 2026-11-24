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

// Function: sub_00231E50
// Address: 0x231e50 - 0x231e64
void sub_00231E50_0x231e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231E50_0x231e50");
#endif

    ctx->pc = 0x231e50u;

    // 0x231e50: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x231e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x231e54: 0x2463ef50  addiu       $v1, $v1, -0x10B0
    ctx->pc = 0x231e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963024));
    // 0x231e58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231e58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BEF50u));
    // 0x231e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x231E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E5Cu;
        // 0x231e60: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231E64u;
}
