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

// Function: sub_00337860
// Address: 0x337860 - 0x337878
void sub_00337860_0x337860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337860_0x337860");
#endif

    ctx->pc = 0x337860u;

    // 0x337860: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x337860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x337864: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x337864u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x337868: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x337868u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x33786c: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x33786cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x337870: 0x3e00008  jr          $ra
    ctx->pc = 0x337870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337870u;
        // 0x337874: 0xa4800006  sh          $zero, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337878u;
}
