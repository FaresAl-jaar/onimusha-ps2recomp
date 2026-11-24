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

// Function: sub_00227198
// Address: 0x227198 - 0x2271a4
void sub_00227198_0x227198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227198_0x227198");
#endif

    ctx->pc = 0x227198u;

    // 0x227198: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x227198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22719c: 0x3e00008  jr          $ra
    ctx->pc = 0x22719Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2271A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22719Cu;
        // 0x2271a0: 0xac44a844  sw          $a0, -0x57BC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294944836), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22719Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2271A4u;
}
