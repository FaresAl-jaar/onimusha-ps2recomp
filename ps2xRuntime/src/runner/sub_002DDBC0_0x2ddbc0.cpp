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

// Function: sub_002DDBC0
// Address: 0x2ddbc0 - 0x2ddd2c
void sub_002DDBC0_0x2ddbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDBC0_0x2ddbc0");
#endif

    switch (ctx->pc) {
        case 0x2ddc08u: goto label_2ddc08;
        case 0x2ddc48u: goto label_2ddc48;
        default: break;
    }

    ctx->pc = 0x2ddbc0u;

    // 0x2ddbc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ddbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ddbc4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ddbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ddbc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ddbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ddbcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ddbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ddbd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ddbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ddbd4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ddbd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddbd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ddbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ddbdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ddbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ddbe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ddbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ddbe4: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2ddbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2ddbe8: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x2ddbe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ddbec: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2ddbecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ddbf0: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x2DDBF0u;
    {
        const bool branch_taken_0x2ddbf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDBF0u;
        // 0x2ddbf4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddbf0) {
            ctx->pc = 0x2DDD08u;
            goto label_2ddd08;
        }
    }
    ctx->pc = 0x2DDBF8u;
    // 0x2ddbf8: 0x5ae3c  dsll32      $s5, $a1, 24
    ctx->pc = 0x2ddbf8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2ddbfc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ddbfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc00: 0x15ae3f  dsra32      $s5, $s5, 24
    ctx->pc = 0x2ddc00u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 24));
    // 0x2ddc04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ddc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ddc08:
    // 0x2ddc08: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x2ddc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2ddc0c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2ddc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2ddc10: 0x90630011  lbu         $v1, 0x11($v1)
    ctx->pc = 0x2ddc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x2ddc14: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2ddc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2ddc18: 0x16a30033  bne         $s5, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2DDC18u;
    {
        const bool branch_taken_0x2ddc18 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ddc18) {
            ctx->pc = 0x2DDCE8u;
            goto label_2ddce8;
        }
    }
    ctx->pc = 0x2DDC20u;
    // 0x2ddc20: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x2ddc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x2ddc24: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x2ddc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2ddc28: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x2ddc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2ddc2c: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x2ddc2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ddc30: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2ddc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2ddc34: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x2ddc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ddc38: 0x24670006  addiu       $a3, $v1, 0x6
    ctx->pc = 0x2ddc38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2ddc3c: 0x24680008  addiu       $t0, $v1, 0x8
    ctx->pc = 0x2ddc3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2ddc40: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2DDC40u;
    SET_GPR_U32(ctx, 31, 0x2DDC48u);
    ctx->pc = 0x2DDC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC40u;
    // 0x2ddc44: 0x2469000c  addiu       $t1, $v1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2DDC40u, 0x2DDC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC48u;
label_2ddc48:
    // 0x2ddc48: 0xa6400022  sh          $zero, 0x22($s2)
    ctx->pc = 0x2ddc48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ddc4c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2ddc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2ddc50: 0x34650dcd  ori         $a1, $v1, 0xDCD
    ctx->pc = 0x2ddc50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x2ddc54: 0xa6400020  sh          $zero, 0x20($s2)
    ctx->pc = 0x2ddc54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ddc58: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2ddc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2ddc5c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2ddc5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ddc60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ddc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ddc64: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x2ddc64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x2ddc68: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2ddc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2ddc6c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x2ddc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x2ddc70: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x2ddc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x2ddc74: 0xa6430026  sh          $v1, 0x26($s2)
    ctx->pc = 0x2ddc74u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ddc78: 0x8e840070  lw          $a0, 0x70($s4)
    ctx->pc = 0x2ddc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2ddc7c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2ddc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2ddc80: 0x84840016  lh          $a0, 0x16($a0)
    ctx->pc = 0x2ddc80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x2ddc84: 0x70651818  mult1       $v1, $v1, $a1
    ctx->pc = 0x2ddc84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ddc88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ddc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ddc8c: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x2ddc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x2ddc90: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2ddc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ddc94: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x2ddc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2ddc98: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x2ddc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2ddc9c: 0x84a50014  lh          $a1, 0x14($a1)
    ctx->pc = 0x2ddc9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2ddca0: 0x42302  srl         $a0, $a0, 12
    ctx->pc = 0x2ddca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x2ddca4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2ddca4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2ddca8: 0x0  nop
    ctx->pc = 0x2ddca8u;
    // NOP
    // 0x2ddcac: 0x0  nop
    ctx->pc = 0x2ddcacu;
    // NOP
    // 0x2ddcb0: 0x1810  mfhi        $v1
    ctx->pc = 0x2ddcb0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ddcb4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ddcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ddcb8: 0xa6430028  sh          $v1, 0x28($s2)
    ctx->pc = 0x2ddcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ddcbc: 0x86430028  lh          $v1, 0x28($s2)
    ctx->pc = 0x2ddcbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2ddcc0: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDCC0u;
    {
        const bool branch_taken_0x2ddcc0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2DDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDCC0u;
        // 0x2ddcc4: 0x28617ff1  slti        $at, $v1, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddcc0) {
            ctx->pc = 0x2DDCD0u;
            goto label_2ddcd0;
        }
    }
    ctx->pc = 0x2DDCC8u;
    // 0x2ddcc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDCC8u;
    {
        const bool branch_taken_0x2ddcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDCC8u;
        // 0x2ddccc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddcc8) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDCD0u;
label_2ddcd0:
    // 0x2ddcd0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDCD0u;
    {
        const bool branch_taken_0x2ddcd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ddcd0) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDCD8u;
    // 0x2ddcd8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DDCD8u;
    {
        const bool branch_taken_0x2ddcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDCD8u;
        // 0x2ddcdc: 0x24037ff0  addiu       $v1, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddcd8) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDCE0u;
label_2ddce0:
    // 0x2ddce0: 0xa6430028  sh          $v1, 0x28($s2)
    ctx->pc = 0x2ddce0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ddce4: 0xa2400024  sb          $zero, 0x24($s2)
    ctx->pc = 0x2ddce4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 0));
label_2ddce8:
    // 0x2ddce8: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x2ddce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x2ddcec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ddcecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ddcf0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2ddcf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2ddcf4: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x2ddcf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ddcf8: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2ddcf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ddcfc: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2DDCFCu;
    {
        const bool branch_taken_0x2ddcfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDCFCu;
        // 0x2ddd00: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddcfc) {
            ctx->pc = 0x2DDC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ddc08;
        }
    }
    ctx->pc = 0x2DDD04u;
    // 0x2ddd04: 0x0  nop
    ctx->pc = 0x2ddd04u;
    // NOP
label_2ddd08:
    // 0x2ddd08: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ddd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ddd0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ddd0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ddd10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ddd10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ddd14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ddd14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ddd18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ddd18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddd1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ddd1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddd20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ddd20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddd24: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD24u;
        // 0x2ddd28: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDD2Cu;
}
