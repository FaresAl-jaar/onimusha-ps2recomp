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

// Function: sub_00263D20
// Address: 0x263d20 - 0x263d30
void sub_00263D20_0x263d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263D20_0x263d20");
#endif

    switch (ctx->pc) {
        case 0x263d20u: goto label_263d20;
        case 0x263d24u: goto label_263d24;
        case 0x263d28u: goto label_263d28;
        case 0x263d2cu: goto label_263d2c;
        default: break;
    }

    ctx->pc = 0x263d20u;

label_263d20:
    // 0x263d20: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x263d20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_263d24:
    // 0x263d24: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x263d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_263d28:
    // 0x263d28: 0x3200008  jr          $t9
label_263d2c:
    if (ctx->pc == 0x263D2Cu) {
        ctx->pc = 0x263D30u;
        goto label_fallthrough_0x263d28;
    }
    ctx->pc = 0x263D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263D28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x263d28:
    ctx->pc = 0x263D30u;
}
