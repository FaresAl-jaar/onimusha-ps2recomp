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

// Function: sub_00231DD8
// Address: 0x231dd8 - 0x231dfc
void sub_00231DD8_0x231dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231DD8_0x231dd8");
#endif

    switch (ctx->pc) {
        case 0x231de8u: goto label_231de8;
        case 0x231df0u: goto label_231df0;
        default: break;
    }

    ctx->pc = 0x231dd8u;

    // 0x231dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231de0: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x231DE0u;
    SET_GPR_U32(ctx, 31, 0x231DE8u);
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x231DE0u, 0x231DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DE8u;
label_231de8:
    // 0x231de8: 0xc08c780  jal         func_231E00
    ctx->pc = 0x231DE8u;
    SET_GPR_U32(ctx, 31, 0x231DF0u);
    ctx->pc = 0x231E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E00u, 0x231DE8u, 0x231DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DF0u;
label_231df0:
    // 0x231df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231df4: 0x808b536  j           func_22D4D8
    ctx->pc = 0x231DF4u;
    ctx->pc = 0x231DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231DF4u;
    // 0x231df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x231DFCu;
}
