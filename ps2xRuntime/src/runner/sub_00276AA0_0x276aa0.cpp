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

// Function: sub_00276AA0
// Address: 0x276aa0 - 0x276ab0
void sub_00276AA0_0x276aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276AA0_0x276aa0");
#endif

    ctx->pc = 0x276aa0u;

    // 0x276aa0: 0xa08000b7  sb          $zero, 0xB7($a0)
    ctx->pc = 0x276aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 183), (uint8_t)GPR_U32(ctx, 0));
    // 0x276aa4: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x276aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x276aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x276AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276AA8u;
        // 0x276aac: 0xa48000c4  sh          $zero, 0xC4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276AB0u;
}
