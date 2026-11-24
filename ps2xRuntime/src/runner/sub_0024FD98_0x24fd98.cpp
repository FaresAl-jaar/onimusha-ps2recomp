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

// Function: sub_0024FD98
// Address: 0x24fd98 - 0x24fdc4
void sub_0024FD98_0x24fd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FD98_0x24fd98");
#endif

    switch (ctx->pc) {
        case 0x24fda8u: goto label_24fda8;
        case 0x24fdb0u: goto label_24fdb0;
        case 0x24fdb8u: goto label_24fdb8;
        default: break;
    }

    ctx->pc = 0x24fd98u;

    // 0x24fd98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24fd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24fd9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24fd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24fda0: 0xc093f20  jal         func_24FC80
    ctx->pc = 0x24FDA0u;
    SET_GPR_U32(ctx, 31, 0x24FDA8u);
    ctx->pc = 0x24FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FC80u, 0x24FDA0u, 0x24FDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FDA8u;
label_24fda8:
    // 0x24fda8: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x24FDA8u;
    SET_GPR_U32(ctx, 31, 0x24FDB0u);
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x24FDA8u, 0x24FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FDB0u;
label_24fdb0:
    // 0x24fdb0: 0xc093f72  jal         func_24FDC8
    ctx->pc = 0x24FDB0u;
    SET_GPR_U32(ctx, 31, 0x24FDB8u);
    ctx->pc = 0x24FDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FDC8u, 0x24FDB0u, 0x24FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FDB8u;
label_24fdb8:
    // 0x24fdb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24fdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fdbc: 0x8093f40  j           func_24FD00
    ctx->pc = 0x24FDBCu;
    ctx->pc = 0x24FDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FDBCu;
    // 0x24fdc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x24FDC4u;
}
