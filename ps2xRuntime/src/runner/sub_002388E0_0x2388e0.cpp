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

// Function: sub_002388E0
// Address: 0x2388e0 - 0x23890c
void sub_002388E0_0x2388e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002388E0_0x2388e0");
#endif

    switch (ctx->pc) {
        case 0x2388f4u: goto label_2388f4;
        case 0x2388fcu: goto label_2388fc;
        default: break;
    }

    ctx->pc = 0x2388e0u;

    // 0x2388e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2388e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2388e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2388e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2388e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2388e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2388ec: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x2388ECu;
    SET_GPR_U32(ctx, 31, 0x2388F4u);
    ctx->pc = 0x2388F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388ECu;
    // 0x2388f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x2388ECu, 0x2388F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2388F4u;
label_2388f4:
    // 0x2388f4: 0xc08e244  jal         func_238910
    ctx->pc = 0x2388F4u;
    SET_GPR_U32(ctx, 31, 0x2388FCu);
    ctx->pc = 0x2388F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388F4u;
    // 0x2388f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238910u, 0x2388F4u, 0x2388FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2388FCu;
label_2388fc:
    // 0x2388fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2388fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238900: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x238900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238904: 0x808b536  j           func_22D4D8
    ctx->pc = 0x238904u;
    ctx->pc = 0x238908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238904u;
    // 0x238908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23890Cu;
}
