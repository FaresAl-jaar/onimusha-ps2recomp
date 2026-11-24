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

// Function: sub_00233088
// Address: 0x233088 - 0x2330ac
void sub_00233088_0x233088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233088_0x233088");
#endif

    switch (ctx->pc) {
        case 0x233098u: goto label_233098;
        case 0x2330a0u: goto label_2330a0;
        default: break;
    }

    ctx->pc = 0x233088u;

    // 0x233088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23308c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233090: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x233090u;
    SET_GPR_U32(ctx, 31, 0x233098u);
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x233090u, 0x233098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233098u;
label_233098:
    // 0x233098: 0xc08cc2c  jal         func_2330B0
    ctx->pc = 0x233098u;
    SET_GPR_U32(ctx, 31, 0x2330A0u);
    ctx->pc = 0x2330B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2330B0u, 0x233098u, 0x2330A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330A0u;
label_2330a0:
    // 0x2330a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2330a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2330a4: 0x808b536  j           func_22D4D8
    ctx->pc = 0x2330A4u;
    ctx->pc = 0x2330A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330A4u;
    // 0x2330a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2330ACu;
}
