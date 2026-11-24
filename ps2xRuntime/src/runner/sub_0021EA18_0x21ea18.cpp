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

// Function: sub_0021EA18
// Address: 0x21ea18 - 0x21ea38
void sub_0021EA18_0x21ea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EA18_0x21ea18");
#endif

    ctx->pc = 0x21ea18u;

    // 0x21ea18: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x21ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x21ea1c: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x21ea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x21ea20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ea24: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x21ea24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x21ea28: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x21ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x21ea2c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x21ea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x21ea30: 0x3e00008  jr          $ra
    ctx->pc = 0x21EA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA30u;
        // 0x21ea34: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EA38u;
}
