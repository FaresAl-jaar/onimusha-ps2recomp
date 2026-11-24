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

// Function: sub_00239590
// Address: 0x239590 - 0x2395bc
void sub_00239590_0x239590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239590_0x239590");
#endif

    switch (ctx->pc) {
        case 0x2395a4u: goto label_2395a4;
        case 0x2395acu: goto label_2395ac;
        default: break;
    }

    ctx->pc = 0x239590u;

    // 0x239590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239598: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x239598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23959c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23959Cu;
    SET_GPR_U32(ctx, 31, 0x2395A4u);
    ctx->pc = 0x2395A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23959Cu;
    // 0x2395a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23959Cu, 0x2395A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2395A4u;
label_2395a4:
    // 0x2395a4: 0xc08e570  jal         func_2395C0
    ctx->pc = 0x2395A4u;
    SET_GPR_U32(ctx, 31, 0x2395ACu);
    ctx->pc = 0x2395A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2395A4u;
    // 0x2395a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2395C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395C0u, 0x2395A4u, 0x2395ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2395ACu;
label_2395ac:
    // 0x2395ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2395acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2395b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2395b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2395b4: 0x808b536  j           func_22D4D8
    ctx->pc = 0x2395B4u;
    ctx->pc = 0x2395B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2395B4u;
    // 0x2395b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2395BCu;
}
