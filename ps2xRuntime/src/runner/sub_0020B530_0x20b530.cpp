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

// Function: sub_0020B530
// Address: 0x20b530 - 0x20b574
void sub_0020B530_0x20b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B530_0x20b530");
#endif

    switch (ctx->pc) {
        case 0x20b548u: goto label_20b548;
        default: break;
    }

    ctx->pc = 0x20b530u;

    // 0x20b530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20b538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b53c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20b53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20b540: 0xc082d40  jal         func_20B500
    ctx->pc = 0x20B540u;
    SET_GPR_U32(ctx, 31, 0x20B548u);
    ctx->pc = 0x20B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B540u;
    // 0x20b544: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B500u, 0x20B540u, 0x20B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B548u;
label_20b548:
    // 0x20b548: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B548u;
    {
        const bool branch_taken_0x20b548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B548u;
        // 0x20b54c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b548) {
            ctx->pc = 0x20B564u;
            goto label_20b564;
        }
    }
    ctx->pc = 0x20B550u;
    // 0x20b550: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20b550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20b554: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B554u;
    {
        const bool branch_taken_0x20b554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x20B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B554u;
        // 0x20b558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b554) {
            ctx->pc = 0x20B564u;
            goto label_20b564;
        }
    }
    ctx->pc = 0x20B55Cu;
    // 0x20b55c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x20b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20b560: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20b560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20b564:
    // 0x20b564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b568: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20b568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20b56c: 0x3e00008  jr          $ra
    ctx->pc = 0x20B56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B56Cu;
        // 0x20b570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B574u;
}
