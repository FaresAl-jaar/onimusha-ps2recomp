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

// Function: sub_001DBB60
// Address: 0x1dbb60 - 0x1dbb74
void sub_001DBB60_0x1dbb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBB60_0x1dbb60");
#endif

    switch (ctx->pc) {
        case 0x1dbb60u: goto label_1dbb60;
        case 0x1dbb64u: goto label_1dbb64;
        case 0x1dbb68u: goto label_1dbb68;
        case 0x1dbb6cu: goto label_1dbb6c;
        case 0x1dbb70u: goto label_1dbb70;
        default: break;
    }

    ctx->pc = 0x1dbb60u;

label_1dbb60:
    // 0x1dbb60: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x1dbb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1dbb64:
    // 0x1dbb64: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1dbb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1dbb68:
    // 0x1dbb68: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dbb68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dbb6c:
    // 0x1dbb6c: 0x3200008  jr          $t9
label_1dbb70:
    if (ctx->pc == 0x1DBB70u) {
        ctx->pc = 0x1DBB74u;
        goto label_fallthrough_0x1dbb6c;
    }
    ctx->pc = 0x1DBB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBB6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1dbb6c:
    ctx->pc = 0x1DBB74u;
}
