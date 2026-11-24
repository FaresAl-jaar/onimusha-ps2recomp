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

// Function: sub_00250830
// Address: 0x250830 - 0x25085c
void sub_00250830_0x250830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250830_0x250830");
#endif

    switch (ctx->pc) {
        case 0x250840u: goto label_250840;
        case 0x250848u: goto label_250848;
        case 0x250850u: goto label_250850;
        default: break;
    }

    ctx->pc = 0x250830u;

    // 0x250830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250838: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x250838u;
    SET_GPR_U32(ctx, 31, 0x250840u);
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x250838u, 0x250840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250840u;
label_250840:
    // 0x250840: 0xc094218  jal         func_250860
    ctx->pc = 0x250840u;
    SET_GPR_U32(ctx, 31, 0x250848u);
    ctx->pc = 0x250860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250860u, 0x250840u, 0x250848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250848u;
label_250848:
    // 0x250848: 0xc093f40  jal         func_24FD00
    ctx->pc = 0x250848u;
    SET_GPR_U32(ctx, 31, 0x250850u);
    ctx->pc = 0x24FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD00u, 0x250848u, 0x250850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250850u;
label_250850:
    // 0x250850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250854: 0x8093f2e  j           func_24FCB8
    ctx->pc = 0x250854u;
    ctx->pc = 0x250858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250854u;
    // 0x250858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCB8u;
    sub_0024FCB8_0x24fcb8(rdram, ctx, runtime); return;
    ctx->pc = 0x25085Cu;
}
