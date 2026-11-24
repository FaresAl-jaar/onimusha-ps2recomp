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

// Function: sub_001F3798
// Address: 0x1f3798 - 0x1f37bc
void sub_001F3798_0x1f3798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3798_0x1f3798");
#endif

    switch (ctx->pc) {
        case 0x1f37a8u: goto label_1f37a8;
        default: break;
    }

    ctx->pc = 0x1f3798u;

    // 0x1f3798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f3798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f379c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f379cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f37a0: 0xc07cdf0  jal         func_1F37C0
    ctx->pc = 0x1F37A0u;
    SET_GPR_U32(ctx, 31, 0x1F37A8u);
    ctx->pc = 0x1F37C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F37C0u, 0x1F37A0u, 0x1F37A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37A8u;
label_1f37a8:
    // 0x1f37a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f37a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f37ac: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f37acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f37b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f37b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f37b4: 0x807cdf4  j           func_1F37D0
    ctx->pc = 0x1F37B4u;
    ctx->pc = 0x1F37B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37B4u;
    // 0x1f37b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F37D0u;
    sub_001F37D0_0x1f37d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F37BCu;
}
