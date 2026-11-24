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

// Function: sub_0040D98C
// Address: 0x40d98c - 0x40d99c
void sub_0040D98C_0x40d98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D98C_0x40d98c");
#endif

    switch (ctx->pc) {
        case 0x40d98cu: goto label_40d98c;
        case 0x40d990u: goto label_40d990;
        case 0x40d994u: goto label_40d994;
        case 0x40d998u: goto label_40d998;
        default: break;
    }

    ctx->pc = 0x40d98cu;

label_40d98c:
    // 0x40d98c: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x40d98cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_40d990:
    // 0x40d990: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x40d990u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_40d994:
    // 0x40d994: 0x8  jr          $zero
label_40d998:
    if (ctx->pc == 0x40D998u) {
        ctx->pc = 0x40D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D994u;
        // 0x40d998: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D99Cu;
        goto label_fallthrough_0x40d994;
    }
    ctx->pc = 0x40D994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x40D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D994u;
        // 0x40d998: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D994u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x40d994:
    ctx->pc = 0x40D99Cu;
}
