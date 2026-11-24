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

// Function: sub_001DA360
// Address: 0x1da360 - 0x1da374
void sub_001DA360_0x1da360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA360_0x1da360");
#endif

    ctx->pc = 0x1da360u;

    // 0x1da360: 0xd88f0000  lqc2        $vf15, 0x0($a0)
    ctx->pc = 0x1da360u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1da364: 0xd8900010  lqc2        $vf16, 0x10($a0)
    ctx->pc = 0x1da364u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1da368: 0xd8910020  lqc2        $vf17, 0x20($a0)
    ctx->pc = 0x1da368u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1da36c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA36Cu;
        // 0x1da370: 0xd8920030  lqc2        $vf18, 0x30($a0) (Delay Slot)
        ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA374u;
}
