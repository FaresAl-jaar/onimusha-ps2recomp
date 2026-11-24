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

// Function: sub_0021A5E0
// Address: 0x21a5e0 - 0x21a5fc
void sub_0021A5E0_0x21a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A5E0_0x21a5e0");
#endif

    ctx->pc = 0x21a5e0u;

    // 0x21a5e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A5E0u;
    {
        const bool branch_taken_0x21a5e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5E0u;
        // 0x21a5e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5e0) {
            ctx->pc = 0x21A5F4u;
            goto label_21a5f4;
        }
    }
    ctx->pc = 0x21A5E8u;
    // 0x21a5e8: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x21a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x21a5ec: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x21a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x21a5f0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x21a5f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21a5f4:
    // 0x21a5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x21A5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A5FCu;
}
