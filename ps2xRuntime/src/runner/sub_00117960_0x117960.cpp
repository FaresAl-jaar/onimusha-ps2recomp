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

// Function: sub_00117960
// Address: 0x117960 - 0x117970
void sub_00117960_0x117960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117960_0x117960");
#endif

    switch (ctx->pc) {
        case 0x117968u: goto label_117968;
        default: break;
    }

    ctx->pc = 0x117960u;

    // 0x117960: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x117960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x117964: 0xc  syscall     0
    ctx->pc = 0x117964u;
    ctx->pc = 0x117968u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_117968:
    // 0x117968: 0x3e00008  jr          $ra
    ctx->pc = 0x117968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117970u;
}
