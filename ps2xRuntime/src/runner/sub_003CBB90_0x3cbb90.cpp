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

// Function: sub_003CBB90
// Address: 0x3cbb90 - 0x3cbb98
void sub_003CBB90_0x3cbb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CBB90_0x3cbb90");
#endif

    ctx->pc = 0x3cbb90u;

    // 0x3cbb90: 0x3e00008  jr          $ra
    ctx->pc = 0x3CBB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CBB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB90u;
        // 0x3cbb94: 0xac802b24  sw          $zero, 0x2B24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11044), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CBB98u;
}
