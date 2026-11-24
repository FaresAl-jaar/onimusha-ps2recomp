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

// Function: sub_00330400
// Address: 0x330400 - 0x3304e8
void sub_00330400_0x330400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330400_0x330400");
#endif

    switch (ctx->pc) {
        case 0x330438u: goto label_330438;
        case 0x330450u: goto label_330450;
        case 0x330488u: goto label_330488;
        case 0x3304a8u: goto label_3304a8;
        case 0x3304ccu: goto label_3304cc;
        case 0x3304d8u: goto label_3304d8;
        default: break;
    }

    ctx->pc = 0x330400u;

    // 0x330400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x330400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x330404: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x330404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x330408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33040c: 0x24880028  addiu       $t0, $a0, 0x28
    ctx->pc = 0x33040cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x330410: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x330410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x330414: 0x90821c49  lbu         $v0, 0x1C49($a0)
    ctx->pc = 0x330414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7241)));
    // 0x330418: 0x84860024  lh          $a2, 0x24($a0)
    ctx->pc = 0x330418u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x33041c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33041cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x330420: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x330420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x330424: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x330424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x330428: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x330428u;
    {
        const bool branch_taken_0x330428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330428u;
        // 0x33042c: 0x24501c4a  addiu       $s0, $v0, 0x1C4A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330428) {
            ctx->pc = 0x330468u;
            goto label_330468;
        }
    }
    ctx->pc = 0x330430u;
    // 0x330430: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x330430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x330434: 0x0  nop
    ctx->pc = 0x330434u;
    // NOP
label_330438:
    // 0x330438: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x330438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x33043c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33043Cu;
    {
        const bool branch_taken_0x33043c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x330440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33043Cu;
        // 0x330440: 0x72c3c  dsll32      $a1, $a3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33043c) {
            ctx->pc = 0x330458u;
            goto label_330458;
        }
    }
    ctx->pc = 0x330444u;
    // 0x330444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x330444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330448: 0xc0cde24  jal         func_337890
    ctx->pc = 0x330448u;
    SET_GPR_U32(ctx, 31, 0x330450u);
    ctx->pc = 0x33044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330448u;
    // 0x33044c: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337890u, 0x330448u, 0x330450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330450u;
label_330450:
    // 0x330450: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x330450u;
    {
        const bool branch_taken_0x330450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330450) {
            ctx->pc = 0x3304D8u;
            goto label_3304d8;
        }
    }
    ctx->pc = 0x330458u;
label_330458:
    // 0x330458: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x330458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x33045c: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x33045cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x330460: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x330460u;
    {
        const bool branch_taken_0x330460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330460u;
        // 0x330464: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330460) {
            ctx->pc = 0x330438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330438;
        }
    }
    ctx->pc = 0x330468u;
label_330468:
    // 0x330468: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x330468u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33046c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x330470: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x330470u;
    {
        const bool branch_taken_0x330470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x330474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330470u;
        // 0x330474: 0x6082a  slt         $at, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330470) {
            ctx->pc = 0x3304D0u;
            goto label_3304d0;
        }
    }
    ctx->pc = 0x330478u;
    // 0x330478: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x330478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x33047c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x33047Cu;
    {
        const bool branch_taken_0x33047c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x330480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33047Cu;
        // 0x330480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33047c) {
            ctx->pc = 0x3304C0u;
            goto label_3304c0;
        }
    }
    ctx->pc = 0x330484u;
    // 0x330484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x330484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_330488:
    // 0x330488: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x330488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33048c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x33048cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x330490: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x330490u;
    {
        const bool branch_taken_0x330490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x330490) {
            ctx->pc = 0x3304B0u;
            goto label_3304b0;
        }
    }
    ctx->pc = 0x330498u;
    // 0x330498: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x330498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x33049c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33049cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3304a0: 0xc0cde24  jal         func_337890
    ctx->pc = 0x3304A0u;
    SET_GPR_U32(ctx, 31, 0x3304A8u);
    ctx->pc = 0x3304A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3304A0u;
    // 0x3304a4: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337890u, 0x3304A0u, 0x3304A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3304A8u;
label_3304a8:
    // 0x3304a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3304A8u;
    {
        const bool branch_taken_0x3304a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3304a8) {
            ctx->pc = 0x3304D8u;
            goto label_3304d8;
        }
    }
    ctx->pc = 0x3304B0u;
label_3304b0:
    // 0x3304b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3304b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3304b4: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x3304b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3304b8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3304B8u;
    {
        const bool branch_taken_0x3304b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3304BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304B8u;
        // 0x3304bc: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3304b8) {
            ctx->pc = 0x330488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330488;
        }
    }
    ctx->pc = 0x3304C0u;
label_3304c0:
    // 0x3304c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3304c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3304c4: 0xc0cde24  jal         func_337890
    ctx->pc = 0x3304C4u;
    SET_GPR_U32(ctx, 31, 0x3304CCu);
    ctx->pc = 0x3304C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3304C4u;
    // 0x3304c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337890u, 0x3304C4u, 0x3304CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3304CCu;
label_3304cc:
    // 0x3304cc: 0x0  nop
    ctx->pc = 0x3304ccu;
    // NOP
label_3304d0:
    // 0x3304d0: 0xc0cde28  jal         func_3378A0
    ctx->pc = 0x3304D0u;
    SET_GPR_U32(ctx, 31, 0x3304D8u);
    ctx->pc = 0x3304D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3304D0u;
    // 0x3304d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3378A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3378A0u, 0x3304D0u, 0x3304D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3304D8u;
label_3304d8:
    // 0x3304d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3304d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3304dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3304dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3304e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3304E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3304E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304E0u;
        // 0x3304e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3304E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3304E8u;
}
