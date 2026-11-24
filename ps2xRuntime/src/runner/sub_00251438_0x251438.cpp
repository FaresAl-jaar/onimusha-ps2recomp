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

// Function: sub_00251438
// Address: 0x251438 - 0x251464
void sub_00251438_0x251438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251438_0x251438");
#endif

    switch (ctx->pc) {
        case 0x251448u: goto label_251448;
        case 0x251450u: goto label_251450;
        case 0x251458u: goto label_251458;
        default: break;
    }

    ctx->pc = 0x251438u;

    // 0x251438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25143c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x251440: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x251440u;
    SET_GPR_U32(ctx, 31, 0x251448u);
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x251440u, 0x251448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251448u;
label_251448:
    // 0x251448: 0xc09451a  jal         func_251468
    ctx->pc = 0x251448u;
    SET_GPR_U32(ctx, 31, 0x251450u);
    ctx->pc = 0x251468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251468u, 0x251448u, 0x251450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251450u;
label_251450:
    // 0x251450: 0xc093f40  jal         func_24FD00
    ctx->pc = 0x251450u;
    SET_GPR_U32(ctx, 31, 0x251458u);
    ctx->pc = 0x24FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD00u, 0x251450u, 0x251458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251458u;
label_251458:
    // 0x251458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x251458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25145c: 0x8093f2e  j           func_24FCB8
    ctx->pc = 0x25145Cu;
    ctx->pc = 0x251460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25145Cu;
    // 0x251460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCB8u;
    sub_0024FCB8_0x24fcb8(rdram, ctx, runtime); return;
    ctx->pc = 0x251464u;
}
