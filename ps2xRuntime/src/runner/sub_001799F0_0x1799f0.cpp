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

// Function: sub_001799F0
// Address: 0x1799f0 - 0x179a00
void sub_001799F0_0x1799f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001799F0_0x1799f0");
#endif

    ctx->pc = 0x1799f0u;

    // 0x1799f0: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x1799f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1799f4: 0xa480002c  sh          $zero, 0x2C($a0)
    ctx->pc = 0x1799f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x1799f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1799F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1799FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1799F8u;
        // 0x1799fc: 0xa4800054  sh          $zero, 0x54($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1799F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179A00u;
}
