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

// Function: sub_0024FA18
// Address: 0x24fa18 - 0x24fa3c
void sub_0024FA18_0x24fa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FA18_0x24fa18");
#endif

    ctx->pc = 0x24fa18u;

    // 0x24fa18: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24fa1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24fa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fa20: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24fa24: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FA24u;
    {
        const bool branch_taken_0x24fa24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA24u;
        // 0x24fa28: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa24) {
            ctx->pc = 0x24FA34u;
            goto label_24fa34;
        }
    }
    ctx->pc = 0x24FA2Cu;
    // 0x24fa2c: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24fa30: 0x8c8374d0  lw          $v1, 0x74D0($a0)
    ctx->pc = 0x24fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
label_24fa34:
    // 0x24fa34: 0x3e00008  jr          $ra
    ctx->pc = 0x24FA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FA3Cu;
}
