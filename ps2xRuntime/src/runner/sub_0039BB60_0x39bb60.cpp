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

// Function: sub_0039BB60
// Address: 0x39bb60 - 0x39bbf8
void sub_0039BB60_0x39bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BB60_0x39bb60");
#endif

    switch (ctx->pc) {
        case 0x39bb74u: goto label_39bb74;
        case 0x39bba8u: goto label_39bba8;
        case 0x39bbb8u: goto label_39bbb8;
        case 0x39bbd8u: goto label_39bbd8;
        case 0x39bbe8u: goto label_39bbe8;
        default: break;
    }

    ctx->pc = 0x39bb60u;

    // 0x39bb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39bb64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39bb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39bb68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39bb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39bb6c: 0xc0e6e2c  jal         func_39B8B0
    ctx->pc = 0x39BB6Cu;
    SET_GPR_U32(ctx, 31, 0x39BB74u);
    ctx->pc = 0x39BB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB6Cu;
    // 0x39bb70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B8B0u, 0x39BB6Cu, 0x39BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB74u;
label_39bb74:
    // 0x39bb74: 0x9202065c  lbu         $v0, 0x65C($s0)
    ctx->pc = 0x39bb74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x39bb78: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x39bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x39bb7c: 0x2c410015  sltiu       $at, $v0, 0x15
    ctx->pc = 0x39bb7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x39bb80: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x39BB80u;
    {
        const bool branch_taken_0x39bb80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB80u;
        // 0x39bb84: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bb80) {
            ctx->pc = 0x39BBC0u;
            goto label_39bbc0;
        }
    }
    ctx->pc = 0x39BB88u;
    // 0x39bb88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39bb8c: 0x246323e0  addiu       $v1, $v1, 0x23E0
    ctx->pc = 0x39bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9184));
    // 0x39bb90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39bb94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39bb98: 0x400008  jr          $v0
    ctx->pc = 0x39BB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39BBA0u: goto label_39bba0;
            case 0x39BBB0u: goto label_39bbb0;
            case 0x39BBC0u: goto label_39bbc0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BB98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39BBA0u;
label_39bba0:
    // 0x39bba0: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x39BBA0u;
    SET_GPR_U32(ctx, 31, 0x39BBA8u);
    ctx->pc = 0x39BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BBA0u;
    // 0x39bba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x39BBA0u, 0x39BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BBA8u;
label_39bba8:
    // 0x39bba8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x39BBA8u;
    {
        const bool branch_taken_0x39bba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bba8) {
            ctx->pc = 0x39BBE8u;
            goto label_39bbe8;
        }
    }
    ctx->pc = 0x39BBB0u;
label_39bbb0:
    // 0x39bbb0: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x39BBB0u;
    SET_GPR_U32(ctx, 31, 0x39BBB8u);
    ctx->pc = 0x39BBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BBB0u;
    // 0x39bbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x39BBB0u, 0x39BBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BBB8u;
label_39bbb8:
    // 0x39bbb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x39BBB8u;
    {
        const bool branch_taken_0x39bbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bbb8) {
            ctx->pc = 0x39BBE8u;
            goto label_39bbe8;
        }
    }
    ctx->pc = 0x39BBC0u;
label_39bbc0:
    // 0x39bbc0: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x39bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x39bbc4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x39bbc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39bbc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39BBC8u;
    {
        const bool branch_taken_0x39bbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BBC8u;
        // 0x39bbcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bbc8) {
            ctx->pc = 0x39BBE0u;
            goto label_39bbe0;
        }
    }
    ctx->pc = 0x39BBD0u;
    // 0x39bbd0: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x39BBD0u;
    SET_GPR_U32(ctx, 31, 0x39BBD8u);
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x39BBD0u, 0x39BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BBD8u;
label_39bbd8:
    // 0x39bbd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39BBD8u;
    {
        const bool branch_taken_0x39bbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bbd8) {
            ctx->pc = 0x39BBE8u;
            goto label_39bbe8;
        }
    }
    ctx->pc = 0x39BBE0u;
label_39bbe0:
    // 0x39bbe0: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x39BBE0u;
    SET_GPR_U32(ctx, 31, 0x39BBE8u);
    ctx->pc = 0x39BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BBE0u;
    // 0x39bbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x39BBE0u, 0x39BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BBE8u;
label_39bbe8:
    // 0x39bbe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39bbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bbec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39bbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39bbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x39BBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BBF0u;
        // 0x39bbf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BBF8u;
}
