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

// Function: sub_0024D060
// Address: 0x24d060 - 0x24d078
void sub_0024D060_0x24d060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D060_0x24d060");
#endif

    ctx->pc = 0x24d060u;

    // 0x24d060: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24d060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24d064: 0x24636518  addiu       $v1, $v1, 0x6518
    ctx->pc = 0x24d064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25880));
    // 0x24d068: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24d068u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4D6518u));
    // 0x24d06c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24d070: 0x3e00008  jr          $ra
    ctx->pc = 0x24D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D070u;
        // 0x24d074: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D078u;
}
