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

// Function: sub_001758D0
// Address: 0x1758d0 - 0x1758f8
void sub_001758D0_0x1758d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001758D0_0x1758d0");
#endif

    ctx->pc = 0x1758d0u;

    // 0x1758d0: 0xac850224  sw          $a1, 0x224($a0)
    ctx->pc = 0x1758d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 5));
    // 0x1758d4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1758d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1758d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1758D8u;
    {
        const bool branch_taken_0x1758d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1758d8) {
            ctx->pc = 0x1758F0u;
            goto label_1758f0;
        }
    }
    ctx->pc = 0x1758E0u;
    // 0x1758e0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1758e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1758e4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1758e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1758e8: 0xac83022c  sw          $v1, 0x22C($a0)
    ctx->pc = 0x1758e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 3));
    // 0x1758ec: 0x0  nop
    ctx->pc = 0x1758ecu;
    // NOP
label_1758f0:
    // 0x1758f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1758F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1758F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1758F8u;
}
