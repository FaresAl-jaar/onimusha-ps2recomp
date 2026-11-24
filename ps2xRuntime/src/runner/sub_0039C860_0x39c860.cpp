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

// Function: sub_0039C860
// Address: 0x39c860 - 0x39c880
void sub_0039C860_0x39c860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C860_0x39c860");
#endif

    ctx->pc = 0x39c860u;

    // 0x39c860: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39c860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39c864: 0x78235c10  lq          $v1, 0x5C10($at)
    ctx->pc = 0x39c864u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C10u));
    // 0x39c868: 0x7c832bb0  sq          $v1, 0x2BB0($a0)
    ctx->pc = 0x39c868u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 11184), GPR_VEC(ctx, 3));
    // 0x39c86c: 0xa4802bc0  sh          $zero, 0x2BC0($a0)
    ctx->pc = 0x39c86cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11200), (uint16_t)GPR_U32(ctx, 0));
    // 0x39c870: 0xa4802bc2  sh          $zero, 0x2BC2($a0)
    ctx->pc = 0x39c870u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11202), (uint16_t)GPR_U32(ctx, 0));
    // 0x39c874: 0xa4802bc4  sh          $zero, 0x2BC4($a0)
    ctx->pc = 0x39c874u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11204), (uint16_t)GPR_U32(ctx, 0));
    // 0x39c878: 0x3e00008  jr          $ra
    ctx->pc = 0x39C878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C878u;
        // 0x39c87c: 0xa4802bc6  sh          $zero, 0x2BC6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11206), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C880u;
}
