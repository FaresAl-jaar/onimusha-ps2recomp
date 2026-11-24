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

// Function: sub_0034BB50
// Address: 0x34bb50 - 0x34bb60
void sub_0034BB50_0x34bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BB50_0x34bb50");
#endif

    switch (ctx->pc) {
        case 0x34bb50u: goto label_34bb50;
        case 0x34bb54u: goto label_34bb54;
        case 0x34bb58u: goto label_34bb58;
        case 0x34bb5cu: goto label_34bb5c;
        default: break;
    }

    ctx->pc = 0x34bb50u;

label_34bb50:
    // 0x34bb50: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x34bb50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_34bb54:
    // 0x34bb54: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x34bb54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_34bb58:
    // 0x34bb58: 0x3200008  jr          $t9
label_34bb5c:
    if (ctx->pc == 0x34BB5Cu) {
        ctx->pc = 0x34BB60u;
        goto label_fallthrough_0x34bb58;
    }
    ctx->pc = 0x34BB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BB58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x34bb58:
    ctx->pc = 0x34BB60u;
}
