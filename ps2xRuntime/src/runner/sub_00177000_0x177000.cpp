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

// Function: sub_00177000
// Address: 0x177000 - 0x177010
void sub_00177000_0x177000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177000_0x177000");
#endif

    ctx->pc = 0x177000u;

    // 0x177000: 0xaf808634  sw          $zero, -0x79CC($gp)
    ctx->pc = 0x177000u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936116), GPR_U32(ctx, 0));
    // 0x177004: 0xaf808638  sw          $zero, -0x79C8($gp)
    ctx->pc = 0x177004u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936120), GPR_U32(ctx, 0));
    // 0x177008: 0x3e00008  jr          $ra
    ctx->pc = 0x177008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177008u;
        // 0x17700c: 0xa380863c  sb          $zero, -0x79C4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936124), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177010u;
}
