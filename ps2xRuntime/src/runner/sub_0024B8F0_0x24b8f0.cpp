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

// Function: sub_0024B8F0
// Address: 0x24b8f0 - 0x24b914
void sub_0024B8F0_0x24b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B8F0_0x24b8f0");
#endif

    switch (ctx->pc) {
        case 0x24b900u: goto label_24b900;
        case 0x24b908u: goto label_24b908;
        default: break;
    }

    ctx->pc = 0x24b8f0u;

    // 0x24b8f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b8f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24b8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24b8f8: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24B8F8u;
    SET_GPR_U32(ctx, 31, 0x24B900u);
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24B8F8u, 0x24B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B900u;
label_24b900:
    // 0x24b900: 0xc092e46  jal         func_24B918
    ctx->pc = 0x24B900u;
    SET_GPR_U32(ctx, 31, 0x24B908u);
    ctx->pc = 0x24B918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B918u, 0x24B900u, 0x24B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B908u;
label_24b908:
    // 0x24b908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b90c: 0x8092ff0  j           func_24BFC0
    ctx->pc = 0x24B90Cu;
    ctx->pc = 0x24B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B90Cu;
    // 0x24b910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    sub_0024BFC0_0x24bfc0(rdram, ctx, runtime); return;
    ctx->pc = 0x24B914u;
}
