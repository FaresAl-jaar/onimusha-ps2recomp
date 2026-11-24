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

// Function: sub_00435018
// Address: 0x435018 - 0x435020
void sub_00435018_0x435018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435018_0x435018");
#endif

    switch (ctx->pc) {
        case 0x435018u: goto label_435018;
        case 0x43501cu: goto label_43501c;
        default: break;
    }

    ctx->pc = 0x435018u;

label_435018:
    // 0x435018: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_43501c:
    if (ctx->pc == 0x43501Cu) {
        ctx->pc = 0x43501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435018u;
        // 0x43501c: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x435020u;
        goto label_fallthrough_0x435018;
    }
    ctx->pc = 0x435018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x43501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435018u;
        // 0x43501c: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435018u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x435018:
    ctx->pc = 0x435020u;
}
