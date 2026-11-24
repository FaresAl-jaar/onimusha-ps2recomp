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

// Function: sub_002F3520
// Address: 0x2f3520 - 0x2f356c
void sub_002F3520_0x2f3520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3520_0x2f3520");
#endif

    switch (ctx->pc) {
        case 0x2f3548u: goto label_2f3548;
        case 0x2f3558u: goto label_2f3558;
        default: break;
    }

    ctx->pc = 0x2f3520u;

    // 0x2f3520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f3520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f3524: 0x240622d4  addiu       $a2, $zero, 0x22D4
    ctx->pc = 0x2f3524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8916));
    // 0x2f3528: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f3528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f352c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f352cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f3530: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f3530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f3534: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f3534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3538: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f3538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f353c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3540: 0xc049590  jal         func_125640
    ctx->pc = 0x2F3540u;
    SET_GPR_U32(ctx, 31, 0x2F3548u);
    ctx->pc = 0x2F3544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3540u;
    // 0x2f3544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2F3540u, 0x2F3548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3548u;
label_2f3548:
    // 0x2f3548: 0xae0022d0  sw          $zero, 0x22D0($s0)
    ctx->pc = 0x2f3548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8912), GPR_U32(ctx, 0));
    // 0x2f354c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f354cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3550: 0xc0bd240  jal         func_2F4900
    ctx->pc = 0x2F3550u;
    SET_GPR_U32(ctx, 31, 0x2F3558u);
    ctx->pc = 0x2F3554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3550u;
    // 0x2f3554: 0xae0022cc  sw          $zero, 0x22CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8908), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4900u, 0x2F3550u, 0x2F3558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3558u;
label_2f3558:
    // 0x2f3558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f3558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f355c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f355cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f3560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3564: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3564u;
        // 0x2f3568: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F356Cu;
}
