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

// Function: sub_00369B60
// Address: 0x369b60 - 0x369ba0
void sub_00369B60_0x369b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369B60_0x369b60");
#endif

    ctx->pc = 0x369b60u;

    // 0x369b60: 0x8f838be8  lw          $v1, -0x7418($gp)
    ctx->pc = 0x369b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937576)));
    // 0x369b64: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x369B64u;
    {
        const bool branch_taken_0x369b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x369b64) {
            ctx->pc = 0x369B80u;
            goto label_369b80;
        }
    }
    ctx->pc = 0x369B6Cu;
    // 0x369b6c: 0xac832b20  sw          $v1, 0x2B20($a0)
    ctx->pc = 0x369b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11040), GPR_U32(ctx, 3));
    // 0x369b70: 0x8f838be8  lw          $v1, -0x7418($gp)
    ctx->pc = 0x369b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937576)));
    // 0x369b74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x369B74u;
    {
        const bool branch_taken_0x369b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369B74u;
        // 0x369b78: 0xac642b24  sw          $a0, 0x2B24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11044), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369b74) {
            ctx->pc = 0x369B88u;
            goto label_369b88;
        }
    }
    ctx->pc = 0x369B7Cu;
    // 0x369b7c: 0x0  nop
    ctx->pc = 0x369b7cu;
    // NOP
label_369b80:
    // 0x369b80: 0xaf848be4  sw          $a0, -0x741C($gp)
    ctx->pc = 0x369b80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 4));
    // 0x369b84: 0xac802b20  sw          $zero, 0x2B20($a0)
    ctx->pc = 0x369b84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11040), GPR_U32(ctx, 0));
label_369b88:
    // 0x369b88: 0xac802b24  sw          $zero, 0x2B24($a0)
    ctx->pc = 0x369b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11044), GPR_U32(ctx, 0));
    // 0x369b8c: 0x8f838bec  lw          $v1, -0x7414($gp)
    ctx->pc = 0x369b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937580)));
    // 0x369b90: 0xaf848be8  sw          $a0, -0x7418($gp)
    ctx->pc = 0x369b90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937576), GPR_U32(ctx, 4));
    // 0x369b94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x369b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x369b98: 0x3e00008  jr          $ra
    ctx->pc = 0x369B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369B98u;
        // 0x369b9c: 0xaf838bec  sw          $v1, -0x7414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937580), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369BA0u;
}
