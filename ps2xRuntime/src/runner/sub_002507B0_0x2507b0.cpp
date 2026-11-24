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

// Function: sub_002507B0
// Address: 0x2507b0 - 0x2507dc
void sub_002507B0_0x2507b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002507B0_0x2507b0");
#endif

    switch (ctx->pc) {
        case 0x2507c0u: goto label_2507c0;
        case 0x2507c8u: goto label_2507c8;
        case 0x2507d0u: goto label_2507d0;
        default: break;
    }

    ctx->pc = 0x2507b0u;

    // 0x2507b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2507b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2507b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2507b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2507b8: 0xc093f20  jal         func_24FC80
    ctx->pc = 0x2507B8u;
    SET_GPR_U32(ctx, 31, 0x2507C0u);
    ctx->pc = 0x24FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FC80u, 0x2507B8u, 0x2507C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2507C0u;
label_2507c0:
    // 0x2507c0: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x2507C0u;
    SET_GPR_U32(ctx, 31, 0x2507C8u);
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x2507C0u, 0x2507C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2507C8u;
label_2507c8:
    // 0x2507c8: 0xc0941f8  jal         func_2507E0
    ctx->pc = 0x2507C8u;
    SET_GPR_U32(ctx, 31, 0x2507D0u);
    ctx->pc = 0x2507E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2507E0u, 0x2507C8u, 0x2507D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2507D0u;
label_2507d0:
    // 0x2507d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2507d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2507d4: 0x8093f40  j           func_24FD00
    ctx->pc = 0x2507D4u;
    ctx->pc = 0x2507D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2507D4u;
    // 0x2507d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x2507DCu;
}
