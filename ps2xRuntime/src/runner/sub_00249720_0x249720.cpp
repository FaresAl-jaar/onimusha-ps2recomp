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

// Function: sub_00249720
// Address: 0x249720 - 0x24974c
void sub_00249720_0x249720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249720_0x249720");
#endif

    switch (ctx->pc) {
        case 0x249728u: goto label_249728;
        default: break;
    }

    ctx->pc = 0x249720u;

    // 0x249720: 0x24021fff  addiu       $v0, $zero, 0x1FFF
    ctx->pc = 0x249720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
    // 0x249724: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x249724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_249728:
    // 0x249728: 0x0  nop
    ctx->pc = 0x249728u;
    // NOP
    // 0x24972c: 0x0  nop
    ctx->pc = 0x24972cu;
    // NOP
    // 0x249730: 0x0  nop
    ctx->pc = 0x249730u;
    // NOP
    // 0x249734: 0x0  nop
    ctx->pc = 0x249734u;
    // NOP
    // 0x249738: 0x0  nop
    ctx->pc = 0x249738u;
    // NOP
    // 0x24973c: 0x443fffa  bgezl       $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24973Cu;
    {
        const bool branch_taken_0x24973c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x24973c) {
            ctx->pc = 0x249740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24973Cu;
            // 0x249740: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249728;
        }
    }
    ctx->pc = 0x249744u;
    // 0x249744: 0x3e00008  jr          $ra
    ctx->pc = 0x249744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24974Cu;
}
