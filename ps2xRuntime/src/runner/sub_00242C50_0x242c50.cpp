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

// Function: sub_00242C50
// Address: 0x242c50 - 0x242c88
void sub_00242C50_0x242c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242C50_0x242c50");
#endif

    ctx->pc = 0x242c50u;

    // 0x242c50: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x242c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x242c54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x242c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x242c58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x242c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x242c5c: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x242c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x242c60: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x242c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x242c64: 0xa080000b  sb          $zero, 0xB($a0)
    ctx->pc = 0x242c64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x242c68: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x242c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x242c6c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x242c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x242c70: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x242c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x242c74: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x242c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x242c78: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x242c78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x242c7c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x242c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x242c80: 0x3e00008  jr          $ra
    ctx->pc = 0x242C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C80u;
        // 0x242c84: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242C88u;
}
