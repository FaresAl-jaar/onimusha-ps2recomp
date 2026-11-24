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

// Function: sub_003B8530
// Address: 0x3b8530 - 0x3b8550
void sub_003B8530_0x3b8530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8530_0x3b8530");
#endif

    ctx->pc = 0x3b8530u;

    // 0x3b8530: 0xa0852b54  sb          $a1, 0x2B54($a0)
    ctx->pc = 0x3b8530u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11092), (uint8_t)GPR_U32(ctx, 5));
    // 0x3b8534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b8534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b8538: 0xa0802b55  sb          $zero, 0x2B55($a0)
    ctx->pc = 0x3b8538u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11093), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b853c: 0xa0802b58  sb          $zero, 0x2B58($a0)
    ctx->pc = 0x3b853cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11096), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8540: 0xa0802b57  sb          $zero, 0x2B57($a0)
    ctx->pc = 0x3b8540u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11095), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8544: 0xa0802b59  sb          $zero, 0x2B59($a0)
    ctx->pc = 0x3b8544u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8548: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8548u;
        // 0x3b854c: 0xa0832b56  sb          $v1, 0x2B56($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11094), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8550u;
}
