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

// Function: sub_0010DE30
// Address: 0x10de30 - 0x10de40
void sub_0010DE30_0x10de30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DE30_0x10de30");
#endif

    switch (ctx->pc) {
        case 0x10de38u: goto label_10de38;
        default: break;
    }

    ctx->pc = 0x10de30u;

    // 0x10de30: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x10de30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x10de34: 0xc  syscall     0
    ctx->pc = 0x10de34u;
    ctx->pc = 0x10DE38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10de38:
    // 0x10de38: 0x3e00008  jr          $ra
    ctx->pc = 0x10DE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DE40u;
}
