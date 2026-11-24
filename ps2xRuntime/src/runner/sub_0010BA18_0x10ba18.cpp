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

// Function: sub_0010BA18
// Address: 0x10ba18 - 0x10ba28
void sub_0010BA18_0x10ba18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BA18_0x10ba18");
#endif

    ctx->pc = 0x10ba18u;

    // 0x10ba18: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10ba1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ba20: 0x3e00008  jr          $ra
    ctx->pc = 0x10BA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA20u;
        // 0x10ba24: 0xac620878  sw          $v0, 0x878($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BA28u;
}
