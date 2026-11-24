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

// Function: sub_00208B08
// Address: 0x208b08 - 0x208b14
void sub_00208B08_0x208b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208B08_0x208b08");
#endif

    ctx->pc = 0x208b08u;

    // 0x208b08: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x208b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x208b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x208B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B0Cu;
        // 0x208b10: 0xaca2004c  sw          $v0, 0x4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208B14u;
}
