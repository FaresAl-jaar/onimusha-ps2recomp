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

// Function: sub_003BE520
// Address: 0x3be520 - 0x3be584
void sub_003BE520_0x3be520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE520_0x3be520");
#endif

    switch (ctx->pc) {
        case 0x3be54cu: goto label_3be54c;
        case 0x3be574u: goto label_3be574;
        default: break;
    }

    ctx->pc = 0x3be520u;

    // 0x3be520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3be520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3be524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3be524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3be528: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3be528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3be52c: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3be52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3be530: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BE530u;
    {
        const bool branch_taken_0x3be530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE530u;
        // 0x3be534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be530) {
            ctx->pc = 0x3BE558u;
            goto label_3be558;
        }
    }
    ctx->pc = 0x3BE538u;
    // 0x3be538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be53c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3be53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3be540: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be540u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be544: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BE544u;
    SET_GPR_U32(ctx, 31, 0x3BE54Cu);
    ctx->pc = 0x3BE548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE544u;
    // 0x3be548: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BE544u, 0x3BE54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE54Cu;
label_3be54c:
    // 0x3be54c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3BE54Cu;
    {
        const bool branch_taken_0x3be54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be54c) {
            ctx->pc = 0x3BE578u;
            goto label_3be578;
        }
    }
    ctx->pc = 0x3BE554u;
    // 0x3be554: 0x0  nop
    ctx->pc = 0x3be554u;
    // NOP
label_3be558:
    // 0x3be558: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3be558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3be55c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3be55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be564: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3be564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3be568: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be568u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be56c: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BE56Cu;
    SET_GPR_U32(ctx, 31, 0x3BE574u);
    ctx->pc = 0x3BE570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE56Cu;
    // 0x3be570: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BE56Cu, 0x3BE574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE574u;
label_3be574:
    // 0x3be574: 0x0  nop
    ctx->pc = 0x3be574u;
    // NOP
label_3be578:
    // 0x3be578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3be578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be57c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE57Cu;
        // 0x3be580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE584u;
}
