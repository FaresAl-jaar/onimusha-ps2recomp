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

// Function: sub_00118358
// Address: 0x118358 - 0x1183ac
void sub_00118358_0x118358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118358_0x118358");
#endif

    switch (ctx->pc) {
        case 0x118368u: goto label_118368;
        case 0x118370u: goto label_118370;
        case 0x118378u: goto label_118378;
        case 0x118380u: goto label_118380;
        case 0x118388u: goto label_118388;
        case 0x118390u: goto label_118390;
        case 0x118398u: goto label_118398;
        case 0x1183a0u: goto label_1183a0;
        default: break;
    }

    ctx->pc = 0x118358u;

    // 0x118358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11835c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11835cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x118360: 0xc046042  jal         func_118108
    ctx->pc = 0x118360u;
    SET_GPR_U32(ctx, 31, 0x118368u);
    ctx->pc = 0x118108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118108u, 0x118360u, 0x118368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118368u;
label_118368:
    // 0x118368: 0xc046092  jal         func_118248
    ctx->pc = 0x118368u;
    SET_GPR_U32(ctx, 31, 0x118370u);
    ctx->pc = 0x118248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118248u, 0x118368u, 0x118370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118370u;
label_118370:
    // 0x118370: 0xc04620e  jal         func_118838
    ctx->pc = 0x118370u;
    SET_GPR_U32(ctx, 31, 0x118378u);
    ctx->pc = 0x118838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118838u, 0x118370u, 0x118378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118378u;
label_118378:
    // 0x118378: 0xc04626c  jal         func_1189B0
    ctx->pc = 0x118378u;
    SET_GPR_U32(ctx, 31, 0x118380u);
    ctx->pc = 0x11837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118378u;
    // 0x11837c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189B0u, 0x118378u, 0x118380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118380u;
label_118380:
    // 0x118380: 0xc0462fc  jal         func_118BF0
    ctx->pc = 0x118380u;
    SET_GPR_U32(ctx, 31, 0x118388u);
    ctx->pc = 0x118BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BF0u, 0x118380u, 0x118388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118388u;
label_118388:
    // 0x118388: 0xc043b6e  jal         func_10EDB8
    ctx->pc = 0x118388u;
    SET_GPR_U32(ctx, 31, 0x118390u);
    ctx->pc = 0x10EDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EDB8u, 0x118388u, 0x118390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118390u;
label_118390:
    // 0x118390: 0xc046120  jal         func_118480
    ctx->pc = 0x118390u;
    SET_GPR_U32(ctx, 31, 0x118398u);
    ctx->pc = 0x118480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118480u, 0x118390u, 0x118398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118398u;
label_118398:
    // 0x118398: 0xc045e5c  jal         func_117970
    ctx->pc = 0x118398u;
    SET_GPR_U32(ctx, 31, 0x1183A0u);
    ctx->pc = 0x117970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117970u, 0x118398u, 0x1183A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1183A0u;
label_1183a0:
    // 0x1183a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1183a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1183a4: 0x804681c  j           func_11A070
    ctx->pc = 0x1183A4u;
    ctx->pc = 0x1183A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1183A4u;
    // 0x1183a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A070u;
    sub_0011A070_0x11a070(rdram, ctx, runtime); return;
    ctx->pc = 0x1183ACu;
}
