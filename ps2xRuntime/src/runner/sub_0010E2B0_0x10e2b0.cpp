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

// Function: sub_0010E2B0
// Address: 0x10e2b0 - 0x10e2c0
void sub_0010E2B0_0x10e2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E2B0_0x10e2b0");
#endif

    switch (ctx->pc) {
        case 0x10e2b8u: goto label_10e2b8;
        default: break;
    }

    ctx->pc = 0x10e2b0u;

    // 0x10e2b0: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x10e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x10e2b4: 0xc  syscall     0
    ctx->pc = 0x10e2b4u;
    ctx->pc = 0x10E2B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10e2b8:
    // 0x10e2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E2C0u;
}
