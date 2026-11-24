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

// Function: sub_003DDBE0
// Address: 0x3ddbe0 - 0x3dde2c
void sub_003DDBE0_0x3ddbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDBE0_0x3ddbe0");
#endif

    switch (ctx->pc) {
        case 0x3ddc38u: goto label_3ddc38;
        case 0x3ddcfcu: goto label_3ddcfc;
        case 0x3ddd58u: goto label_3ddd58;
        case 0x3ddd6cu: goto label_3ddd6c;
        case 0x3ddd94u: goto label_3ddd94;
        case 0x3ddde4u: goto label_3ddde4;
        default: break;
    }

    ctx->pc = 0x3ddbe0u;

    // 0x3ddbe0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3ddbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3ddbe4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ddbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ddbe8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3ddbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3ddbec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3ddbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3ddbf0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3ddbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3ddbf4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ddbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3ddbf8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3ddbf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddbfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ddbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3ddc00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ddc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ddc04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ddc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ddc08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ddc08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddc0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ddc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ddc10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ddc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ddc14: 0x9085001d  lbu         $a1, 0x1D($a0)
    ctx->pc = 0x3ddc14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x3ddc18: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x3ddc18u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ddc1c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3ddc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3ddc20: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3ddc20u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ddc24: 0x0  nop
    ctx->pc = 0x3ddc24u;
    // NOP
    // 0x3ddc28: 0x0  nop
    ctx->pc = 0x3ddc28u;
    // NOP
    // 0x3ddc2c: 0x1810  mfhi        $v1
    ctx->pc = 0x3ddc2cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3ddc30: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3DDC30u;
    {
        const bool branch_taken_0x3ddc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC30u;
        // 0x3ddc34: 0x307500ff  andi        $s5, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddc30) {
            ctx->pc = 0x3DDDF0u;
            goto label_3dddf0;
        }
    }
    ctx->pc = 0x3DDC38u;
label_3ddc38:
    // 0x3ddc38: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x3ddc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x3ddc3c: 0x92c30018  lbu         $v1, 0x18($s6)
    ctx->pc = 0x3ddc3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x3ddc40: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x3ddc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ddc44: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x3ddc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3ddc48: 0x739021  addu        $s2, $v1, $s3
    ctx->pc = 0x3ddc48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3ddc4c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x3ddc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3ddc50: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x3ddc50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x3ddc54: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x3ddc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3ddc58: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3ddc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3ddc5c: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x3ddc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x3ddc60: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x3ddc60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ddc64: 0x8ef000c0  lw          $s0, 0xC0($s7)
    ctx->pc = 0x3ddc64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 192)));
    // 0x3ddc68: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x3ddc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ddc6c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3ddc6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ddc70: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x3DDC70u;
    {
        const bool branch_taken_0x3ddc70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC70u;
        // 0x3ddc74: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddc70) {
            ctx->pc = 0x3DDCC0u;
            goto label_3ddcc0;
        }
    }
    ctx->pc = 0x3DDC78u;
    // 0x3ddc78: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x3ddc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ddc7c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x3ddc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ddc80: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3ddc80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ddc84: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x3DDC84u;
    {
        const bool branch_taken_0x3ddc84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ddc84) {
            ctx->pc = 0x3DDCC0u;
            goto label_3ddcc0;
        }
    }
    ctx->pc = 0x3DDC8Cu;
    // 0x3ddc8c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x3ddc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ddc90: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3ddc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ddc94: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3ddc94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ddc98: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x3DDC98u;
    {
        const bool branch_taken_0x3ddc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ddc98) {
            ctx->pc = 0x3DDCC0u;
            goto label_3ddcc0;
        }
    }
    ctx->pc = 0x3DDCA0u;
    // 0x3ddca0: 0x92c2001c  lbu         $v0, 0x1C($s6)
    ctx->pc = 0x3ddca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x3ddca4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ddca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ddca8: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x3ddca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ddcac: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x3ddcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3ddcb0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3ddcb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ddcb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3DDCB4u;
    {
        const bool branch_taken_0x3ddcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCB4u;
        // 0x3ddcb8: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddcb4) {
            ctx->pc = 0x3DDCE8u;
            goto label_3ddce8;
        }
    }
    ctx->pc = 0x3DDCBCu;
    // 0x3ddcbc: 0x0  nop
    ctx->pc = 0x3ddcbcu;
    // NOP
label_3ddcc0:
    // 0x3ddcc0: 0x92c2001c  lbu         $v0, 0x1C($s6)
    ctx->pc = 0x3ddcc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x3ddcc4: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x3ddcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3ddcc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ddcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ddccc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ddcccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ddcd0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3ddcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3ddcd4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3ddcd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ddcd8: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x3ddcd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3ddcdc: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3ddcdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3ddce0: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x3ddce0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3ddce4: 0x0  nop
    ctx->pc = 0x3ddce4u;
    // NOP
label_3ddce8:
    // 0x3ddce8: 0x92c2001c  lbu         $v0, 0x1C($s6)
    ctx->pc = 0x3ddce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x3ddcec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ddcecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ddcf0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x3ddcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3ddcf4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3DDCF4u;
    SET_GPR_U32(ctx, 31, 0x3DDCFCu);
    ctx->pc = 0x3DDCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDCF4u;
    // 0x3ddcf8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3DDCF4u, 0x3DDCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDCFCu;
label_3ddcfc:
    // 0x3ddcfc: 0x92c5001d  lbu         $a1, 0x1D($s6)
    ctx->pc = 0x3ddcfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 29)));
    // 0x3ddd00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ddd00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddd04: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x3ddd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x3ddd08: 0x92c3001d  lbu         $v1, 0x1D($s6)
    ctx->pc = 0x3ddd08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 29)));
    // 0x3ddd0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ddd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ddd10: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x3ddd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3ddd14: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x3ddd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3ddd18: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x3ddd18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ddd1c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3ddd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ddd20: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x3ddd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3ddd24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ddd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ddd28: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3ddd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3ddd2c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3ddd2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ddd30: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3ddd30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3ddd34: 0x92c3001c  lbu         $v1, 0x1C($s6)
    ctx->pc = 0x3ddd34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x3ddd38: 0x92c2001d  lbu         $v0, 0x1D($s6)
    ctx->pc = 0x3ddd38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 29)));
    // 0x3ddd3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ddd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ddd40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ddd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ddd44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3ddd44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3ddd48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ddd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ddd4c: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x3ddd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3ddd50: 0xc041460  jal         func_105180
    ctx->pc = 0x3DDD50u;
    SET_GPR_U32(ctx, 31, 0x3DDD58u);
    ctx->pc = 0x3DDD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDD50u;
    // 0x3ddd54: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x3DDD50u, 0x3DDD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDD58u;
label_3ddd58:
    // 0x3ddd58: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x3ddd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x3ddd5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ddd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ddd60: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x3ddd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3ddd64: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3DDD64u;
    SET_GPR_U32(ctx, 31, 0x3DDD6Cu);
    ctx->pc = 0x3DDD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDD64u;
    // 0x3ddd68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3DDD64u, 0x3DDD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDD6Cu;
label_3ddd6c:
    // 0x3ddd6c: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x3ddd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x3ddd70: 0x92c4001d  lbu         $a0, 0x1D($s6)
    ctx->pc = 0x3ddd70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 29)));
    // 0x3ddd74: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3ddd74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ddd78: 0x92c2001c  lbu         $v0, 0x1C($s6)
    ctx->pc = 0x3ddd78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x3ddd7c: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x3ddd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3ddd80: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x3ddd80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3ddd84: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x3ddd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3ddd88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ddd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ddd8c: 0xc041460  jal         func_105180
    ctx->pc = 0x3DDD8Cu;
    SET_GPR_U32(ctx, 31, 0x3DDD94u);
    ctx->pc = 0x3DDD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDD8Cu;
    // 0x3ddd90: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x3DDD8Cu, 0x3DDD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDD94u;
label_3ddd94:
    // 0x3ddd94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ddd94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddd98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ddd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ddd9c: 0x7a870000  lq          $a3, 0x0($s4)
    ctx->pc = 0x3ddd9cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3ddda0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x3ddda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3ddda4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3ddda4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ddda8: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x3ddda8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x3dddac: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3dddacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3dddb0: 0x26e60040  addiu       $a2, $s7, 0x40
    ctx->pc = 0x3dddb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    // 0x3dddb4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3dddb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dddb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3dddb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dddbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dddbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dddc0: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x3dddc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x3dddc4: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x3dddc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x3dddc8: 0xe622001c  swc1        $f2, 0x1C($s1)
    ctx->pc = 0x3dddc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x3dddcc: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x3dddccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x3dddd0: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x3dddd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x3dddd4: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x3dddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x3dddd8: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x3dddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x3ddddc: 0xc04144e  jal         func_105138
    ctx->pc = 0x3DDDDCu;
    SET_GPR_U32(ctx, 31, 0x3DDDE4u);
    ctx->pc = 0x3DDDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDDDCu;
    // 0x3ddde0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x3DDDDCu, 0x3DDDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDDE4u;
label_3ddde4:
    // 0x3ddde4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ddde4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3ddde8: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x3ddde8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x3dddec: 0x0  nop
    ctx->pc = 0x3dddecu;
    // NOP
label_3dddf0:
    // 0x3dddf0: 0x92c3001a  lbu         $v1, 0x1A($s6)
    ctx->pc = 0x3dddf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 26)));
    // 0x3dddf4: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x3dddf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dddf8: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
    ctx->pc = 0x3DDDF8u;
    {
        const bool branch_taken_0x3dddf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dddf8) {
            ctx->pc = 0x3DDC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ddc38;
        }
    }
    ctx->pc = 0x3DDE00u;
    // 0x3dde00: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3dde00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3dde04: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3dde04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3dde08: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3dde08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3dde0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3dde0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3dde10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3dde10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dde14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3dde14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dde18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dde18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dde1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dde1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dde20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dde20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dde24: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE24u;
        // 0x3dde28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDE24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDE2Cu;
}
