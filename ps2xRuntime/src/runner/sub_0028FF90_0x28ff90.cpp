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

// Function: sub_0028FF90
// Address: 0x28ff90 - 0x290044
void sub_0028FF90_0x28ff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FF90_0x28ff90");
#endif

    switch (ctx->pc) {
        case 0x28ffc4u: goto label_28ffc4;
        case 0x28ffe4u: goto label_28ffe4;
        case 0x28fff8u: goto label_28fff8;
        case 0x29000cu: goto label_29000c;
        case 0x290028u: goto label_290028;
        default: break;
    }

    ctx->pc = 0x28ff90u;

    // 0x28ff90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28ff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28ff94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28ff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28ff98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28ff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28ff9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28ffa0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28ffa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffa4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28ffa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28ffac: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x28ffacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x28ffb0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28ffb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffb4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x28ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x28ffb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28ffb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ffbc: 0xc0bcbdc  jal         func_2F2F70
    ctx->pc = 0x28FFBCu;
    SET_GPR_U32(ctx, 31, 0x28FFC4u);
    ctx->pc = 0x28FFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FFBCu;
    // 0x28ffc0: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2F70u, 0x28FFBCu, 0x28FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFC4u;
label_28ffc4:
    // 0x28ffc4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28FFC4u;
    {
        const bool branch_taken_0x28ffc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ffc4) {
            ctx->pc = 0x28FFD0u;
            goto label_28ffd0;
        }
    }
    ctx->pc = 0x28FFCCu;
    // 0x28ffcc: 0x24120900  addiu       $s2, $zero, 0x900
    ctx->pc = 0x28ffccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
label_28ffd0:
    // 0x28ffd0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28ffd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28ffd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28ffd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffdc: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x28FFDCu;
    SET_GPR_U32(ctx, 31, 0x28FFE4u);
    ctx->pc = 0x28FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FFDCu;
    // 0x28ffe0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x28FFDCu, 0x28FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFE4u;
label_28ffe4:
    // 0x28ffe4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x28ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28ffe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28ffe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28ffecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fff0: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x28FFF0u;
    SET_GPR_U32(ctx, 31, 0x28FFF8u);
    ctx->pc = 0x28FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FFF0u;
    // 0x28fff4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x28FFF0u, 0x28FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFF8u;
label_28fff8:
    // 0x28fff8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28fff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fffc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28fffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290000: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x290000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290004: 0xc0d0ae0  jal         func_342B80
    ctx->pc = 0x290004u;
    SET_GPR_U32(ctx, 31, 0x29000Cu);
    ctx->pc = 0x290008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290004u;
    // 0x290008: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x290004u, 0x29000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29000Cu;
label_29000c:
    // 0x29000c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x29000cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x290010: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x290010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290014: 0x2484ea40  addiu       $a0, $a0, -0x15C0
    ctx->pc = 0x290014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961728));
    // 0x290018: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x290018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29001c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x29001cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x290020: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x290020u;
    SET_GPR_U32(ctx, 31, 0x290028u);
    ctx->pc = 0x290024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290020u;
    // 0x290024: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321320u, 0x290020u, 0x290028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290028u;
label_290028:
    // 0x290028: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x290028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29002c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29002cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290030: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x290030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29003c: 0x3e00008  jr          $ra
    ctx->pc = 0x29003Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29003Cu;
        // 0x290040: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29003Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290044u;
}
