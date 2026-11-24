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

// Function: sub_003C1D00
// Address: 0x3c1d00 - 0x3c1d1c
void sub_003C1D00_0x3c1d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1D00_0x3c1d00");
#endif

    ctx->pc = 0x3c1d00u;

    // 0x3c1d00: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x3c1d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x3c1d04: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x3c1d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x3c1d08: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3c1d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3c1d0c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3c1d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3c1d10: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x3c1d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x3c1d14: 0x3e00008  jr          $ra
    ctx->pc = 0x3C1D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D14u;
        // 0x3c1d18: 0xa0800014  sb          $zero, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1D1Cu;
}
