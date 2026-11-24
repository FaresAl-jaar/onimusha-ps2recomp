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

// Function: sub_002201B0
// Address: 0x2201b0 - 0x2201d8
void sub_002201B0_0x2201b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002201B0_0x2201b0");
#endif

    ctx->pc = 0x2201b0u;

    // 0x2201b0: 0xa480001e  sh          $zero, 0x1E($a0)
    ctx->pc = 0x2201b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x2201b4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2201b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2201b8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2201b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2201bc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2201bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2201c0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2201c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2201c4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2201c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2201c8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2201c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2201cc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2201ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2201d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2201D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2201D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201D0u;
        // 0x2201d4: 0xa480001c  sh          $zero, 0x1C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2201D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2201D8u;
}
