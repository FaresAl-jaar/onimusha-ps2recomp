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

// Function: sub_003388E0
// Address: 0x3388e0 - 0x3388f0
void sub_003388E0_0x3388e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003388E0_0x3388e0");
#endif

    ctx->pc = 0x3388e0u;

    // 0x3388e0: 0x90830dcd  lbu         $v1, 0xDCD($a0)
    ctx->pc = 0x3388e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3533)));
    // 0x3388e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3388e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3388e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3388E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3388ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388E8u;
        // 0x3388ec: 0xa0830dcd  sb          $v1, 0xDCD($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3533), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3388E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3388F0u;
}
