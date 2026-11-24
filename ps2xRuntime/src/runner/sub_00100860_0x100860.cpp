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

// Function: sub_00100860
// Address: 0x100860 - 0x100884
void sub_00100860_0x100860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100860_0x100860");
#endif

    switch (ctx->pc) {
        case 0x100860u: goto label_100860;
        case 0x100864u: goto label_100864;
        case 0x100868u: goto label_100868;
        case 0x10086cu: goto label_10086c;
        case 0x100870u: goto label_100870;
        case 0x100874u: goto label_100874;
        case 0x100878u: goto label_100878;
        case 0x10087cu: goto label_10087c;
        case 0x100880u: goto label_100880;
        default: break;
    }

    ctx->pc = 0x100860u;

label_100860:
    // 0x100860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_100864:
    // 0x100864: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x100864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
label_100868:
    // 0x100868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10086c:
    // 0x10086c: 0x8c222808  lw          $v0, 0x2808($at)
    ctx->pc = 0x10086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
label_100870:
    // 0x100870: 0x40f809  jalr        $v0
label_100874:
    if (ctx->pc == 0x100874u) {
        ctx->pc = 0x100878u;
        goto label_100878;
    }
    ctx->pc = 0x100870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x100878u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100870u, 0x100878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100878u;
label_100878:
    // 0x100878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10087c:
    // 0x10087c: 0x3e00008  jr          $ra
label_100880:
    if (ctx->pc == 0x100880u) {
        ctx->pc = 0x100880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10087Cu;
        // 0x100880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100884u;
        goto label_fallthrough_0x10087c;
    }
    ctx->pc = 0x10087Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10087Cu;
        // 0x100880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10087Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10087c:
    ctx->pc = 0x100884u;
}
