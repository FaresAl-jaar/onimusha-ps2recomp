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

// Function: sub_0010E300
// Address: 0x10e300 - 0x10e310
void sub_0010E300_0x10e300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E300_0x10e300");
#endif

    switch (ctx->pc) {
        case 0x10e308u: goto label_10e308;
        default: break;
    }

    ctx->pc = 0x10e300u;

    // 0x10e300: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x10e300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x10e304: 0xc  syscall     0
    ctx->pc = 0x10e304u;
    ctx->pc = 0x10E308u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10e308:
    // 0x10e308: 0x3e00008  jr          $ra
    ctx->pc = 0x10E308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E310u;
}
