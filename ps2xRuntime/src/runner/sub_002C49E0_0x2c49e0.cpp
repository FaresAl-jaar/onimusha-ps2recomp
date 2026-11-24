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

// Function: sub_002C49E0
// Address: 0x2c49e0 - 0x2c4ad4
void sub_002C49E0_0x2c49e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C49E0_0x2c49e0");
#endif

    switch (ctx->pc) {
        case 0x2c4a18u: goto label_2c4a18;
        case 0x2c4a8cu: goto label_2c4a8c;
        default: break;
    }

    ctx->pc = 0x2c49e0u;

    // 0x2c49e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c49e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c49e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c49e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c49e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c49e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c49ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c49ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c49f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c49f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c49f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c49f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c49f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c49f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c49fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c49fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c4a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a04: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2c4a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2c4a08: 0x90d20001  lbu         $s2, 0x1($a2)
    ctx->pc = 0x2c4a08u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c4a0c: 0x8ca508e0  lw          $a1, 0x8E0($a1)
    ctx->pc = 0x2c4a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2272)));
    // 0x2c4a10: 0xc07cc2c  jal         func_1F30B0
    ctx->pc = 0x2C4A10u;
    SET_GPR_U32(ctx, 31, 0x2C4A18u);
    ctx->pc = 0x2C4A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A10u;
    // 0x2c4a14: 0x2484a790  addiu       $a0, $a0, -0x5870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30B0u, 0x2C4A10u, 0x2C4A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A18u;
label_2c4a18:
    // 0x2c4a18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4A18u;
    {
        const bool branch_taken_0x2c4a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4a18) {
            ctx->pc = 0x2C4A30u;
            goto label_2c4a30;
        }
    }
    ctx->pc = 0x2C4A20u;
    // 0x2c4a20: 0xdc420620  ld          $v0, 0x620($v0)
    ctx->pc = 0x2c4a20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1568)));
    // 0x2c4a24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4A24u;
    {
        const bool branch_taken_0x2c4a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4a24) {
            ctx->pc = 0x2C4A30u;
            goto label_2c4a30;
        }
    }
    ctx->pc = 0x2C4A2Cu;
    // 0x2c4a2c: 0x3a520001  xori        $s2, $s2, 0x1
    ctx->pc = 0x2c4a2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_2c4a30:
    // 0x2c4a30: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C4A30u;
    {
        const bool branch_taken_0x2c4a30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4a30) {
            ctx->pc = 0x2C4AB0u;
            goto label_2c4ab0;
        }
    }
    ctx->pc = 0x2C4A38u;
    // 0x2c4a38: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c4a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c4a3c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C4A3Cu;
    {
        const bool branch_taken_0x2c4a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A3Cu;
        // 0x2c4a40: 0x92650003  lbu         $a1, 0x3($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a3c) {
            ctx->pc = 0x2C4A98u;
            goto label_2c4a98;
        }
    }
    ctx->pc = 0x2C4A44u;
    // 0x2c4a44: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C4A44u;
    {
        const bool branch_taken_0x2c4a44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A44u;
        // 0x2c4a48: 0xa220004f  sb          $zero, 0x4F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a44) {
            ctx->pc = 0x2C4A80u;
            goto label_2c4a80;
        }
    }
    ctx->pc = 0x2C4A4Cu;
    // 0x2c4a4c: 0x92240037  lbu         $a0, 0x37($s1)
    ctx->pc = 0x2c4a4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x2c4a50: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c4a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c4a54: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c4a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c4a58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c4a5c: 0xa224004e  sb          $a0, 0x4E($s1)
    ctx->pc = 0x2c4a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4a60: 0xa2250037  sb          $a1, 0x37($s1)
    ctx->pc = 0x2c4a60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c4a64: 0xa2200032  sb          $zero, 0x32($s1)
    ctx->pc = 0x2c4a64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4a68: 0xa223005f  sb          $v1, 0x5F($s1)
    ctx->pc = 0x2c4a68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c4a6c: 0xa6200080  sh          $zero, 0x80($s1)
    ctx->pc = 0x2c4a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4a70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c4a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4a74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4a78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C4A78u;
    {
        const bool branch_taken_0x2c4a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A78u;
        // 0x2c4a7c: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a78) {
            ctx->pc = 0x2C4AA8u;
            goto label_2c4aa8;
        }
    }
    ctx->pc = 0x2C4A80u;
label_2c4a80:
    // 0x2c4a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a84: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C4A84u;
    SET_GPR_U32(ctx, 31, 0x2C4A8Cu);
    ctx->pc = 0x2C4A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A84u;
    // 0x2c4a88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C4A84u, 0x2C4A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A8Cu;
label_2c4a8c:
    // 0x2c4a8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4A8Cu;
    {
        const bool branch_taken_0x2c4a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4a8c) {
            ctx->pc = 0x2C4AA0u;
            goto label_2c4aa0;
        }
    }
    ctx->pc = 0x2C4A94u;
    // 0x2c4a94: 0x0  nop
    ctx->pc = 0x2c4a94u;
    // NOP
label_2c4a98:
    // 0x2c4a98: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c4a98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c4a9c: 0x0  nop
    ctx->pc = 0x2c4a9cu;
    // NOP
label_2c4aa0:
    // 0x2c4aa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4aa4: 0x0  nop
    ctx->pc = 0x2c4aa4u;
    // NOP
label_2c4aa8:
    // 0x2c4aa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4AA8u;
    {
        const bool branch_taken_0x2c4aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4aa8) {
            ctx->pc = 0x2C4AB8u;
            goto label_2c4ab8;
        }
    }
    ctx->pc = 0x2C4AB0u;
label_2c4ab0:
    // 0x2c4ab0: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x2c4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c4ab4: 0x0  nop
    ctx->pc = 0x2c4ab4u;
    // NOP
label_2c4ab8:
    // 0x2c4ab8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c4ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4abc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c4abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4ac0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c4ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4ac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4acc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4ACCu;
        // 0x2c4ad0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4AD4u;
}
