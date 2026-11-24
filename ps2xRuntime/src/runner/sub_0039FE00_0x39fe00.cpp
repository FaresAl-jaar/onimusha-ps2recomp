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

// Function: sub_0039FE00
// Address: 0x39fe00 - 0x39fe6c
void sub_0039FE00_0x39fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FE00_0x39fe00");
#endif

    switch (ctx->pc) {
        case 0x39fe10u: goto label_39fe10;
        case 0x39fe18u: goto label_39fe18;
        case 0x39fe20u: goto label_39fe20;
        case 0x39fe28u: goto label_39fe28;
        case 0x39fe30u: goto label_39fe30;
        case 0x39fe38u: goto label_39fe38;
        case 0x39fe40u: goto label_39fe40;
        case 0x39fe48u: goto label_39fe48;
        case 0x39fe50u: goto label_39fe50;
        case 0x39fe58u: goto label_39fe58;
        case 0x39fe60u: goto label_39fe60;
        default: break;
    }

    ctx->pc = 0x39fe00u;

    // 0x39fe00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39fe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39fe04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39fe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39fe08: 0xc0d0c98  jal         func_343260
    ctx->pc = 0x39FE08u;
    SET_GPR_U32(ctx, 31, 0x39FE10u);
    ctx->pc = 0x343260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343260u, 0x39FE08u, 0x39FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE10u;
label_39fe10:
    // 0x39fe10: 0xc0da6d4  jal         func_369B50
    ctx->pc = 0x39FE10u;
    SET_GPR_U32(ctx, 31, 0x39FE18u);
    ctx->pc = 0x369B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369B50u, 0x39FE10u, 0x39FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE18u;
label_39fe18:
    // 0x39fe18: 0xc0fb608  jal         func_3ED820
    ctx->pc = 0x39FE18u;
    SET_GPR_U32(ctx, 31, 0x39FE20u);
    ctx->pc = 0x3ED820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED820u, 0x39FE18u, 0x39FE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE20u;
label_39fe20:
    // 0x39fe20: 0xc0ddae4  jal         func_376B90
    ctx->pc = 0x39FE20u;
    SET_GPR_U32(ctx, 31, 0x39FE28u);
    ctx->pc = 0x376B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376B90u, 0x39FE20u, 0x39FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE28u;
label_39fe28:
    // 0x39fe28: 0xc0e4038  jal         func_3900E0
    ctx->pc = 0x39FE28u;
    SET_GPR_U32(ctx, 31, 0x39FE30u);
    ctx->pc = 0x3900E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900E0u, 0x39FE28u, 0x39FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE30u;
label_39fe30:
    // 0x39fe30: 0xc0d5634  jal         func_3558D0
    ctx->pc = 0x39FE30u;
    SET_GPR_U32(ctx, 31, 0x39FE38u);
    ctx->pc = 0x3558D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3558D0u, 0x39FE30u, 0x39FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE38u;
label_39fe38:
    // 0x39fe38: 0xc0ddeb0  jal         func_377AC0
    ctx->pc = 0x39FE38u;
    SET_GPR_U32(ctx, 31, 0x39FE40u);
    ctx->pc = 0x377AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377AC0u, 0x39FE38u, 0x39FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE40u;
label_39fe40:
    // 0x39fe40: 0xc0f1e90  jal         func_3C7A40
    ctx->pc = 0x39FE40u;
    SET_GPR_U32(ctx, 31, 0x39FE48u);
    ctx->pc = 0x3C7A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7A40u, 0x39FE40u, 0x39FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE48u;
label_39fe48:
    // 0x39fe48: 0xc0f4050  jal         func_3D0140
    ctx->pc = 0x39FE48u;
    SET_GPR_U32(ctx, 31, 0x39FE50u);
    ctx->pc = 0x3D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0140u, 0x39FE48u, 0x39FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE50u;
label_39fe50:
    // 0x39fe50: 0xc0f4d74  jal         func_3D35D0
    ctx->pc = 0x39FE50u;
    SET_GPR_U32(ctx, 31, 0x39FE58u);
    ctx->pc = 0x3D35D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D35D0u, 0x39FE50u, 0x39FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE58u;
label_39fe58:
    // 0x39fe58: 0xc0f827c  jal         func_3E09F0
    ctx->pc = 0x39FE58u;
    SET_GPR_U32(ctx, 31, 0x39FE60u);
    ctx->pc = 0x3E09F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E09F0u, 0x39FE58u, 0x39FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE60u;
label_39fe60:
    // 0x39fe60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39fe60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39fe64: 0x3e00008  jr          $ra
    ctx->pc = 0x39FE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE64u;
        // 0x39fe68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FE6Cu;
}
