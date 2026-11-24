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

// Function: sub_003A1140
// Address: 0x3a1140 - 0x3a1170
void sub_003A1140_0x3a1140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1140_0x3a1140");
#endif

    ctx->pc = 0x3a1140u;

    // 0x3a1140: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a1140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1144: 0x808303a2  lb          $v1, 0x3A2($a0)
    ctx->pc = 0x3a1144u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 930)));
    // 0x3a1148: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A1148u;
    {
        const bool branch_taken_0x3a1148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1148u;
        // 0x3a114c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1148) {
            ctx->pc = 0x3A1168u;
            goto label_3a1168;
        }
    }
    ctx->pc = 0x3A1150u;
    // 0x3a1150: 0xa0830390  sb          $v1, 0x390($a0)
    ctx->pc = 0x3a1150u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 912), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a1154: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1158: 0xac600394  sw          $zero, 0x394($v1)
    ctx->pc = 0x3a1158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 916), GPR_U32(ctx, 0));
    // 0x3a115c: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1160: 0xa0600391  sb          $zero, 0x391($v1)
    ctx->pc = 0x3a1160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a1164: 0x0  nop
    ctx->pc = 0x3a1164u;
    // NOP
label_3a1168:
    // 0x3a1168: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1170u;
}
