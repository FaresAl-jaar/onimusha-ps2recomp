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

// Function: sub_0029CDF0
// Address: 0x29cdf0 - 0x29ce50
void sub_0029CDF0_0x29cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CDF0_0x29cdf0");
#endif

    ctx->pc = 0x29cdf0u;

    // 0x29cdf0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x29cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x29cdf4: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x29cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x29cdf8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x29cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x29cdfc: 0x24870090  addiu       $a3, $a0, 0x90
    ctx->pc = 0x29cdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x29ce00: 0xac840044  sw          $a0, 0x44($a0)
    ctx->pc = 0x29ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 4));
    // 0x29ce04: 0x24860060  addiu       $a2, $a0, 0x60
    ctx->pc = 0x29ce04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x29ce08: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x29ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x29ce0c: 0x248500f0  addiu       $a1, $a0, 0xF0
    ctx->pc = 0x29ce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x29ce10: 0xa0800030  sb          $zero, 0x30($a0)
    ctx->pc = 0x29ce10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ce14: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x29ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x29ce18: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x29ce18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ce1c: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x29ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x29ce20: 0xac870070  sw          $a3, 0x70($a0)
    ctx->pc = 0x29ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 7));
    // 0x29ce24: 0xac8600a4  sw          $a2, 0xA4($a0)
    ctx->pc = 0x29ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 6));
    // 0x29ce28: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x29ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x29ce2c: 0xa0800090  sb          $zero, 0x90($a0)
    ctx->pc = 0x29ce2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ce30: 0xa0800060  sb          $zero, 0x60($a0)
    ctx->pc = 0x29ce30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ce34: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x29ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x29ce38: 0xac8500d0  sw          $a1, 0xD0($a0)
    ctx->pc = 0x29ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 5));
    // 0x29ce3c: 0xac830104  sw          $v1, 0x104($a0)
    ctx->pc = 0x29ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 3));
    // 0x29ce40: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x29ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x29ce44: 0xa08000f0  sb          $zero, 0xF0($a0)
    ctx->pc = 0x29ce44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ce48: 0x3e00008  jr          $ra
    ctx->pc = 0x29CE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE48u;
        // 0x29ce4c: 0xa08000c0  sb          $zero, 0xC0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CE50u;
}
