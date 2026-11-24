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

// Function: sub_002C1AA0
// Address: 0x2c1aa0 - 0x2c1ba8
void sub_002C1AA0_0x2c1aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1AA0_0x2c1aa0");
#endif

    switch (ctx->pc) {
        case 0x2c1ad4u: goto label_2c1ad4;
        case 0x2c1b5cu: goto label_2c1b5c;
        default: break;
    }

    ctx->pc = 0x2c1aa0u;

    // 0x2c1aa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c1aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c1aa4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c1aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c1aa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c1aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c1aac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c1aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c1ab0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c1ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c1ab4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c1ab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c1ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c1abc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c1abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c1ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c1ac4: 0x90d00002  lbu         $s0, 0x2($a2)
    ctx->pc = 0x2c1ac4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c1ac8: 0x94d40004  lhu         $s4, 0x4($a2)
    ctx->pc = 0x2c1ac8u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c1acc: 0xc09d968  jal         func_2765A0
    ctx->pc = 0x2C1ACCu;
    SET_GPR_U32(ctx, 31, 0x2C1AD4u);
    ctx->pc = 0x2C1AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1ACCu;
    // 0x2c1ad0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2765A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765A0u, 0x2C1ACCu, 0x2C1AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1AD4u;
label_2c1ad4:
    // 0x2c1ad4: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x2c1ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x2c1ad8: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1AD8u;
    {
        const bool branch_taken_0x2c1ad8 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2c1ad8) {
            ctx->pc = 0x2C1AF8u;
            goto label_2c1af8;
        }
    }
    ctx->pc = 0x2C1AE0u;
    // 0x2c1ae0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2c1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2c1ae4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2c1ae4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c1ae8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1AE8u;
    {
        const bool branch_taken_0x2c1ae8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1ae8) {
            ctx->pc = 0x2C1B08u;
            goto label_2c1b08;
        }
    }
    ctx->pc = 0x2C1AF0u;
    // 0x2c1af0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C1AF0u;
    {
        const bool branch_taken_0x2c1af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1af0) {
            ctx->pc = 0x2C1B80u;
            goto label_2c1b80;
        }
    }
    ctx->pc = 0x2C1AF8u;
label_2c1af8:
    // 0x2c1af8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2c1af8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c1afc: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C1AFCu;
    {
        const bool branch_taken_0x2c1afc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1afc) {
            ctx->pc = 0x2C1B80u;
            goto label_2c1b80;
        }
    }
    ctx->pc = 0x2C1B04u;
    // 0x2c1b04: 0x0  nop
    ctx->pc = 0x2c1b04u;
    // NOP
label_2c1b08:
    // 0x2c1b08: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c1b08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c1b0c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C1B0Cu;
    {
        const bool branch_taken_0x2c1b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1b0c) {
            ctx->pc = 0x2C1B68u;
            goto label_2c1b68;
        }
    }
    ctx->pc = 0x2C1B14u;
    // 0x2c1b14: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C1B14u;
    {
        const bool branch_taken_0x2c1b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B14u;
        // 0x2c1b18: 0xa260004f  sb          $zero, 0x4F($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b14) {
            ctx->pc = 0x2C1B50u;
            goto label_2c1b50;
        }
    }
    ctx->pc = 0x2C1B1Cu;
    // 0x2c1b1c: 0x92640037  lbu         $a0, 0x37($s3)
    ctx->pc = 0x2c1b1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
    // 0x2c1b20: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2c1b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2c1b24: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c1b28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c1b2c: 0xa264004e  sb          $a0, 0x4E($s3)
    ctx->pc = 0x2c1b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1b30: 0xa2700037  sb          $s0, 0x37($s3)
    ctx->pc = 0x2c1b30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 16));
    // 0x2c1b34: 0xa2600032  sb          $zero, 0x32($s3)
    ctx->pc = 0x2c1b34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1b38: 0xa263005f  sb          $v1, 0x5F($s3)
    ctx->pc = 0x2c1b38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1b3c: 0xa6600080  sh          $zero, 0x80($s3)
    ctx->pc = 0x2c1b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c1b40: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c1b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1b48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C1B48u;
    {
        const bool branch_taken_0x2c1b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B48u;
        // 0x2c1b4c: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b48) {
            ctx->pc = 0x2C1B78u;
            goto label_2c1b78;
        }
    }
    ctx->pc = 0x2C1B50u;
label_2c1b50:
    // 0x2c1b50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c1b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b54: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C1B54u;
    SET_GPR_U32(ctx, 31, 0x2C1B5Cu);
    ctx->pc = 0x2C1B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B54u;
    // 0x2c1b58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C1B54u, 0x2C1B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B5Cu;
label_2c1b5c:
    // 0x2c1b5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1B5Cu;
    {
        const bool branch_taken_0x2c1b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1b5c) {
            ctx->pc = 0x2C1B70u;
            goto label_2c1b70;
        }
    }
    ctx->pc = 0x2C1B64u;
    // 0x2c1b64: 0x0  nop
    ctx->pc = 0x2c1b64u;
    // NOP
label_2c1b68:
    // 0x2c1b68: 0xa39089d8  sb          $s0, -0x7628($gp)
    ctx->pc = 0x2c1b68u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 16));
    // 0x2c1b6c: 0x0  nop
    ctx->pc = 0x2c1b6cu;
    // NOP
label_2c1b70:
    // 0x2c1b70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b74: 0x0  nop
    ctx->pc = 0x2c1b74u;
    // NOP
label_2c1b78:
    // 0x2c1b78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1B78u;
    {
        const bool branch_taken_0x2c1b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1b78) {
            ctx->pc = 0x2C1B88u;
            goto label_2c1b88;
        }
    }
    ctx->pc = 0x2C1B80u;
label_2c1b80:
    // 0x2c1b80: 0x26220006  addiu       $v0, $s1, 0x6
    ctx->pc = 0x2c1b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x2c1b84: 0x0  nop
    ctx->pc = 0x2c1b84u;
    // NOP
label_2c1b88:
    // 0x2c1b88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c1b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c1b8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c1b8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1b90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c1b90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1b94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c1b94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1b98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1b9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BA0u;
        // 0x2c1ba4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1BA8u;
}
