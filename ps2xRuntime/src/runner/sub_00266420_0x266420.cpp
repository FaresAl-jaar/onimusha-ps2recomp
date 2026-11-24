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

// Function: sub_00266420
// Address: 0x266420 - 0x266440
void sub_00266420_0x266420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266420_0x266420");
#endif

    ctx->pc = 0x266420u;

    // 0x266420: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x266420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x266424: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x266424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x266428: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x266428u;
    {
        const bool branch_taken_0x266428 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x26642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266428u;
        // 0x26642c: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266428) {
            ctx->pc = 0x266438u;
            goto label_266438;
        }
    }
    ctx->pc = 0x266430u;
    // 0x266430: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x266430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266434: 0xa4830036  sh          $v1, 0x36($a0)
    ctx->pc = 0x266434u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 3));
label_266438:
    // 0x266438: 0x3e00008  jr          $ra
    ctx->pc = 0x266438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266440u;
}
