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

// Function: sub_003ACC00
// Address: 0x3acc00 - 0x3ace60
void sub_003ACC00_0x3acc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACC00_0x3acc00");
#endif

    switch (ctx->pc) {
        case 0x3acc90u: goto label_3acc90;
        case 0x3acca8u: goto label_3acca8;
        case 0x3ace0cu: goto label_3ace0c;
        default: break;
    }

    ctx->pc = 0x3acc00u;

    // 0x3acc00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3acc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3acc04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3acc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3acc08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3acc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3acc0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3acc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3acc10: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3acc10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acc14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3acc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3acc18: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3acc18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acc1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3acc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3acc20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3acc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3acc24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3acc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3acc28: 0x16a00009  bnez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x3ACC28u;
    {
        const bool branch_taken_0x3acc28 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC28u;
        // 0x3acc2c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc28) {
            ctx->pc = 0x3ACC50u;
            goto label_3acc50;
        }
    }
    ctx->pc = 0x3ACC30u;
    // 0x3acc30: 0x82c20007  lb          $v0, 0x7($s6)
    ctx->pc = 0x3acc30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
    // 0x3acc34: 0x3c140066  lui         $s4, 0x66
    ctx->pc = 0x3acc34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)102 << 16));
    // 0x3acc38: 0x241300e8  addiu       $s3, $zero, 0xE8
    ctx->pc = 0x3acc38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x3acc3c: 0x2694d924  addiu       $s4, $s4, -0x26DC
    ctx->pc = 0x3acc3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957348));
    // 0x3acc40: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x3acc40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3acc44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3ACC44u;
    {
        const bool branch_taken_0x3acc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC44u;
        // 0x3acc48: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc44) {
            ctx->pc = 0x3ACC78u;
            goto label_3acc78;
        }
    }
    ctx->pc = 0x3ACC4Cu;
    // 0x3acc4c: 0x0  nop
    ctx->pc = 0x3acc4cu;
    // NOP
label_3acc50:
    // 0x3acc50: 0x82c30008  lb          $v1, 0x8($s6)
    ctx->pc = 0x3acc50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x3acc54: 0x3c140066  lui         $s4, 0x66
    ctx->pc = 0x3acc54u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)102 << 16));
    // 0x3acc58: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3acc58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3acc5c: 0x2694d950  addiu       $s4, $s4, -0x26B0
    ctx->pc = 0x3acc5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957392));
    // 0x3acc60: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3acc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3acc64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3acc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3acc68: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3acc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3acc6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3acc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3acc70: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x3acc70u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3acc74: 0x0  nop
    ctx->pc = 0x3acc74u;
    // NOP
label_3acc78:
    // 0x3acc78: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x3acc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3acc7c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3acc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3acc80: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3acc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3acc84: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x3acc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x3acc88: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3ACC88u;
    SET_GPR_U32(ctx, 31, 0x3ACC90u);
    ctx->pc = 0x3ACC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACC88u;
    // 0x3acc8c: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3ACC88u, 0x3ACC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACC90u;
label_3acc90:
    // 0x3acc90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3acc90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acc94: 0x12200062  beqz        $s1, . + 4 + (0x62 << 2)
    ctx->pc = 0x3ACC94u;
    {
        const bool branch_taken_0x3acc94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC94u;
        // 0x3acc98: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc94) {
            ctx->pc = 0x3ACE20u;
            goto label_3ace20;
        }
    }
    ctx->pc = 0x3ACC9Cu;
    // 0x3acc9c: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
    ctx->pc = 0x3ACC9Cu;
    {
        const bool branch_taken_0x3acc9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC9Cu;
        // 0x3acca0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc9c) {
            ctx->pc = 0x3ACE20u;
            goto label_3ace20;
        }
    }
    ctx->pc = 0x3ACCA4u;
    // 0x3acca4: 0x0  nop
    ctx->pc = 0x3acca4u;
    // NOP
label_3acca8:
    // 0x3acca8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3acca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3accac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3accacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3accb0: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x3accb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x3accb4: 0x34420156  ori         $v0, $v0, 0x156
    ctx->pc = 0x3accb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)342);
    // 0x3accb8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3accb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3accbc: 0x8ec2001c  lw          $v0, 0x1C($s6)
    ctx->pc = 0x3accbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x3accc0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3accc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x3accc4: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x3accc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x3accc8: 0x16a00013  bnez        $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x3ACCC8u;
    {
        const bool branch_taken_0x3accc8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACCC8u;
        // 0x3acccc: 0xa6200016  sh          $zero, 0x16($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3accc8) {
            ctx->pc = 0x3ACD18u;
            goto label_3acd18;
        }
    }
    ctx->pc = 0x3ACCD0u;
    // 0x3accd0: 0x92c30006  lbu         $v1, 0x6($s6)
    ctx->pc = 0x3accd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x3accd4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3accd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3accd8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3ACCD8u;
    {
        const bool branch_taken_0x3accd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3accd8) {
            ctx->pc = 0x3ACD18u;
            goto label_3acd18;
        }
    }
    ctx->pc = 0x3ACCE0u;
    // 0x3acce0: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x3acce0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3acce4: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x3acce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x3acce8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3acce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3accec: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x3accecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x3accf0: 0x24420fd4  addiu       $v0, $v0, 0xFD4
    ctx->pc = 0x3accf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4052));
    // 0x3accf4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3accf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3accf8: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x3accf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x3accfc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3accfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3acd00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3acd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3acd04: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3acd04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x3acd08: 0x96820008  lhu         $v0, 0x8($s4)
    ctx->pc = 0x3acd08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3acd0c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3ACD0Cu;
    {
        const bool branch_taken_0x3acd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD0Cu;
        // 0x3acd10: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acd0c) {
            ctx->pc = 0x3ACD48u;
            goto label_3acd48;
        }
    }
    ctx->pc = 0x3ACD14u;
    // 0x3acd14: 0x0  nop
    ctx->pc = 0x3acd14u;
    // NOP
label_3acd18:
    // 0x3acd18: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x3acd18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3acd1c: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x3acd1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x3acd20: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3acd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3acd24: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x3acd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x3acd28: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x3acd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x3acd2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3acd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3acd30: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x3acd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x3acd34: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3acd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3acd38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3acd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3acd3c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3acd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x3acd40: 0x96820008  lhu         $v0, 0x8($s4)
    ctx->pc = 0x3acd40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3acd44: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x3acd44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_3acd48:
    // 0x3acd48: 0x9689000e  lhu         $t1, 0xE($s4)
    ctx->pc = 0x3acd48u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x3acd4c: 0x96880010  lhu         $t0, 0x10($s4)
    ctx->pc = 0x3acd4cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3acd50: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x3acd50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x3acd54: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3acd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3acd58: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3acd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3acd5c: 0x24e72540  addiu       $a3, $a3, 0x2540
    ctx->pc = 0x3acd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9536));
    // 0x3acd60: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x3acd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x3acd64: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3acd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3acd68: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x3acd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x3acd6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3acd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acd70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3acd70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acd74: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x3acd74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3acd78: 0x84500  sll         $t0, $t0, 20
    ctx->pc = 0x3acd78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 20));
    // 0x3acd7c: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x3acd7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3acd80: 0xae280028  sw          $t0, 0x28($s1)
    ctx->pc = 0x3acd80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 8));
    // 0x3acd84: 0x9689000a  lhu         $t1, 0xA($s4)
    ctx->pc = 0x3acd84u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x3acd88: 0x9688000c  lhu         $t0, 0xC($s4)
    ctx->pc = 0x3acd88u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x3acd8c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x3acd8cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3acd90: 0x84500  sll         $t0, $t0, 20
    ctx->pc = 0x3acd90u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 20));
    // 0x3acd94: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x3acd94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3acd98: 0xae280018  sw          $t0, 0x18($s1)
    ctx->pc = 0x3acd98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 8));
    // 0x3acd9c: 0x968b000a  lhu         $t3, 0xA($s4)
    ctx->pc = 0x3acd9cu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x3acda0: 0x968a000e  lhu         $t2, 0xE($s4)
    ctx->pc = 0x3acda0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x3acda4: 0x9689000c  lhu         $t1, 0xC($s4)
    ctx->pc = 0x3acda4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x3acda8: 0x96880010  lhu         $t0, 0x10($s4)
    ctx->pc = 0x3acda8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3acdac: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x3acdacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x3acdb0: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x3acdb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x3acdb4: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x3acdb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x3acdb8: 0x84500  sll         $t0, $t0, 20
    ctx->pc = 0x3acdb8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 20));
    // 0x3acdbc: 0x1484025  or          $t0, $t2, $t0
    ctx->pc = 0x3acdbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x3acdc0: 0xae28001c  sw          $t0, 0x1C($s1)
    ctx->pc = 0x3acdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 8));
    // 0x3acdc4: 0x92c80053  lbu         $t0, 0x53($s6)
    ctx->pc = 0x3acdc4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 83)));
    // 0x3acdc8: 0x928a0013  lbu         $t2, 0x13($s4)
    ctx->pc = 0x3acdc8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
    // 0x3acdcc: 0x92890014  lbu         $t1, 0x14($s4)
    ctx->pc = 0x3acdccu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x3acdd0: 0x928b0012  lbu         $t3, 0x12($s4)
    ctx->pc = 0x3acdd0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x3acdd4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3acdd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3acdd8: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x3acdd8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3acddc: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x3acddcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x3acde0: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x3acde0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x3acde4: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x3acde4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x3acde8: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x3acde8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x3acdec: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x3acdecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x3acdf0: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x3acdf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x3acdf4: 0xae270008  sw          $a3, 0x8($s1)
    ctx->pc = 0x3acdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
    // 0x3acdf8: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x3acdf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3acdfc: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x3acdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3ace00: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3ace00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x3ace04: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3ACE04u;
    SET_GPR_U32(ctx, 31, 0x3ACE0Cu);
    ctx->pc = 0x3ACE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACE04u;
    // 0x3ace08: 0xa222000f  sb          $v0, 0xF($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3ACE04u, 0x3ACE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACE0Cu;
label_3ace0c:
    // 0x3ace0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ace0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3ace10: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x3ace10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3ace14: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x3ace14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3ace18: 0x1460ffa3  bnez        $v1, . + 4 + (-0x5D << 2)
    ctx->pc = 0x3ACE18u;
    {
        const bool branch_taken_0x3ace18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE18u;
        // 0x3ace1c: 0x26940016  addiu       $s4, $s4, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ace18) {
            ctx->pc = 0x3ACCA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3acca8;
        }
    }
    ctx->pc = 0x3ACE20u;
label_3ace20:
    // 0x3ace20: 0x92c30053  lbu         $v1, 0x53($s6)
    ctx->pc = 0x3ace20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 83)));
    // 0x3ace24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ace24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ace28: 0xa2c30053  sb          $v1, 0x53($s6)
    ctx->pc = 0x3ace28u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 83), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ace2c: 0x92c30053  lbu         $v1, 0x53($s6)
    ctx->pc = 0x3ace2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 83)));
    // 0x3ace30: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3ace30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x3ace34: 0xa2c30053  sb          $v1, 0x53($s6)
    ctx->pc = 0x3ace34u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 83), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ace38: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3ace38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ace3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ace3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ace40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ace40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ace44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ace44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ace48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ace48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ace4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ace4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ace50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ace50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ace54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ace54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ace58: 0x3e00008  jr          $ra
    ctx->pc = 0x3ACE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE58u;
        // 0x3ace5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACE60u;
}
