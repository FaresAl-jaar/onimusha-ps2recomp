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

// Function: sub_00239820
// Address: 0x239820 - 0x239844
void sub_00239820_0x239820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239820_0x239820");
#endif

    switch (ctx->pc) {
        case 0x239830u: goto label_239830;
        case 0x239838u: goto label_239838;
        default: break;
    }

    ctx->pc = 0x239820u;

    // 0x239820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239828: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x239828u;
    SET_GPR_U32(ctx, 31, 0x239830u);
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x239828u, 0x239830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239830u;
label_239830:
    // 0x239830: 0xc08e612  jal         func_239848
    ctx->pc = 0x239830u;
    SET_GPR_U32(ctx, 31, 0x239838u);
    ctx->pc = 0x239848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239848u, 0x239830u, 0x239838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239838u;
label_239838:
    // 0x239838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23983c: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23983Cu;
    ctx->pc = 0x239840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23983Cu;
    // 0x239840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x239844u;
}
