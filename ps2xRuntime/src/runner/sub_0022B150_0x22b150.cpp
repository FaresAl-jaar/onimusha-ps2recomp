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

// Function: sub_0022B150
// Address: 0x22b150 - 0x22b16c
void sub_0022B150_0x22b150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B150_0x22b150");
#endif

    ctx->pc = 0x22b150u;

    // 0x22b150: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22b150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22b154: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22b154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b158: 0x2484b2e4  addiu       $a0, $a0, -0x4D1C
    ctx->pc = 0x22b158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947556));
    // 0x22b15c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BB2E4u));
    // 0x22b160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22b160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22b164: 0x3e00008  jr          $ra
    ctx->pc = 0x22B164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B164u;
        // 0x22b168: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B16Cu;
}
