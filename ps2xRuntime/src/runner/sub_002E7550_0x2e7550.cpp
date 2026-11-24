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

// Function: sub_002E7550
// Address: 0x2e7550 - 0x2e7560
void sub_002E7550_0x2e7550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7550_0x2e7550");
#endif

    switch (ctx->pc) {
        case 0x2e7550u: goto label_2e7550;
        case 0x2e7554u: goto label_2e7554;
        case 0x2e7558u: goto label_2e7558;
        case 0x2e755cu: goto label_2e755c;
        default: break;
    }

    ctx->pc = 0x2e7550u;

label_2e7550:
    // 0x2e7550: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x2e7550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_2e7554:
    // 0x2e7554: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2e7554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2e7558:
    // 0x2e7558: 0x3200008  jr          $t9
label_2e755c:
    if (ctx->pc == 0x2E755Cu) {
        ctx->pc = 0x2E7560u;
        goto label_fallthrough_0x2e7558;
    }
    ctx->pc = 0x2E7558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7558u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2e7558:
    ctx->pc = 0x2E7560u;
}
