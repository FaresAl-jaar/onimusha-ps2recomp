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

// Function: sub_0025A5B0
// Address: 0x25a5b0 - 0x25a5bc
void sub_0025A5B0_0x25a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A5B0_0x25a5b0");
#endif

    ctx->pc = 0x25a5b0u;

    // 0x25a5b0: 0x70a640e8  pminw       $t0, $a1, $a2
    ctx->pc = 0x25a5b0u;
    SET_GPR_VEC(ctx, 8, PS2_PMINW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x25a5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x25A5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5B4u;
        // 0x25a5b8: 0x708810c8  pmaxw       $v0, $a0, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A5BCu;
}
