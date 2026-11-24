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

// Function: sub_00233200
// Address: 0x233200 - 0x233258
void sub_00233200_0x233200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233200_0x233200");
#endif

    switch (ctx->pc) {
        case 0x233210u: goto label_233210;
        case 0x233218u: goto label_233218;
        case 0x233220u: goto label_233220;
        case 0x233228u: goto label_233228;
        case 0x233230u: goto label_233230;
        case 0x233238u: goto label_233238;
        case 0x233240u: goto label_233240;
        case 0x233248u: goto label_233248;
        default: break;
    }

    ctx->pc = 0x233200u;

    // 0x233200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x233204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233208: 0xc094e44  jal         func_253910
    ctx->pc = 0x233208u;
    SET_GPR_U32(ctx, 31, 0x233210u);
    ctx->pc = 0x253910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253910u, 0x233208u, 0x233210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233210u;
label_233210:
    // 0x233210: 0xc094e4a  jal         func_253928
    ctx->pc = 0x233210u;
    SET_GPR_U32(ctx, 31, 0x233218u);
    ctx->pc = 0x253928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253928u, 0x233210u, 0x233218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233218u;
label_233218:
    // 0x233218: 0xc094e50  jal         func_253940
    ctx->pc = 0x233218u;
    SET_GPR_U32(ctx, 31, 0x233220u);
    ctx->pc = 0x253940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253940u, 0x233218u, 0x233220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233220u;
label_233220:
    // 0x233220: 0xc094e56  jal         func_253958
    ctx->pc = 0x233220u;
    SET_GPR_U32(ctx, 31, 0x233228u);
    ctx->pc = 0x253958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253958u, 0x233220u, 0x233228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233228u;
label_233228:
    // 0x233228: 0xc094e5c  jal         func_253970
    ctx->pc = 0x233228u;
    SET_GPR_U32(ctx, 31, 0x233230u);
    ctx->pc = 0x253970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253970u, 0x233228u, 0x233230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233230u;
label_233230:
    // 0x233230: 0xc094e62  jal         func_253988
    ctx->pc = 0x233230u;
    SET_GPR_U32(ctx, 31, 0x233238u);
    ctx->pc = 0x253988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253988u, 0x233230u, 0x233238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233238u;
label_233238:
    // 0x233238: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x233238u;
    SET_GPR_U32(ctx, 31, 0x233240u);
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x233238u, 0x233240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233240u;
label_233240:
    // 0x233240: 0xc094e6e  jal         func_2539B8
    ctx->pc = 0x233240u;
    SET_GPR_U32(ctx, 31, 0x233248u);
    ctx->pc = 0x2539B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539B8u, 0x233240u, 0x233248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233248u;
label_233248:
    // 0x233248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23324c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23324cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233250: 0x3e00008  jr          $ra
    ctx->pc = 0x233250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233250u;
        // 0x233254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233258u;
}
