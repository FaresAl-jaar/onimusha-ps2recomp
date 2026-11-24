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

// Function: sub_002D2A40
// Address: 0x2d2a40 - 0x2d2a60
void sub_002D2A40_0x2d2a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2A40_0x2d2a40");
#endif

    ctx->pc = 0x2d2a40u;

    // 0x2d2a40: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x2d2a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2d2a44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2A44u;
    {
        const bool branch_taken_0x2d2a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a44) {
            ctx->pc = 0x2D2A58u;
            goto label_2d2a58;
        }
    }
    ctx->pc = 0x2D2A4Cu;
    // 0x2d2a4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d2a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d2a50: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x2d2a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
    // 0x2d2a54: 0x0  nop
    ctx->pc = 0x2d2a54u;
    // NOP
label_2d2a58:
    // 0x2d2a58: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2A60u;
}
