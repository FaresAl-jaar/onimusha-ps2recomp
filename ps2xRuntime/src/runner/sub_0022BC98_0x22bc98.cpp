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

// Function: sub_0022BC98
// Address: 0x22bc98 - 0x22bcac
void sub_0022BC98_0x22bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BC98_0x22bc98");
#endif

    ctx->pc = 0x22bc98u;

    // 0x22bc98: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BC98u;
    {
        const bool branch_taken_0x22bc98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC98u;
        // 0x22bc9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc98) {
            ctx->pc = 0x22BCA4u;
            goto label_22bca4;
        }
    }
    ctx->pc = 0x22BCA0u;
    // 0x22bca0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x22bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_22bca4:
    // 0x22bca4: 0x3e00008  jr          $ra
    ctx->pc = 0x22BCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BCACu;
}
