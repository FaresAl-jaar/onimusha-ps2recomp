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

// Function: sub_00239798
// Address: 0x239798 - 0x2397bc
void sub_00239798_0x239798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239798_0x239798");
#endif

    switch (ctx->pc) {
        case 0x2397a8u: goto label_2397a8;
        case 0x2397b0u: goto label_2397b0;
        default: break;
    }

    ctx->pc = 0x239798u;

    // 0x239798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23979c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23979cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2397a0: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x2397A0u;
    SET_GPR_U32(ctx, 31, 0x2397A8u);
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x2397A0u, 0x2397A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397A8u;
label_2397a8:
    // 0x2397a8: 0xc08e5f0  jal         func_2397C0
    ctx->pc = 0x2397A8u;
    SET_GPR_U32(ctx, 31, 0x2397B0u);
    ctx->pc = 0x2397C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2397C0u, 0x2397A8u, 0x2397B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397B0u;
label_2397b0:
    // 0x2397b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2397b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2397b4: 0x808b536  j           func_22D4D8
    ctx->pc = 0x2397B4u;
    ctx->pc = 0x2397B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397B4u;
    // 0x2397b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2397BCu;
}
