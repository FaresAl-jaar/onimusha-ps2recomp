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

// Function: sub_0065B7D4
// Address: 0x65b7d4 - 0x65b7dc
void sub_0065B7D4_0x65b7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0065B7D4_0x65b7d4");
#endif

    switch (ctx->pc) {
        case 0x65b7d4u: goto label_65b7d4;
        case 0x65b7d8u: goto label_65b7d8;
        default: break;
    }

    ctx->pc = 0x65b7d4u;

label_65b7d4:
    // 0x65b7d4: 0x8  jr          $zero
label_65b7d8:
    if (ctx->pc == 0x65B7D8u) {
        ctx->pc = 0x65B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B7D4u;
        // 0x65b7d8: 0x3e8  .word       0x000003E8                   # mfsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x65B7DCu;
        goto label_fallthrough_0x65b7d4;
    }
    ctx->pc = 0x65B7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x65B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B7D4u;
        // 0x65b7d8: 0x3e8  .word       0x000003E8                   # mfsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x65B7D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x65b7d4:
    ctx->pc = 0x65B7DCu;
}
