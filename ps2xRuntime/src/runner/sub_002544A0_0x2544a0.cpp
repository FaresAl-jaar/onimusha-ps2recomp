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

// Function: sub_002544A0
// Address: 0x2544a0 - 0x2544bc
void sub_002544A0_0x2544a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002544A0_0x2544a0");
#endif

    ctx->pc = 0x2544a0u;

    // 0x2544a0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2544a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2544a4: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2544a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2544a8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2544a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2544ac: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2544acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2544b0: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x2544b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x2544b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2544B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2544B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544B4u;
        // 0x2544b8: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2544B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2544BCu;
}
