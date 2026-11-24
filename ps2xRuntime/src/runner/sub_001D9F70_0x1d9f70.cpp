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

// Function: sub_001D9F70
// Address: 0x1d9f70 - 0x1d9f80
void sub_001D9F70_0x1d9f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9F70_0x1d9f70");
#endif

    ctx->pc = 0x1d9f70u;

    // 0x1d9f70: 0x460d7001  sub.s       $f0, $f14, $f13
    ctx->pc = 0x1d9f70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
    // 0x1d9f74: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1d9f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1d9f78: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F78u;
        // 0x1d9f7c: 0x460d0000  add.s       $f0, $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9F80u;
}
