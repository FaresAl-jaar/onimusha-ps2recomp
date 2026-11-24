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

// Function: sub_0039C410
// Address: 0x39c410 - 0x39c45c
void sub_0039C410_0x39c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C410_0x39c410");
#endif

    ctx->pc = 0x39c410u;

    // 0x39c410: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x39c410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39c414: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x39c414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x39c418: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x39c418u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x39c41c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c420: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x39c420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x39c424: 0xac802b20  sw          $zero, 0x2B20($a0)
    ctx->pc = 0x39c424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11040), GPR_U32(ctx, 0));
    // 0x39c428: 0xa0832b2c  sb          $v1, 0x2B2C($a0)
    ctx->pc = 0x39c428u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11052), (uint8_t)GPR_U32(ctx, 3));
    // 0x39c42c: 0xa0802b2f  sb          $zero, 0x2B2F($a0)
    ctx->pc = 0x39c42cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11055), (uint8_t)GPR_U32(ctx, 0));
    // 0x39c430: 0xa0802b32  sb          $zero, 0x2B32($a0)
    ctx->pc = 0x39c430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11058), (uint8_t)GPR_U32(ctx, 0));
    // 0x39c434: 0xac802b24  sw          $zero, 0x2B24($a0)
    ctx->pc = 0x39c434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11044), GPR_U32(ctx, 0));
    // 0x39c438: 0xa0832b2d  sb          $v1, 0x2B2D($a0)
    ctx->pc = 0x39c438u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11053), (uint8_t)GPR_U32(ctx, 3));
    // 0x39c43c: 0xa0802b30  sb          $zero, 0x2B30($a0)
    ctx->pc = 0x39c43cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11056), (uint8_t)GPR_U32(ctx, 0));
    // 0x39c440: 0xa0802b33  sb          $zero, 0x2B33($a0)
    ctx->pc = 0x39c440u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11059), (uint8_t)GPR_U32(ctx, 0));
    // 0x39c444: 0xac802b28  sw          $zero, 0x2B28($a0)
    ctx->pc = 0x39c444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11048), GPR_U32(ctx, 0));
    // 0x39c448: 0xa0832b2e  sb          $v1, 0x2B2E($a0)
    ctx->pc = 0x39c448u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11054), (uint8_t)GPR_U32(ctx, 3));
    // 0x39c44c: 0xa0802b31  sb          $zero, 0x2B31($a0)
    ctx->pc = 0x39c44cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11057), (uint8_t)GPR_U32(ctx, 0));
    // 0x39c450: 0xa0802b34  sb          $zero, 0x2B34($a0)
    ctx->pc = 0x39c450u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11060), (uint8_t)GPR_U32(ctx, 0));
    // 0x39c454: 0x3e00008  jr          $ra
    ctx->pc = 0x39C454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C454u;
        // 0x39c458: 0xa4802b36  sh          $zero, 0x2B36($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11062), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C45Cu;
}
