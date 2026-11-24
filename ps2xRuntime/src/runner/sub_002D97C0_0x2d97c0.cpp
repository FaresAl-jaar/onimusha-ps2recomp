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

// Function: sub_002D97C0
// Address: 0x2d97c0 - 0x2d97d0
void sub_002D97C0_0x2d97c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D97C0_0x2d97c0");
#endif

    ctx->pc = 0x2d97c0u;

    // 0x2d97c0: 0x9083004b  lbu         $v1, 0x4B($a0)
    ctx->pc = 0x2d97c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 75)));
    // 0x2d97c4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2d97c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2d97c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D97C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97C8u;
        // 0x2d97cc: 0xa083004b  sb          $v1, 0x4B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 75), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D97C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D97D0u;
}
