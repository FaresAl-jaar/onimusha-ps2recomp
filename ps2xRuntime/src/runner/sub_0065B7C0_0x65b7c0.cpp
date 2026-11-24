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

// Function: sub_0065B7C0
// Address: 0x65b7c0 - 0x65b7c8
void sub_0065B7C0_0x65b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0065B7C0_0x65b7c0");
#endif

    switch (ctx->pc) {
        case 0x65b7c0u: goto label_65b7c0;
        case 0x65b7c4u: goto label_65b7c4;
        default: break;
    }

    ctx->pc = 0x65b7c0u;

label_65b7c0:
    // 0x65b7c0: 0x8  jr          $zero
label_65b7c4:
    if (ctx->pc == 0x65B7C4u) {
        ctx->pc = 0x65B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B7C0u;
        // 0x65b7c4: 0x1f4  teq         $zero, $zero, 7 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x65B7C8u;
        goto label_fallthrough_0x65b7c0;
    }
    ctx->pc = 0x65B7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x65B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B7C0u;
        // 0x65b7c4: 0x1f4  teq         $zero, $zero, 7 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x65B7C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x65b7c0:
    ctx->pc = 0x65B7C8u;
}
