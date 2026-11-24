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

// Function: sub_002938B0
// Address: 0x2938b0 - 0x2938c0
void sub_002938B0_0x2938b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002938B0_0x2938b0");
#endif

    switch (ctx->pc) {
        case 0x2938b0u: goto label_2938b0;
        case 0x2938b4u: goto label_2938b4;
        case 0x2938b8u: goto label_2938b8;
        case 0x2938bcu: goto label_2938bc;
        default: break;
    }

    ctx->pc = 0x2938b0u;

label_2938b0:
    // 0x2938b0: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x2938b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_2938b4:
    // 0x2938b4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2938b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2938b8:
    // 0x2938b8: 0x3200008  jr          $t9
label_2938bc:
    if (ctx->pc == 0x2938BCu) {
        ctx->pc = 0x2938C0u;
        goto label_fallthrough_0x2938b8;
    }
    ctx->pc = 0x2938B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2938B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2938b8:
    ctx->pc = 0x2938C0u;
}
