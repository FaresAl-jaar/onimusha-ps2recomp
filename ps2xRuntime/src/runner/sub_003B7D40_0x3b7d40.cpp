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

// Function: sub_003B7D40
// Address: 0x3b7d40 - 0x3b7dd0
void sub_003B7D40_0x3b7d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7D40_0x3b7d40");
#endif

    switch (ctx->pc) {
        case 0x3b7d88u: goto label_3b7d88;
        case 0x3b7d90u: goto label_3b7d90;
        case 0x3b7da0u: goto label_3b7da0;
        case 0x3b7db0u: goto label_3b7db0;
        case 0x3b7dc0u: goto label_3b7dc0;
        default: break;
    }

    ctx->pc = 0x3b7d40u;

    // 0x3b7d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b7d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b7d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b7d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b7d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b7d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b7d4c: 0x9082065c  lbu         $v0, 0x65C($a0)
    ctx->pc = 0x3b7d4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3b7d50: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x3b7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x3b7d54: 0x2c41001c  sltiu       $at, $v0, 0x1C
    ctx->pc = 0x3b7d54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x3b7d58: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B7D58u;
    {
        const bool branch_taken_0x3b7d58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D58u;
        // 0x3b7d5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d58) {
            ctx->pc = 0x3B7DB8u;
            goto label_3b7db8;
        }
    }
    ctx->pc = 0x3B7D60u;
    // 0x3b7d60: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3b7d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3b7d64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b7d68: 0x24632be0  addiu       $v1, $v1, 0x2BE0
    ctx->pc = 0x3b7d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11232));
    // 0x3b7d6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b7d70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b7d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7d74: 0x400008  jr          $v0
    ctx->pc = 0x3B7D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B7D80u: goto label_3b7d80;
            case 0x3B7D88u: goto label_3b7d88;
            case 0x3B7D98u: goto label_3b7d98;
            case 0x3B7DA8u: goto label_3b7da8;
            case 0x3B7DB8u: goto label_3b7db8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7D74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B7D7Cu;
    // 0x3b7d7c: 0x0  nop
    ctx->pc = 0x3b7d7cu;
    // NOP
label_3b7d80:
    // 0x3b7d80: 0xc0a06e8  jal         func_281BA0
    ctx->pc = 0x3B7D80u;
    SET_GPR_U32(ctx, 31, 0x3B7D88u);
    ctx->pc = 0x281BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281BA0u, 0x3B7D80u, 0x3B7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7D88u;
label_3b7d88:
    // 0x3b7d88: 0xc0a0458  jal         func_281160
    ctx->pc = 0x3B7D88u;
    SET_GPR_U32(ctx, 31, 0x3B7D90u);
    ctx->pc = 0x3B7D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7D88u;
    // 0x3b7d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x3B7D88u, 0x3B7D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7D90u;
label_3b7d90:
    // 0x3b7d90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B7D90u;
    {
        const bool branch_taken_0x3b7d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7d90) {
            ctx->pc = 0x3B7DC0u;
            goto label_3b7dc0;
        }
    }
    ctx->pc = 0x3B7D98u;
label_3b7d98:
    // 0x3b7d98: 0xc0eeda8  jal         func_3BB6A0
    ctx->pc = 0x3B7D98u;
    SET_GPR_U32(ctx, 31, 0x3B7DA0u);
    ctx->pc = 0x3B7D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7D98u;
    // 0x3b7d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB6A0u, 0x3B7D98u, 0x3B7DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7DA0u;
label_3b7da0:
    // 0x3b7da0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B7DA0u;
    {
        const bool branch_taken_0x3b7da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7da0) {
            ctx->pc = 0x3B7DC0u;
            goto label_3b7dc0;
        }
    }
    ctx->pc = 0x3B7DA8u;
label_3b7da8:
    // 0x3b7da8: 0xc0eed4c  jal         func_3BB530
    ctx->pc = 0x3B7DA8u;
    SET_GPR_U32(ctx, 31, 0x3B7DB0u);
    ctx->pc = 0x3BB530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB530u, 0x3B7DA8u, 0x3B7DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7DB0u;
label_3b7db0:
    // 0x3b7db0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7DB0u;
    {
        const bool branch_taken_0x3b7db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7db0) {
            ctx->pc = 0x3B7DC0u;
            goto label_3b7dc0;
        }
    }
    ctx->pc = 0x3B7DB8u;
label_3b7db8:
    // 0x3b7db8: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x3B7DB8u;
    SET_GPR_U32(ctx, 31, 0x3B7DC0u);
    ctx->pc = 0x3B7DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7DB8u;
    // 0x3b7dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x3B7DB8u, 0x3B7DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7DC0u;
label_3b7dc0:
    // 0x3b7dc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b7dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7dc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b7dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7DC8u;
        // 0x3b7dcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7DD0u;
}
