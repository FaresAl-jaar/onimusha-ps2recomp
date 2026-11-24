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

// Function: sub_00207610
// Address: 0x207610 - 0x207624
void sub_00207610_0x207610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207610_0x207610");
#endif

    ctx->pc = 0x207610u;

    // 0x207610: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207610u;
    {
        const bool branch_taken_0x207610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x207614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207610u;
        // 0x207614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207610) {
            ctx->pc = 0x20761Cu;
            goto label_20761c;
        }
    }
    ctx->pc = 0x207618u;
    // 0x207618: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x207618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20761c:
    // 0x20761c: 0x3e00008  jr          $ra
    ctx->pc = 0x20761Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20761Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207624u;
}
