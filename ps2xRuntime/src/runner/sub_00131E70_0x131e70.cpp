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

// Function: sub_00131E70
// Address: 0x131e70 - 0x131e84
void sub_00131E70_0x131e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131E70_0x131e70");
#endif

    ctx->pc = 0x131e70u;

    // 0x131e70: 0x2403022c  addiu       $v1, $zero, 0x22C
    ctx->pc = 0x131e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x131e74: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x131e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x131e78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x131e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x131e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x131E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E7Cu;
        // 0x131e80: 0xa0660005  sb          $a2, 0x5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131E84u;
}
