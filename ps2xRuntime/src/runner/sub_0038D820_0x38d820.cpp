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

// Function: sub_0038D820
// Address: 0x38d820 - 0x38d82c
void sub_0038D820_0x38d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D820_0x38d820");
#endif

    ctx->pc = 0x38d820u;

    // 0x38d820: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x38d820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x38d824: 0x3e00008  jr          $ra
    ctx->pc = 0x38D824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D824u;
        // 0x38d828: 0xac830408  sw          $v1, 0x408($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1032), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D82Cu;
}
