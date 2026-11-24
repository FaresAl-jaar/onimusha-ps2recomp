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

// Function: sub_00118200
// Address: 0x118200 - 0x118210
void sub_00118200_0x118200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118200_0x118200");
#endif

    switch (ctx->pc) {
        case 0x118208u: goto label_118208;
        default: break;
    }

    ctx->pc = 0x118200u;

    // 0x118200: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x118200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x118204: 0xc  syscall     0
    ctx->pc = 0x118204u;
    ctx->pc = 0x118208u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_118208:
    // 0x118208: 0x3e00008  jr          $ra
    ctx->pc = 0x118208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118210u;
}
