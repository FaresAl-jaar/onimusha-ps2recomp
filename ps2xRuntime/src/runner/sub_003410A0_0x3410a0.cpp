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

// Function: sub_003410A0
// Address: 0x3410a0 - 0x3410b8
void sub_003410A0_0x3410a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003410A0_0x3410a0");
#endif

    ctx->pc = 0x3410a0u;

    // 0x3410a0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3410a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3410a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3410A4u;
    {
        const bool branch_taken_0x3410a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3410A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3410A4u;
        // 0x3410a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3410a4) {
            ctx->pc = 0x3410B0u;
            goto label_3410b0;
        }
    }
    ctx->pc = 0x3410ACu;
    // 0x3410ac: 0xa083001a  sb          $v1, 0x1A($a0)
    ctx->pc = 0x3410acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
label_3410b0:
    // 0x3410b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3410B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3410B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3410B8u;
}
