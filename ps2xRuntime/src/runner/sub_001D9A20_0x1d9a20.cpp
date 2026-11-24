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

// Function: sub_001D9A20
// Address: 0x1d9a20 - 0x1d9a34
void sub_001D9A20_0x1d9a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9A20_0x1d9a20");
#endif

    ctx->pc = 0x1d9a20u;

    // 0x1d9a20: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1d9a20u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d9a24: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1d9a24u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d9a28: 0x71094048  psubw       $t0, $t0, $t1
    ctx->pc = 0x1d9a28u;
    SET_GPR_VEC(ctx, 8, PS2_PSUBW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x1d9a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A2Cu;
        // 0x1d9a30: 0x7c880000  sq          $t0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9A34u;
}
