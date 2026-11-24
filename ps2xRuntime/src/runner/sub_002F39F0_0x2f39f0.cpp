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

// Function: sub_002F39F0
// Address: 0x2f39f0 - 0x2f3b38
void sub_002F39F0_0x2f39f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F39F0_0x2f39f0");
#endif

    switch (ctx->pc) {
        case 0x2f3a28u: goto label_2f3a28;
        case 0x2f3a48u: goto label_2f3a48;
        case 0x2f3a58u: goto label_2f3a58;
        case 0x2f3aa0u: goto label_2f3aa0;
        case 0x2f3ac0u: goto label_2f3ac0;
        case 0x2f3ad4u: goto label_2f3ad4;
        case 0x2f3b0cu: goto label_2f3b0c;
        default: break;
    }

    ctx->pc = 0x2f39f0u;

    // 0x2f39f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f39f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f39f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f39f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f39f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f39f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f39fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f39fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f3a00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f3a00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f3a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f3a08: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f3a08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f3a10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f3a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f3a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f3a18: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f3a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a1c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2f3a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a20: 0xc0bcbdc  jal         func_2F2F70
    ctx->pc = 0x2F3A20u;
    SET_GPR_U32(ctx, 31, 0x2F3A28u);
    ctx->pc = 0x2F3A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A20u;
    // 0x2f3a24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2F70u, 0x2F3A20u, 0x2F3A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A28u;
label_2f3a28:
    // 0x2f3a28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3A28u;
    {
        const bool branch_taken_0x2f3a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3a28) {
            ctx->pc = 0x2F3A38u;
            goto label_2f3a38;
        }
    }
    ctx->pc = 0x2F3A30u;
    // 0x2f3a30: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2F3A30u;
    {
        const bool branch_taken_0x2f3a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A30u;
        // 0x2f3a34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a30) {
            ctx->pc = 0x2F3B18u;
            goto label_2f3b18;
        }
    }
    ctx->pc = 0x2F3A38u;
label_2f3a38:
    // 0x2f3a38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f3a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f3a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a40: 0xc0cc8e0  jal         func_332380
    ctx->pc = 0x2F3A40u;
    SET_GPR_U32(ctx, 31, 0x2F3A48u);
    ctx->pc = 0x2F3A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A40u;
    // 0x2f3a44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332380u, 0x2F3A40u, 0x2F3A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A48u;
label_2f3a48:
    // 0x2f3a48: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x2f3a48u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3a4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f3a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a50: 0xc0bcc08  jal         func_2F3020
    ctx->pc = 0x2F3A50u;
    SET_GPR_U32(ctx, 31, 0x2F3A58u);
    ctx->pc = 0x2F3A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A50u;
    // 0x2f3a54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3020u, 0x2F3A50u, 0x2F3A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A58u;
label_2f3a58:
    // 0x2f3a58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f3a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f3a5c: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2F3A5Cu;
    {
        const bool branch_taken_0x2f3a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A5Cu;
        // 0x2f3a60: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a5c) {
            ctx->pc = 0x2F3AC8u;
            goto label_2f3ac8;
        }
    }
    ctx->pc = 0x2F3A64u;
    // 0x2f3a64: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F3A64u;
    {
        const bool branch_taken_0x2f3a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f3a64) {
            ctx->pc = 0x2F3AC8u;
            goto label_2f3ac8;
        }
    }
    ctx->pc = 0x2F3A6Cu;
    // 0x2f3a6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f3a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3a70: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F3A70u;
    {
        const bool branch_taken_0x2f3a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f3a70) {
            ctx->pc = 0x2F3AA8u;
            goto label_2f3aa8;
        }
    }
    ctx->pc = 0x2F3A78u;
    // 0x2f3a78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3A78u;
    {
        const bool branch_taken_0x2f3a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3a78) {
            ctx->pc = 0x2F3A88u;
            goto label_2f3a88;
        }
    }
    ctx->pc = 0x2F3A80u;
    // 0x2f3a80: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2F3A80u;
    {
        const bool branch_taken_0x2f3a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3a80) {
            ctx->pc = 0x2F3AE0u;
            goto label_2f3ae0;
        }
    }
    ctx->pc = 0x2F3A88u;
label_2f3a88:
    // 0x2f3a88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f3a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f3a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f3a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a94: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2f3a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a98: 0xc0bced0  jal         func_2F3B40
    ctx->pc = 0x2F3A98u;
    SET_GPR_U32(ctx, 31, 0x2F3AA0u);
    ctx->pc = 0x2F3A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A98u;
    // 0x2f3a9c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3B40u, 0x2F3A98u, 0x2F3AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3AA0u;
label_2f3aa0:
    // 0x2f3aa0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F3AA0u;
    {
        const bool branch_taken_0x2f3aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AA0u;
        // 0x2f3aa4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3aa0) {
            ctx->pc = 0x2F3AE8u;
            goto label_2f3ae8;
        }
    }
    ctx->pc = 0x2F3AA8u;
label_2f3aa8:
    // 0x2f3aa8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f3aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3aac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f3aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ab0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f3ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ab4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2f3ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ab8: 0xc0bcf18  jal         func_2F3C60
    ctx->pc = 0x2F3AB8u;
    SET_GPR_U32(ctx, 31, 0x2F3AC0u);
    ctx->pc = 0x2F3ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3AB8u;
    // 0x2f3abc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3C60u, 0x2F3AB8u, 0x2F3AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3AC0u;
label_2f3ac0:
    // 0x2f3ac0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3AC0u;
    {
        const bool branch_taken_0x2f3ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AC0u;
        // 0x2f3ac4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ac0) {
            ctx->pc = 0x2F3AE8u;
            goto label_2f3ae8;
        }
    }
    ctx->pc = 0x2F3AC8u;
label_2f3ac8:
    // 0x2f3ac8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f3ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3acc: 0xc0bcf9c  jal         func_2F3E70
    ctx->pc = 0x2F3ACCu;
    SET_GPR_U32(ctx, 31, 0x2F3AD4u);
    ctx->pc = 0x2F3AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3ACCu;
    // 0x2f3ad0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3E70u, 0x2F3ACCu, 0x2F3AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3AD4u;
label_2f3ad4:
    // 0x2f3ad4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3AD4u;
    {
        const bool branch_taken_0x2f3ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AD4u;
        // 0x2f3ad8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ad4) {
            ctx->pc = 0x2F3AE8u;
            goto label_2f3ae8;
        }
    }
    ctx->pc = 0x2F3ADCu;
    // 0x2f3adc: 0x0  nop
    ctx->pc = 0x2f3adcu;
    // NOP
label_2f3ae0:
    // 0x2f3ae0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2f3ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f3ae4: 0x0  nop
    ctx->pc = 0x2f3ae4u;
    // NOP
label_2f3ae8:
    // 0x2f3ae8: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2f3ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2f3aec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3AECu;
    {
        const bool branch_taken_0x2f3aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3aec) {
            ctx->pc = 0x2F3B10u;
            goto label_2f3b10;
        }
    }
    ctx->pc = 0x2F3AF4u;
    // 0x2f3af4: 0x1a400006  blez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3AF4u;
    {
        const bool branch_taken_0x2f3af4 = (GPR_S64(ctx, 18) <= 0);
        if (branch_taken_0x2f3af4) {
            ctx->pc = 0x2F3B10u;
            goto label_2f3b10;
        }
    }
    ctx->pc = 0x2F3AFCu;
    // 0x2f3afc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3AFCu;
    {
        const bool branch_taken_0x2f3afc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AFCu;
        // 0x2f3b00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3afc) {
            ctx->pc = 0x2F3B10u;
            goto label_2f3b10;
        }
    }
    ctx->pc = 0x2F3B04u;
    // 0x2f3b04: 0xc0bd280  jal         func_2F4A00
    ctx->pc = 0x2F3B04u;
    SET_GPR_U32(ctx, 31, 0x2F3B0Cu);
    ctx->pc = 0x2F3B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B04u;
    // 0x2f3b08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4A00u, 0x2F3B04u, 0x2F3B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B0Cu;
label_2f3b0c:
    // 0x2f3b0c: 0x0  nop
    ctx->pc = 0x2f3b0cu;
    // NOP
label_2f3b10:
    // 0x2f3b10: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2f3b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3b14: 0x0  nop
    ctx->pc = 0x2f3b14u;
    // NOP
label_2f3b18:
    // 0x2f3b18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f3b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f3b1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f3b1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f3b20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f3b20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3b24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f3b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f3b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f3b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3b30: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B30u;
        // 0x2f3b34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3B38u;
}
