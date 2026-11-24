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

// Function: sub_003259B0
// Address: 0x3259b0 - 0x326170
void sub_003259B0_0x3259b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003259B0_0x3259b0");
#endif

    switch (ctx->pc) {
        case 0x325a08u: goto label_325a08;
        case 0x325a78u: goto label_325a78;
        case 0x325ba8u: goto label_325ba8;
        case 0x325da4u: goto label_325da4;
        case 0x325df8u: goto label_325df8;
        case 0x325e58u: goto label_325e58;
        case 0x325f10u: goto label_325f10;
        case 0x325f40u: goto label_325f40;
        case 0x325fb0u: goto label_325fb0;
        case 0x325fd4u: goto label_325fd4;
        case 0x325ff8u: goto label_325ff8;
        case 0x3260e0u: goto label_3260e0;
        default: break;
    }

    ctx->pc = 0x3259b0u;

    // 0x3259b0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3259b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x3259b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3259b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3259b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3259b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3259bc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x3259bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x3259c0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3259c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3259c4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3259c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3259c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3259c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3259cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3259ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3259d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3259d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3259d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3259d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3259d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3259d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3259dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3259e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3259e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3259e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3259e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3259e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3259e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3259ec: 0x9024ad88  lbu         $a0, -0x5278($at)
    ctx->pc = 0x3259ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946184)));
    // 0x3259f0: 0x64f023  subu        $fp, $v1, $a0
    ctx->pc = 0x3259f0u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3259f4: 0x3401be60  ori         $at, $zero, 0xBE60
    ctx->pc = 0x3259f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48736);
    // 0x3259f8: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x3259f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259fc: 0x2a1a021  addu        $s4, $s5, $at
    ctx->pc = 0x3259fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x325a00: 0x106001ab  beqz        $v1, . + 4 + (0x1AB << 2)
    ctx->pc = 0x325A00u;
    {
        const bool branch_taken_0x325a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x325A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A00u;
        // 0x325a04: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a00) {
            ctx->pc = 0x3260B0u;
            goto label_3260b0;
        }
    }
    ctx->pc = 0x325A08u;
label_325a08:
    // 0x325a08: 0x2694ffd0  addiu       $s4, $s4, -0x30
    ctx->pc = 0x325a08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967248));
    // 0x325a0c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x325a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x325a10: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x325a10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x325a14: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x325a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x325a18: 0x106000df  beqz        $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x325A18u;
    {
        const bool branch_taken_0x325a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x325A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A18u;
        // 0x325a1c: 0x8e930004  lw          $s3, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a18) {
            ctx->pc = 0x325D98u;
            goto label_325d98;
        }
    }
    ctx->pc = 0x325A20u;
    // 0x325a20: 0x3401ae72  ori         $at, $zero, 0xAE72
    ctx->pc = 0x325a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44658);
    // 0x325a24: 0x24160030  addiu       $s6, $zero, 0x30
    ctx->pc = 0x325a24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x325a28: 0x2a11821  addu        $v1, $s5, $at
    ctx->pc = 0x325a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x325a2c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x325a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a30: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x325a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x325a34: 0x3401ae34  ori         $at, $zero, 0xAE34
    ctx->pc = 0x325a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44596);
    // 0x325a38: 0x2a11821  addu        $v1, $s5, $at
    ctx->pc = 0x325a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x325a3c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x325a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x325a40: 0x3401ae30  ori         $at, $zero, 0xAE30
    ctx->pc = 0x325a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44592);
    // 0x325a44: 0x2a11821  addu        $v1, $s5, $at
    ctx->pc = 0x325a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x325a48: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x325a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x325a4c: 0x3401ae38  ori         $at, $zero, 0xAE38
    ctx->pc = 0x325a4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44600);
    // 0x325a50: 0x2a11821  addu        $v1, $s5, $at
    ctx->pc = 0x325a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x325a54: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x325a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x325a58: 0x3401ada4  ori         $at, $zero, 0xADA4
    ctx->pc = 0x325a58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44452);
    // 0x325a5c: 0x2a11821  addu        $v1, $s5, $at
    ctx->pc = 0x325a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x325a60: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x325a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x325a64: 0x3401adf0  ori         $at, $zero, 0xADF0
    ctx->pc = 0x325a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44528);
    // 0x325a68: 0x2a11821  addu        $v1, $s5, $at
    ctx->pc = 0x325a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x325a6c: 0x3401ae10  ori         $at, $zero, 0xAE10
    ctx->pc = 0x325a6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44560);
    // 0x325a70: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x325a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x325a74: 0x2a1b821  addu        $s7, $s5, $at
    ctx->pc = 0x325a74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_325a78:
    // 0x325a78: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x325a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x325a7c: 0x120000c0  beqz        $s0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x325A7Cu;
    {
        const bool branch_taken_0x325a7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x325a7c) {
            ctx->pc = 0x325D80u;
            goto label_325d80;
        }
    }
    ctx->pc = 0x325A84u;
    // 0x325a84: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x325a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x325a88: 0x166300bd  bne         $s3, $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x325A88u;
    {
        const bool branch_taken_0x325a88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x325a88) {
            ctx->pc = 0x325D80u;
            goto label_325d80;
        }
    }
    ctx->pc = 0x325A90u;
    // 0x325a90: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x325a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x325a94: 0x164300ba  bne         $s2, $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x325A94u;
    {
        const bool branch_taken_0x325a94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x325a94) {
            ctx->pc = 0x325D80u;
            goto label_325d80;
        }
    }
    ctx->pc = 0x325A9Cu;
    // 0x325a9c: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x325a9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x325aa0: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x325aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x325aa4: 0xa2030033  sb          $v1, 0x33($s0)
    ctx->pc = 0x325aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 51), (uint8_t)GPR_U32(ctx, 3));
    // 0x325aa8: 0x92070031  lbu         $a3, 0x31($s0)
    ctx->pc = 0x325aa8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x325aac: 0x30e40040  andi        $a0, $a3, 0x40
    ctx->pc = 0x325aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x325ab0: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x325AB0u;
    {
        const bool branch_taken_0x325ab0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x325AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325AB0u;
        // 0x325ab4: 0x3c048080  lui         $a0, 0x8080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ab0) {
            ctx->pc = 0x325AE8u;
            goto label_325ae8;
        }
    }
    ctx->pc = 0x325AB8u;
    // 0x325ab8: 0x9206002c  lbu         $a2, 0x2C($s0)
    ctx->pc = 0x325ab8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x325abc: 0x34858081  ori         $a1, $a0, 0x8081
    ctx->pc = 0x325abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32897);
    // 0x325ac0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x325ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x325ac4: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x325ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x325ac8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x325ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x325acc: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x325accu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x325ad0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x325ad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x325ad4: 0xa30019  multu       $a1, $v1
    ctx->pc = 0x325ad4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x325ad8: 0x0  nop
    ctx->pc = 0x325ad8u;
    // NOP
    // 0x325adc: 0x0  nop
    ctx->pc = 0x325adcu;
    // NOP
    // 0x325ae0: 0x1810  mfhi        $v1
    ctx->pc = 0x325ae0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x325ae4: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x325ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_325ae8:
    // 0x325ae8: 0x30e40004  andi        $a0, $a3, 0x4
    ctx->pc = 0x325ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x325aec: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x325AECu;
    {
        const bool branch_taken_0x325aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x325aec) {
            ctx->pc = 0x325BB8u;
            goto label_325bb8;
        }
    }
    ctx->pc = 0x325AF4u;
    // 0x325af4: 0xc686002c  lwc1        $f6, 0x2C($s4)
    ctx->pc = 0x325af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x325af8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x325af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325afc: 0x0  nop
    ctx->pc = 0x325afcu;
    // NOP
    // 0x325b00: 0x46060032  c.eq.s      $f0, $f6
    ctx->pc = 0x325b00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325b04: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x325B04u;
    {
        const bool branch_taken_0x325b04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x325b04) {
            ctx->pc = 0x325B68u;
            goto label_325b68;
        }
    }
    ctx->pc = 0x325B0Cu;
    // 0x325b0c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x325b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x325b10: 0xc6830020  lwc1        $f3, 0x20($s4)
    ctx->pc = 0x325b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x325b14: 0xc6850024  lwc1        $f5, 0x24($s4)
    ctx->pc = 0x325b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x325b18: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x325b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325b1c: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x325b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x325b20: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x325b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x325b24: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x325b24u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x325b28: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x325b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x325b2c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x325b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x325b30: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x325b30u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x325b34: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x325b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325b38: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x325b38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x325b3c: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x325b3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x325b40: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x325b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x325b44: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x325b44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x325b48: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x325b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x325b4c: 0x46000004  c1          0x4
    ctx->pc = 0x325b4cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x325b50: 0x0  nop
    ctx->pc = 0x325b50u;
    // NOP
    // 0x325b54: 0x0  nop
    ctx->pc = 0x325b54u;
    // NOP
    // 0x325b58: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x325b58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325b5c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x325B5Cu;
    {
        const bool branch_taken_0x325b5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325b5c) {
            ctx->pc = 0x325BB0u;
            goto label_325bb0;
        }
    }
    ctx->pc = 0x325B64u;
    // 0x325b64: 0x0  nop
    ctx->pc = 0x325b64u;
    // NOP
label_325b68:
    // 0x325b68: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x325b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x325b6c: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x325b6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x325b70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x325b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b74: 0x26050036  addiu       $a1, $s0, 0x36
    ctx->pc = 0x325b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 54));
    // 0x325b78: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x325b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x325b7c: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x325b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x325b80: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x325b80u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x325b84: 0x9123000a  lbu         $v1, 0xA($t1)
    ctx->pc = 0x325b84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x325b88: 0x91220008  lbu         $v0, 0x8($t1)
    ctx->pc = 0x325b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x325b8c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x325b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x325b90: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x325b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x325b94: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x325b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x325b98: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x325b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x325b9c: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x325b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x325ba0: 0xc0c915c  jal         func_324570
    ctx->pc = 0x325BA0u;
    SET_GPR_U32(ctx, 31, 0x325BA8u);
    ctx->pc = 0x325BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325BA0u;
    // 0x325ba4: 0x624825  or          $t1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324570u, 0x325BA0u, 0x325BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325BA8u;
label_325ba8:
    // 0x325ba8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x325BA8u;
    {
        const bool branch_taken_0x325ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325BA8u;
        // 0x325bac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ba8) {
            ctx->pc = 0x325BF0u;
            goto label_325bf0;
        }
    }
    ctx->pc = 0x325BB0u;
label_325bb0:
    // 0x325bb0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x325BB0u;
    {
        const bool branch_taken_0x325bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325BB0u;
        // 0x325bb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325bb0) {
            ctx->pc = 0x325BF0u;
            goto label_325bf0;
        }
    }
    ctx->pc = 0x325BB8u;
label_325bb8:
    // 0x325bb8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x325bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x325bbc: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x325bbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x325bc0: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x325bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x325bc4: 0x3c048101  lui         $a0, 0x8101
    ctx->pc = 0x325bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33025 << 16));
    // 0x325bc8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x325bc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x325bcc: 0x34848203  ori         $a0, $a0, 0x8203
    ctx->pc = 0x325bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33283);
    // 0x325bd0: 0x830019  multu       $a0, $v1
    ctx->pc = 0x325bd0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x325bd4: 0x0  nop
    ctx->pc = 0x325bd4u;
    // NOP
    // 0x325bd8: 0x0  nop
    ctx->pc = 0x325bd8u;
    // NOP
    // 0x325bdc: 0x1810  mfhi        $v1
    ctx->pc = 0x325bdcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x325be0: 0x323c2  srl         $a0, $v1, 15
    ctx->pc = 0x325be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x325be4: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x325be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x325be8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x325be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x325bec: 0x0  nop
    ctx->pc = 0x325becu;
    // NOP
label_325bf0:
    // 0x325bf0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x325bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x325bf4: 0x92060030  lbu         $a2, 0x30($s0)
    ctx->pc = 0x325bf4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x325bf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325bfc: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x325bfcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x325c00: 0xc52814  dsllv       $a1, $a1, $a2
    ctx->pc = 0x325c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x325c04: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x325c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x325c08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x325C08u;
    {
        const bool branch_taken_0x325c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x325c08) {
            ctx->pc = 0x325C18u;
            goto label_325c18;
        }
    }
    ctx->pc = 0x325C10u;
    // 0x325c10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x325c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c14: 0x0  nop
    ctx->pc = 0x325c14u;
    // NOP
label_325c18:
    // 0x325c18: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x325c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x325c1c: 0x2352823  subu        $a1, $s1, $s5
    ctx->pc = 0x325c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x325c20: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x325c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x325c24: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x325c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x325c28: 0x3c0a007e  lui         $t2, 0x7E
    ctx->pc = 0x325c28u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)126 << 16));
    // 0x325c2c: 0x55fc2  srl         $t3, $a1, 31
    ctx->pc = 0x325c2cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x325c30: 0x8e290014  lw          $t1, 0x14($s1)
    ctx->pc = 0x325c30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x325c34: 0x254a6c40  addiu       $t2, $t2, 0x6C40
    ctx->pc = 0x325c34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27712));
    // 0x325c38: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x325c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x325c3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x325c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x325c40: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x325c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x325c44: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x325c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x325c48: 0x34666667  ori         $a2, $v1, 0x6667
    ctx->pc = 0x325c48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x325c4c: 0x1810  mfhi        $v1
    ctx->pc = 0x325c4cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x325c50: 0x70053b89  pcpyld      $a3, $zero, $a1
    ctx->pc = 0x325c50u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x325c54: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x325c54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x325c58: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x325c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x325c5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x325c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x325c60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x325c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x325c64: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x325c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x325c68: 0xac690020  sw          $t1, 0x20($v1)
    ctx->pc = 0x325c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 9));
    // 0x325c6c: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x325c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x325c70: 0x82290018  lb          $t1, 0x18($s1)
    ctx->pc = 0x325c70u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x325c74: 0xa0690024  sb          $t1, 0x24($v1)
    ctx->pc = 0x325c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 9));
    // 0x325c78: 0x82290019  lb          $t1, 0x19($s1)
    ctx->pc = 0x325c78u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x325c7c: 0xa0690025  sb          $t1, 0x25($v1)
    ctx->pc = 0x325c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 37), (uint8_t)GPR_U32(ctx, 9));
    // 0x325c80: 0x8229001a  lb          $t1, 0x1A($s1)
    ctx->pc = 0x325c80u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x325c84: 0xa0690026  sb          $t1, 0x26($v1)
    ctx->pc = 0x325c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 9));
    // 0x325c88: 0x9229001b  lbu         $t1, 0x1B($s1)
    ctx->pc = 0x325c88u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
    // 0x325c8c: 0xa0690027  sb          $t1, 0x27($v1)
    ctx->pc = 0x325c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 39), (uint8_t)GPR_U32(ctx, 9));
    // 0x325c90: 0x9229001c  lbu         $t1, 0x1C($s1)
    ctx->pc = 0x325c90u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x325c94: 0xa0690028  sb          $t1, 0x28($v1)
    ctx->pc = 0x325c94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 9));
    // 0x325c98: 0x9229001d  lbu         $t1, 0x1D($s1)
    ctx->pc = 0x325c98u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x325c9c: 0xa0690029  sb          $t1, 0x29($v1)
    ctx->pc = 0x325c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 9));
    // 0x325ca0: 0x9229001e  lbu         $t1, 0x1E($s1)
    ctx->pc = 0x325ca0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x325ca4: 0xa069002a  sb          $t1, 0x2A($v1)
    ctx->pc = 0x325ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 42), (uint8_t)GPR_U32(ctx, 9));
    // 0x325ca8: 0x9229001f  lbu         $t1, 0x1F($s1)
    ctx->pc = 0x325ca8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
    // 0x325cac: 0xa069002b  sb          $t1, 0x2B($v1)
    ctx->pc = 0x325cacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 9));
    // 0x325cb0: 0x82290020  lb          $t1, 0x20($s1)
    ctx->pc = 0x325cb0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x325cb4: 0xa069002c  sb          $t1, 0x2C($v1)
    ctx->pc = 0x325cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 9));
    // 0x325cb8: 0x82290021  lb          $t1, 0x21($s1)
    ctx->pc = 0x325cb8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x325cbc: 0xa069002d  sb          $t1, 0x2D($v1)
    ctx->pc = 0x325cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 9));
    // 0x325cc0: 0x82290022  lb          $t1, 0x22($s1)
    ctx->pc = 0x325cc0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x325cc4: 0xa069002e  sb          $t1, 0x2E($v1)
    ctx->pc = 0x325cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 9));
    // 0x325cc8: 0x92290023  lbu         $t1, 0x23($s1)
    ctx->pc = 0x325cc8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x325ccc: 0xa069002f  sb          $t1, 0x2F($v1)
    ctx->pc = 0x325cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 47), (uint8_t)GPR_U32(ctx, 9));
    // 0x325cd0: 0xdee30000  ld          $v1, 0x0($s7)
    ctx->pc = 0x325cd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x325cd4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x325cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x325cd8: 0xfee30000  sd          $v1, 0x0($s7)
    ctx->pc = 0x325cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
    // 0x325cdc: 0x86090036  lh          $t1, 0x36($s0)
    ctx->pc = 0x325cdcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x325ce0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x325ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x325ce4: 0xc90018  mult        $zero, $a2, $t1
    ctx->pc = 0x325ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x325ce8: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x325ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x325cec: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x325cecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x325cf0: 0x3010  mfhi        $a2
    ctx->pc = 0x325cf0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x325cf4: 0x128001a  div         $zero, $t1, $t0
    ctx->pc = 0x325cf4u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x325cf8: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x325cf8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x325cfc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x325cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x325d00: 0x30660007  andi        $a2, $v1, 0x7
    ctx->pc = 0x325d00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x325d04: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x325d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x325d08: 0x4010  mfhi        $t0
    ctx->pc = 0x325d08u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x325d0c: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x325d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x325d10: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x325d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x325d14: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x325d14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x325d18: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x325D18u;
    {
        const bool branch_taken_0x325d18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D18u;
        // 0x325d1c: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d18) {
            ctx->pc = 0x325D2Cu;
            goto label_325d2c;
        }
    }
    ctx->pc = 0x325D20u;
    // 0x325d20: 0x92060031  lbu         $a2, 0x31($s0)
    ctx->pc = 0x325d20u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x325d24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x325D24u;
    {
        const bool branch_taken_0x325d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D24u;
        // 0x325d28: 0x30c60080  andi        $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d24) {
            ctx->pc = 0x325D30u;
            goto label_325d30;
        }
    }
    ctx->pc = 0x325D2Cu;
label_325d2c:
    // 0x325d2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x325d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325d30:
    // 0x325d30: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x325D30u;
    {
        const bool branch_taken_0x325d30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x325d30) {
            ctx->pc = 0x325D60u;
            goto label_325d60;
        }
    }
    ctx->pc = 0x325D38u;
    // 0x325d38: 0x90a6000b  lbu         $a2, 0xB($a1)
    ctx->pc = 0x325d38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x325d3c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x325D3Cu;
    {
        const bool branch_taken_0x325d3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x325d3c) {
            ctx->pc = 0x325D50u;
            goto label_325d50;
        }
    }
    ctx->pc = 0x325D44u;
    // 0x325d44: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x325d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x325d48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x325D48u;
    {
        const bool branch_taken_0x325d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D48u;
        // 0x325d4c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d48) {
            ctx->pc = 0x325D68u;
            goto label_325d68;
        }
    }
    ctx->pc = 0x325D50u;
label_325d50:
    // 0x325d50: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x325d50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x325d54: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x325d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x325d58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x325D58u;
    {
        const bool branch_taken_0x325d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D58u;
        // 0x325d5c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d58) {
            ctx->pc = 0x325D68u;
            goto label_325d68;
        }
    }
    ctx->pc = 0x325D60u;
label_325d60:
    // 0x325d60: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x325d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x325d64: 0x0  nop
    ctx->pc = 0x325d64u;
    // NOP
label_325d68:
    // 0x325d68: 0xa0a0000c  sb          $zero, 0xC($a1)
    ctx->pc = 0x325d68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x325d6c: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x325d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x325d70: 0xa0a70004  sb          $a3, 0x4($a1)
    ctx->pc = 0x325d70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x325d74: 0x80a3000e  lb          $v1, 0xE($a1)
    ctx->pc = 0x325d74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x325d78: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x325d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x325d7c: 0xa0a3000e  sb          $v1, 0xE($a1)
    ctx->pc = 0x325d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 14), (uint8_t)GPR_U32(ctx, 3));
label_325d80:
    // 0x325d80: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x325d80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x325d84: 0x16c0ff3c  bnez        $s6, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x325D84u;
    {
        const bool branch_taken_0x325d84 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x325D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D84u;
        // 0x325d88: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d84) {
            ctx->pc = 0x325A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325a78;
        }
    }
    ctx->pc = 0x325D8Cu;
    // 0x325d8c: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x325D8Cu;
    {
        const bool branch_taken_0x325d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325d8c) {
            ctx->pc = 0x3260A0u;
            goto label_3260a0;
        }
    }
    ctx->pc = 0x325D94u;
    // 0x325d94: 0x0  nop
    ctx->pc = 0x325d94u;
    // NOP
label_325d98:
    // 0x325d98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x325d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325d9c: 0xc0c9640  jal         func_325900
    ctx->pc = 0x325D9Cu;
    SET_GPR_U32(ctx, 31, 0x325DA4u);
    ctx->pc = 0x325DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D9Cu;
    // 0x325da0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325900u, 0x325D9Cu, 0x325DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325DA4u;
label_325da4:
    // 0x325da4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x325da4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325da8: 0x6e000bd  bltz        $s7, . + 4 + (0xBD << 2)
    ctx->pc = 0x325DA8u;
    {
        const bool branch_taken_0x325da8 = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x325DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325DA8u;
        // 0x325dac: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325da8) {
            ctx->pc = 0x3260A0u;
            goto label_3260a0;
        }
    }
    ctx->pc = 0x325DB0u;
    // 0x325db0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x325db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325db4: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x325db4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x325db8: 0x2e42014  dsllv       $a0, $a0, $s7
    ctx->pc = 0x325db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 23) & 0x3F));
    // 0x325dbc: 0xdc23adf8  ld          $v1, -0x5208($at)
    ctx->pc = 0x325dbcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294946296)));
    // 0x325dc0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x325dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x325dc4: 0x146000b6  bnez        $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x325DC4u;
    {
        const bool branch_taken_0x325dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325DC4u;
        // 0x325dc8: 0x3c030083  lui         $v1, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325dc4) {
            ctx->pc = 0x3260A0u;
            goto label_3260a0;
        }
    }
    ctx->pc = 0x325DCCu;
    // 0x325dcc: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x325dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x325dd0: 0x2463d200  addiu       $v1, $v1, -0x2E00
    ctx->pc = 0x325dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955520));
    // 0x325dd4: 0x3401be64  ori         $at, $zero, 0xBE64
    ctx->pc = 0x325dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48740);
    // 0x325dd8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x325dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x325ddc: 0x2a11821  addu        $v1, $s5, $at
    ctx->pc = 0x325ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x325de0: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x325de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x325de4: 0x3401be60  ori         $at, $zero, 0xBE60
    ctx->pc = 0x325de4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48736);
    // 0x325de8: 0x8c832b50  lw          $v1, 0x2B50($a0)
    ctx->pc = 0x325de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11088)));
    // 0x325dec: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x325decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x325df0: 0x2a11821  addu        $v1, $s5, $at
    ctx->pc = 0x325df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x325df4: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x325df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_325df8:
    // 0x325df8: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x325df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x325dfc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x325dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x325e00: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x325e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x325e04: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x325e04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x325e08: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x325e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x325e0c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x325E0Cu;
    {
        const bool branch_taken_0x325e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x325e0c) {
            ctx->pc = 0x325EC0u;
            goto label_325ec0;
        }
    }
    ctx->pc = 0x325E14u;
    // 0x325e14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x325e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x325e18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x325e18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e1c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x325e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x325e20: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x325e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x325e24: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x325e24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x325e28: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x325e28u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x325e2c: 0x48252001  qmfc2.i     $a1, $vf4
    ctx->pc = 0x325e2cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x325e30: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x325e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325e34: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x325e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x325e38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x325e38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e3c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x325e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e40: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x325e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x325e44: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x325e44u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x325e48: 0x0  nop
    ctx->pc = 0x325e48u;
    // NOP
    // 0x325e4c: 0x0  nop
    ctx->pc = 0x325e4cu;
    // NOP
    // 0x325e50: 0x4010  mfhi        $t0
    ctx->pc = 0x325e50u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x325e54: 0x0  nop
    ctx->pc = 0x325e54u;
    // NOP
label_325e58:
    // 0x325e58: 0x80c50003  lb          $a1, 0x3($a2)
    ctx->pc = 0x325e58u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x325e5c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x325e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x325e60: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x325e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x325e64: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x325e64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x325e68: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x325e68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x325e6c: 0x109082b  sltu        $at, $t0, $t1
    ctx->pc = 0x325e6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x325e70: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x325E70u;
    {
        const bool branch_taken_0x325e70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E70u;
        // 0x325e74: 0x72840  sll         $a1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e70) {
            ctx->pc = 0x325EA8u;
            goto label_325ea8;
        }
    }
    ctx->pc = 0x325E78u;
    // 0x325e78: 0x12223c  dsll32      $a0, $s2, 8
    ctx->pc = 0x325e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 8));
    // 0x325e7c: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x325e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x325e80: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x325e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x325e84: 0x80a50002  lb          $a1, 0x2($a1)
    ctx->pc = 0x325e84u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x325e88: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x325e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x325e8c: 0x859025  or          $s2, $a0, $a1
    ctx->pc = 0x325e8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x325e90: 0x122602  srl         $a0, $s2, 24
    ctx->pc = 0x325e90u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x325e94: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x325e94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x325e98: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x325e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x325e9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x325E9Cu;
    {
        const bool branch_taken_0x325e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E9Cu;
        // 0x325ea0: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e9c) {
            ctx->pc = 0x325EB8u;
            goto label_325eb8;
        }
    }
    ctx->pc = 0x325EA4u;
    // 0x325ea4: 0x0  nop
    ctx->pc = 0x325ea4u;
    // NOP
label_325ea8:
    // 0x325ea8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x325ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x325eac: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x325eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x325eb0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x325EB0u;
    {
        const bool branch_taken_0x325eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325EB0u;
        // 0x325eb4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325eb0) {
            ctx->pc = 0x325E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325e58;
        }
    }
    ctx->pc = 0x325EB8u;
label_325eb8:
    // 0x325eb8: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x325EB8u;
    {
        const bool branch_taken_0x325eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x325eb8) {
            ctx->pc = 0x3260A0u;
            goto label_3260a0;
        }
    }
    ctx->pc = 0x325EC0u;
label_325ec0:
    // 0x325ec0: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x325ec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x325ec4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x325ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x325ec8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x325EC8u;
    {
        const bool branch_taken_0x325ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x325ec8) {
            ctx->pc = 0x325EE0u;
            goto label_325ee0;
        }
    }
    ctx->pc = 0x325ED0u;
    // 0x325ed0: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x325ed0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x325ed4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x325ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x325ed8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x325ED8u;
    {
        const bool branch_taken_0x325ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325ED8u;
        // 0x325edc: 0x2167f  dsra32      $v0, $v0, 25 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ed8) {
            ctx->pc = 0x325EF0u;
            goto label_325ef0;
        }
    }
    ctx->pc = 0x325EE0u;
label_325ee0:
    // 0x325ee0: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x325ee0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x325ee4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x325ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x325ee8: 0x2167f  dsra32      $v0, $v0, 25
    ctx->pc = 0x325ee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 25));
    // 0x325eec: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x325eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_325ef0:
    // 0x325ef0: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x325ef0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325ef4: 0x3401ae60  ori         $at, $zero, 0xAE60
    ctx->pc = 0x325ef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44640);
    // 0x325ef8: 0x161140  sll         $v0, $s6, 5
    ctx->pc = 0x325ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
    // 0x325efc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x325efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f00: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x325f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x325f04: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x325f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x325f08: 0xc0c9070  jal         func_3241C0
    ctx->pc = 0x325F08u;
    SET_GPR_U32(ctx, 31, 0x325F10u);
    ctx->pc = 0x325F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F08u;
    // 0x325f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3241C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3241C0u, 0x325F08u, 0x325F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F10u;
label_325f10:
    // 0x325f10: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x325F10u;
    {
        const bool branch_taken_0x325f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325f10) {
            ctx->pc = 0x326080u;
            goto label_326080;
        }
    }
    ctx->pc = 0x325F18u;
    // 0x325f18: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x325f18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x325f1c: 0x28a10080  slti        $at, $a1, 0x80
    ctx->pc = 0x325f1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x325f20: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x325F20u;
    {
        const bool branch_taken_0x325f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F20u;
        // 0x325f24: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f20) {
            ctx->pc = 0x325FC8u;
            goto label_325fc8;
        }
    }
    ctx->pc = 0x325F28u;
    // 0x325f28: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x325f28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x325f2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x325f2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f30: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x325f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x325f34: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x325F34u;
    {
        const bool branch_taken_0x325f34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F34u;
        // 0x325f38: 0x3089007f  andi        $t1, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f34) {
            ctx->pc = 0x325F98u;
            goto label_325f98;
        }
    }
    ctx->pc = 0x325F3Cu;
    // 0x325f3c: 0x0  nop
    ctx->pc = 0x325f3cu;
    // NOP
label_325f40:
    // 0x325f40: 0x8ce4001c  lw          $a0, 0x1C($a3)
    ctx->pc = 0x325f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x325f44: 0x16640010  bne         $s3, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x325F44u;
    {
        const bool branch_taken_0x325f44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        if (branch_taken_0x325f44) {
            ctx->pc = 0x325F88u;
            goto label_325f88;
        }
    }
    ctx->pc = 0x325F4Cu;
    // 0x325f4c: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x325f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x325f50: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x325f50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x325f54: 0x14a4000c  bne         $a1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x325F54u;
    {
        const bool branch_taken_0x325f54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x325f54) {
            ctx->pc = 0x325F88u;
            goto label_325f88;
        }
    }
    ctx->pc = 0x325F5Cu;
    // 0x325f5c: 0x90c40003  lbu         $a0, 0x3($a2)
    ctx->pc = 0x325f5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x325f60: 0x312500ff  andi        $a1, $t1, 0xFF
    ctx->pc = 0x325f60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x325f64: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x325f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x325f68: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x325f68u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x325f6c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x325F6Cu;
    {
        const bool branch_taken_0x325f6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x325f6c) {
            ctx->pc = 0x325F80u;
            goto label_325f80;
        }
    }
    ctx->pc = 0x325F74u;
    // 0x325f74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x325F74u;
    {
        const bool branch_taken_0x325f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F74u;
        // 0x325f78: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f74) {
            ctx->pc = 0x325F98u;
            goto label_325f98;
        }
    }
    ctx->pc = 0x325F7Cu;
    // 0x325f7c: 0x0  nop
    ctx->pc = 0x325f7cu;
    // NOP
label_325f80:
    // 0x325f80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x325F80u;
    {
        const bool branch_taken_0x325f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F80u;
        // 0x325f84: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f80) {
            ctx->pc = 0x325F98u;
            goto label_325f98;
        }
    }
    ctx->pc = 0x325F88u;
label_325f88:
    // 0x325f88: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x325f88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x325f8c: 0x14e0ffec  bnez        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x325F8Cu;
    {
        const bool branch_taken_0x325f8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x325f8c) {
            ctx->pc = 0x325F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325f40;
        }
    }
    ctx->pc = 0x325F94u;
    // 0x325f94: 0x0  nop
    ctx->pc = 0x325f94u;
    // NOP
label_325f98:
    // 0x325f98: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x325F98u;
    {
        const bool branch_taken_0x325f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325f98) {
            ctx->pc = 0x326030u;
            goto label_326030;
        }
    }
    ctx->pc = 0x325FA0u;
    // 0x325fa0: 0x15000037  bnez        $t0, . + 4 + (0x37 << 2)
    ctx->pc = 0x325FA0u;
    {
        const bool branch_taken_0x325fa0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x325FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FA0u;
        // 0x325fa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325fa0) {
            ctx->pc = 0x326080u;
            goto label_326080;
        }
    }
    ctx->pc = 0x325FA8u;
    // 0x325fa8: 0xc0c9040  jal         func_324100
    ctx->pc = 0x325FA8u;
    SET_GPR_U32(ctx, 31, 0x325FB0u);
    ctx->pc = 0x325FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325FA8u;
    // 0x325fac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324100u, 0x325FA8u, 0x325FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325FB0u;
label_325fb0:
    // 0x325fb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x325fb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325fb4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x325FB4u;
    {
        const bool branch_taken_0x325fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325fb4) {
            ctx->pc = 0x326030u;
            goto label_326030;
        }
    }
    ctx->pc = 0x325FBCu;
    // 0x325fbc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x325FBCu;
    {
        const bool branch_taken_0x325fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325fbc) {
            ctx->pc = 0x326080u;
            goto label_326080;
        }
    }
    ctx->pc = 0x325FC4u;
    // 0x325fc4: 0x0  nop
    ctx->pc = 0x325fc4u;
    // NOP
label_325fc8:
    // 0x325fc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x325fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325fcc: 0xc0c9040  jal         func_324100
    ctx->pc = 0x325FCCu;
    SET_GPR_U32(ctx, 31, 0x325FD4u);
    ctx->pc = 0x325FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325FCCu;
    // 0x325fd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324100u, 0x325FCCu, 0x325FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325FD4u;
label_325fd4:
    // 0x325fd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x325fd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325fd8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x325FD8u;
    {
        const bool branch_taken_0x325fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325fd8) {
            ctx->pc = 0x326030u;
            goto label_326030;
        }
    }
    ctx->pc = 0x325FE0u;
    // 0x325fe0: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x325fe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x325fe4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x325fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x325fe8: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x325FE8u;
    {
        const bool branch_taken_0x325fe8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x325FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FE8u;
        // 0x325fec: 0x3084007f  andi        $a0, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325fe8) {
            ctx->pc = 0x326028u;
            goto label_326028;
        }
    }
    ctx->pc = 0x325FF0u;
    // 0x325ff0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x325ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x325ff4: 0x0  nop
    ctx->pc = 0x325ff4u;
    // NOP
label_325ff8:
    // 0x325ff8: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x325ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x325ffc: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x325ffcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x326000: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x326000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x326004: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x326004u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x326008: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x326008u;
    {
        const bool branch_taken_0x326008 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x326008) {
            ctx->pc = 0x326018u;
            goto label_326018;
        }
    }
    ctx->pc = 0x326010u;
    // 0x326010: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x326010u;
    {
        const bool branch_taken_0x326010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326010u;
        // 0x326014: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326010) {
            ctx->pc = 0x326028u;
            goto label_326028;
        }
    }
    ctx->pc = 0x326018u;
label_326018:
    // 0x326018: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x326018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x32601c: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x32601Cu;
    {
        const bool branch_taken_0x32601c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x32601c) {
            ctx->pc = 0x325FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325ff8;
        }
    }
    ctx->pc = 0x326024u;
    // 0x326024: 0x0  nop
    ctx->pc = 0x326024u;
    // NOP
label_326028:
    // 0x326028: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x326028u;
    {
        const bool branch_taken_0x326028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326028) {
            ctx->pc = 0x326080u;
            goto label_326080;
        }
    }
    ctx->pc = 0x326030u;
label_326030:
    // 0x326030: 0xac720014  sw          $s2, 0x14($v1)
    ctx->pc = 0x326030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 18));
    // 0x326034: 0xac73001c  sw          $s3, 0x1C($v1)
    ctx->pc = 0x326034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 19));
    // 0x326038: 0xa076002c  sb          $s6, 0x2C($v1)
    ctx->pc = 0x326038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 22));
    // 0x32603c: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x32603cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x326040: 0xac740010  sw          $s4, 0x10($v1)
    ctx->pc = 0x326040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 20));
    // 0x326044: 0xa0770030  sb          $s7, 0x30($v1)
    ctx->pc = 0x326044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 23));
    // 0x326048: 0xa060002d  sb          $zero, 0x2D($v1)
    ctx->pc = 0x326048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x32604c: 0x9064002f  lbu         $a0, 0x2F($v1)
    ctx->pc = 0x32604cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 47)));
    // 0x326050: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x326050u;
    {
        const bool branch_taken_0x326050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x326054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326050u;
        // 0x326054: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326050) {
            ctx->pc = 0x326080u;
            goto label_326080;
        }
    }
    ctx->pc = 0x326058u;
    // 0x326058: 0xa064002f  sb          $a0, 0x2F($v1)
    ctx->pc = 0x326058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 47), (uint8_t)GPR_U32(ctx, 4));
    // 0x32605c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x32605cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x326060: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x326060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x326064: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x326064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x326068: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x326068u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32606c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x32606cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x326070: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x326070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x326074: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x326074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x326078: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x326078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x32607c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x32607cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_326080:
    // 0x326080: 0x9226000e  lbu         $a2, 0xE($s1)
    ctx->pc = 0x326080u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x326084: 0x122a3c  dsll32      $a1, $s2, 8
    ctx->pc = 0x326084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 8));
    // 0x326088: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x326088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32608c: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x32608cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x326090: 0x62600  sll         $a0, $a2, 24
    ctx->pc = 0x326090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x326094: 0x14c3ff58  bne         $a2, $v1, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x326094u;
    {
        const bool branch_taken_0x326094 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x326098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326094u;
        // 0x326098: 0xa49025  or          $s2, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326094) {
            ctx->pc = 0x325DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325df8;
        }
    }
    ctx->pc = 0x32609Cu;
    // 0x32609c: 0x0  nop
    ctx->pc = 0x32609cu;
    // NOP
label_3260a0:
    // 0x3260a0: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x3260a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260a4: 0x1460fe58  bnez        $v1, . + 4 + (-0x1A8 << 2)
    ctx->pc = 0x3260A4u;
    {
        const bool branch_taken_0x3260a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3260A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3260A4u;
        // 0x3260a8: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3260a4) {
            ctx->pc = 0x325A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325a08;
        }
    }
    ctx->pc = 0x3260ACu;
    // 0x3260ac: 0x0  nop
    ctx->pc = 0x3260acu;
    // NOP
label_3260b0:
    // 0x3260b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3260b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3260b4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3260b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3260b8: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x3260b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x3260bc: 0xa023ad88  sb          $v1, -0x5278($at)
    ctx->pc = 0x3260bcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946184), (uint8_t)GPR_U32(ctx, 3));
    // 0x3260c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3260c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3260c4: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x3260c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x3260c8: 0x8c27be60  lw          $a3, -0x41A0($at)
    ctx->pc = 0x3260c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950496)));
    // 0x3260cc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3260ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260d0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3260D0u;
    {
        const bool branch_taken_0x3260d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3260D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3260D0u;
        // 0x3260d4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3260d0) {
            ctx->pc = 0x326140u;
            goto label_326140;
        }
    }
    ctx->pc = 0x3260D8u;
    // 0x3260d8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3260d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3260dc: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x3260dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_3260e0:
    // 0x3260e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3260e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3260e4: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x3260e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x3260e8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3260e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260ec: 0x8c26be64  lw          $a2, -0x419C($at)
    ctx->pc = 0x3260ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950500)));
    // 0x3260f0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3260f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3260f4: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3260f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3260f8: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x3260f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3260fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3260fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326100: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x326100u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x326104: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x326104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x326108: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x326108u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32610c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x32610cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x326110: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x326110u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x326114: 0x8c24bf64  lw          $a0, -0x409C($at)
    ctx->pc = 0x326114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950756)));
    // 0x326118: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x326118u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x32611c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32611cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326120: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x326120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x326124: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x326124u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x326128: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x326128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x32612c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x32612cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x326130: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x326130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x326134: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x326134u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x326138: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x326138u;
    {
        const bool branch_taken_0x326138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326138u;
        // 0x32613c: 0xac26bf64  sw          $a2, -0x409C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294950756), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326138) {
            ctx->pc = 0x3260E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3260e0;
        }
    }
    ctx->pc = 0x326140u;
label_326140:
    // 0x326140: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x326140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x326144: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x326144u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x326148: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x326148u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32614c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32614cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x326150: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x326150u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x326154: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x326154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x326158: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x326158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32615c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32615cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x326164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326168: 0x3e00008  jr          $ra
    ctx->pc = 0x326168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326168u;
        // 0x32616c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326170u;
}
