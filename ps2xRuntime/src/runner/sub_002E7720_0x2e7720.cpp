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

// Function: sub_002E7720
// Address: 0x2e7720 - 0x2e7740
void sub_002E7720_0x2e7720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7720_0x2e7720");
#endif

    ctx->pc = 0x2e7720u;

    // 0x2e7720: 0x93848abb  lbu         $a0, -0x7545($gp)
    ctx->pc = 0x2e7720u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937275)));
    // 0x2e7724: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2e7724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e7728: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7728u;
    {
        const bool branch_taken_0x2e7728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7728u;
        // 0x2e772c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7728) {
            ctx->pc = 0x2E7738u;
            goto label_2e7738;
        }
    }
    ctx->pc = 0x2E7730u;
    // 0x2e7730: 0xa3838abb  sb          $v1, -0x7545($gp)
    ctx->pc = 0x2e7730u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937275), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e7734: 0x0  nop
    ctx->pc = 0x2e7734u;
    // NOP
label_2e7738:
    // 0x2e7738: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7740u;
}
