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

// Function: sub_001D0140
// Address: 0x1d0140 - 0x1d0164
void sub_001D0140_0x1d0140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0140_0x1d0140");
#endif

    ctx->pc = 0x1d0140u;

    // 0x1d0140: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x1d0140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x1d0144: 0x24428200  addiu       $v0, $v0, -0x7E00
    ctx->pc = 0x1d0144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935040));
    // 0x1d0148: 0xac823030  sw          $v0, 0x3030($a0)
    ctx->pc = 0x1d0148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12336), GPR_U32(ctx, 2));
    // 0x1d014c: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x1d014cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x1d0150: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x1d0150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x1d0154: 0xac823034  sw          $v0, 0x3034($a0)
    ctx->pc = 0x1d0154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12340), GPR_U32(ctx, 2));
    // 0x1d0158: 0x8c823030  lw          $v0, 0x3030($a0)
    ctx->pc = 0x1d0158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12336)));
    // 0x1d015c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D015Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D015Cu;
        // 0x1d0160: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D015Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0164u;
}
