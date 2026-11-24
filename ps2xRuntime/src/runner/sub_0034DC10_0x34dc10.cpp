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

// Function: sub_0034DC10
// Address: 0x34dc10 - 0x34dc6c
void sub_0034DC10_0x34dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DC10_0x34dc10");
#endif

    ctx->pc = 0x34dc10u;

    // 0x34dc10: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x34dc10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x34dc14: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x34dc14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x34dc18: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x34dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x34dc1c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x34dc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x34dc20: 0xa0800024  sb          $zero, 0x24($a0)
    ctx->pc = 0x34dc20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dc24: 0xa0800025  sb          $zero, 0x25($a0)
    ctx->pc = 0x34dc24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dc28: 0xa0800026  sb          $zero, 0x26($a0)
    ctx->pc = 0x34dc28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dc2c: 0xa0800027  sb          $zero, 0x27($a0)
    ctx->pc = 0x34dc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dc30: 0xa0800028  sb          $zero, 0x28($a0)
    ctx->pc = 0x34dc30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dc34: 0xa0800029  sb          $zero, 0x29($a0)
    ctx->pc = 0x34dc34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dc38: 0xa080002a  sb          $zero, 0x2A($a0)
    ctx->pc = 0x34dc38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dc3c: 0xa080002b  sb          $zero, 0x2B($a0)
    ctx->pc = 0x34dc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dc40: 0xa080002c  sb          $zero, 0x2C($a0)
    ctx->pc = 0x34dc40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dc44: 0xa080002e  sb          $zero, 0x2E($a0)
    ctx->pc = 0x34dc44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dc48: 0xa080002d  sb          $zero, 0x2D($a0)
    ctx->pc = 0x34dc48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dc4c: 0xa4800030  sh          $zero, 0x30($a0)
    ctx->pc = 0x34dc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x34dc50: 0xa080002f  sb          $zero, 0x2F($a0)
    ctx->pc = 0x34dc50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dc54: 0xa0800040  sb          $zero, 0x40($a0)
    ctx->pc = 0x34dc54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dc58: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x34dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x34dc5c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x34dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x34dc60: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x34dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x34dc64: 0x3e00008  jr          $ra
    ctx->pc = 0x34DC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DC64u;
        // 0x34dc68: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DC6Cu;
}
