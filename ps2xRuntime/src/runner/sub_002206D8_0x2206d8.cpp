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

// Function: sub_002206D8
// Address: 0x2206d8 - 0x2206e4
void sub_002206D8_0x2206d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002206D8_0x2206d8");
#endif

    ctx->pc = 0x2206d8u;

    // 0x2206d8: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2206d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
    // 0x2206dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2206DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2206E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206DCu;
        // 0x2206e0: 0xac850144  sw          $a1, 0x144($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2206DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2206E4u;
}
