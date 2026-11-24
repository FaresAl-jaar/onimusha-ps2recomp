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

// Function: sub_00363D30
// Address: 0x363d30 - 0x363d60
void sub_00363D30_0x363d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363D30_0x363d30");
#endif

    ctx->pc = 0x363d30u;

    // 0x363d30: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x363D30u;
    {
        const bool branch_taken_0x363d30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x363D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363D30u;
        // 0x363d34: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363d30) {
            ctx->pc = 0x363D40u;
            goto label_363d40;
        }
    }
    ctx->pc = 0x363D38u;
    // 0x363d38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x363D38u;
    {
        const bool branch_taken_0x363d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363d38) {
            ctx->pc = 0x363D58u;
            goto label_363d58;
        }
    }
    ctx->pc = 0x363D40u;
label_363d40:
    // 0x363d40: 0x908229d0  lbu         $v0, 0x29D0($a0)
    ctx->pc = 0x363d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10704)));
    // 0x363d44: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x363d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x363d48: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x363D48u;
    {
        const bool branch_taken_0x363d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x363d48) {
            ctx->pc = 0x363D58u;
            goto label_363d58;
        }
    }
    ctx->pc = 0x363D50u;
    // 0x363d50: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x363D50u;
    {
        const bool branch_taken_0x363d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363D50u;
        // 0x363d54: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363d50) {
            ctx->pc = 0x363D58u;
            goto label_363d58;
        }
    }
    ctx->pc = 0x363D58u;
label_363d58:
    // 0x363d58: 0x3e00008  jr          $ra
    ctx->pc = 0x363D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363D60u;
}
