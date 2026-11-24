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

// Function: sub_00341470
// Address: 0x341470 - 0x3414d4
void sub_00341470_0x341470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341470_0x341470");
#endif

    ctx->pc = 0x341470u;

    // 0x341470: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x341470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x341474: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x341474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x341478: 0x24426ba0  addiu       $v0, $v0, 0x6BA0
    ctx->pc = 0x341478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27552));
    // 0x34147c: 0x44016000  mfc1        $at, $f12
    ctx->pc = 0x34147cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x341480: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x341480u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x341484: 0x48a15000  qmtc2.ni    $at, $vf10
    ctx->pc = 0x341484u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x341488: 0xd8690000  lqc2        $vf9, 0x0($v1)
    ctx->pc = 0x341488u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34148c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34148cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x341490: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x341490u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x341494: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x341494u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x341498: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x341498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x34149c: 0x4bea403c  vaddax.xyzw $ACC, $vf8, $vf10x
    ctx->pc = 0x34149cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3414a0: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x3414a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3414a4: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x3414a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3414a8: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x3414a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3414ac: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x3414acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3414b0: 0x4a0002ff  vnop
    ctx->pc = 0x3414b0u;
    // NOP operation, no action needed for VU0
    // 0x3414b4: 0x4a0002ff  vnop
    ctx->pc = 0x3414b4u;
    // NOP operation, no action needed for VU0
    // 0x3414b8: 0x4a0002ff  vnop
    ctx->pc = 0x3414b8u;
    // NOP operation, no action needed for VU0
    // 0x3414bc: 0x4a0002ff  vnop
    ctx->pc = 0x3414bcu;
    // NOP operation, no action needed for VU0
    // 0x3414c0: 0x4a0002ff  vnop
    ctx->pc = 0x3414c0u;
    // NOP operation, no action needed for VU0
    // 0x3414c4: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x3414c4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x3414c8: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x3414c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x3414cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3414CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3414D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414CCu;
        // 0x3414d0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3414CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3414D4u;
}
