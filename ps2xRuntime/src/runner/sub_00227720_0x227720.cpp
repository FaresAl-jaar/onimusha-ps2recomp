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

// Function: sub_00227720
// Address: 0x227720 - 0x227740
void sub_00227720_0x227720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227720_0x227720");
#endif

    ctx->pc = 0x227720u;

    // 0x227720: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x227720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x227724: 0x2442aab0  addiu       $v0, $v0, -0x5550
    ctx->pc = 0x227724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945456));
    // 0x227728: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x227728u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BAAB0u));
    // 0x22772c: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22772Cu;
    {
        const bool branch_taken_0x22772c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x227730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22772Cu;
        // 0x227730: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22772c) {
            ctx->pc = 0x227738u;
            goto label_227738;
        }
    }
    ctx->pc = 0x227734u;
    // 0x227734: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x227734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_227738:
    // 0x227738: 0x3e00008  jr          $ra
    ctx->pc = 0x227738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227740u;
}
