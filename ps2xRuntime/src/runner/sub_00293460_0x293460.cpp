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

// Function: sub_00293460
// Address: 0x293460 - 0x2934f0
void sub_00293460_0x293460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293460_0x293460");
#endif

    switch (ctx->pc) {
        case 0x293460u: goto label_293460;
        case 0x293464u: goto label_293464;
        case 0x293468u: goto label_293468;
        case 0x29346cu: goto label_29346c;
        case 0x293470u: goto label_293470;
        case 0x293474u: goto label_293474;
        case 0x293478u: goto label_293478;
        case 0x29347cu: goto label_29347c;
        case 0x293480u: goto label_293480;
        case 0x293484u: goto label_293484;
        case 0x293488u: goto label_293488;
        case 0x29348cu: goto label_29348c;
        case 0x293490u: goto label_293490;
        case 0x293494u: goto label_293494;
        case 0x293498u: goto label_293498;
        case 0x29349cu: goto label_29349c;
        case 0x2934a0u: goto label_2934a0;
        case 0x2934a4u: goto label_2934a4;
        case 0x2934a8u: goto label_2934a8;
        case 0x2934acu: goto label_2934ac;
        case 0x2934b0u: goto label_2934b0;
        case 0x2934b4u: goto label_2934b4;
        case 0x2934b8u: goto label_2934b8;
        case 0x2934bcu: goto label_2934bc;
        case 0x2934c0u: goto label_2934c0;
        case 0x2934c4u: goto label_2934c4;
        case 0x2934c8u: goto label_2934c8;
        case 0x2934ccu: goto label_2934cc;
        case 0x2934d0u: goto label_2934d0;
        case 0x2934d4u: goto label_2934d4;
        case 0x2934d8u: goto label_2934d8;
        case 0x2934dcu: goto label_2934dc;
        case 0x2934e0u: goto label_2934e0;
        case 0x2934e4u: goto label_2934e4;
        case 0x2934e8u: goto label_2934e8;
        case 0x2934ecu: goto label_2934ec;
        default: break;
    }

    ctx->pc = 0x293460u;

label_293460:
    // 0x293460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x293460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_293464:
    // 0x293464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x293464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_293468:
    // 0x293468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x293468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29346c:
    // 0x29346c: 0x8c8208d8  lw          $v0, 0x8D8($a0)
    ctx->pc = 0x29346cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2264)));
label_293470:
    // 0x293470: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_293474:
    if (ctx->pc == 0x293474u) {
        ctx->pc = 0x293474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293470u;
        // 0x293474: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293478u;
        goto label_293478;
    }
    ctx->pc = 0x293470u;
    {
        const bool branch_taken_0x293470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293470u;
        // 0x293474: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293470) {
            ctx->pc = 0x293488u;
            goto label_293488;
        }
    }
    ctx->pc = 0x293478u;
label_293478:
    // 0x293478: 0x8e0508dc  lw          $a1, 0x8DC($s0)
    ctx->pc = 0x293478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2268)));
label_29347c:
    // 0x29347c: 0x40f809  jalr        $v0
label_293480:
    if (ctx->pc == 0x293480u) {
        ctx->pc = 0x293480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29347Cu;
        // 0x293480: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293484u;
        goto label_293484;
    }
    ctx->pc = 0x29347Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x293484u);
        ctx->pc = 0x293480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29347Cu;
        // 0x293480: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29347Cu, 0x293484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x293484u;
label_293484:
    // 0x293484: 0x0  nop
    ctx->pc = 0x293484u;
    // NOP
label_293488:
    // 0x293488: 0xc0a52d0  jal         func_294B40
label_29348c:
    if (ctx->pc == 0x29348Cu) {
        ctx->pc = 0x29348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293488u;
        // 0x29348c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293490u;
        goto label_293490;
    }
    ctx->pc = 0x293488u;
    SET_GPR_U32(ctx, 31, 0x293490u);
    ctx->pc = 0x29348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293488u;
    // 0x29348c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B40u, 0x293488u, 0x293490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293490u;
label_293490:
    // 0x293490: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x293490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
label_293494:
    // 0x293494: 0xc0b2b3c  jal         func_2CACF0
label_293498:
    if (ctx->pc == 0x293498u) {
        ctx->pc = 0x293498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293494u;
        // 0x293498: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29349Cu;
        goto label_29349c;
    }
    ctx->pc = 0x293494u;
    SET_GPR_U32(ctx, 31, 0x29349Cu);
    ctx->pc = 0x293498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293494u;
    // 0x293498: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CACF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CACF0u, 0x293494u, 0x29349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29349Cu;
label_29349c:
    // 0x29349c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x29349cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2934a0:
    // 0x2934a0: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x2934a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2934a4:
    // 0x2934a4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_2934a8:
    if (ctx->pc == 0x2934A8u) {
        ctx->pc = 0x2934A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934A4u;
        // 0x2934a8: 0x2402008e  addiu       $v0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2934ACu;
        goto label_2934ac;
    }
    ctx->pc = 0x2934A4u;
    {
        const bool branch_taken_0x2934a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2934A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934A4u;
        // 0x2934a8: 0x2402008e  addiu       $v0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2934a4) {
            ctx->pc = 0x2934C0u;
            goto label_2934c0;
        }
    }
    ctx->pc = 0x2934ACu;
label_2934ac:
    // 0x2934ac: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2934b0:
    if (ctx->pc == 0x2934B0u) {
        ctx->pc = 0x2934B4u;
        goto label_2934b4;
    }
    ctx->pc = 0x2934ACu;
    {
        const bool branch_taken_0x2934ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2934ac) {
            ctx->pc = 0x2934C0u;
            goto label_2934c0;
        }
    }
    ctx->pc = 0x2934B4u;
label_2934b4:
    // 0x2934b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2934b8:
    if (ctx->pc == 0x2934B8u) {
        ctx->pc = 0x2934BCu;
        goto label_2934bc;
    }
    ctx->pc = 0x2934B4u;
    {
        const bool branch_taken_0x2934b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2934b4) {
            ctx->pc = 0x2934D0u;
            goto label_2934d0;
        }
    }
    ctx->pc = 0x2934BCu;
label_2934bc:
    // 0x2934bc: 0x0  nop
    ctx->pc = 0x2934bcu;
    // NOP
label_2934c0:
    // 0x2934c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2934c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2934c4:
    // 0x2934c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2934c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2934c8:
    // 0x2934c8: 0xc0a69dc  jal         func_29A770
label_2934cc:
    if (ctx->pc == 0x2934CCu) {
        ctx->pc = 0x2934CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934C8u;
        // 0x2934cc: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2934D0u;
        goto label_2934d0;
    }
    ctx->pc = 0x2934C8u;
    SET_GPR_U32(ctx, 31, 0x2934D0u);
    ctx->pc = 0x2934CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2934C8u;
    // 0x2934cc: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A770u, 0x2934C8u, 0x2934D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934D0u;
label_2934d0:
    // 0x2934d0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2934d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2934d4:
    // 0x2934d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2934d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2934d8:
    // 0x2934d8: 0xc0a739c  jal         func_29CE70
label_2934dc:
    if (ctx->pc == 0x2934DCu) {
        ctx->pc = 0x2934DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934D8u;
        // 0x2934dc: 0x248423a0  addiu       $a0, $a0, 0x23A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2934E0u;
        goto label_2934e0;
    }
    ctx->pc = 0x2934D8u;
    SET_GPR_U32(ctx, 31, 0x2934E0u);
    ctx->pc = 0x2934DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2934D8u;
    // 0x2934dc: 0x248423a0  addiu       $a0, $a0, 0x23A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x2934D8u, 0x2934E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934E0u;
label_2934e0:
    // 0x2934e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2934e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2934e4:
    // 0x2934e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2934e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2934e8:
    // 0x2934e8: 0x3e00008  jr          $ra
label_2934ec:
    if (ctx->pc == 0x2934ECu) {
        ctx->pc = 0x2934ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934E8u;
        // 0x2934ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2934F0u;
        goto label_fallthrough_0x2934e8;
    }
    ctx->pc = 0x2934E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2934ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934E8u;
        // 0x2934ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2934E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2934e8:
    ctx->pc = 0x2934F0u;
}
