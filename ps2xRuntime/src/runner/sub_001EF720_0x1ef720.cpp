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

// Function: sub_001EF720
// Address: 0x1ef720 - 0x1ef740
void sub_001EF720_0x1ef720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF720_0x1ef720");
#endif

    ctx->pc = 0x1ef720u;

    // 0x1ef720: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1ef720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1ef724: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ef724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ef728: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF728u;
    {
        const bool branch_taken_0x1ef728 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1EF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF728u;
        // 0x1ef72c: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef728) {
            ctx->pc = 0x1EF738u;
            goto label_1ef738;
        }
    }
    ctx->pc = 0x1EF730u;
    // 0x1ef730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef734: 0xa0830036  sb          $v1, 0x36($a0)
    ctx->pc = 0x1ef734u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 3));
label_1ef738:
    // 0x1ef738: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF740u;
}
