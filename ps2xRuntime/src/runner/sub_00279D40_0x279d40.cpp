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

// Function: sub_00279D40
// Address: 0x279d40 - 0x279e50
void sub_00279D40_0x279d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279D40_0x279d40");
#endif

    ctx->pc = 0x279d40u;

    // 0x279d40: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x279d40u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x279d44: 0x4bfa426c  vsub.xyzw   $vf9, $vf8, $vf26
    ctx->pc = 0x279d44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x279d48: 0x4bc9ed2a  vmul.xyz    $vf20, $vf29, $vf9
    ctx->pc = 0x279d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x279d4c: 0x4b14a502  vaddz.x     $vf20, $vf20, $vf20z
    ctx->pc = 0x279d4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x279d50: 0x4b14a501  vaddy.x     $vf20, $vf20, $vf20y
    ctx->pc = 0x279d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x279d54: 0x4a0002ff  vnop
    ctx->pc = 0x279d54u;
    // NOP operation, no action needed for VU0
    // 0x279d58: 0x4a0002ff  vnop
    ctx->pc = 0x279d58u;
    // NOP operation, no action needed for VU0
    // 0x279d5c: 0x4a0002ff  vnop
    ctx->pc = 0x279d5cu;
    // NOP operation, no action needed for VU0
    // 0x279d60: 0x4a0002ff  vnop
    ctx->pc = 0x279d60u;
    // NOP operation, no action needed for VU0
    // 0x279d64: 0x48498800  cfc2.ni     $t1, $vi17
    ctx->pc = 0x279d64u;
    SET_GPR_U32(ctx, 9, ctx->vu0_mac_flags);
    // 0x279d68: 0x31280080  andi        $t0, $t1, 0x80
    ctx->pc = 0x279d68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
    // 0x279d6c: 0x1500001a  bnez        $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x279D6Cu;
    {
        const bool branch_taken_0x279d6c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x279D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D6Cu;
        // 0x279d70: 0x4b1ca545  vsuby.x     $vf21, $vf20, $vf28y (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d6c) {
            ctx->pc = 0x279DD8u;
            goto label_279dd8;
        }
    }
    ctx->pc = 0x279D74u;
    // 0x279d74: 0x4a0002ff  vnop
    ctx->pc = 0x279d74u;
    // NOP operation, no action needed for VU0
    // 0x279d78: 0x4a0002ff  vnop
    ctx->pc = 0x279d78u;
    // NOP operation, no action needed for VU0
    // 0x279d7c: 0x4a0002ff  vnop
    ctx->pc = 0x279d7cu;
    // NOP operation, no action needed for VU0
    // 0x279d80: 0x4a0002ff  vnop
    ctx->pc = 0x279d80u;
    // NOP operation, no action needed for VU0
    // 0x279d84: 0x48498800  cfc2.ni     $t1, $vi17
    ctx->pc = 0x279d84u;
    SET_GPR_U32(ctx, 9, ctx->vu0_mac_flags);
    // 0x279d88: 0x31280080  andi        $t0, $t1, 0x80
    ctx->pc = 0x279d88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
    // 0x279d8c: 0x11000014  beqz        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x279D8Cu;
    {
        const bool branch_taken_0x279d8c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D8Cu;
        // 0x279d90: 0x4a0002ff  vnop (Delay Slot)
        // NOP operation, no action needed for VU0
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d8c) {
            ctx->pc = 0x279DE0u;
            goto label_279de0;
        }
    }
    ctx->pc = 0x279D94u;
    // 0x279d94: 0x4bf4ed98  vmulx.xyzw  $vf22, $vf29, $vf20x
    ctx->pc = 0x279d94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x279d98: 0x4bfab5a8  vadd.xyzw   $vf22, $vf22, $vf26
    ctx->pc = 0x279d98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x279d9c: 0x4bf6456c  vsub.xyzw   $vf21, $vf8, $vf22
    ctx->pc = 0x279d9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[22]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x279da0: 0x4bd5adea  vmul.xyz    $vf23, $vf21, $vf21
    ctx->pc = 0x279da0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x279da4: 0x4b17bdc1  vaddy.x     $vf23, $vf23, $vf23y
    ctx->pc = 0x279da4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x279da8: 0x4b17bdc2  vaddz.x     $vf23, $vf23, $vf23z
    ctx->pc = 0x279da8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x279dac: 0x4b1cbe07  vsubw.x     $vf24, $vf23, $vf28w
    ctx->pc = 0x279dacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x279db0: 0x4a1703bd  .word       0x4A1703BD                   # vsqrt       $Q, $vf23x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x279db0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x279db4: 0x4a0002ff  vnop
    ctx->pc = 0x279db4u;
    // NOP operation, no action needed for VU0
    // 0x279db8: 0x4a0002ff  vnop
    ctx->pc = 0x279db8u;
    // NOP operation, no action needed for VU0
    // 0x279dbc: 0x4a0002ff  vnop
    ctx->pc = 0x279dbcu;
    // NOP operation, no action needed for VU0
    // 0x279dc0: 0x48498800  cfc2.ni     $t1, $vi17
    ctx->pc = 0x279dc0u;
    SET_GPR_U32(ctx, 9, ctx->vu0_mac_flags);
    // 0x279dc4: 0x31280080  andi        $t0, $t1, 0x80
    ctx->pc = 0x279dc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
    // 0x279dc8: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x279DC8u;
    {
        const bool branch_taken_0x279dc8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DC8u;
        // 0x279dcc: 0xf8960000  sqc2        $vf22, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[22]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279dc8) {
            ctx->pc = 0x279E44u;
            goto label_279e44;
        }
    }
    ctx->pc = 0x279DD0u;
    // 0x279dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x279DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DD0u;
        // 0x279dd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279DD8u;
label_279dd8:
    // 0x279dd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x279DD8u;
    {
        const bool branch_taken_0x279dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DD8u;
        // 0x279ddc: 0x4bf4d33c  vmove.xyzw  $vf20, $vf26 (Delay Slot)
        { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], ctx->vu0_vf[26], _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279dd8) {
            ctx->pc = 0x279DE4u;
            goto label_279de4;
        }
    }
    ctx->pc = 0x279DE0u;
label_279de0:
    // 0x279de0: 0x4bf4db3c  vmove.xyzw  $vf20, $vf27
    ctx->pc = 0x279de0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], ctx->vu0_vf[27], _mm_castsi128_ps(mask)); }
label_279de4:
    // 0x279de4: 0x4bf4456c  vsub.xyzw   $vf21, $vf8, $vf20
    ctx->pc = 0x279de4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x279de8: 0x4bd5adaa  vmul.xyz    $vf22, $vf21, $vf21
    ctx->pc = 0x279de8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x279dec: 0x4b16b581  vaddy.x     $vf22, $vf22, $vf22y
    ctx->pc = 0x279decu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x279df0: 0x4b16b582  vaddz.x     $vf22, $vf22, $vf22z
    ctx->pc = 0x279df0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x279df4: 0x4a1603bd  .word       0x4A1603BD                   # vsqrt       $Q, $vf22x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x279df4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x279df8: 0x4a0003bf  vwaitq
    ctx->pc = 0x279df8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x279dfc: 0x4b00e5e4  vsubq.x     $vf23, $vf28, $Q
    ctx->pc = 0x279dfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x279e00: 0x4a0002ff  vnop
    ctx->pc = 0x279e00u;
    // NOP operation, no action needed for VU0
    // 0x279e04: 0x4a0002ff  vnop
    ctx->pc = 0x279e04u;
    // NOP operation, no action needed for VU0
    // 0x279e08: 0x4a0002ff  vnop
    ctx->pc = 0x279e08u;
    // NOP operation, no action needed for VU0
    // 0x279e0c: 0x4a0002ff  vnop
    ctx->pc = 0x279e0cu;
    // NOP operation, no action needed for VU0
    // 0x279e10: 0x48498800  cfc2.ni     $t1, $vi17
    ctx->pc = 0x279e10u;
    SET_GPR_U32(ctx, 9, ctx->vu0_mac_flags);
    // 0x279e14: 0x31280080  andi        $t0, $t1, 0x80
    ctx->pc = 0x279e14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
    // 0x279e18: 0x1500000a  bnez        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x279E18u;
    {
        const bool branch_taken_0x279e18 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x279E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E18u;
        // 0x279e1c: 0x4b0005a0  vaddq.x     $vf22, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e18) {
            ctx->pc = 0x279E44u;
            goto label_279e44;
        }
    }
    ctx->pc = 0x279E20u;
    // 0x279e20: 0x4a7603bc  vdiv        $Q, $vf0w, $vf22x
    ctx->pc = 0x279e20u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x279e24: 0x4a0003bf  vwaitq
    ctx->pc = 0x279e24u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x279e28: 0x4bc0ad5c  vmulq.xyz   $vf21, $vf21, $Q
    ctx->pc = 0x279e28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x279e2c: 0x4bdcad58  vmulx.xyz   $vf21, $vf21, $vf28x
    ctx->pc = 0x279e2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x279e30: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x279e30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x279e34: 0xf8950000  sqc2        $vf21, 0x0($a0)
    ctx->pc = 0x279e34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x279e38: 0xf8940000  sqc2        $vf20, 0x0($a0)
    ctx->pc = 0x279e38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x279e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x279E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E3Cu;
        // 0x279e40: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279E44u;
label_279e44:
    // 0x279e44: 0xf8880000  sqc2        $vf8, 0x0($a0)
    ctx->pc = 0x279e44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x279e48: 0x3e00008  jr          $ra
    ctx->pc = 0x279E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E48u;
        // 0x279e4c: 0x1020  add         $v0, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279E50u;
}
