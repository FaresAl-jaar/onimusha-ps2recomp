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

// Function: sub_00263D60
// Address: 0x263d60 - 0x263d70
void sub_00263D60_0x263d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263D60_0x263d60");
#endif

    switch (ctx->pc) {
        case 0x263d60u: goto label_263d60;
        case 0x263d64u: goto label_263d64;
        case 0x263d68u: goto label_263d68;
        case 0x263d6cu: goto label_263d6c;
        default: break;
    }

    ctx->pc = 0x263d60u;

label_263d60:
    // 0x263d60: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x263d60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_263d64:
    // 0x263d64: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x263d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_263d68:
    // 0x263d68: 0x3200008  jr          $t9
label_263d6c:
    if (ctx->pc == 0x263D6Cu) {
        ctx->pc = 0x263D70u;
        goto label_fallthrough_0x263d68;
    }
    ctx->pc = 0x263D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263D68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x263d68:
    ctx->pc = 0x263D70u;
}
