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

// Function: sub_0023F800
// Address: 0x23f800 - 0x23f820
void sub_0023F800_0x23f800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F800_0x23f800");
#endif

    ctx->pc = 0x23f800u;

    // 0x23f800: 0x808301a5  lb          $v1, 0x1A5($a0)
    ctx->pc = 0x23f800u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 421)));
    // 0x23f804: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F804u;
    {
        const bool branch_taken_0x23f804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F804u;
        // 0x23f808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f804) {
            ctx->pc = 0x23F818u;
            goto label_23f818;
        }
    }
    ctx->pc = 0x23F80Cu;
    // 0x23f80c: 0x84830200  lh          $v1, 0x200($a0)
    ctx->pc = 0x23f80cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x23f810: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23F810u;
    {
        const bool branch_taken_0x23f810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f810) {
            ctx->pc = 0x23F814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F810u;
            // 0x23f814: 0x84820202  lh          $v0, 0x202($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 514)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F818u;
            goto label_23f818;
        }
    }
    ctx->pc = 0x23F818u;
label_23f818:
    // 0x23f818: 0x3e00008  jr          $ra
    ctx->pc = 0x23F818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F820u;
}
