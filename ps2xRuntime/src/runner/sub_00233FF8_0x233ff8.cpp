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

// Function: sub_00233FF8
// Address: 0x233ff8 - 0x234008
void sub_00233FF8_0x233ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233FF8_0x233ff8");
#endif

    ctx->pc = 0x233ff8u;

    // 0x233ff8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x233ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x233ffc: 0x8c62fc14  lw          $v0, -0x3EC($v1)
    ctx->pc = 0x233ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BFC14u));
    // 0x234000: 0x3e00008  jr          $ra
    ctx->pc = 0x234000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234000u;
        // 0x234004: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234008u;
}
