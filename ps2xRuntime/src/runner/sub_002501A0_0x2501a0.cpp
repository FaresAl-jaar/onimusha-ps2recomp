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

// Function: sub_002501A0
// Address: 0x2501a0 - 0x2501cc
void sub_002501A0_0x2501a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002501A0_0x2501a0");
#endif

    switch (ctx->pc) {
        case 0x2501b4u: goto label_2501b4;
        case 0x2501bcu: goto label_2501bc;
        default: break;
    }

    ctx->pc = 0x2501a0u;

    // 0x2501a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2501a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2501a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2501a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2501a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2501a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2501ac: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x2501ACu;
    SET_GPR_U32(ctx, 31, 0x2501B4u);
    ctx->pc = 0x2501B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501ACu;
    // 0x2501b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x2501ACu, 0x2501B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501B4u;
label_2501b4:
    // 0x2501b4: 0xc094074  jal         func_2501D0
    ctx->pc = 0x2501B4u;
    SET_GPR_U32(ctx, 31, 0x2501BCu);
    ctx->pc = 0x2501B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501B4u;
    // 0x2501b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2501D0u, 0x2501B4u, 0x2501BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501BCu;
label_2501bc:
    // 0x2501bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2501bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2501c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2501c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2501c4: 0x8093f40  j           func_24FD00
    ctx->pc = 0x2501C4u;
    ctx->pc = 0x2501C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501C4u;
    // 0x2501c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x2501CCu;
}
