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

// Function: sub_00350D80
// Address: 0x350d80 - 0x350da8
void sub_00350D80_0x350d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350D80_0x350d80");
#endif

    ctx->pc = 0x350d80u;

    // 0x350d80: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x350d80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x350d84: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x350d84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x350d88: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x350d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x350d8c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x350d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x350d90: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x350d90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x350d94: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x350d94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x350d98: 0xa0800015  sb          $zero, 0x15($a0)
    ctx->pc = 0x350d98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x350d9c: 0xa0800016  sb          $zero, 0x16($a0)
    ctx->pc = 0x350d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x350da0: 0x3e00008  jr          $ra
    ctx->pc = 0x350DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350DA0u;
        // 0x350da4: 0xa0800018  sb          $zero, 0x18($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350DA8u;
}
