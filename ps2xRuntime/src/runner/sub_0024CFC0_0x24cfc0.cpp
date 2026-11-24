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

// Function: sub_0024CFC0
// Address: 0x24cfc0 - 0x24cfec
void sub_0024CFC0_0x24cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CFC0_0x24cfc0");
#endif

    switch (ctx->pc) {
        case 0x24cfd4u: goto label_24cfd4;
        case 0x24cfdcu: goto label_24cfdc;
        default: break;
    }

    ctx->pc = 0x24cfc0u;

    // 0x24cfc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24cfc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24cfc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24cfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24cfcc: 0xc0933c2  jal         func_24CF08
    ctx->pc = 0x24CFCCu;
    SET_GPR_U32(ctx, 31, 0x24CFD4u);
    ctx->pc = 0x24CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CFCCu;
    // 0x24cfd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF08u, 0x24CFCCu, 0x24CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CFD4u;
label_24cfd4:
    // 0x24cfd4: 0xc0933fc  jal         func_24CFF0
    ctx->pc = 0x24CFD4u;
    SET_GPR_U32(ctx, 31, 0x24CFDCu);
    ctx->pc = 0x24CFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CFD4u;
    // 0x24cfd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CFF0u, 0x24CFD4u, 0x24CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CFDCu;
label_24cfdc:
    // 0x24cfdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cfdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cfe0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24cfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24cfe4: 0x80933c8  j           func_24CF20
    ctx->pc = 0x24CFE4u;
    ctx->pc = 0x24CFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CFE4u;
    // 0x24cfe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF20u;
    sub_0024CF20_0x24cf20(rdram, ctx, runtime); return;
    ctx->pc = 0x24CFECu;
}
