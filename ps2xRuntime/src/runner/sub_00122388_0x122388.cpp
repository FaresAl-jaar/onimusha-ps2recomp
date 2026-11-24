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

// Function: sub_00122388
// Address: 0x122388 - 0x1223a0
void sub_00122388_0x122388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122388_0x122388");
#endif

    switch (ctx->pc) {
        case 0x122398u: goto label_122398;
        default: break;
    }

    ctx->pc = 0x122388u;

    // 0x122388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x122388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12238c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12238cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122390: 0xc049c8e  jal         func_127238
    ctx->pc = 0x122390u;
    SET_GPR_U32(ctx, 31, 0x122398u);
    ctx->pc = 0x122394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122390u;
    // 0x122394: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127238u, 0x122390u, 0x122398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122398u;
label_122398:
    // 0x122398: 0xc040086  jal         func_100218
    ctx->pc = 0x122398u;
    SET_GPR_U32(ctx, 31, 0x1223A0u);
    ctx->pc = 0x12239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122398u;
    // 0x12239c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100218u, 0x122398u, 0x1223A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223A0u;
}
