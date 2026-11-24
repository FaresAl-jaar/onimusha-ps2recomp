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

// Function: sub_0025A690
// Address: 0x25a690 - 0x25a6a4
void sub_0025A690_0x25a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A690_0x25a690");
#endif

    ctx->pc = 0x25a690u;

    // 0x25a690: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25A690u;
    {
        const bool branch_taken_0x25a690 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x25a690) {
            ctx->pc = 0x25A69Cu;
            goto label_25a69c;
        }
    }
    ctx->pc = 0x25A698u;
    // 0x25a698: 0x42023  negu        $a0, $a0
    ctx->pc = 0x25a698u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_25a69c:
    // 0x25a69c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A69Cu;
        // 0x25a6a0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A6A4u;
}
