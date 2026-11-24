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

// Function: sub_002CB650
// Address: 0x2cb650 - 0x2cb688
void sub_002CB650_0x2cb650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB650_0x2cb650");
#endif

    ctx->pc = 0x2cb650u;

    // 0x2cb650: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB650u;
    {
        const bool branch_taken_0x2cb650 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb650) {
            ctx->pc = 0x2CB660u;
            goto label_2cb660;
        }
    }
    ctx->pc = 0x2CB658u;
    // 0x2cb658: 0xaf808a04  sw          $zero, -0x75FC($gp)
    ctx->pc = 0x2cb658u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937092), GPR_U32(ctx, 0));
    // 0x2cb65c: 0x0  nop
    ctx->pc = 0x2cb65cu;
    // NOP
label_2cb660:
    // 0x2cb660: 0x8f828a04  lw          $v0, -0x75FC($gp)
    ctx->pc = 0x2cb660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937092)));
    // 0x2cb664: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x2cb664u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2cb668: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB668u;
    {
        const bool branch_taken_0x2cb668 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb668) {
            ctx->pc = 0x2CB678u;
            goto label_2cb678;
        }
    }
    ctx->pc = 0x2CB670u;
    // 0x2cb670: 0xaf848a04  sw          $a0, -0x75FC($gp)
    ctx->pc = 0x2cb670u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937092), GPR_U32(ctx, 4));
    // 0x2cb674: 0x0  nop
    ctx->pc = 0x2cb674u;
    // NOP
label_2cb678:
    // 0x2cb678: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x2cb678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x2cb67c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cb67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cb680: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB680u;
        // 0x2cb684: 0xaf828a20  sw          $v0, -0x75E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB688u;
}
