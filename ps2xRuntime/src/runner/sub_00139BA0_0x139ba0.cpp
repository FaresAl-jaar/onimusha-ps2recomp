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

// Function: sub_00139BA0
// Address: 0x139ba0 - 0x139c3c
void sub_00139BA0_0x139ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139BA0_0x139ba0");
#endif

    switch (ctx->pc) {
        case 0x139c1cu: goto label_139c1c;
        default: break;
    }

    ctx->pc = 0x139ba0u;

    // 0x139ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139ba8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x139ba8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139bac: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x139bacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x139bb0: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x139bb0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x139bb4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x139bb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x139bb8: 0x4be1116c  vsub.xyzw   $vf5, $vf2, $vf1
    ctx->pc = 0x139bb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x139bbc: 0x4be119ac  vsub.xyzw   $vf6, $vf3, $vf1
    ctx->pc = 0x139bbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x139bc0: 0x4be429ea  vmul.xyzw   $vf7, $vf5, $vf4
    ctx->pc = 0x139bc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x139bc4: 0x4be4322a  vmul.xyzw   $vf8, $vf6, $vf4
    ctx->pc = 0x139bc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x139bc8: 0x4be00243  vaddw.xyzw  $vf9, $vf0, $vf0w
    ctx->pc = 0x139bc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x139bcc: 0x4be7383d  vadday.xyzw $ACC, $vf7, $vf7y
    ctx->pc = 0x139bccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x139bd0: 0x4be74a8a  vmaddz.xyzw $vf10, $vf9, $vf7z
    ctx->pc = 0x139bd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x139bd4: 0x4be8403d  vadday.xyzw $ACC, $vf8, $vf8y
    ctx->pc = 0x139bd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x139bd8: 0x4be84aca  vmaddz.xyzw $vf11, $vf9, $vf8z
    ctx->pc = 0x139bd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x139bdc: 0x48215000  qmfc2.ni    $at, $vf10
    ctx->pc = 0x139bdcu;
    SET_GPR_VEC(ctx, 1, _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x139be0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x139be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x139be4: 0x48215800  qmfc2.ni    $at, $vf11
    ctx->pc = 0x139be4u;
    SET_GPR_VEC(ctx, 1, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x139be8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x139be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x139bec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139bf0: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x139bf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x139bf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x139bf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139bf8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x139BF8u;
    {
        const bool branch_taken_0x139bf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x139bf8) {
            ctx->pc = 0x139C28u;
            goto label_139c28;
        }
    }
    ctx->pc = 0x139C00u;
    // 0x139c00: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x139c00u;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
    // 0x139c04: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x139c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c08: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x139c08u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x139c0c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x139c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c10: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x139c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x139c14: 0xc0414c0  jal         func_105300
    ctx->pc = 0x139C14u;
    SET_GPR_U32(ctx, 31, 0x139C1Cu);
    ctx->pc = 0x139C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139C14u;
    // 0x139c18: 0x46001303  div.s       $f12, $f2, $f0 (Delay Slot)
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x139C14u, 0x139C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C1Cu;
label_139c1c:
    // 0x139c1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x139C1Cu;
    {
        const bool branch_taken_0x139c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C1Cu;
        // 0x139c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c1c) {
            ctx->pc = 0x139C30u;
            goto label_139c30;
        }
    }
    ctx->pc = 0x139C24u;
    // 0x139c24: 0x0  nop
    ctx->pc = 0x139c24u;
    // NOP
label_139c28:
    // 0x139c28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x139c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c2c: 0x0  nop
    ctx->pc = 0x139c2cu;
    // NOP
label_139c30:
    // 0x139c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139c34: 0x3e00008  jr          $ra
    ctx->pc = 0x139C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C34u;
        // 0x139c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139C3Cu;
}
