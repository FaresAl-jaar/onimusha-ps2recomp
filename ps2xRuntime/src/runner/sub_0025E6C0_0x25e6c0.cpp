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

// Function: sub_0025E6C0
// Address: 0x25e6c0 - 0x25e6d0
void sub_0025E6C0_0x25e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E6C0_0x25e6c0");
#endif

    ctx->pc = 0x25e6c0u;

    // 0x25e6c0: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x25e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x25e6c4: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x25e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x25e6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x25E6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6C8u;
        // 0x25e6cc: 0xa064009e  sb          $a0, 0x9E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 158), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E6D0u;
}
