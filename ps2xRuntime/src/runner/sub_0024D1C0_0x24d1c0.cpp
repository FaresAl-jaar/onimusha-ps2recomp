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

// Function: sub_0024D1C0
// Address: 0x24d1c0 - 0x24d1ec
void sub_0024D1C0_0x24d1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D1C0_0x24d1c0");
#endif

    switch (ctx->pc) {
        case 0x24d1d4u: goto label_24d1d4;
        case 0x24d1dcu: goto label_24d1dc;
        default: break;
    }

    ctx->pc = 0x24d1c0u;

    // 0x24d1c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d1c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d1c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24d1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24d1cc: 0xc0933c2  jal         func_24CF08
    ctx->pc = 0x24D1CCu;
    SET_GPR_U32(ctx, 31, 0x24D1D4u);
    ctx->pc = 0x24D1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1CCu;
    // 0x24d1d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF08u, 0x24D1CCu, 0x24D1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1D4u;
label_24d1d4:
    // 0x24d1d4: 0xc09347c  jal         func_24D1F0
    ctx->pc = 0x24D1D4u;
    SET_GPR_U32(ctx, 31, 0x24D1DCu);
    ctx->pc = 0x24D1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1D4u;
    // 0x24d1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D1F0u, 0x24D1D4u, 0x24D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1DCu;
label_24d1dc:
    // 0x24d1dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d1e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24d1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d1e4: 0x80933c8  j           func_24CF20
    ctx->pc = 0x24D1E4u;
    ctx->pc = 0x24D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1E4u;
    // 0x24d1e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF20u;
    sub_0024CF20_0x24cf20(rdram, ctx, runtime); return;
    ctx->pc = 0x24D1ECu;
}
