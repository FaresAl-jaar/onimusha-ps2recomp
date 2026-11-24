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

// Function: sub_00234AA0
// Address: 0x234aa0 - 0x234ad4
void sub_00234AA0_0x234aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234AA0_0x234aa0");
#endif

    switch (ctx->pc) {
        case 0x234ab0u: goto label_234ab0;
        case 0x234ab8u: goto label_234ab8;
        case 0x234ac0u: goto label_234ac0;
        case 0x234ac8u: goto label_234ac8;
        default: break;
    }

    ctx->pc = 0x234aa0u;

    // 0x234aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234aa8: 0xc094f04  jal         func_253C10
    ctx->pc = 0x234AA8u;
    SET_GPR_U32(ctx, 31, 0x234AB0u);
    ctx->pc = 0x253C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C10u, 0x234AA8u, 0x234AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AB0u;
label_234ab0:
    // 0x234ab0: 0xc08d25c  jal         func_234970
    ctx->pc = 0x234AB0u;
    SET_GPR_U32(ctx, 31, 0x234AB8u);
    ctx->pc = 0x234970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234970u, 0x234AB0u, 0x234AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AB8u;
label_234ab8:
    // 0x234ab8: 0xc08d3de  jal         func_234F78
    ctx->pc = 0x234AB8u;
    SET_GPR_U32(ctx, 31, 0x234AC0u);
    ctx->pc = 0x234F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234F78u, 0x234AB8u, 0x234AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AC0u;
label_234ac0:
    // 0x234ac0: 0xc08d29e  jal         func_234A78
    ctx->pc = 0x234AC0u;
    SET_GPR_U32(ctx, 31, 0x234AC8u);
    ctx->pc = 0x234A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234A78u, 0x234AC0u, 0x234AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AC8u;
label_234ac8:
    // 0x234ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234acc: 0x8094f10  j           func_253C40
    ctx->pc = 0x234ACCu;
    ctx->pc = 0x234AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234ACCu;
    // 0x234ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253C40u;
    sub_00253C40_0x253c40(rdram, ctx, runtime); return;
    ctx->pc = 0x234AD4u;
}
