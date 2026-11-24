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

// Function: sub_0023F750
// Address: 0x23f750 - 0x23f768
void sub_0023F750_0x23f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F750_0x23f750");
#endif

    ctx->pc = 0x23f750u;

    // 0x23f750: 0x808301a5  lb          $v1, 0x1A5($a0)
    ctx->pc = 0x23f750u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 421)));
    // 0x23f754: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F754u;
    {
        const bool branch_taken_0x23f754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F754u;
        // 0x23f758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f754) {
            ctx->pc = 0x23F760u;
            goto label_23f760;
        }
    }
    ctx->pc = 0x23F75Cu;
    // 0x23f75c: 0x8c8201f0  lw          $v0, 0x1F0($a0)
    ctx->pc = 0x23f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
label_23f760:
    // 0x23f760: 0x3e00008  jr          $ra
    ctx->pc = 0x23F760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F768u;
}
