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

// Function: sub_001E2EB0
// Address: 0x1e2eb0 - 0x1e2ed4
void sub_001E2EB0_0x1e2eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2EB0_0x1e2eb0");
#endif

    ctx->pc = 0x1e2eb0u;

    // 0x1e2eb0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x1e2eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1e2eb4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1e2eb8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1e2eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x1e2ebc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1e2ebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e2ec0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e2ec4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1e2ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x1e2ec8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x1e2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1e2ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2ECCu;
        // 0x1e2ed0: 0x21302  srl         $v0, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2ED4u;
}
