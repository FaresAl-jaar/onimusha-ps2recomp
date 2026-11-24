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

// Function: sub_0010E080
// Address: 0x10e080 - 0x10e090
void sub_0010E080_0x10e080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E080_0x10e080");
#endif

    switch (ctx->pc) {
        case 0x10e088u: goto label_10e088;
        default: break;
    }

    ctx->pc = 0x10e080u;

    // 0x10e080: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x10e080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x10e084: 0xc  syscall     0
    ctx->pc = 0x10e084u;
    ctx->pc = 0x10E088u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10e088:
    // 0x10e088: 0x3e00008  jr          $ra
    ctx->pc = 0x10E088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E090u;
}
