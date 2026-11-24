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

// Function: sub_0037BB20
// Address: 0x37bb20 - 0x37bc10
void sub_0037BB20_0x37bb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BB20_0x37bb20");
#endif

    switch (ctx->pc) {
        case 0x37bb84u: goto label_37bb84;
        case 0x37bba4u: goto label_37bba4;
        case 0x37bbc4u: goto label_37bbc4;
        case 0x37bbd8u: goto label_37bbd8;
        case 0x37bbf4u: goto label_37bbf4;
        default: break;
    }

    ctx->pc = 0x37bb20u;

    // 0x37bb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37bb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37bb24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37bb28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37bb2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37bb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37bb30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37bb30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb34: 0x90842bbd  lbu         $a0, 0x2BBD($a0)
    ctx->pc = 0x37bb34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11197)));
    // 0x37bb38: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x37BB38u;
    {
        const bool branch_taken_0x37bb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x37BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB38u;
        // 0x37bb3c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bb38) {
            ctx->pc = 0x37BBE0u;
            goto label_37bbe0;
        }
    }
    ctx->pc = 0x37BB40u;
    // 0x37bb40: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x37BB40u;
    {
        const bool branch_taken_0x37bb40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37bb40) {
            ctx->pc = 0x37BBB0u;
            goto label_37bbb0;
        }
    }
    ctx->pc = 0x37BB48u;
    // 0x37bb48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37bb4c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x37BB4Cu;
    {
        const bool branch_taken_0x37bb4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x37BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB4Cu;
        // 0x37bb50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bb4c) {
            ctx->pc = 0x37BB90u;
            goto label_37bb90;
        }
    }
    ctx->pc = 0x37BB54u;
    // 0x37bb54: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37BB54u;
    {
        const bool branch_taken_0x37bb54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37bb54) {
            ctx->pc = 0x37BB70u;
            goto label_37bb70;
        }
    }
    ctx->pc = 0x37BB5Cu;
    // 0x37bb5c: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x37BB5Cu;
    {
        const bool branch_taken_0x37bb5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bb5c) {
            ctx->pc = 0x37BC00u;
            goto label_37bc00;
        }
    }
    ctx->pc = 0x37BB64u;
    // 0x37bb64: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x37BB64u;
    {
        const bool branch_taken_0x37bb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bb64) {
            ctx->pc = 0x37BC00u;
            goto label_37bc00;
        }
    }
    ctx->pc = 0x37BB6Cu;
    // 0x37bb6c: 0x0  nop
    ctx->pc = 0x37bb6cu;
    // NOP
label_37bb70:
    // 0x37bb70: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x37bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x37bb74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37bb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37bb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb7c: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x37BB7Cu;
    SET_GPR_U32(ctx, 31, 0x37BB84u);
    ctx->pc = 0x37BB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BB7Cu;
    // 0x37bb80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x37BB7Cu, 0x37BB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB84u;
label_37bb84:
    // 0x37bb84: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x37BB84u;
    {
        const bool branch_taken_0x37bb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bb84) {
            ctx->pc = 0x37BC00u;
            goto label_37bc00;
        }
    }
    ctx->pc = 0x37BB8Cu;
    // 0x37bb8c: 0x0  nop
    ctx->pc = 0x37bb8cu;
    // NOP
label_37bb90:
    // 0x37bb90: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x37bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x37bb94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37bb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37bb98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb9c: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x37BB9Cu;
    SET_GPR_U32(ctx, 31, 0x37BBA4u);
    ctx->pc = 0x37BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BB9Cu;
    // 0x37bba0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x37BB9Cu, 0x37BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBA4u;
label_37bba4:
    // 0x37bba4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x37BBA4u;
    {
        const bool branch_taken_0x37bba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bba4) {
            ctx->pc = 0x37BC00u;
            goto label_37bc00;
        }
    }
    ctx->pc = 0x37BBACu;
    // 0x37bbac: 0x0  nop
    ctx->pc = 0x37bbacu;
    // NOP
label_37bbb0:
    // 0x37bbb0: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x37bbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x37bbb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37bbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bbb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37bbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bbbc: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x37BBBCu;
    SET_GPR_U32(ctx, 31, 0x37BBC4u);
    ctx->pc = 0x37BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BBBCu;
    // 0x37bbc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x37BBBCu, 0x37BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBC4u;
label_37bbc4:
    // 0x37bbc4: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x37bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x37bbc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37bbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bbcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37bbccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bbd0: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x37BBD0u;
    SET_GPR_U32(ctx, 31, 0x37BBD8u);
    ctx->pc = 0x37BBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BBD0u;
    // 0x37bbd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x37BBD0u, 0x37BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBD8u;
label_37bbd8:
    // 0x37bbd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37BBD8u;
    {
        const bool branch_taken_0x37bbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bbd8) {
            ctx->pc = 0x37BC00u;
            goto label_37bc00;
        }
    }
    ctx->pc = 0x37BBE0u;
label_37bbe0:
    // 0x37bbe0: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x37bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x37bbe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37bbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bbe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37bbe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bbec: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x37BBECu;
    SET_GPR_U32(ctx, 31, 0x37BBF4u);
    ctx->pc = 0x37BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BBECu;
    // 0x37bbf0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x37BBECu, 0x37BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBF4u;
label_37bbf4:
    // 0x37bbf4: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x37bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x37bbf8: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x37bbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x37bbfc: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x37bbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
label_37bc00:
    // 0x37bc00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37bc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37bc04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37bc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37bc08: 0x3e00008  jr          $ra
    ctx->pc = 0x37BC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC08u;
        // 0x37bc0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BC10u;
}
