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

// Function: sub_00222508
// Address: 0x222508 - 0x222548
void sub_00222508_0x222508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222508_0x222508");
#endif

    switch (ctx->pc) {
        case 0x222528u: goto label_222528;
        default: break;
    }

    ctx->pc = 0x222508u;

    // 0x222508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22250c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22250cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x222514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222518: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x222518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x22251c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22251cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x222520: 0xc049590  jal         func_125640
    ctx->pc = 0x222520u;
    SET_GPR_U32(ctx, 31, 0x222528u);
    ctx->pc = 0x222524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222520u;
    // 0x222524: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x222520u, 0x222528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222528u;
label_222528:
    // 0x222528: 0x8e02019c  lw          $v0, 0x19C($s0)
    ctx->pc = 0x222528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x22252c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x22252cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x222530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x222530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x222534: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x222534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222538: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x222538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x22253c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22253cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222540: 0x3e00008  jr          $ra
    ctx->pc = 0x222540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222540u;
        // 0x222544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222548u;
}
