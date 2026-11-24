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

// Function: sub_00152640
// Address: 0x152640 - 0x152654
void sub_00152640_0x152640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152640_0x152640");
#endif

    ctx->pc = 0x152640u;

    // 0x152640: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x152640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x152644: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x152644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x152648: 0x24637140  addiu       $v1, $v1, 0x7140
    ctx->pc = 0x152648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28992));
    // 0x15264c: 0x3e00008  jr          $ra
    ctx->pc = 0x15264Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15264Cu;
        // 0x152650: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15264Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152654u;
}
