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

// Function: sub_002A20F0
// Address: 0x2a20f0 - 0x2a22c8
void sub_002A20F0_0x2a20f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A20F0_0x2a20f0");
#endif

    switch (ctx->pc) {
        case 0x2a2130u: goto label_2a2130;
        case 0x2a2190u: goto label_2a2190;
        case 0x2a21c0u: goto label_2a21c0;
        case 0x2a2210u: goto label_2a2210;
        case 0x2a2248u: goto label_2a2248;
        default: break;
    }

    ctx->pc = 0x2a20f0u;

    // 0x2a20f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a20f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a20f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a20f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a20f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a20f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a20fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a20fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a2100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a2100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a2104: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2108: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x2a2108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2a210c: 0x948a0068  lhu         $t2, 0x68($a0)
    ctx->pc = 0x2a210cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a2110: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2110u;
    {
        const bool branch_taken_0x2a2110 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2A2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2110u;
        // 0x2a2114: 0x24780010  addiu       $t8, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2110) {
            ctx->pc = 0x2A2130u;
            goto label_2a2130;
        }
    }
    ctx->pc = 0x2A2118u;
    // 0x2a2118: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a2118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a211c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a211cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2120: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a2120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a2124: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2a2124u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2128: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a2128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a212c: 0x303c021  addu        $t8, $t8, $v1
    ctx->pc = 0x2a212cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
label_2a2130:
    // 0x2a2130: 0x8f030020  lw          $v1, 0x20($t8)
    ctx->pc = 0x2a2130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x2a2134: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x2a2134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a2138: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2A2138u;
    {
        const bool branch_taken_0x2a2138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2138) {
            ctx->pc = 0x2A22A0u;
            goto label_2a22a0;
        }
    }
    ctx->pc = 0x2A2140u;
    // 0x2a2140: 0x8c66fff8  lw          $a2, -0x8($v1)
    ctx->pc = 0x2a2140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2a2144: 0x10c00056  beqz        $a2, . + 4 + (0x56 << 2)
    ctx->pc = 0x2A2144u;
    {
        const bool branch_taken_0x2a2144 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2144) {
            ctx->pc = 0x2A22A0u;
            goto label_2a22a0;
        }
    }
    ctx->pc = 0x2A214Cu;
    // 0x2a214c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a214cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a2150: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2150u;
    {
        const bool branch_taken_0x2a2150 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a2150) {
            ctx->pc = 0x2A2168u;
            goto label_2a2168;
        }
    }
    ctx->pc = 0x2A2158u;
    // 0x2a2158: 0x8f03001c  lw          $v1, 0x1C($t8)
    ctx->pc = 0x2a2158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x2a215c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x2a215cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2a2160: 0x1460004f  bnez        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2A2160u;
    {
        const bool branch_taken_0x2a2160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2160) {
            ctx->pc = 0x2A22A0u;
            goto label_2a22a0;
        }
    }
    ctx->pc = 0x2A2168u;
label_2a2168:
    // 0x2a2168: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x2a2168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x2a216c: 0x693823  subu        $a3, $v1, $t1
    ctx->pc = 0x2a216cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2a2170: 0x8f0e0020  lw          $t6, 0x20($t8)
    ctx->pc = 0x2a2170u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x2a2174: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x2a2174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a2178: 0x75900  sll         $t3, $a3, 4
    ctx->pc = 0x2a2178u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2a217c: 0x93080024  lbu         $t0, 0x24($t8)
    ctx->pc = 0x2a217cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x2a2180: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a2180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2184: 0x6bc821  addu        $t9, $v1, $t3
    ctx->pc = 0x2a2184u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2a2188: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2a2188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a218c: 0x0  nop
    ctx->pc = 0x2a218cu;
    // NOP
label_2a2190:
    // 0x2a2190: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2a2190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2a2194: 0x902dcea4  lbu         $t5, -0x315C($at)
    ctx->pc = 0x2a2194u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x2a2198: 0x780c0  sll         $s0, $a3, 3
    ctx->pc = 0x2a2198u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2a219c: 0x8f2f0018  lw          $t7, 0x18($t9)
    ctx->pc = 0x2a219cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x2a21a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a21a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a21a4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x2a21a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2a21a8: 0x8f2b00e4  lw          $t3, 0xE4($t9)
    ctx->pc = 0x2a21a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 228)));
    // 0x2a21ac: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x2a21acu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x2a21b0: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x2a21b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x2a21b4: 0x1ed6821  addu        $t5, $t7, $t5
    ctx->pc = 0x2a21b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x2a21b8: 0x8daf0000  lw          $t7, 0x0($t5)
    ctx->pc = 0x2a21b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2a21bc: 0x8ded0004  lw          $t5, 0x4($t7)
    ctx->pc = 0x2a21bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
label_2a21c0:
    // 0x2a21c0: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x2a21c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a21c4: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x2a21c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a21c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A21C8u;
    {
        const bool branch_taken_0x2a21c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A21CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21C8u;
        // 0x2a21cc: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21c8) {
            ctx->pc = 0x2A21D8u;
            goto label_2a21d8;
        }
    }
    ctx->pc = 0x2A21D0u;
    // 0x2a21d0: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2A21D0u;
    {
        const bool branch_taken_0x2a21d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a21d0) {
            ctx->pc = 0x2A2280u;
            goto label_2a2280;
        }
    }
    ctx->pc = 0x2A21D8u;
label_2a21d8:
    // 0x2a21d8: 0x44101800  mfc1        $s0, $f3
    ctx->pc = 0x2a21d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2a21dc: 0x0  nop
    ctx->pc = 0x2a21dcu;
    // NOP
    // 0x2a21e0: 0x48d0b000  ctc2.ni     $s0, $vi22
    ctx->pc = 0x2a21e0u;
    { uint32_t tmp = GPR_U32(ctx, 16); std::memcpy(&ctx->vu0_q, &tmp, sizeof(tmp)); }
    // 0x2a21e4: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x2a21e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a21e8: 0x8df00018  lw          $s0, 0x18($t7)
    ctx->pc = 0x2a21e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x2a21ec: 0x95f20000  lhu         $s2, 0x0($t7)
    ctx->pc = 0x2a21ecu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2a21f0: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2a21f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2a21f4: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2a21f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a21f8: 0x3252ffff  andi        $s2, $s2, 0xFFFF
    ctx->pc = 0x2a21f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2a21fc: 0x128840  sll         $s1, $s2, 1
    ctx->pc = 0x2a21fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2a2200: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x2a2200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2a2204: 0x118082  srl         $s0, $s1, 2
    ctx->pc = 0x2a2204u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 2));
    // 0x2a2208: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A2208u;
    {
        const bool branch_taken_0x2a2208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2208u;
        // 0x2a220c: 0x32310003  andi        $s1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2208) {
            ctx->pc = 0x2A2238u;
            goto label_2a2238;
        }
    }
    ctx->pc = 0x2A2210u;
label_2a2210:
    // 0x2a2210: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x2a2210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2a2214: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x2a2214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a2218: 0x2210ffff  addi        $s0, $s0, -0x1
    ctx->pc = 0x2a2218u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x2a221c: 0x218c0010  addi        $t4, $t4, 0x10
    ctx->pc = 0x2a221cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x2a2220: 0x22730010  addi        $s3, $s3, 0x10
    ctx->pc = 0x2a2220u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 19), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x2a2224: 0x4be0083c  vaddax.xyzw $ACC, $vf1, $vf0x
    ctx->pc = 0x2a2224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a2228: 0x4be010e1  vmaddq.xyzw $vf3, $vf2, $Q
    ctx->pc = 0x2a2228u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a222c: 0xf9a30000  sqc2        $vf3, 0x0($t5)
    ctx->pc = 0x2a222cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2a2230: 0x21ad0010  addi        $t5, $t5, 0x10
    ctx->pc = 0x2a2230u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x2a2234: 0x0  nop
    ctx->pc = 0x2a2234u;
    // NOP
label_2a2238:
    // 0x2a2238: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A2238u;
    {
        const bool branch_taken_0x2a2238 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2238) {
            ctx->pc = 0x2A2210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2210;
        }
    }
    ctx->pc = 0x2A2240u;
    // 0x2a2240: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A2240u;
    {
        const bool branch_taken_0x2a2240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2240u;
        // 0x2a2244: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2240) {
            ctx->pc = 0x2A2270u;
            goto label_2a2270;
        }
    }
    ctx->pc = 0x2A2248u;
label_2a2248:
    // 0x2a2248: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a2248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a224c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2a224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2250: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x2a2250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2254: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2a2254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2a2258: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2a2258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2a225c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2a225cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2a2260: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a2260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2264: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x2a2264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2a2268: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x2a2268u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x2a226c: 0x0  nop
    ctx->pc = 0x2a226cu;
    // NOP
label_2a2270:
    // 0x2a2270: 0x251802b  sltu        $s0, $s2, $s1
    ctx->pc = 0x2a2270u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2a2274: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A2274u;
    {
        const bool branch_taken_0x2a2274 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2274) {
            ctx->pc = 0x2A2248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2248;
        }
    }
    ctx->pc = 0x2A227Cu;
    // 0x2a227c: 0x8dec0004  lw          $t4, 0x4($t7)
    ctx->pc = 0x2a227cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
label_2a2280:
    // 0x2a2280: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a2280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a2284: 0x66802b  sltu        $s0, $v1, $a2
    ctx->pc = 0x2a2284u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a2288: 0x1600ffcd  bnez        $s0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2A2288u;
    {
        const bool branch_taken_0x2a2288 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2288u;
        // 0x2a228c: 0x8ded0004  lw          $t5, 0x4($t7) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2288) {
            ctx->pc = 0x2A21C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a21c0;
        }
    }
    ctx->pc = 0x2A2290u;
    // 0x2a2290: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a2290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a2294: 0xe8182b  sltu        $v1, $a3, $t0
    ctx->pc = 0x2a2294u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2a2298: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x2A2298u;
    {
        const bool branch_taken_0x2a2298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2298u;
        // 0x2a229c: 0x25ce001c  addiu       $t6, $t6, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2298) {
            ctx->pc = 0x2A2190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2190;
        }
    }
    ctx->pc = 0x2A22A0u;
label_2a22a0:
    // 0x2a22a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2a22a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2a22a4: 0x12a182b  sltu        $v1, $t1, $t2
    ctx->pc = 0x2a22a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2a22a8: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x2A22A8u;
    {
        const bool branch_taken_0x2a22a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22A8u;
        // 0x2a22ac: 0x27180050  addiu       $t8, $t8, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22a8) {
            ctx->pc = 0x2A2130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2130;
        }
    }
    ctx->pc = 0x2A22B0u;
    // 0x2a22b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a22b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a22b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a22b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a22b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a22b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a22bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a22bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a22c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A22C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22C0u;
        // 0x2a22c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A22C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A22C8u;
}
