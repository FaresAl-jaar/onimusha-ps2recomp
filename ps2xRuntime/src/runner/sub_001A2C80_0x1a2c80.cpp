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

// Function: sub_001A2C80
// Address: 0x1a2c80 - 0x1a2c9c
void sub_001A2C80_0x1a2c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2C80_0x1a2c80");
#endif

    ctx->pc = 0x1a2c80u;

    // 0x1a2c80: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1a2c80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1a2c84: 0xa0a00004  sb          $zero, 0x4($a1)
    ctx->pc = 0x1a2c84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2c88: 0xa0a00005  sb          $zero, 0x5($a1)
    ctx->pc = 0x1a2c88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2c8c: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x1a2c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2c90: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1a2c90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1a2c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C94u;
        // 0x1a2c98: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2C9Cu;
}
