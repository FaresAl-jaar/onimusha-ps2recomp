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

// Function: sub_00223518
// Address: 0x223518 - 0x22355c
void sub_00223518_0x223518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223518_0x223518");
#endif

    switch (ctx->pc) {
        case 0x223530u: goto label_223530;
        case 0x223548u: goto label_223548;
        default: break;
    }

    ctx->pc = 0x223518u;

    // 0x223518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22351c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x22351cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x223520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223524: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x223524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x223528: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x223528u;
    SET_GPR_U32(ctx, 31, 0x223530u);
    ctx->pc = 0x22352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223528u;
    // 0x22352c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x223528u, 0x223530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223530u;
label_223530:
    // 0x223530: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223530u;
    {
        const bool branch_taken_0x223530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223530u;
        // 0x223534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223530) {
            ctx->pc = 0x223540u;
            goto label_223540;
        }
    }
    ctx->pc = 0x223538u;
    // 0x223538: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x223538u;
    {
        const bool branch_taken_0x223538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223538u;
        // 0x22353c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223538) {
            ctx->pc = 0x22354Cu;
            goto label_22354c;
        }
    }
    ctx->pc = 0x223540u;
label_223540:
    // 0x223540: 0xc08868e  jal         func_221A38
    ctx->pc = 0x223540u;
    SET_GPR_U32(ctx, 31, 0x223548u);
    ctx->pc = 0x221A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A38u, 0x223540u, 0x223548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223548u;
label_223548:
    // 0x223548: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x223548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22354c:
    // 0x22354c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22354cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223550: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x223550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223554: 0x3e00008  jr          $ra
    ctx->pc = 0x223554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223554u;
        // 0x223558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22355Cu;
}
