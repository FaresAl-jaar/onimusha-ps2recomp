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

// Function: sub_001DA1B0
// Address: 0x1da1b0 - 0x1da1c4
void sub_001DA1B0_0x1da1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA1B0_0x1da1b0");
#endif

    ctx->pc = 0x1da1b0u;

    // 0x1da1b0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1da1b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1da1b4: 0xd8c60000  lqc2        $vf6, 0x0($a2)
    ctx->pc = 0x1da1b4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da1b8: 0xd8a70000  lqc2        $vf7, 0x0($a1)
    ctx->pc = 0x1da1b8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1BCu;
        // 0x1da1c0: 0xd8e80000  lqc2        $vf8, 0x0($a3) (Delay Slot)
        ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA1C4u;
}
