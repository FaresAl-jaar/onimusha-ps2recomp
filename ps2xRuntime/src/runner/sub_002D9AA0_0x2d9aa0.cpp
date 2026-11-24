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

// Function: sub_002D9AA0
// Address: 0x2d9aa0 - 0x2d9abc
void sub_002D9AA0_0x2d9aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9AA0_0x2d9aa0");
#endif

    ctx->pc = 0x2d9aa0u;

    // 0x2d9aa0: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x2d9aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x2d9aa4: 0xa480006c  sh          $zero, 0x6C($a0)
    ctx->pc = 0x2d9aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d9aa8: 0xa480006e  sh          $zero, 0x6E($a0)
    ctx->pc = 0x2d9aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 110), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d9aac: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x2d9aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x2d9ab0: 0xa4800078  sh          $zero, 0x78($a0)
    ctx->pc = 0x2d9ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d9ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AB4u;
        // 0x2d9ab8: 0xa480007a  sh          $zero, 0x7A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 122), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9ABCu;
}
