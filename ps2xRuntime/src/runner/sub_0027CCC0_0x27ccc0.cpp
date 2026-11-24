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

// Function: sub_0027CCC0
// Address: 0x27ccc0 - 0x27d28c
void sub_0027CCC0_0x27ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027CCC0_0x27ccc0");
#endif

    switch (ctx->pc) {
        case 0x27cd18u: goto label_27cd18;
        case 0x27cea8u: goto label_27cea8;
        case 0x27cedcu: goto label_27cedc;
        case 0x27cf08u: goto label_27cf08;
        case 0x27d250u: goto label_27d250;
        default: break;
    }

    ctx->pc = 0x27ccc0u;

    // 0x27ccc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x27ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x27ccc4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x27ccc8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27ccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x27cccc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27ccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x27ccd0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27ccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27ccd4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27ccd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27ccd8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x27ccd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ccdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27ccdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27cce0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27cce0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cce4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27cce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27cce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27cce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27ccec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ccecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27ccf0: 0x8c92002c  lw          $s2, 0x2C($a0)
    ctx->pc = 0x27ccf0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x27ccf4: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x27ccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x27ccf8: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x27ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x27ccfc: 0xa0800058  sb          $zero, 0x58($a0)
    ctx->pc = 0x27ccfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x27cd00: 0xa48000c2  sh          $zero, 0xC2($a0)
    ctx->pc = 0x27cd00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 194), (uint16_t)GPR_U32(ctx, 0));
    // 0x27cd04: 0x16400154  bnez        $s2, . + 4 + (0x154 << 2)
    ctx->pc = 0x27CD04u;
    {
        const bool branch_taken_0x27cd04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD04u;
        // 0x27cd08: 0xa48000c4  sh          $zero, 0xC4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd04) {
            ctx->pc = 0x27D258u;
            goto label_27d258;
        }
    }
    ctx->pc = 0x27CD0Cu;
    // 0x27cd0c: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x27CD0Cu;
    {
        const bool branch_taken_0x27cd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cd0c) {
            ctx->pc = 0x27D260u;
            goto label_27d260;
        }
    }
    ctx->pc = 0x27CD14u;
    // 0x27cd14: 0x0  nop
    ctx->pc = 0x27cd14u;
    // NOP
label_27cd18:
    // 0x27cd18: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x27cd18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27cd1c: 0x3c06008c  lui         $a2, 0x8C
    ctx->pc = 0x27cd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)140 << 16));
    // 0x27cd20: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x27cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x27cd24: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x27cd24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x27cd28: 0x24c60950  addiu       $a2, $a2, 0x950
    ctx->pc = 0x27cd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2384));
    // 0x27cd2c: 0x246331a0  addiu       $v1, $v1, 0x31A0
    ctx->pc = 0x27cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12704));
    // 0x27cd30: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x27cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x27cd34: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x27cd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x27cd38: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x27cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27cd3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27cd40: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x27cd40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x27cd44: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x27cd44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x27cd48: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x27cd48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x27cd4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27cd50: 0x90660005  lbu         $a2, 0x5($v1)
    ctx->pc = 0x27cd50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x27cd54: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x27cd54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27cd58: 0x90e40005  lbu         $a0, 0x5($a3)
    ctx->pc = 0x27cd58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x27cd5c: 0x8cf30008  lw          $s3, 0x8($a3)
    ctx->pc = 0x27cd5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x27cd60: 0x8cf70000  lw          $s7, 0x0($a3)
    ctx->pc = 0x27cd60u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27cd64: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x27cd64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27cd68: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x27cd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x27cd6c: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x27cd6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x27cd70: 0x8cc60194  lw          $a2, 0x194($a2)
    ctx->pc = 0x27cd70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 404)));
    // 0x27cd74: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27cd74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27cd78: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x27cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x27cd7c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x27cd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x27cd80: 0x24880194  addiu       $t0, $a0, 0x194
    ctx->pc = 0x27cd80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 404));
    // 0x27cd84: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x27cd84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x27cd88: 0x8cc4003c  lw          $a0, 0x3C($a2)
    ctx->pc = 0x27cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x27cd8c: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x27CD8Cu;
    {
        const bool branch_taken_0x27cd8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD8Cu;
        // 0x27cd90: 0x85b021  addu        $s6, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd8c) {
            ctx->pc = 0x27CD98u;
            goto label_27cd98;
        }
    }
    ctx->pc = 0x27CD94u;
    // 0x27cd94: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x27cd94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27cd98:
    // 0x27cd98: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x27cd98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x27cd9c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x27cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27cda0: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x27cda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x27cda4: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x27cda4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27cda8: 0x1220012d  beqz        $s1, . + 4 + (0x12D << 2)
    ctx->pc = 0x27CDA8u;
    {
        const bool branch_taken_0x27cda8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cda8) {
            ctx->pc = 0x27D260u;
            goto label_27d260;
        }
    }
    ctx->pc = 0x27CDB0u;
    // 0x27cdb0: 0x12c0012b  beqz        $s6, . + 4 + (0x12B << 2)
    ctx->pc = 0x27CDB0u;
    {
        const bool branch_taken_0x27cdb0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cdb0) {
            ctx->pc = 0x27D260u;
            goto label_27d260;
        }
    }
    ctx->pc = 0x27CDB8u;
    // 0x27cdb8: 0x92840078  lbu         $a0, 0x78($s4)
    ctx->pc = 0x27cdb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x27cdbc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CDBCu;
    {
        const bool branch_taken_0x27cdbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cdbc) {
            ctx->pc = 0x27CDD4u;
            goto label_27cdd4;
        }
    }
    ctx->pc = 0x27CDC4u;
    // 0x27cdc4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x27cdc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x27cdc8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x27cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x27cdcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27CDCCu;
    {
        const bool branch_taken_0x27cdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDCCu;
        // 0x27cdd0: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cdcc) {
            ctx->pc = 0x27CDD8u;
            goto label_27cdd8;
        }
    }
    ctx->pc = 0x27CDD4u;
label_27cdd4:
    // 0x27cdd4: 0x92c40000  lbu         $a0, 0x0($s6)
    ctx->pc = 0x27cdd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_27cdd8:
    // 0x27cdd8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x27cdd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x27cddc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x27cddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x27cde0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x27cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27cde4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x27cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x27cde8: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x27cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x27cdec: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x27cdecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27cdf0: 0x1200011b  beqz        $s0, . + 4 + (0x11B << 2)
    ctx->pc = 0x27CDF0u;
    {
        const bool branch_taken_0x27cdf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cdf0) {
            ctx->pc = 0x27D260u;
            goto label_27d260;
        }
    }
    ctx->pc = 0x27CDF8u;
    // 0x27cdf8: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x27cdf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27cdfc: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27CDFCu;
    {
        const bool branch_taken_0x27cdfc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cdfc) {
            ctx->pc = 0x27CE18u;
            goto label_27ce18;
        }
    }
    ctx->pc = 0x27CE04u;
    // 0x27ce04: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x27ce04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27ce08: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x27ce08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x27ce0c: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x27ce0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x27ce10: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x27CE10u;
    {
        const bool branch_taken_0x27ce10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE10u;
        // 0x27ce14: 0x8e52000c  lw          $s2, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce10) {
            ctx->pc = 0x27D258u;
            goto label_27d258;
        }
    }
    ctx->pc = 0x27CE18u;
label_27ce18:
    // 0x27ce18: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x27ce18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x27ce1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27CE1Cu;
    {
        const bool branch_taken_0x27ce1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ce1c) {
            ctx->pc = 0x27CE38u;
            goto label_27ce38;
        }
    }
    ctx->pc = 0x27CE24u;
    // 0x27ce24: 0x9264000a  lbu         $a0, 0xA($s3)
    ctx->pc = 0x27ce24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x27ce28: 0x92a3000a  lbu         $v1, 0xA($s5)
    ctx->pc = 0x27ce28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x27ce2c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27CE2Cu;
    {
        const bool branch_taken_0x27ce2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27ce2c) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CE34u;
    // 0x27ce34: 0x0  nop
    ctx->pc = 0x27ce34u;
    // NOP
label_27ce38:
    // 0x27ce38: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x27ce38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x27ce3c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x27CE3Cu;
    {
        const bool branch_taken_0x27ce3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ce3c) {
            ctx->pc = 0x27CE78u;
            goto label_27ce78;
        }
    }
    ctx->pc = 0x27CE44u;
    // 0x27ce44: 0x9264000a  lbu         $a0, 0xA($s3)
    ctx->pc = 0x27ce44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x27ce48: 0x92a3000a  lbu         $v1, 0xA($s5)
    ctx->pc = 0x27ce48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x27ce4c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27CE4Cu;
    {
        const bool branch_taken_0x27ce4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27ce4c) {
            ctx->pc = 0x27CE78u;
            goto label_27ce78;
        }
    }
    ctx->pc = 0x27CE54u;
    // 0x27ce54: 0x0  nop
    ctx->pc = 0x27ce54u;
    // NOP
label_27ce58:
    // 0x27ce58: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x27ce58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x27ce5c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x27CE5Cu;
    {
        const bool branch_taken_0x27ce5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ce5c) {
            ctx->pc = 0x27CE90u;
            goto label_27ce90;
        }
    }
    ctx->pc = 0x27CE64u;
    // 0x27ce64: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x27ce64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x27ce68: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x27ce68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x27ce6c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27CE6Cu;
    {
        const bool branch_taken_0x27ce6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27ce6c) {
            ctx->pc = 0x27CE90u;
            goto label_27ce90;
        }
    }
    ctx->pc = 0x27CE74u;
    // 0x27ce74: 0x0  nop
    ctx->pc = 0x27ce74u;
    // NOP
label_27ce78:
    // 0x27ce78: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x27ce78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27ce7c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x27ce7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x27ce80: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x27ce80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x27ce84: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x27CE84u;
    {
        const bool branch_taken_0x27ce84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE84u;
        // 0x27ce88: 0x8e52000c  lw          $s2, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce84) {
            ctx->pc = 0x27D258u;
            goto label_27d258;
        }
    }
    ctx->pc = 0x27CE8Cu;
    // 0x27ce8c: 0x0  nop
    ctx->pc = 0x27ce8cu;
    // NOP
label_27ce90:
    // 0x27ce90: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x27ce90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x27ce94: 0x926708e8  lbu         $a3, 0x8E8($s3)
    ctx->pc = 0x27ce94u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x27ce98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27ce98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce9c: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x27ce9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x27cea0: 0xc0c9a74  jal         func_3269D0
    ctx->pc = 0x27CEA0u;
    SET_GPR_U32(ctx, 31, 0x27CEA8u);
    ctx->pc = 0x27CEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CEA0u;
    // 0x27cea4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3269D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3269D0u, 0x27CEA0u, 0x27CEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CEA8u;
label_27cea8:
    // 0x27cea8: 0x92820079  lbu         $v0, 0x79($s4)
    ctx->pc = 0x27cea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 121)));
    // 0x27ceac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27CEACu;
    {
        const bool branch_taken_0x27ceac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CEACu;
        // 0x27ceb0: 0x92c3000a  lbu         $v1, 0xA($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ceac) {
            ctx->pc = 0x27CEB8u;
            goto label_27ceb8;
        }
    }
    ctx->pc = 0x27CEB4u;
    // 0x27ceb4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27ceb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27ceb8:
    // 0x27ceb8: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x27ceb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x27cebc: 0x9228000d  lbu         $t0, 0xD($s1)
    ctx->pc = 0x27cebcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x27cec0: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x27cec0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27cec4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27cec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cec8: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x27cec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x27cecc: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x27ceccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x27ced0: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x27ced0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ced4: 0xc09f4a4  jal         func_27D290
    ctx->pc = 0x27CED4u;
    SET_GPR_U32(ctx, 31, 0x27CEDCu);
    ctx->pc = 0x27CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CED4u;
    // 0x27ced8: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D290u, 0x27CED4u, 0x27CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CEDCu;
label_27cedc:
    // 0x27cedc: 0x9225000e  lbu         $a1, 0xE($s1)
    ctx->pc = 0x27cedcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x27cee0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27CEE0u;
    {
        const bool branch_taken_0x27cee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cee0) {
            ctx->pc = 0x27CF08u;
            goto label_27cf08;
        }
    }
    ctx->pc = 0x27CEE8u;
    // 0x27cee8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x27CEE8u;
    {
        const bool branch_taken_0x27cee8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cee8) {
            ctx->pc = 0x27CF08u;
            goto label_27cf08;
        }
    }
    ctx->pc = 0x27CEF0u;
    // 0x27cef0: 0x92630640  lbu         $v1, 0x640($s3)
    ctx->pc = 0x27cef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1600)));
    // 0x27cef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cef8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CEF8u;
    {
        const bool branch_taken_0x27cef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CEF8u;
        // 0x27cefc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cef8) {
            ctx->pc = 0x27CF08u;
            goto label_27cf08;
        }
    }
    ctx->pc = 0x27CF00u;
    // 0x27cf00: 0xc0e2698  jal         func_389A60
    ctx->pc = 0x27CF00u;
    SET_GPR_U32(ctx, 31, 0x27CF08u);
    ctx->pc = 0x389A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A60u, 0x27CF00u, 0x27CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF08u;
label_27cf08:
    // 0x27cf08: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x27cf08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27cf0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cf10: 0x968200c2  lhu         $v0, 0xC2($s4)
    ctx->pc = 0x27cf10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x27cf14: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x27cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x27cf18: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x27cf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x27cf1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27cf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27cf20: 0xa68200c2  sh          $v0, 0xC2($s4)
    ctx->pc = 0x27cf20u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x27cf24: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x27cf24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x27cf28: 0x968200c4  lhu         $v0, 0xC4($s4)
    ctx->pc = 0x27cf28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x27cf2c: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x27cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x27cf30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x27cf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x27cf34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27cf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27cf38: 0xa68200c4  sh          $v0, 0xC4($s4)
    ctx->pc = 0x27cf38u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 196), (uint16_t)GPR_U32(ctx, 2));
    // 0x27cf3c: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x27cf3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x27cf40: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x27cf40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27cf44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27cf48: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x27cf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x27cf4c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27cf50: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CF50u;
    {
        const bool branch_taken_0x27cf50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF50u;
        // 0x27cf54: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf50) {
            ctx->pc = 0x27CF68u;
            goto label_27cf68;
        }
    }
    ctx->pc = 0x27CF58u;
    // 0x27cf58: 0x8e6206b4  lw          $v0, 0x6B4($s3)
    ctx->pc = 0x27cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1716)));
    // 0x27cf5c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x27cf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x27cf60: 0xae6206b4  sw          $v0, 0x6B4($s3)
    ctx->pc = 0x27cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1716), GPR_U32(ctx, 2));
    // 0x27cf64: 0x0  nop
    ctx->pc = 0x27cf64u;
    // NOP
label_27cf68:
    // 0x27cf68: 0x96a2050c  lhu         $v0, 0x50C($s5)
    ctx->pc = 0x27cf68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 1292)));
    // 0x27cf6c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x27cf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x27cf70: 0xa6a2050c  sh          $v0, 0x50C($s5)
    ctx->pc = 0x27cf70u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1292), (uint16_t)GPR_U32(ctx, 2));
    // 0x27cf74: 0x82c30003  lb          $v1, 0x3($s6)
    ctx->pc = 0x27cf74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x27cf78: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x27cf78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x27cf7c: 0x92820077  lbu         $v0, 0x77($s4)
    ctx->pc = 0x27cf7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 119)));
    // 0x27cf80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27cf84: 0x1260009e  beqz        $s3, . + 4 + (0x9E << 2)
    ctx->pc = 0x27CF84u;
    {
        const bool branch_taken_0x27cf84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF84u;
        // 0x27cf88: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf84) {
            ctx->pc = 0x27D200u;
            goto label_27d200;
        }
    }
    ctx->pc = 0x27CF8Cu;
    // 0x27cf8c: 0x1277000c  beq         $s3, $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x27CF8Cu;
    {
        const bool branch_taken_0x27cf8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 23));
        if (branch_taken_0x27cf8c) {
            ctx->pc = 0x27CFC0u;
            goto label_27cfc0;
        }
    }
    ctx->pc = 0x27CF94u;
    // 0x27cf94: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x27cf94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27cf98: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x27cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x27cf9c: 0x24420950  addiu       $v0, $v0, 0x950
    ctx->pc = 0x27cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2384));
    // 0x27cfa0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27cfa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27cfa8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27cfac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27cfb0: 0x90420042  lbu         $v0, 0x42($v0)
    ctx->pc = 0x27cfb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 66)));
    // 0x27cfb4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x27cfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x27cfb8: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x27CFB8u;
    {
        const bool branch_taken_0x27cfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cfb8) {
            ctx->pc = 0x27D200u;
            goto label_27d200;
        }
    }
    ctx->pc = 0x27CFC0u;
label_27cfc0:
    // 0x27cfc0: 0x92640781  lbu         $a0, 0x781($s3)
    ctx->pc = 0x27cfc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1921)));
    // 0x27cfc4: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x27cfc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27cfc8: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x27CFC8u;
    {
        const bool branch_taken_0x27cfc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFC8u;
        // 0x27cfcc: 0x3c023c88  lui         $v0, 0x3C88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfc8) {
            ctx->pc = 0x27D068u;
            goto label_27d068;
        }
    }
    ctx->pc = 0x27CFD0u;
    // 0x27cfd0: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x27cfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x27cfd4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x27cfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x27cfd8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CFD8u;
    {
        const bool branch_taken_0x27cfd8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFD8u;
        // 0x27cfdc: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfd8) {
            ctx->pc = 0x27CFECu;
            goto label_27cfec;
        }
    }
    ctx->pc = 0x27CFE0u;
    // 0x27cfe0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x27cfe0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27cfe4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27CFE4u;
    {
        const bool branch_taken_0x27cfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFE4u;
        // 0x27cfe8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfe4) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CFECu;
label_27cfec:
    // 0x27cfec: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x27cfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x27cff0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27cff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27cff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27cff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27cff8: 0x0  nop
    ctx->pc = 0x27cff8u;
    // NOP
    // 0x27cffc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x27cffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x27d000: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x27d000u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_27d004:
    // 0x27d004: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x27d004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27d008: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x27d008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x27d00c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x27d00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x27d010: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x27d010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x27d014: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27d014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d01c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x27d01cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x27d020: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27d020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27d024: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27d024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d028: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D028u;
    {
        const bool branch_taken_0x27d028 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d028) {
            ctx->pc = 0x27D040u;
            goto label_27d040;
        }
    }
    ctx->pc = 0x27D030u;
    // 0x27d030: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d030u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d034: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27d034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27d038: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27D038u;
    {
        const bool branch_taken_0x27d038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D038u;
        // 0x27d03c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d038) {
            ctx->pc = 0x27D05Cu;
            goto label_27d05c;
        }
    }
    ctx->pc = 0x27D040u;
label_27d040:
    // 0x27d040: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27d040u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27d044: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27d044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x27d048: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d048u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d04c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27d04cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27d050: 0x0  nop
    ctx->pc = 0x27d050u;
    // NOP
    // 0x27d054: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27d054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27d058: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27d058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27d05c:
    // 0x27d05c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x27D05Cu;
    {
        const bool branch_taken_0x27d05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D05Cu;
        // 0x27d060: 0xa2620782  sb          $v0, 0x782($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d05c) {
            ctx->pc = 0x27D0F8u;
            goto label_27d0f8;
        }
    }
    ctx->pc = 0x27D064u;
    // 0x27d064: 0x0  nop
    ctx->pc = 0x27d064u;
    // NOP
label_27d068:
    // 0x27d068: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x27d068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x27d06c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x27d06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x27d070: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x27d070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x27d074: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D074u;
    {
        const bool branch_taken_0x27d074 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D074u;
        // 0x27d078: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d074) {
            ctx->pc = 0x27D088u;
            goto label_27d088;
        }
    }
    ctx->pc = 0x27D07Cu;
    // 0x27d07c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27d07cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d080: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27D080u;
    {
        const bool branch_taken_0x27d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D080u;
        // 0x27d084: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d080) {
            ctx->pc = 0x27D0A0u;
            goto label_27d0a0;
        }
    }
    ctx->pc = 0x27D088u;
label_27d088:
    // 0x27d088: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x27d088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x27d08c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27d08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27d090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27d090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d094: 0x0  nop
    ctx->pc = 0x27d094u;
    // NOP
    // 0x27d098: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x27d098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x27d09c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x27d09cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_27d0a0:
    // 0x27d0a0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x27d0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27d0a4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x27d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x27d0a8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x27d0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x27d0ac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x27d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x27d0b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27d0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d0b8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x27d0b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x27d0bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27d0bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27d0c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27d0c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d0c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D0C4u;
    {
        const bool branch_taken_0x27d0c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d0c4) {
            ctx->pc = 0x27D0DCu;
            goto label_27d0dc;
        }
    }
    ctx->pc = 0x27D0CCu;
    // 0x27d0cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d0ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d0d0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27d0d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27d0d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27D0D4u;
    {
        const bool branch_taken_0x27d0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0D4u;
        // 0x27d0d8: 0xa2630782  sb          $v1, 0x782($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0d4) {
            ctx->pc = 0x27D0F8u;
            goto label_27d0f8;
        }
    }
    ctx->pc = 0x27D0DCu;
label_27d0dc:
    // 0x27d0dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27d0dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27d0e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x27d0e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d0e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d0e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27d0e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27d0ec: 0x0  nop
    ctx->pc = 0x27d0ecu;
    // NOP
    // 0x27d0f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27d0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27d0f4: 0xa2630782  sb          $v1, 0x782($s3)
    ctx->pc = 0x27d0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 3));
label_27d0f8:
    // 0x27d0f8: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x27d0f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27d0fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d100: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x27D100u;
    {
        const bool branch_taken_0x27d100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27d100) {
            ctx->pc = 0x27D200u;
            goto label_27d200;
        }
    }
    ctx->pc = 0x27D108u;
    // 0x27d108: 0x82040002  lb          $a0, 0x2($s0)
    ctx->pc = 0x27d108u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27d10c: 0x92620782  lbu         $v0, 0x782($s3)
    ctx->pc = 0x27d10cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1922)));
    // 0x27d110: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x27d110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27d114: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x27D114u;
    {
        const bool branch_taken_0x27d114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d114) {
            ctx->pc = 0x27D1A8u;
            goto label_27d1a8;
        }
    }
    ctx->pc = 0x27D11Cu;
    // 0x27d11c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D11Cu;
    {
        const bool branch_taken_0x27d11c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D11Cu;
        // 0x27d120: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d11c) {
            ctx->pc = 0x27D130u;
            goto label_27d130;
        }
    }
    ctx->pc = 0x27D124u;
    // 0x27d124: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27d124u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d128: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27D128u;
    {
        const bool branch_taken_0x27d128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D128u;
        // 0x27d12c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d128) {
            ctx->pc = 0x27D148u;
            goto label_27d148;
        }
    }
    ctx->pc = 0x27D130u;
label_27d130:
    // 0x27d130: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x27d130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x27d134: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27d134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27d138: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27d138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d13c: 0x0  nop
    ctx->pc = 0x27d13cu;
    // NOP
    // 0x27d140: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x27d140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x27d144: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x27d144u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_27d148:
    // 0x27d148: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x27d148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d14c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x27d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x27d150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d154: 0x0  nop
    ctx->pc = 0x27d154u;
    // NOP
    // 0x27d158: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27d158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27d15c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x27d15cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x27d160: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27d160u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d164: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D164u;
    {
        const bool branch_taken_0x27d164 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d164) {
            ctx->pc = 0x27D17Cu;
            goto label_27d17c;
        }
    }
    ctx->pc = 0x27D16Cu;
    // 0x27d16c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d16cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d170: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27d170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27d174: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27D174u;
    {
        const bool branch_taken_0x27d174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D174u;
        // 0x27d178: 0x92620782  lbu         $v0, 0x782($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1922)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d174) {
            ctx->pc = 0x27D198u;
            goto label_27d198;
        }
    }
    ctx->pc = 0x27D17Cu;
label_27d17c:
    // 0x27d17c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27d17cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27d180: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27d180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x27d184: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d184u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d188: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27d188u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27d18c: 0x0  nop
    ctx->pc = 0x27d18cu;
    // NOP
    // 0x27d190: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27d190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27d194: 0x92620782  lbu         $v0, 0x782($s3)
    ctx->pc = 0x27d194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1922)));
label_27d198:
    // 0x27d198: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x27d198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27d19c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d1a0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27D1A0u;
    {
        const bool branch_taken_0x27d1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1A0u;
        // 0x27d1a4: 0xa2620782  sb          $v0, 0x782($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1a0) {
            ctx->pc = 0x27D200u;
            goto label_27d200;
        }
    }
    ctx->pc = 0x27D1A8u;
label_27d1a8:
    // 0x27d1a8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x27d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x27d1ac: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x27d1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d1b0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27d1b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27d1b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d1b8: 0x0  nop
    ctx->pc = 0x27d1b8u;
    // NOP
    // 0x27d1bc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27d1bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27d1c0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x27d1c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x27d1c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27d1c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d1c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D1C8u;
    {
        const bool branch_taken_0x27d1c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d1c8) {
            ctx->pc = 0x27D1E0u;
            goto label_27d1e0;
        }
    }
    ctx->pc = 0x27D1D0u;
    // 0x27d1d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d1d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d1d4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27d1d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27d1d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27D1D8u;
    {
        const bool branch_taken_0x27d1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1D8u;
        // 0x27d1dc: 0xa2630782  sb          $v1, 0x782($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1d8) {
            ctx->pc = 0x27D1FCu;
            goto label_27d1fc;
        }
    }
    ctx->pc = 0x27D1E0u;
label_27d1e0:
    // 0x27d1e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27d1e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27d1e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x27d1e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d1e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d1ec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27d1ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27d1f0: 0x0  nop
    ctx->pc = 0x27d1f0u;
    // NOP
    // 0x27d1f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27d1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27d1f8: 0xa2630782  sb          $v1, 0x782($s3)
    ctx->pc = 0x27d1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 3));
label_27d1fc:
    // 0x27d1fc: 0x0  nop
    ctx->pc = 0x27d1fcu;
    // NOP
label_27d200:
    // 0x27d200: 0x92490002  lbu         $t1, 0x2($s2)
    ctx->pc = 0x27d200u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27d204: 0x3c06008c  lui         $a2, 0x8C
    ctx->pc = 0x27d204u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)140 << 16));
    // 0x27d208: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x27d208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x27d20c: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x27d20cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x27d210: 0x24c60950  addiu       $a2, $a2, 0x950
    ctx->pc = 0x27d210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2384));
    // 0x27d214: 0x244231a0  addiu       $v0, $v0, 0x31A0
    ctx->pc = 0x27d214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12704));
    // 0x27d218: 0x92070007  lbu         $a3, 0x7($s0)
    ctx->pc = 0x27d218u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x27d21c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d220: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x27d220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x27d224: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x27d224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x27d228: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x27d228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27d22c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27d22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27d230: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x27d230u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x27d234: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27d234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27d238: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x27d238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x27d23c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d240: 0xdca50000  ld          $a1, 0x0($a1)
    ctx->pc = 0x27d240u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27d244: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x27d244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27d248: 0xc09f950  jal         func_27E540
    ctx->pc = 0x27D248u;
    SET_GPR_U32(ctx, 31, 0x27D250u);
    ctx->pc = 0x27D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D248u;
    // 0x27d24c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E540u, 0x27D248u, 0x27D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D250u;
label_27d250:
    // 0x27d250: 0x8e52000c  lw          $s2, 0xC($s2)
    ctx->pc = 0x27d250u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x27d254: 0x0  nop
    ctx->pc = 0x27d254u;
    // NOP
label_27d258:
    // 0x27d258: 0x1640feaf  bnez        $s2, . + 4 + (-0x151 << 2)
    ctx->pc = 0x27D258u;
    {
        const bool branch_taken_0x27d258 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d258) {
            ctx->pc = 0x27CD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27cd18;
        }
    }
    ctx->pc = 0x27D260u;
label_27d260:
    // 0x27d260: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x27d260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27d264: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27d264u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27d268: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27d268u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27d26c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27d26cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27d270: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27d270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27d274: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27d274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d278: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d27c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d27cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d284: 0x3e00008  jr          $ra
    ctx->pc = 0x27D284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D284u;
        // 0x27d288: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D28Cu;
}
