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

// Function: sub_00363520
// Address: 0x363520 - 0x363584
void sub_00363520_0x363520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363520_0x363520");
#endif

    switch (ctx->pc) {
        case 0x363548u: goto label_363548;
        default: break;
    }

    ctx->pc = 0x363520u;

    // 0x363520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363524: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x363524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x363528: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x363528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36352c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36352Cu;
    {
        const bool branch_taken_0x36352c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x363530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36352Cu;
        // 0x363530: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36352c) {
            ctx->pc = 0x363540u;
            goto label_363540;
        }
    }
    ctx->pc = 0x363534u;
    // 0x363534: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x363534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x363538: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x363538u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x36353c: 0x0  nop
    ctx->pc = 0x36353cu;
    // NOP
label_363540:
    // 0x363540: 0xc0d8cac  jal         func_3632B0
    ctx->pc = 0x363540u;
    SET_GPR_U32(ctx, 31, 0x363548u);
    ctx->pc = 0x3632B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3632B0u, 0x363540u, 0x363548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363548u;
label_363548:
    // 0x363548: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x363548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36354c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36354cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x363550: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x363550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x363554: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x363554u;
    {
        const bool branch_taken_0x363554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x363554) {
            ctx->pc = 0x363568u;
            goto label_363568;
        }
    }
    ctx->pc = 0x36355Cu;
    // 0x36355c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36355Cu;
    {
        const bool branch_taken_0x36355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36355c) {
            ctx->pc = 0x363578u;
            goto label_363578;
        }
    }
    ctx->pc = 0x363564u;
    // 0x363564: 0x0  nop
    ctx->pc = 0x363564u;
    // NOP
label_363568:
    // 0x363568: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x363568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x36356c: 0x2442c178  addiu       $v0, $v0, -0x3E88
    ctx->pc = 0x36356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951288));
    // 0x363570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x363570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x363574: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x363574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_363578:
    // 0x363578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36357c: 0x3e00008  jr          $ra
    ctx->pc = 0x36357Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36357Cu;
        // 0x363580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36357Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363584u;
}
