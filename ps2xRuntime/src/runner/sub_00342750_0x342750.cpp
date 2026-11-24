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

// Function: sub_00342750
// Address: 0x342750 - 0x34282c
void sub_00342750_0x342750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342750_0x342750");
#endif

    switch (ctx->pc) {
        case 0x342774u: goto label_342774;
        case 0x342794u: goto label_342794;
        case 0x3427b0u: goto label_3427b0;
        case 0x3427e0u: goto label_3427e0;
        case 0x3427e8u: goto label_3427e8;
        case 0x342800u: goto label_342800;
        default: break;
    }

    ctx->pc = 0x342750u;

    // 0x342750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x342750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x342754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x342754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x342758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x342758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34275c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34275cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x342760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x342760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342764: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x342764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x342768: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x342768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x34276c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x34276Cu;
    SET_GPR_U32(ctx, 31, 0x342774u);
    ctx->pc = 0x342770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34276Cu;
    // 0x342770: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x34276Cu, 0x342774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342774u;
label_342774:
    // 0x342774: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x342774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342778: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x342778u;
    {
        const bool branch_taken_0x342778 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x342778) {
            ctx->pc = 0x3427B8u;
            goto label_3427b8;
        }
    }
    ctx->pc = 0x342780u;
    // 0x342780: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x342780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x342784: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x342784u;
    {
        const bool branch_taken_0x342784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x342788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342784u;
        // 0x342788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342784) {
            ctx->pc = 0x3427B8u;
            goto label_3427b8;
        }
    }
    ctx->pc = 0x34278Cu;
    // 0x34278c: 0xc061b94  jal         func_186E50
    ctx->pc = 0x34278Cu;
    SET_GPR_U32(ctx, 31, 0x342794u);
    ctx->pc = 0x186E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186E50u, 0x34278Cu, 0x342794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342794u;
label_342794:
    // 0x342794: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x342794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x342798: 0x922207f6  lbu         $v0, 0x7F6($s1)
    ctx->pc = 0x342798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x34279c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34279Cu;
    {
        const bool branch_taken_0x34279c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3427A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34279Cu;
        // 0x3427a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34279c) {
            ctx->pc = 0x3427C0u;
            goto label_3427c0;
        }
    }
    ctx->pc = 0x3427A4u;
    // 0x3427a4: 0x27848b94  addiu       $a0, $gp, -0x746C
    ctx->pc = 0x3427a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937492));
    // 0x3427a8: 0xc0d0678  jal         func_3419E0
    ctx->pc = 0x3427A8u;
    SET_GPR_U32(ctx, 31, 0x3427B0u);
    ctx->pc = 0x3427ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427A8u;
    // 0x3427ac: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3419E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3419E0u, 0x3427A8u, 0x3427B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3427B0u;
label_3427b0:
    // 0x3427b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3427B0u;
    {
        const bool branch_taken_0x3427b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3427B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427B0u;
        // 0x3427b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3427b0) {
            ctx->pc = 0x342818u;
            goto label_342818;
        }
    }
    ctx->pc = 0x3427B8u;
label_3427b8:
    // 0x3427b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3427B8u;
    {
        const bool branch_taken_0x3427b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3427BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427B8u;
        // 0x3427bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3427b8) {
            ctx->pc = 0x342818u;
            goto label_342818;
        }
    }
    ctx->pc = 0x3427C0u;
label_3427c0:
    // 0x3427c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3427c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3427c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3427c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3427c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3427C8u;
    {
        const bool branch_taken_0x3427c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3427c8) {
            ctx->pc = 0x3427D8u;
            goto label_3427d8;
        }
    }
    ctx->pc = 0x3427D0u;
    // 0x3427d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3427D0u;
    {
        const bool branch_taken_0x3427d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3427d0) {
            ctx->pc = 0x342810u;
            goto label_342810;
        }
    }
    ctx->pc = 0x3427D8u;
label_3427d8:
    // 0x3427d8: 0xc0d0b00  jal         func_342C00
    ctx->pc = 0x3427D8u;
    SET_GPR_U32(ctx, 31, 0x3427E0u);
    ctx->pc = 0x3427DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427D8u;
    // 0x3427dc: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x3427D8u, 0x3427E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3427E0u;
label_3427e0:
    // 0x3427e0: 0xc0d0af4  jal         func_342BD0
    ctx->pc = 0x3427E0u;
    SET_GPR_U32(ctx, 31, 0x3427E8u);
    ctx->pc = 0x3427E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427E0u;
    // 0x3427e4: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x3427E0u, 0x3427E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3427E8u;
label_3427e8:
    // 0x3427e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3427E8u;
    {
        const bool branch_taken_0x3427e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3427e8) {
            ctx->pc = 0x342810u;
            goto label_342810;
        }
    }
    ctx->pc = 0x3427F0u;
    // 0x3427f0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3427f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3427f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3427f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3427f8: 0xc0d0590  jal         func_341640
    ctx->pc = 0x3427F8u;
    SET_GPR_U32(ctx, 31, 0x342800u);
    ctx->pc = 0x3427FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427F8u;
    // 0x3427fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x3427F8u, 0x342800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342800u;
label_342800:
    // 0x342800: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x342800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x342804: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x342804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x342808: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x342808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x34280c: 0x0  nop
    ctx->pc = 0x34280cu;
    // NOP
label_342810:
    // 0x342810: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342814: 0x0  nop
    ctx->pc = 0x342814u;
    // NOP
label_342818:
    // 0x342818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x342818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34281c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34281cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342824: 0x3e00008  jr          $ra
    ctx->pc = 0x342824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342824u;
        // 0x342828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34282Cu;
}
