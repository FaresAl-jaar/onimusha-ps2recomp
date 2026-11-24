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

// Function: sub_002BA5D0
// Address: 0x2ba5d0 - 0x2ba5f0
void sub_002BA5D0_0x2ba5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA5D0_0x2ba5d0");
#endif

    ctx->pc = 0x2ba5d0u;

    // 0x2ba5d0: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x2ba5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x2ba5d4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2ba5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2ba5d8: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x2ba5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x2ba5dc: 0x278289f0  addiu       $v0, $gp, -0x7610
    ctx->pc = 0x2ba5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937072));
    // 0x2ba5e0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2ba5e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ba5e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ba5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ba5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5E8u;
        // 0x2ba5ec: 0xaf8389f0  sw          $v1, -0x7610($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA5F0u;
}
