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

// Function: sub_00200CE0
// Address: 0x200ce0 - 0x200d04
void sub_00200CE0_0x200ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200CE0_0x200ce0");
#endif

    ctx->pc = 0x200ce0u;

    // 0x200ce0: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x200ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
    // 0x200ce4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x200ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x200ce8: 0x8c623f90  lw          $v0, 0x3F90($v1)
    ctx->pc = 0x200ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x873F90u));
    // 0x200cec: 0x24421100  addiu       $v0, $v0, 0x1100
    ctx->pc = 0x200cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4352));
    // 0x200cf0: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x200cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x200cf4: 0x8ca3815c  lw          $v1, -0x7EA4($a1)
    ctx->pc = 0x200cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B815Cu));
    // 0x200cf8: 0xac830110  sw          $v1, 0x110($a0)
    ctx->pc = 0x200cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 3));
    // 0x200cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x200CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CFCu;
        // 0x200d00: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200D04u;
}
