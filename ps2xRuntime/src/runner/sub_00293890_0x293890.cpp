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

// Function: sub_00293890
// Address: 0x293890 - 0x2938a0
void sub_00293890_0x293890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293890_0x293890");
#endif

    switch (ctx->pc) {
        case 0x293890u: goto label_293890;
        case 0x293894u: goto label_293894;
        case 0x293898u: goto label_293898;
        case 0x29389cu: goto label_29389c;
        default: break;
    }

    ctx->pc = 0x293890u;

label_293890:
    // 0x293890: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x293890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_293894:
    // 0x293894: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x293894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_293898:
    // 0x293898: 0x3200008  jr          $t9
label_29389c:
    if (ctx->pc == 0x29389Cu) {
        ctx->pc = 0x2938A0u;
        goto label_fallthrough_0x293898;
    }
    ctx->pc = 0x293898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293898u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x293898:
    ctx->pc = 0x2938A0u;
}
