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

// Function: sub_0018E670
// Address: 0x18e670 - 0x18e68c
void sub_0018E670_0x18e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E670_0x18e670");
#endif

    ctx->pc = 0x18e670u;

    // 0x18e670: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x18e670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x18e674: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x18e674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x18e678: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x18e678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x18e67c: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x18e67cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x18e680: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x18e680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x18e684: 0x3e00008  jr          $ra
    ctx->pc = 0x18E684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E684u;
        // 0x18e688: 0xac80003c  sw          $zero, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E68Cu;
}
