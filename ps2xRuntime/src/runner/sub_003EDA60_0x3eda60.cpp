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

// Function: sub_003EDA60
// Address: 0x3eda60 - 0x3eda88
void sub_003EDA60_0x3eda60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDA60_0x3eda60");
#endif

    ctx->pc = 0x3eda60u;

    // 0x3eda60: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EDA60u;
    {
        const bool branch_taken_0x3eda60 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x3eda60) {
            ctx->pc = 0x3EDA80u;
            goto label_3eda80;
        }
    }
    ctx->pc = 0x3EDA68u;
    // 0x3eda68: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3eda68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3eda6c: 0x27838d20  addiu       $v1, $gp, -0x72E0
    ctx->pc = 0x3eda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937888));
    // 0x3eda70: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3eda70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3eda74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3eda74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3eda78: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x3eda78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3eda7c: 0x0  nop
    ctx->pc = 0x3eda7cu;
    // NOP
label_3eda80:
    // 0x3eda80: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDA88u;
}
