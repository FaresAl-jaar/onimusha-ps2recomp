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

// Function: sub_0023B3F8
// Address: 0x23b3f8 - 0x23b41c
void sub_0023B3F8_0x23b3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B3F8_0x23b3f8");
#endif

    switch (ctx->pc) {
        case 0x23b408u: goto label_23b408;
        case 0x23b410u: goto label_23b410;
        default: break;
    }

    ctx->pc = 0x23b3f8u;

    // 0x23b3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b3fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b400: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23B400u;
    SET_GPR_U32(ctx, 31, 0x23B408u);
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23B400u, 0x23B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B408u;
label_23b408:
    // 0x23b408: 0xc08ed08  jal         func_23B420
    ctx->pc = 0x23B408u;
    SET_GPR_U32(ctx, 31, 0x23B410u);
    ctx->pc = 0x23B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B420u, 0x23B408u, 0x23B410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B410u;
label_23b410:
    // 0x23b410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b414: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23B414u;
    ctx->pc = 0x23B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B414u;
    // 0x23b418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B41Cu;
}
