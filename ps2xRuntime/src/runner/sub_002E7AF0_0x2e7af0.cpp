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

// Function: sub_002E7AF0
// Address: 0x2e7af0 - 0x2e7de4
void sub_002E7AF0_0x2e7af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7AF0_0x2e7af0");
#endif

    switch (ctx->pc) {
        case 0x2e7d94u: goto label_2e7d94;
        default: break;
    }

    ctx->pc = 0x2e7af0u;

    // 0x2e7af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e7af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e7af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e7af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e7afc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e7afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b00: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2e7b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e7b04: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x2e7b04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e7b08: 0x102000b1  beqz        $at, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2E7B08u;
    {
        const bool branch_taken_0x2e7b08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B08u;
        // 0x2e7b0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b08) {
            ctx->pc = 0x2E7DD0u;
            goto label_2e7dd0;
        }
    }
    ctx->pc = 0x2E7B10u;
    // 0x2e7b10: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7B10u;
    {
        const bool branch_taken_0x2e7b10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7b10) {
            ctx->pc = 0x2E7B20u;
            goto label_2e7b20;
        }
    }
    ctx->pc = 0x2E7B18u;
    // 0x2e7b18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7B18u;
    {
        const bool branch_taken_0x2e7b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B18u;
        // 0x2e7b1c: 0x8f838064  lw          $v1, -0x7F9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b18) {
            ctx->pc = 0x2E7B24u;
            goto label_2e7b24;
        }
    }
    ctx->pc = 0x2E7B20u;
label_2e7b20:
    // 0x2e7b20: 0x8f838060  lw          $v1, -0x7FA0($gp)
    ctx->pc = 0x2e7b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
label_2e7b24:
    // 0x2e7b24: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x2E7B24u;
    {
        const bool branch_taken_0x2e7b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7b24) {
            ctx->pc = 0x2E7DD0u;
            goto label_2e7dd0;
        }
    }
    ctx->pc = 0x2E7B2Cu;
    // 0x2e7b2c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2e7b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e7b30: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2e7b30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7b34: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x2e7b34u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e7b38: 0x4e6804  sllv        $t5, $t6, $v0
    ctx->pc = 0x2e7b38u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e7b3c: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x2e7b3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2e7b40: 0x240aff80  addiu       $t2, $zero, -0x80
    ctx->pc = 0x2e7b40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x2e7b44: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e7b48: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x2e7b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x2e7b4c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2e7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2e7b50: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x2e7b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e7b54: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e7b58: 0x240800b0  addiu       $t0, $zero, 0xB0
    ctx->pc = 0x2e7b58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2e7b5c: 0x825821  addu        $t3, $a0, $v0
    ctx->pc = 0x2e7b5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e7b60: 0x240700c4  addiu       $a3, $zero, 0xC4
    ctx->pc = 0x2e7b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x2e7b64: 0x18d1025  or          $v0, $t4, $t5
    ctx->pc = 0x2e7b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x2e7b68: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2e7b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2e7b6c: 0xa16e0010  sb          $t6, 0x10($t3)
    ctx->pc = 0x2e7b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 16), (uint8_t)GPR_U32(ctx, 14));
    // 0x2e7b70: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2e7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e7b74: 0xa1600012  sb          $zero, 0x12($t3)
    ctx->pc = 0x2e7b74u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7b78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e7b7c: 0xa1600013  sb          $zero, 0x13($t3)
    ctx->pc = 0x2e7b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7b80: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e7b84: 0xa1660014  sb          $a2, 0x14($t3)
    ctx->pc = 0x2e7b84u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 20), (uint8_t)GPR_U32(ctx, 6));
    // 0x2e7b88: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x2e7b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e7b8c: 0xa16a0016  sb          $t2, 0x16($t3)
    ctx->pc = 0x2e7b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 22), (uint8_t)GPR_U32(ctx, 10));
    // 0x2e7b90: 0xa1600017  sb          $zero, 0x17($t3)
    ctx->pc = 0x2e7b90u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7b94: 0xa5600018  sh          $zero, 0x18($t3)
    ctx->pc = 0x2e7b94u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e7b98: 0xa560001a  sh          $zero, 0x1A($t3)
    ctx->pc = 0x2e7b98u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e7b9c: 0xa560001c  sh          $zero, 0x1C($t3)
    ctx->pc = 0x2e7b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e7ba0: 0xa560001e  sh          $zero, 0x1E($t3)
    ctx->pc = 0x2e7ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e7ba4: 0xad630020  sw          $v1, 0x20($t3)
    ctx->pc = 0x2e7ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 3));
    // 0x2e7ba8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e7ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e7bac: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2e7bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e7bb0: 0xa1620015  sb          $v0, 0x15($t3)
    ctx->pc = 0x2e7bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 21), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e7bb4: 0x81620015  lb          $v0, 0x15($t3)
    ctx->pc = 0x2e7bb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 21)));
    // 0x2e7bb8: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x2e7bb8u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e7bbc: 0x0  nop
    ctx->pc = 0x2e7bbcu;
    // NOP
    // 0x2e7bc0: 0x0  nop
    ctx->pc = 0x2e7bc0u;
    // NOP
    // 0x2e7bc4: 0x1010  mfhi        $v0
    ctx->pc = 0x2e7bc4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e7bc8: 0xa1620015  sb          $v0, 0x15($t3)
    ctx->pc = 0x2e7bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 21), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e7bcc: 0xad680030  sw          $t0, 0x30($t3)
    ctx->pc = 0x2e7bccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 8));
    // 0x2e7bd0: 0xad670034  sw          $a3, 0x34($t3)
    ctx->pc = 0x2e7bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 52), GPR_U32(ctx, 7));
    // 0x2e7bd4: 0xad600038  sw          $zero, 0x38($t3)
    ctx->pc = 0x2e7bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 56), GPR_U32(ctx, 0));
    // 0x2e7bd8: 0x90a20010  lbu         $v0, 0x10($a1)
    ctx->pc = 0x2e7bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2e7bdc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7BDCu;
    {
        const bool branch_taken_0x2e7bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BDCu;
        // 0x2e7be0: 0x25700010  addiu       $s0, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bdc) {
            ctx->pc = 0x2E7C00u;
            goto label_2e7c00;
        }
    }
    ctx->pc = 0x2E7BE4u;
    // 0x2e7be4: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x2e7be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2e7be8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2e7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2e7bec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7BECu;
    {
        const bool branch_taken_0x2e7bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7bec) {
            ctx->pc = 0x2E7C00u;
            goto label_2e7c00;
        }
    }
    ctx->pc = 0x2E7BF4u;
    // 0x2e7bf4: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x2e7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2e7bf8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2e7bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2e7bfc: 0x0  nop
    ctx->pc = 0x2e7bfcu;
    // NOP
label_2e7c00:
    // 0x2e7c00: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2e7c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2e7c04: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2e7c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x2e7c08: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2e7c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2e7c0c: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x2e7c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2e7c10: 0x3c074400  lui         $a3, 0x4400
    ctx->pc = 0x2e7c10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17408 << 16));
    // 0x2e7c14: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x2e7c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x2e7c18: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2e7c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e7c1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e7c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7c20: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x2e7c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
    // 0x2e7c24: 0x44872800  mtc1        $a3, $f5
    ctx->pc = 0x2e7c24u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2e7c28: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x2e7c28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2e7c2c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e7c30: 0xae080044  sw          $t0, 0x44($s0)
    ctx->pc = 0x2e7c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 8));
    // 0x2e7c34: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2e7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2e7c38: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x2e7c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
    // 0x2e7c3c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2e7c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7c40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e7c40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e7c44: 0xe6010064  swc1        $f1, 0x64($s0)
    ctx->pc = 0x2e7c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e7c48: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2e7c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x2e7c4c: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x2e7c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2e7c50: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x2e7c50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e7c54: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x2e7c54u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2e7c58: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2e7c58u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7c5c: 0x0  nop
    ctx->pc = 0x2e7c5cu;
    // NOP
    // 0x2e7c60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e7c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e7c64: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2e7c64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e7c68: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x2e7c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x2e7c6c: 0xa6060008  sh          $a2, 0x8($s0)
    ctx->pc = 0x2e7c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x2e7c70: 0xae050090  sw          $a1, 0x90($s0)
    ctx->pc = 0x2e7c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 5));
    // 0x2e7c74: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E7C74u;
    {
        const bool branch_taken_0x2e7c74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C74u;
        // 0x2e7c78: 0xae030094  sw          $v1, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c74) {
            ctx->pc = 0x2E7CE0u;
            goto label_2e7ce0;
        }
    }
    ctx->pc = 0x2E7C7Cu;
    // 0x2e7c7c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2e7c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2e7c80: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2e7c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2e7c84: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2e7c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e7c88: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e7c8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7c90: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2e7c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2e7c94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e7c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e7c98: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x2e7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x2e7c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7ca0: 0x24620024  addiu       $v0, $v1, 0x24
    ctx->pc = 0x2e7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x2e7ca4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2e7ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2e7ca8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2e7ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2e7cac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2e7cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e7cb0: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2e7cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2e7cb4: 0xc6030090  lwc1        $f3, 0x90($s0)
    ctx->pc = 0x2e7cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e7cb8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2e7cb8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2e7cbc: 0x460328c1  sub.s       $f3, $f5, $f3
    ctx->pc = 0x2e7cbcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x2e7cc0: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x2e7cc0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x2e7cc4: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x2e7cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e7cc8: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x2e7cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7ccc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2e7cccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2e7cd0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e7cd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e7cd4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E7CD4u;
    {
        const bool branch_taken_0x2e7cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CD4u;
        // 0x2e7cd8: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cd4) {
            ctx->pc = 0x2E7D38u;
            goto label_2e7d38;
        }
    }
    ctx->pc = 0x2E7CDCu;
    // 0x2e7cdc: 0x0  nop
    ctx->pc = 0x2e7cdcu;
    // NOP
label_2e7ce0:
    // 0x2e7ce0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e7ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e7ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7ce8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2e7ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2e7cec: 0x3c0342f8  lui         $v1, 0x42F8
    ctx->pc = 0x2e7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17144 << 16));
    // 0x2e7cf0: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x2e7cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x2e7cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7cf8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2e7cf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e7cfc: 0x24a20012  addiu       $v0, $a1, 0x12
    ctx->pc = 0x2e7cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 18));
    // 0x2e7d00: 0x3c034260  lui         $v1, 0x4260
    ctx->pc = 0x2e7d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16992 << 16));
    // 0x2e7d04: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2e7d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2e7d08: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2e7d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e7d0c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2e7d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2e7d10: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2e7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2e7d14: 0xc6030090  lwc1        $f3, 0x90($s0)
    ctx->pc = 0x2e7d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e7d18: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2e7d18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2e7d1c: 0x460328c1  sub.s       $f3, $f5, $f3
    ctx->pc = 0x2e7d1cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x2e7d20: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x2e7d20u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x2e7d24: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x2e7d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e7d28: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x2e7d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7d2c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2e7d2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2e7d30: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e7d30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e7d34: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2e7d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_2e7d38:
    // 0x2e7d38: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2e7d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x2e7d3c: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x2e7d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7d40: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e7d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7d48: 0x0  nop
    ctx->pc = 0x2e7d48u;
    // NOP
    // 0x2e7d4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7d4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e7d50: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e7d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e7d54: 0x0  nop
    ctx->pc = 0x2e7d54u;
    // NOP
    // 0x2e7d58: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2e7d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x2e7d5c: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x2e7d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7d60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7d60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e7d64: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e7d64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e7d68: 0x0  nop
    ctx->pc = 0x2e7d68u;
    // NOP
    // 0x2e7d6c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2e7d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2e7d70: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2e7d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2e7d74: 0xc6020090  lwc1        $f2, 0x90($s0)
    ctx->pc = 0x2e7d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7d78: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2e7d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7d7c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2e7d7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2e7d80: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2e7d80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e7d84: 0x0  nop
    ctx->pc = 0x2e7d84u;
    // NOP
    // 0x2e7d88: 0x0  nop
    ctx->pc = 0x2e7d88u;
    // NOP
    // 0x2e7d8c: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x2E7D8Cu;
    SET_GPR_U32(ctx, 31, 0x2E7D94u);
    ctx->pc = 0x2E7D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7D8Cu;
    // 0x2e7d90: 0xe6000098  swc1        $f0, 0x98($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFA0u, 0x2E7D8Cu, 0x2E7D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D94u;
label_2e7d94:
    // 0x2e7d94: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2e7d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e7d98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e7d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7d9c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E7D9Cu;
    {
        const bool branch_taken_0x2e7d9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e7d9c) {
            ctx->pc = 0x2E7DD0u;
            goto label_2e7dd0;
        }
    }
    ctx->pc = 0x2E7DA4u;
    // 0x2e7da4: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E7DA4u;
    {
        const bool branch_taken_0x2e7da4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DA4u;
        // 0x2e7da8: 0x2403ff60  addiu       $v1, $zero, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7da4) {
            ctx->pc = 0x2E7DD0u;
            goto label_2e7dd0;
        }
    }
    ctx->pc = 0x2E7DACu;
    // 0x2e7dac: 0x3c04c320  lui         $a0, 0xC320
    ctx->pc = 0x2e7dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49952 << 16));
    // 0x2e7db0: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2e7db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x2e7db4: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x2e7db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x2e7db8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2e7db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2e7dbc: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x2e7dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7dc0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e7dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7dc4: 0x0  nop
    ctx->pc = 0x2e7dc4u;
    // NOP
    // 0x2e7dc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7dcc: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x2e7dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_2e7dd0:
    // 0x2e7dd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e7dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DDCu;
        // 0x2e7de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7DE4u;
}
