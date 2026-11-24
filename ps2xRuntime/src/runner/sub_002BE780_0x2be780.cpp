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

// Function: sub_002BE780
// Address: 0x2be780 - 0x2bec10
void sub_002BE780_0x2be780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE780_0x2be780");
#endif

    switch (ctx->pc) {
        case 0x2be7b0u: goto label_2be7b0;
        case 0x2beabcu: goto label_2beabc;
        case 0x2beb4cu: goto label_2beb4c;
        case 0x2beb84u: goto label_2beb84;
        case 0x2bebecu: goto label_2bebec;
        default: break;
    }

    ctx->pc = 0x2be780u;

    // 0x2be780: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2be780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2be784: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2be784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2be788: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2be788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2be78c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2be78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2be790: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2be790u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be794: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2be794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2be798: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2be798u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be79c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2be7a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2be7a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be7a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2be7a8: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x2be7a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x2be7ac: 0x27b00068  addiu       $s0, $sp, 0x68
    ctx->pc = 0x2be7acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_2be7b0:
    // 0x2be7b0: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x2be7b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2be7b4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2BE7B4u;
    {
        const bool branch_taken_0x2be7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7B4u;
        // 0x2be7b8: 0x22c3c  dsll32      $a1, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be7b4) {
            ctx->pc = 0x2BE8A0u;
            goto label_2be8a0;
        }
    }
    ctx->pc = 0x2BE7BCu;
    // 0x2be7bc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2be7bcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2be7c0: 0x4a1001d  bgez        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BE7C0u;
    {
        const bool branch_taken_0x2be7c0 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x2be7c0) {
            ctx->pc = 0x2BE838u;
            goto label_2be838;
        }
    }
    ctx->pc = 0x2BE7C8u;
    // 0x2be7c8: 0xc68000c0  lwc1        $f0, 0xC0($s4)
    ctx->pc = 0x2be7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be7cc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2be7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2be7d0: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2be7d0u;
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
    // 0x2be7d4: 0x48242001  qmfc2.i     $a0, $vf4
    ctx->pc = 0x2be7d4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2be7d8: 0x51823  negu        $v1, $a1
    ctx->pc = 0x2be7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2be7dc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2be7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be7e0: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x2be7e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2be7e4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2be7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2be7e8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2be7e8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2be7ec: 0x0  nop
    ctx->pc = 0x2be7ecu;
    // NOP
    // 0x2be7f0: 0x0  nop
    ctx->pc = 0x2be7f0u;
    // NOP
    // 0x2be7f4: 0x1810  mfhi        $v1
    ctx->pc = 0x2be7f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2be7f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2be7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2be7fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2be7fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2be800: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2be800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be804: 0x0  nop
    ctx->pc = 0x2be804u;
    // NOP
    // 0x2be808: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2be808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2be80c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE80Cu;
    {
        const bool branch_taken_0x2be80c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2BE810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE80Cu;
        // 0x2be810: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be80c) {
            ctx->pc = 0x2BE81Cu;
            goto label_2be81c;
        }
    }
    ctx->pc = 0x2BE814u;
    // 0x2be814: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2be814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2be818: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2be818u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2be81c:
    // 0x2be81c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be820: 0x0  nop
    ctx->pc = 0x2be820u;
    // NOP
    // 0x2be824: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2be824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2be828: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be82c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2BE82Cu;
    {
        const bool branch_taken_0x2be82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE82Cu;
        // 0x2be830: 0xe68000b0  swc1        $f0, 0xB0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be82c) {
            ctx->pc = 0x2BE8A0u;
            goto label_2be8a0;
        }
    }
    ctx->pc = 0x2BE834u;
    // 0x2be834: 0x0  nop
    ctx->pc = 0x2be834u;
    // NOP
label_2be838:
    // 0x2be838: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x2be838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be83c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2be83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2be840: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2be840u;
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
    // 0x2be844: 0x48232001  qmfc2.i     $v1, $vf4
    ctx->pc = 0x2be844u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2be848: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2be848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be84c: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x2be84cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2be850: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2be850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2be854: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2be854u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2be858: 0x0  nop
    ctx->pc = 0x2be858u;
    // NOP
    // 0x2be85c: 0x0  nop
    ctx->pc = 0x2be85cu;
    // NOP
    // 0x2be860: 0x1810  mfhi        $v1
    ctx->pc = 0x2be860u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2be864: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2be864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2be868: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2be868u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2be86c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2be86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be870: 0x0  nop
    ctx->pc = 0x2be870u;
    // NOP
    // 0x2be874: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2be874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2be878: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE878u;
    {
        const bool branch_taken_0x2be878 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2BE87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE878u;
        // 0x2be87c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be878) {
            ctx->pc = 0x2BE888u;
            goto label_2be888;
        }
    }
    ctx->pc = 0x2BE880u;
    // 0x2be880: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2be880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2be884: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2be884u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2be888:
    // 0x2be888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be88c: 0x0  nop
    ctx->pc = 0x2be88cu;
    // NOP
    // 0x2be890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2be890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2be894: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2be894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2be898: 0xe68000b0  swc1        $f0, 0xB0($s4)
    ctx->pc = 0x2be898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 176), bits); }
    // 0x2be89c: 0x0  nop
    ctx->pc = 0x2be89cu;
    // NOP
label_2be8a0:
    // 0x2be8a0: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x2be8a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2be8a4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2BE8A4u;
    {
        const bool branch_taken_0x2be8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8A4u;
        // 0x2be8a8: 0x22c3c  dsll32      $a1, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be8a4) {
            ctx->pc = 0x2BE990u;
            goto label_2be990;
        }
    }
    ctx->pc = 0x2BE8ACu;
    // 0x2be8ac: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2be8acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2be8b0: 0x4a1001d  bgez        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BE8B0u;
    {
        const bool branch_taken_0x2be8b0 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x2be8b0) {
            ctx->pc = 0x2BE928u;
            goto label_2be928;
        }
    }
    ctx->pc = 0x2BE8B8u;
    // 0x2be8b8: 0xc68000c4  lwc1        $f0, 0xC4($s4)
    ctx->pc = 0x2be8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be8bc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2be8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2be8c0: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2be8c0u;
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
    // 0x2be8c4: 0x48242001  qmfc2.i     $a0, $vf4
    ctx->pc = 0x2be8c4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2be8c8: 0x51823  negu        $v1, $a1
    ctx->pc = 0x2be8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2be8cc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2be8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be8d0: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x2be8d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2be8d4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2be8d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2be8d8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2be8d8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2be8dc: 0x0  nop
    ctx->pc = 0x2be8dcu;
    // NOP
    // 0x2be8e0: 0x0  nop
    ctx->pc = 0x2be8e0u;
    // NOP
    // 0x2be8e4: 0x1810  mfhi        $v1
    ctx->pc = 0x2be8e4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2be8e8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2be8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2be8ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2be8ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2be8f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2be8f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be8f4: 0x0  nop
    ctx->pc = 0x2be8f4u;
    // NOP
    // 0x2be8f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2be8f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2be8fc: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE8FCu;
    {
        const bool branch_taken_0x2be8fc = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2BE900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8FCu;
        // 0x2be900: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be8fc) {
            ctx->pc = 0x2BE90Cu;
            goto label_2be90c;
        }
    }
    ctx->pc = 0x2BE904u;
    // 0x2be904: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2be904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2be908: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2be908u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2be90c:
    // 0x2be90c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be910: 0x0  nop
    ctx->pc = 0x2be910u;
    // NOP
    // 0x2be914: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2be914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2be918: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be91c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2BE91Cu;
    {
        const bool branch_taken_0x2be91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE91Cu;
        // 0x2be920: 0xe68000b4  swc1        $f0, 0xB4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be91c) {
            ctx->pc = 0x2BE990u;
            goto label_2be990;
        }
    }
    ctx->pc = 0x2BE924u;
    // 0x2be924: 0x0  nop
    ctx->pc = 0x2be924u;
    // NOP
label_2be928:
    // 0x2be928: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x2be928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be92c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2be92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2be930: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2be930u;
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
    // 0x2be934: 0x48232001  qmfc2.i     $v1, $vf4
    ctx->pc = 0x2be934u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2be938: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2be938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be93c: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x2be93cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2be940: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2be940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2be944: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2be944u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2be948: 0x0  nop
    ctx->pc = 0x2be948u;
    // NOP
    // 0x2be94c: 0x0  nop
    ctx->pc = 0x2be94cu;
    // NOP
    // 0x2be950: 0x1810  mfhi        $v1
    ctx->pc = 0x2be950u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2be954: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2be954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2be958: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2be958u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2be95c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2be95cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be960: 0x0  nop
    ctx->pc = 0x2be960u;
    // NOP
    // 0x2be964: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2be964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2be968: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE968u;
    {
        const bool branch_taken_0x2be968 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2BE96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE968u;
        // 0x2be96c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be968) {
            ctx->pc = 0x2BE978u;
            goto label_2be978;
        }
    }
    ctx->pc = 0x2BE970u;
    // 0x2be970: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2be970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2be974: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2be974u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2be978:
    // 0x2be978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be97c: 0x0  nop
    ctx->pc = 0x2be97cu;
    // NOP
    // 0x2be980: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2be980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2be984: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2be984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2be988: 0xe68000b4  swc1        $f0, 0xB4($s4)
    ctx->pc = 0x2be988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 180), bits); }
    // 0x2be98c: 0x0  nop
    ctx->pc = 0x2be98cu;
    // NOP
label_2be990:
    // 0x2be990: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x2be990u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2be994: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2BE994u;
    {
        const bool branch_taken_0x2be994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE994u;
        // 0x2be998: 0x22c3c  dsll32      $a1, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be994) {
            ctx->pc = 0x2BEA80u;
            goto label_2bea80;
        }
    }
    ctx->pc = 0x2BE99Cu;
    // 0x2be99c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2be99cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2be9a0: 0x4a1001d  bgez        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BE9A0u;
    {
        const bool branch_taken_0x2be9a0 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x2be9a0) {
            ctx->pc = 0x2BEA18u;
            goto label_2bea18;
        }
    }
    ctx->pc = 0x2BE9A8u;
    // 0x2be9a8: 0xc68000c8  lwc1        $f0, 0xC8($s4)
    ctx->pc = 0x2be9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be9ac: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2be9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2be9b0: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2be9b0u;
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
    // 0x2be9b4: 0x48242001  qmfc2.i     $a0, $vf4
    ctx->pc = 0x2be9b4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2be9b8: 0x51823  negu        $v1, $a1
    ctx->pc = 0x2be9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2be9bc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2be9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be9c0: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x2be9c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2be9c4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2be9c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2be9c8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2be9c8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2be9cc: 0x0  nop
    ctx->pc = 0x2be9ccu;
    // NOP
    // 0x2be9d0: 0x0  nop
    ctx->pc = 0x2be9d0u;
    // NOP
    // 0x2be9d4: 0x1810  mfhi        $v1
    ctx->pc = 0x2be9d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2be9d8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2be9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2be9dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2be9dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2be9e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2be9e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be9e4: 0x0  nop
    ctx->pc = 0x2be9e4u;
    // NOP
    // 0x2be9e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2be9e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2be9ec: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE9ECu;
    {
        const bool branch_taken_0x2be9ec = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2BE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9ECu;
        // 0x2be9f0: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be9ec) {
            ctx->pc = 0x2BE9FCu;
            goto label_2be9fc;
        }
    }
    ctx->pc = 0x2BE9F4u;
    // 0x2be9f4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2be9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2be9f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2be9f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2be9fc:
    // 0x2be9fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bea00: 0x0  nop
    ctx->pc = 0x2bea00u;
    // NOP
    // 0x2bea04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bea04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bea08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bea08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bea0c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2BEA0Cu;
    {
        const bool branch_taken_0x2bea0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA0Cu;
        // 0x2bea10: 0xe68000b8  swc1        $f0, 0xB8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea0c) {
            ctx->pc = 0x2BEA80u;
            goto label_2bea80;
        }
    }
    ctx->pc = 0x2BEA14u;
    // 0x2bea14: 0x0  nop
    ctx->pc = 0x2bea14u;
    // NOP
label_2bea18:
    // 0x2bea18: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x2bea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bea1c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2bea1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2bea20: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bea20u;
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
    // 0x2bea24: 0x48232001  qmfc2.i     $v1, $vf4
    ctx->pc = 0x2bea24u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bea28: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2bea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bea2c: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x2bea2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2bea30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2bea30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bea34: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2bea34u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2bea38: 0x0  nop
    ctx->pc = 0x2bea38u;
    // NOP
    // 0x2bea3c: 0x0  nop
    ctx->pc = 0x2bea3cu;
    // NOP
    // 0x2bea40: 0x1810  mfhi        $v1
    ctx->pc = 0x2bea40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2bea44: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2bea44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2bea48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2bea48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2bea4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bea4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bea50: 0x0  nop
    ctx->pc = 0x2bea50u;
    // NOP
    // 0x2bea54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bea54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bea58: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BEA58u;
    {
        const bool branch_taken_0x2bea58 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2BEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA58u;
        // 0x2bea5c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea58) {
            ctx->pc = 0x2BEA68u;
            goto label_2bea68;
        }
    }
    ctx->pc = 0x2BEA60u;
    // 0x2bea60: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2bea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2bea64: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2bea64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2bea68:
    // 0x2bea68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bea68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bea6c: 0x0  nop
    ctx->pc = 0x2bea6cu;
    // NOP
    // 0x2bea70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bea70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bea74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bea74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bea78: 0xe68000b8  swc1        $f0, 0xB8($s4)
    ctx->pc = 0x2bea78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
    // 0x2bea7c: 0x0  nop
    ctx->pc = 0x2bea7cu;
    // NOP
label_2bea80:
    // 0x2bea80: 0x92670002  lbu         $a3, 0x2($s3)
    ctx->pc = 0x2bea80u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2bea84: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2bea84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2bea88: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2bea88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2bea8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bea8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bea90: 0x268400b0  addiu       $a0, $s4, 0xB0
    ctx->pc = 0x2bea90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x2bea94: 0x2463f380  addiu       $v1, $v1, -0xC80
    ctx->pc = 0x2bea94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964096));
    // 0x2bea98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2bea98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea9c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2bea9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2beaa0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2beaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2beaa4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2beaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2beaa8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2beaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2beaac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2beaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2beab0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2beab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beab4: 0xc0ae874  jal         func_2BA1D0
    ctx->pc = 0x2BEAB4u;
    SET_GPR_U32(ctx, 31, 0x2BEABCu);
    ctx->pc = 0x2BEAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEAB4u;
    // 0x2beab8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA1D0u, 0x2BEAB4u, 0x2BEABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEABCu;
label_2beabc:
    // 0x2beabc: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x2beabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2beac0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2beac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2beac4: 0xc68100b0  lwc1        $f1, 0xB0($s4)
    ctx->pc = 0x2beac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beac8: 0xc6640028  lwc1        $f4, 0x28($s3)
    ctx->pc = 0x2beac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2beacc: 0xc68300b8  lwc1        $f3, 0xB8($s4)
    ctx->pc = 0x2beaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bead0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bead0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bead4: 0x0  nop
    ctx->pc = 0x2bead4u;
    // NOP
    // 0x2bead8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2bead8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2beadc: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2beadcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2beae0: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2beae0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2beae4: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x2beae4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2beae8: 0x46010044  c1          0x10044
    ctx->pc = 0x2beae8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x2beaec: 0x0  nop
    ctx->pc = 0x2beaecu;
    // NOP
    // 0x2beaf0: 0x0  nop
    ctx->pc = 0x2beaf0u;
    // NOP
    // 0x2beaf4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2beaf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2beaf8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEAF8u;
    {
        const bool branch_taken_0x2beaf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2beaf8) {
            ctx->pc = 0x2BEB10u;
            goto label_2beb10;
        }
    }
    ctx->pc = 0x2BEB00u;
    // 0x2beb00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2beb00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2beb04: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2beb04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2beb08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BEB08u;
    {
        const bool branch_taken_0x2beb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB08u;
        // 0x2beb0c: 0x96420008  lhu         $v0, 0x8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb08) {
            ctx->pc = 0x2BEB2Cu;
            goto label_2beb2c;
        }
    }
    ctx->pc = 0x2BEB10u;
label_2beb10:
    // 0x2beb10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2beb10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2beb14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2beb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2beb18: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2beb18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2beb1c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2beb1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2beb20: 0x0  nop
    ctx->pc = 0x2beb20u;
    // NOP
    // 0x2beb24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2beb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2beb28: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x2beb28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_2beb2c:
    // 0x2beb2c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2beb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2beb30: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2beb30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2beb34: 0x1440ff1e  bnez        $v0, . + 4 + (-0xE2 << 2)
    ctx->pc = 0x2BEB34u;
    {
        const bool branch_taken_0x2beb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2beb34) {
            ctx->pc = 0x2BE7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be7b0;
        }
    }
    ctx->pc = 0x2BEB3Cu;
    // 0x2beb3c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x2beb3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2beb40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2beb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb44: 0xc0ae944  jal         func_2BA510
    ctx->pc = 0x2BEB44u;
    SET_GPR_U32(ctx, 31, 0x2BEB4Cu);
    ctx->pc = 0x2BEB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB44u;
    // 0x2beb48: 0xa282005e  sb          $v0, 0x5E($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 94), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA510u, 0x2BEB44u, 0x2BEB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB4Cu;
label_2beb4c:
    // 0x2beb4c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BEB4Cu;
    {
        const bool branch_taken_0x2beb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2beb4c) {
            ctx->pc = 0x2BEB98u;
            goto label_2beb98;
        }
    }
    ctx->pc = 0x2BEB54u;
    // 0x2beb54: 0x92670002  lbu         $a3, 0x2($s3)
    ctx->pc = 0x2beb54u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2beb58: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2beb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2beb5c: 0x2442f388  addiu       $v0, $v0, -0xC78
    ctx->pc = 0x2beb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964104));
    // 0x2beb60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2beb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2beb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb68: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2beb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2beb6c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2beb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2beb70: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2beb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2beb74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2beb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2beb78: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2beb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2beb7c: 0xc0afda4  jal         func_2BF690
    ctx->pc = 0x2BEB7Cu;
    SET_GPR_U32(ctx, 31, 0x2BEB84u);
    ctx->pc = 0x2BEB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB7Cu;
    // 0x2beb80: 0x268600b0  addiu       $a2, $s4, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF690u, 0x2BEB7Cu, 0x2BEB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB84u;
label_2beb84:
    // 0x2beb84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BEB84u;
    {
        const bool branch_taken_0x2beb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beb84) {
            ctx->pc = 0x2BEB98u;
            goto label_2beb98;
        }
    }
    ctx->pc = 0x2BEB8Cu;
    // 0x2beb8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2beb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2beb90: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2BEB90u;
    {
        const bool branch_taken_0x2beb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB90u;
        // 0x2beb94: 0xa2820035  sb          $v0, 0x35($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 53), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb90) {
            ctx->pc = 0x2BEBC8u;
            goto label_2bebc8;
        }
    }
    ctx->pc = 0x2BEB98u;
label_2beb98:
    // 0x2beb98: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2beb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2beb9c: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x2beb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
    // 0x2beba0: 0x96830080  lhu         $v1, 0x80($s4)
    ctx->pc = 0x2beba0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x2beba4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2beba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2beba8: 0x244250d8  addiu       $v0, $v0, 0x50D8
    ctx->pc = 0x2beba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20696));
    // 0x2bebac: 0xa6830022  sh          $v1, 0x22($s4)
    ctx->pc = 0x2bebacu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bebb0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2bebb0u;
    { uint32_t bits = FAST_READ32(0x4E50D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bebb4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2bebb4u;
    { uint32_t bits = FAST_READ32(0x4E50DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bebb8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2bebb8u;
    { uint32_t bits = FAST_READ32(0x4E50E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bebbc: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x2bebbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2bebc0: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x2bebc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2bebc4: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x2bebc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_2bebc8:
    // 0x2bebc8: 0xa6800058  sh          $zero, 0x58($s4)
    ctx->pc = 0x2bebc8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bebcc: 0xa6800056  sh          $zero, 0x56($s4)
    ctx->pc = 0x2bebccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bebd0: 0x2642000a  addiu       $v0, $s2, 0xA
    ctx->pc = 0x2bebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x2bebd4: 0xa2800107  sb          $zero, 0x107($s4)
    ctx->pc = 0x2bebd4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 263), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bebd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bebd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bebdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bebdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bebe0: 0x26990008  addiu       $t9, $s4, 0x8
    ctx->pc = 0x2bebe0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2bebe4: 0xc040250  jal         func_100940
    ctx->pc = 0x2BEBE4u;
    SET_GPR_U32(ctx, 31, 0x2BEBECu);
    ctx->pc = 0x2BEBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBE4u;
    // 0x2bebe8: 0xae82002c  sw          $v0, 0x2C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2BEBE4u, 0x2BEBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBECu;
label_2bebec:
    // 0x2bebec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bebecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bebf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bebf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bebf4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bebf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bebf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bebf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bebfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bebfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bec00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bec00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bec04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bec04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bec08: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC08u;
        // 0x2bec0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEC10u;
}
