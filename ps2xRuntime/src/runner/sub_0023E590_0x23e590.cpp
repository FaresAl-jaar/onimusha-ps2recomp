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

// Function: sub_0023E590
// Address: 0x23e590 - 0x23e5a0
void sub_0023E590_0x23e590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E590_0x23e590");
#endif

    ctx->pc = 0x23e590u;

    // 0x23e590: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x23e590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x23e594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e598: 0x3e00008  jr          $ra
    ctx->pc = 0x23E598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E598u;
        // 0x23e59c: 0xac628fe8  sw          $v0, -0x7018($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294938600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E5A0u;
}
