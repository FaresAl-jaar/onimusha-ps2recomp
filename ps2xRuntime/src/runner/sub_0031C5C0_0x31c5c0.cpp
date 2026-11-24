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

// Function: sub_0031C5C0
// Address: 0x31c5c0 - 0x31c72c
void sub_0031C5C0_0x31c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C5C0_0x31c5c0");
#endif

    switch (ctx->pc) {
        case 0x31c6a0u: goto label_31c6a0;
        case 0x31c718u: goto label_31c718;
        default: break;
    }

    ctx->pc = 0x31c5c0u;

    // 0x31c5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31c5c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x31c5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c5c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31c5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31c5cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31c5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31c5d0: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x31c5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x31c5d4: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x31C5D4u;
    {
        const bool branch_taken_0x31c5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5D4u;
        // 0x31c5d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5d4) {
            ctx->pc = 0x31C718u;
            goto label_31c718;
        }
    }
    ctx->pc = 0x31C5DCu;
    // 0x31c5dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x31c5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c5e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31c5e4: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x31C5E4u;
    {
        const bool branch_taken_0x31c5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31c5e4) {
            ctx->pc = 0x31C6A8u;
            goto label_31c6a8;
        }
    }
    ctx->pc = 0x31C5ECu;
    // 0x31c5ec: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x31c5ecu;
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
    // 0x31c5f0: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x31c5f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x31c5f4: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x31c5f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31c5f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31c5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31c5fc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x31c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31c600: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x31c600u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31c604: 0x0  nop
    ctx->pc = 0x31c604u;
    // NOP
    // 0x31c608: 0x0  nop
    ctx->pc = 0x31c608u;
    // NOP
    // 0x31c60c: 0x1010  mfhi        $v0
    ctx->pc = 0x31c60cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31c610: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x31c610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31c614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c618: 0x0  nop
    ctx->pc = 0x31c618u;
    // NOP
    // 0x31c61c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31c61cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31c620: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x31c620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31c624: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x31c624u;
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
    // 0x31c628: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x31c628u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x31c62c: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x31c62cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31c630: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31c630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31c634: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x31c634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31c638: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x31c638u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31c63c: 0x0  nop
    ctx->pc = 0x31c63cu;
    // NOP
    // 0x31c640: 0x0  nop
    ctx->pc = 0x31c640u;
    // NOP
    // 0x31c644: 0x1010  mfhi        $v0
    ctx->pc = 0x31c644u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31c648: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x31c648u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31c64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c650: 0x0  nop
    ctx->pc = 0x31c650u;
    // NOP
    // 0x31c654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31c654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31c658: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x31c658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31c65c: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x31c65cu;
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
    // 0x31c660: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x31c660u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x31c664: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31c664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31c668: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31c668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c66c: 0x86070006  lh          $a3, 0x6($s0)
    ctx->pc = 0x31c66cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x31c670: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31c670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31c674: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x31c674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x31c678: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x31c678u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31c67c: 0x0  nop
    ctx->pc = 0x31c67cu;
    // NOP
    // 0x31c680: 0x0  nop
    ctx->pc = 0x31c680u;
    // NOP
    // 0x31c684: 0x1010  mfhi        $v0
    ctx->pc = 0x31c684u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31c688: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x31c688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x31c68c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c68cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c690: 0x0  nop
    ctx->pc = 0x31c690u;
    // NOP
    // 0x31c694: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31c694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31c698: 0xc0414ca  jal         func_105328
    ctx->pc = 0x31C698u;
    SET_GPR_U32(ctx, 31, 0x31C6A0u);
    ctx->pc = 0x31C69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C698u;
    // 0x31c69c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x31C698u, 0x31C6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C6A0u;
label_31c6a0:
    // 0x31c6a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31C6A0u;
    {
        const bool branch_taken_0x31c6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c6a0) {
            ctx->pc = 0x31C6E8u;
            goto label_31c6e8;
        }
    }
    ctx->pc = 0x31C6A8u;
label_31c6a8:
    // 0x31c6a8: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x31c6a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31c6ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c6b0: 0x0  nop
    ctx->pc = 0x31c6b0u;
    // NOP
    // 0x31c6b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31c6b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31c6b8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x31c6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31c6bc: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x31c6bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31c6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c6c4: 0x0  nop
    ctx->pc = 0x31c6c4u;
    // NOP
    // 0x31c6c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31c6c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31c6cc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x31c6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31c6d0: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x31c6d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x31c6d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c6d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c6d8: 0x0  nop
    ctx->pc = 0x31c6d8u;
    // NOP
    // 0x31c6dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31c6dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31c6e0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x31c6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31c6e4: 0x0  nop
    ctx->pc = 0x31c6e4u;
    // NOP
label_31c6e8:
    // 0x31c6e8: 0x9605000a  lhu         $a1, 0xA($s0)
    ctx->pc = 0x31c6e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x31c6ec: 0x8f828b38  lw          $v0, -0x74C8($gp)
    ctx->pc = 0x31c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x31c6f0: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x31c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x31c6f4: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x31c6f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31c6f8: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x31c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x31c6fc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x31c6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31c700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31c700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c704: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x31c704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x31c708: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x31c708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31c70c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x31c70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x31c710: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x31C710u;
    SET_GPR_U32(ctx, 31, 0x31C718u);
    ctx->pc = 0x31C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C710u;
    // 0x31c714: 0xaf868b38  sw          $a2, -0x74C8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x31C710u, 0x31C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C718u;
label_31c718:
    // 0x31c718: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x31c718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x31c71c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31c71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31c720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c724: 0x3e00008  jr          $ra
    ctx->pc = 0x31C724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C724u;
        // 0x31c728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C72Cu;
}
