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

// Function: sub_001DA380
// Address: 0x1da380 - 0x1da394
void sub_001DA380_0x1da380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA380_0x1da380");
#endif

    ctx->pc = 0x1da380u;

    // 0x1da380: 0xd8930000  lqc2        $vf19, 0x0($a0)
    ctx->pc = 0x1da380u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1da384: 0xd8940010  lqc2        $vf20, 0x10($a0)
    ctx->pc = 0x1da384u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1da388: 0xd8950020  lqc2        $vf21, 0x20($a0)
    ctx->pc = 0x1da388u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1da38c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA38Cu;
        // 0x1da390: 0xd8960030  lqc2        $vf22, 0x30($a0) (Delay Slot)
        ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA394u;
}
