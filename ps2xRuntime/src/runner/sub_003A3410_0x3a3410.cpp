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

// Function: sub_003A3410
// Address: 0x3a3410 - 0x3a34a4
void sub_003A3410_0x3a3410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3410_0x3a3410");
#endif

    switch (ctx->pc) {
        case 0x3a344cu: goto label_3a344c;
        case 0x3a346cu: goto label_3a346c;
        case 0x3a3488u: goto label_3a3488;
        case 0x3a3490u: goto label_3a3490;
        default: break;
    }

    ctx->pc = 0x3a3410u;

    // 0x3a3410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a3410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a3414: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x3a3414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3a3418: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a3418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a341c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x3a341cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3a3420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a3420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a3424: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a3424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a3428: 0x8f858c60  lw          $a1, -0x73A0($gp)
    ctx->pc = 0x3a3428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a342c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3a342cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3a3430: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3a3430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3a3434: 0x24700460  addiu       $s0, $v1, 0x460
    ctx->pc = 0x3a3434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1120));
    // 0x3a3438: 0x8c830968  lw          $v1, 0x968($a0)
    ctx->pc = 0x3a3438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
    // 0x3a343c: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A343Cu;
    {
        const bool branch_taken_0x3a343c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x3A3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A343Cu;
        // 0x3a3440: 0x24910960  addiu       $s1, $a0, 0x960 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 2400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a343c) {
            ctx->pc = 0x3A3450u;
            goto label_3a3450;
        }
    }
    ctx->pc = 0x3A3444u;
    // 0x3a3444: 0xc0f0444  jal         func_3C1110
    ctx->pc = 0x3A3444u;
    SET_GPR_U32(ctx, 31, 0x3A344Cu);
    ctx->pc = 0x3A3448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3444u;
    // 0x3a3448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1110u, 0x3A3444u, 0x3A344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A344Cu;
label_3a344c:
    // 0x3a344c: 0x0  nop
    ctx->pc = 0x3a344cu;
    // NOP
label_3a3450:
    // 0x3a3450: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3a3450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a3454: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A3454u;
    {
        const bool branch_taken_0x3a3454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3454) {
            ctx->pc = 0x3A3470u;
            goto label_3a3470;
        }
    }
    ctx->pc = 0x3A345Cu;
    // 0x3a345c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3a345cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3a3460: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a3460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3464: 0xc0f03fc  jal         func_3C0FF0
    ctx->pc = 0x3A3464u;
    SET_GPR_U32(ctx, 31, 0x3A346Cu);
    ctx->pc = 0x3A3468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3464u;
    // 0x3a3468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0FF0u, 0x3A3464u, 0x3A346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A346Cu;
label_3a346c:
    // 0x3a346c: 0x0  nop
    ctx->pc = 0x3a346cu;
    // NOP
label_3a3470:
    // 0x3a3470: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x3a3470u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a3474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a3474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3478: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3478u;
    {
        const bool branch_taken_0x3a3478 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3478u;
        // 0x3a347c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3478) {
            ctx->pc = 0x3A3490u;
            goto label_3a3490;
        }
    }
    ctx->pc = 0x3A3480u;
    // 0x3a3480: 0xc0f040c  jal         func_3C1030
    ctx->pc = 0x3A3480u;
    SET_GPR_U32(ctx, 31, 0x3A3488u);
    ctx->pc = 0x3A3484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3480u;
    // 0x3a3484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1030u, 0x3A3480u, 0x3A3488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3488u;
label_3a3488:
    // 0x3a3488: 0xc0e8cd8  jal         func_3A3360
    ctx->pc = 0x3A3488u;
    SET_GPR_U32(ctx, 31, 0x3A3490u);
    ctx->pc = 0x3A348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3488u;
    // 0x3a348c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3360u, 0x3A3488u, 0x3A3490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3490u;
label_3a3490:
    // 0x3a3490: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a3490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a3494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a3494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a3498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a349c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A349Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A349Cu;
        // 0x3a34a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A349Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A34A4u;
}
