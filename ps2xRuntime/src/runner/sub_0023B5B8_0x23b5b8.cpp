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

// Function: sub_0023B5B8
// Address: 0x23b5b8 - 0x23b5e4
void sub_0023B5B8_0x23b5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B5B8_0x23b5b8");
#endif

    switch (ctx->pc) {
        case 0x23b5ccu: goto label_23b5cc;
        case 0x23b5d4u: goto label_23b5d4;
        default: break;
    }

    ctx->pc = 0x23b5b8u;

    // 0x23b5b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b5bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b5c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23b5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23b5c4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23B5C4u;
    SET_GPR_U32(ctx, 31, 0x23B5CCu);
    ctx->pc = 0x23B5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B5C4u;
    // 0x23b5c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23B5C4u, 0x23B5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5CCu;
label_23b5cc:
    // 0x23b5cc: 0xc08ed7a  jal         func_23B5E8
    ctx->pc = 0x23B5CCu;
    SET_GPR_U32(ctx, 31, 0x23B5D4u);
    ctx->pc = 0x23B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B5CCu;
    // 0x23b5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B5E8u, 0x23B5CCu, 0x23B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5D4u;
label_23b5d4:
    // 0x23b5d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b5d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23b5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b5dc: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23B5DCu;
    ctx->pc = 0x23B5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B5DCu;
    // 0x23b5e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B5E4u;
}
