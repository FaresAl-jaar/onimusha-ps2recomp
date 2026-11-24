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

// Function: sub_00231CF8
// Address: 0x231cf8 - 0x231d1c
void sub_00231CF8_0x231cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231CF8_0x231cf8");
#endif

    switch (ctx->pc) {
        case 0x231d08u: goto label_231d08;
        case 0x231d10u: goto label_231d10;
        default: break;
    }

    ctx->pc = 0x231cf8u;

    // 0x231cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231cfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231d00: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x231D00u;
    SET_GPR_U32(ctx, 31, 0x231D08u);
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x231D00u, 0x231D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D08u;
label_231d08:
    // 0x231d08: 0xc08c748  jal         func_231D20
    ctx->pc = 0x231D08u;
    SET_GPR_U32(ctx, 31, 0x231D10u);
    ctx->pc = 0x231D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D20u, 0x231D08u, 0x231D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D10u;
label_231d10:
    // 0x231d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231d14: 0x808b536  j           func_22D4D8
    ctx->pc = 0x231D14u;
    ctx->pc = 0x231D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D14u;
    // 0x231d18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x231D1Cu;
}
