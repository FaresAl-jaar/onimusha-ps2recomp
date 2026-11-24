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

// Function: sub_00239BD0
// Address: 0x239bd0 - 0x239bfc
void sub_00239BD0_0x239bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239BD0_0x239bd0");
#endif

    switch (ctx->pc) {
        case 0x239be4u: goto label_239be4;
        case 0x239becu: goto label_239bec;
        default: break;
    }

    ctx->pc = 0x239bd0u;

    // 0x239bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239bd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239bd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x239bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x239bdc: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x239BDCu;
    SET_GPR_U32(ctx, 31, 0x239BE4u);
    ctx->pc = 0x239BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BDCu;
    // 0x239be0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x239BDCu, 0x239BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BE4u;
label_239be4:
    // 0x239be4: 0xc08e700  jal         func_239C00
    ctx->pc = 0x239BE4u;
    SET_GPR_U32(ctx, 31, 0x239BECu);
    ctx->pc = 0x239BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BE4u;
    // 0x239be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C00u, 0x239BE4u, 0x239BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BECu;
label_239bec:
    // 0x239bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239bf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x239bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239bf4: 0x808b536  j           func_22D4D8
    ctx->pc = 0x239BF4u;
    ctx->pc = 0x239BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BF4u;
    // 0x239bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x239BFCu;
}
