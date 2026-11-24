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

// Function: sub_0065B6F8
// Address: 0x65b6f8 - 0x65b704
void sub_0065B6F8_0x65b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0065B6F8_0x65b6f8");
#endif

    switch (ctx->pc) {
        case 0x65b6f8u: goto label_65b6f8;
        case 0x65b6fcu: goto label_65b6fc;
        case 0x65b700u: goto label_65b700;
        default: break;
    }

    ctx->pc = 0x65b6f8u;

label_65b6f8:
    // 0x65b6f8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x65b6f8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_65b6fc:
    // 0x65b6fc: 0x8  jr          $zero
label_65b700:
    if (ctx->pc == 0x65B700u) {
        ctx->pc = 0x65B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B6FCu;
        // 0x65b700: 0x28  mfsa        $zero (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x65B704u;
        goto label_fallthrough_0x65b6fc;
    }
    ctx->pc = 0x65B6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x65B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B6FCu;
        // 0x65b700: 0x28  mfsa        $zero (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x65B6FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x65b6fc:
    ctx->pc = 0x65B704u;
}
