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

// Function: sub_0010E030
// Address: 0x10e030 - 0x10e040
void sub_0010E030_0x10e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E030_0x10e030");
#endif

    switch (ctx->pc) {
        case 0x10e038u: goto label_10e038;
        default: break;
    }

    ctx->pc = 0x10e030u;

    // 0x10e030: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x10e030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x10e034: 0xc  syscall     0
    ctx->pc = 0x10e034u;
    ctx->pc = 0x10E038u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10e038:
    // 0x10e038: 0x3e00008  jr          $ra
    ctx->pc = 0x10E038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E040u;
}
