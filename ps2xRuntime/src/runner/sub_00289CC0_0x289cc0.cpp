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

// Function: sub_00289CC0
// Address: 0x289cc0 - 0x289cd8
void sub_00289CC0_0x289cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289CC0_0x289cc0");
#endif

    ctx->pc = 0x289cc0u;

    // 0x289cc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x289cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x289cc4: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x289cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x289cc8: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x289cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x289ccc: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x289cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x289cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x289CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289CD0u;
        // 0x289cd4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289CD8u;
}
