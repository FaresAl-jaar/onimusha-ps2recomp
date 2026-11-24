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

// Function: sub_0022BFD0
// Address: 0x22bfd0 - 0x22bfe8
void sub_0022BFD0_0x22bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BFD0_0x22bfd0");
#endif

    ctx->pc = 0x22bfd0u;

    // 0x22bfd0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22bfd4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BFD4u;
    {
        const bool branch_taken_0x22bfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFD4u;
        // 0x22bfd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfd4) {
            ctx->pc = 0x22BFE0u;
            goto label_22bfe0;
        }
    }
    ctx->pc = 0x22BFDCu;
    // 0x22bfdc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x22bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_22bfe0:
    // 0x22bfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x22BFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BFE8u;
}
