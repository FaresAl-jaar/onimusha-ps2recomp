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

// Function: sub_0024FE18
// Address: 0x24fe18 - 0x24fe44
void sub_0024FE18_0x24fe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FE18_0x24fe18");
#endif

    switch (ctx->pc) {
        case 0x24fe28u: goto label_24fe28;
        case 0x24fe30u: goto label_24fe30;
        case 0x24fe38u: goto label_24fe38;
        default: break;
    }

    ctx->pc = 0x24fe18u;

    // 0x24fe18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24fe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24fe1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24fe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24fe20: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x24FE20u;
    SET_GPR_U32(ctx, 31, 0x24FE28u);
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x24FE20u, 0x24FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FE28u;
label_24fe28:
    // 0x24fe28: 0xc093f92  jal         func_24FE48
    ctx->pc = 0x24FE28u;
    SET_GPR_U32(ctx, 31, 0x24FE30u);
    ctx->pc = 0x24FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE48u, 0x24FE28u, 0x24FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FE30u;
label_24fe30:
    // 0x24fe30: 0xc093f40  jal         func_24FD00
    ctx->pc = 0x24FE30u;
    SET_GPR_U32(ctx, 31, 0x24FE38u);
    ctx->pc = 0x24FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD00u, 0x24FE30u, 0x24FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FE38u;
label_24fe38:
    // 0x24fe38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24fe38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fe3c: 0x8093f2e  j           func_24FCB8
    ctx->pc = 0x24FE3Cu;
    ctx->pc = 0x24FE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FE3Cu;
    // 0x24fe40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCB8u;
    sub_0024FCB8_0x24fcb8(rdram, ctx, runtime); return;
    ctx->pc = 0x24FE44u;
}
