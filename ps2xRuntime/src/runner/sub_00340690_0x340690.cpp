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

// Function: sub_00340690
// Address: 0x340690 - 0x3406b4
void sub_00340690_0x340690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340690_0x340690");
#endif

    ctx->pc = 0x340690u;

    // 0x340690: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x340690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x340694: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x340694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x340698: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x340698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x34069c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x34069cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3406a0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3406a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3406a4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x3406a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x3406a8: 0xa4800018  sh          $zero, 0x18($a0)
    ctx->pc = 0x3406a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x3406ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3406ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3406B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3406ACu;
        // 0x3406b0: 0xa080001a  sb          $zero, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3406ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3406B4u;
}
