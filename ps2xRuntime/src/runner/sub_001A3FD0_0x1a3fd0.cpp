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

// Function: sub_001A3FD0
// Address: 0x1a3fd0 - 0x1a3ff4
void sub_001A3FD0_0x1a3fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3FD0_0x1a3fd0");
#endif

    ctx->pc = 0x1a3fd0u;

    // 0x1a3fd0: 0x8f828798  lw          $v0, -0x7868($gp)
    ctx->pc = 0x1a3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x1a3fd4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a3fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a3fd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3FD8u;
    {
        const bool branch_taken_0x1a3fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3fd8) {
            ctx->pc = 0x1A3FECu;
            goto label_1a3fec;
        }
    }
    ctx->pc = 0x1A3FE0u;
    // 0x1a3fe0: 0x8f828794  lw          $v0, -0x786C($gp)
    ctx->pc = 0x1a3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
    // 0x1a3fe4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1a3fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1a3fe8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a3fec:
    // 0x1a3fec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FECu;
        // 0x1a3ff0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3FF4u;
}
