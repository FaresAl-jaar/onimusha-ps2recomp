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

// Function: sub_002A09D0
// Address: 0x2a09d0 - 0x2a0a08
void sub_002A09D0_0x2a09d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A09D0_0x2a09d0");
#endif

    switch (ctx->pc) {
        case 0x2a09e0u: goto label_2a09e0;
        default: break;
    }

    ctx->pc = 0x2a09d0u;

    // 0x2a09d0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2a09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2a09d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A09D4u;
    {
        const bool branch_taken_0x2a09d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a09d4) {
            ctx->pc = 0x2A0A00u;
            goto label_2a0a00;
        }
    }
    ctx->pc = 0x2A09DCu;
    // 0x2a09dc: 0x0  nop
    ctx->pc = 0x2a09dcu;
    // NOP
label_2a09e0:
    // 0x2a09e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a09e4: 0x0  nop
    ctx->pc = 0x2a09e4u;
    // NOP
    // 0x2a09e8: 0x0  nop
    ctx->pc = 0x2a09e8u;
    // NOP
    // 0x2a09ec: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A09ECu;
    {
        const bool branch_taken_0x2a09ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2a09ec) {
            ctx->pc = 0x2A0A00u;
            goto label_2a0a00;
        }
    }
    ctx->pc = 0x2A09F4u;
    // 0x2a09f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2a09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a09f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A09F8u;
    {
        const bool branch_taken_0x2a09f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a09f8) {
            ctx->pc = 0x2A09E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a09e0;
        }
    }
    ctx->pc = 0x2A0A00u;
label_2a0a00:
    // 0x2a0a00: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0A08u;
}
