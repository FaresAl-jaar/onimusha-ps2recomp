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

// Function: sub_003179F0
// Address: 0x3179f0 - 0x3179fc
void sub_003179F0_0x3179f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003179F0_0x3179f0");
#endif

    ctx->pc = 0x3179f0u;

    // 0x3179f0: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x3179f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x3179f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3179F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3179F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179F4u;
        // 0x3179f8: 0x24426ae8  addiu       $v0, $v0, 0x6AE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3179F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3179FCu;
}
