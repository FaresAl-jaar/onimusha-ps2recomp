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

// Function: sub_0035A670
// Address: 0x35a670 - 0x35a67c
void sub_0035A670_0x35a670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A670_0x35a670");
#endif

    ctx->pc = 0x35a670u;

    // 0x35a670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35a670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a674: 0x3e00008  jr          $ra
    ctx->pc = 0x35A674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A674u;
        // 0x35a678: 0xa08300d7  sb          $v1, 0xD7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 215), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A67Cu;
}
