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

// Function: sub_00117A58
// Address: 0x117a58 - 0x117a68
void sub_00117A58_0x117a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117A58_0x117a58");
#endif

    switch (ctx->pc) {
        case 0x117a60u: goto label_117a60;
        default: break;
    }

    ctx->pc = 0x117a58u;

    // 0x117a58: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x117a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x117a5c: 0xc  syscall     0
    ctx->pc = 0x117a5cu;
    ctx->pc = 0x117A60u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_117a60:
    // 0x117a60: 0x3e00008  jr          $ra
    ctx->pc = 0x117A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117A68u;
}
