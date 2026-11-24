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

// Function: sub_0010DD20
// Address: 0x10dd20 - 0x10dd30
void sub_0010DD20_0x10dd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DD20_0x10dd20");
#endif

    switch (ctx->pc) {
        case 0x10dd28u: goto label_10dd28;
        default: break;
    }

    ctx->pc = 0x10dd20u;

    // 0x10dd20: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x10dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10dd24: 0xc  syscall     0
    ctx->pc = 0x10dd24u;
    ctx->pc = 0x10DD28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10dd28:
    // 0x10dd28: 0x3e00008  jr          $ra
    ctx->pc = 0x10DD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DD30u;
}
