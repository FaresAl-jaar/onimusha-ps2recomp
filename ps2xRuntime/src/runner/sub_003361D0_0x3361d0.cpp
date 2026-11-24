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

// Function: sub_003361D0
// Address: 0x3361d0 - 0x3361e0
void sub_003361D0_0x3361d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003361D0_0x3361d0");
#endif

    switch (ctx->pc) {
        case 0x3361d0u: goto label_3361d0;
        case 0x3361d4u: goto label_3361d4;
        case 0x3361d8u: goto label_3361d8;
        case 0x3361dcu: goto label_3361dc;
        default: break;
    }

    ctx->pc = 0x3361d0u;

label_3361d0:
    // 0x3361d0: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x3361d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_3361d4:
    // 0x3361d4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x3361d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_3361d8:
    // 0x3361d8: 0x3200008  jr          $t9
label_3361dc:
    if (ctx->pc == 0x3361DCu) {
        ctx->pc = 0x3361E0u;
        goto label_fallthrough_0x3361d8;
    }
    ctx->pc = 0x3361D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3361D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x3361d8:
    ctx->pc = 0x3361E0u;
}
