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

// Function: sub_001F56A0
// Address: 0x1f56a0 - 0x1f56cc
void sub_001F56A0_0x1f56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F56A0_0x1f56a0");
#endif

    switch (ctx->pc) {
        case 0x1f56a8u: goto label_1f56a8;
        default: break;
    }

    ctx->pc = 0x1f56a0u;

    // 0x1f56a0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1f56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1f56a4: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1f56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_1f56a8:
    // 0x1f56a8: 0x0  nop
    ctx->pc = 0x1f56a8u;
    // NOP
    // 0x1f56ac: 0x0  nop
    ctx->pc = 0x1f56acu;
    // NOP
    // 0x1f56b0: 0x0  nop
    ctx->pc = 0x1f56b0u;
    // NOP
    // 0x1f56b4: 0x0  nop
    ctx->pc = 0x1f56b4u;
    // NOP
    // 0x1f56b8: 0x0  nop
    ctx->pc = 0x1f56b8u;
    // NOP
    // 0x1f56bc: 0x443fffa  bgezl       $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F56BCu;
    {
        const bool branch_taken_0x1f56bc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1f56bc) {
            ctx->pc = 0x1F56C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F56BCu;
            // 0x1f56c0: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F56A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f56a8;
        }
    }
    ctx->pc = 0x1F56C4u;
    // 0x1f56c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F56C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F56C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F56CCu;
}
