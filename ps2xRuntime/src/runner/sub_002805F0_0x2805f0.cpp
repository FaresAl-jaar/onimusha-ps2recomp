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

// Function: sub_002805F0
// Address: 0x2805f0 - 0x280600
void sub_002805F0_0x2805f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002805F0_0x2805f0");
#endif

    ctx->pc = 0x2805f0u;

    // 0x2805f0: 0x9083083b  lbu         $v1, 0x83B($a0)
    ctx->pc = 0x2805f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2107)));
    // 0x2805f4: 0xa083083c  sb          $v1, 0x83C($a0)
    ctx->pc = 0x2805f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2108), (uint8_t)GPR_U32(ctx, 3));
    // 0x2805f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2805F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2805FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805F8u;
        // 0x2805fc: 0xa080083b  sb          $zero, 0x83B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2107), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2805F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280600u;
}
