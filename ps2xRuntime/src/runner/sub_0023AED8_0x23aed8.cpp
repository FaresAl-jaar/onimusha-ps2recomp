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

// Function: sub_0023AED8
// Address: 0x23aed8 - 0x23af04
void sub_0023AED8_0x23aed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AED8_0x23aed8");
#endif

    switch (ctx->pc) {
        case 0x23aeecu: goto label_23aeec;
        case 0x23aef4u: goto label_23aef4;
        default: break;
    }

    ctx->pc = 0x23aed8u;

    // 0x23aed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23aed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23aedc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23aedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23aee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23aee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23aee4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23AEE4u;
    SET_GPR_U32(ctx, 31, 0x23AEECu);
    ctx->pc = 0x23AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AEE4u;
    // 0x23aee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23AEE4u, 0x23AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEECu;
label_23aeec:
    // 0x23aeec: 0xc08ebc2  jal         func_23AF08
    ctx->pc = 0x23AEECu;
    SET_GPR_U32(ctx, 31, 0x23AEF4u);
    ctx->pc = 0x23AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AEECu;
    // 0x23aef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF08u, 0x23AEECu, 0x23AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEF4u;
label_23aef4:
    // 0x23aef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23aef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aef8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23aef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23aefc: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23AEFCu;
    ctx->pc = 0x23AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AEFCu;
    // 0x23af00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23AF04u;
}
