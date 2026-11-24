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

// Function: sub_00228298
// Address: 0x228298 - 0x2282a4
void sub_00228298_0x228298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228298_0x228298");
#endif

    ctx->pc = 0x228298u;

    // 0x228298: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x228298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22829c: 0x3e00008  jr          $ra
    ctx->pc = 0x22829Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2282A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22829Cu;
        // 0x2282a0: 0xfc44aab8  sd          $a0, -0x5548($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294945464), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22829Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2282A4u;
}
