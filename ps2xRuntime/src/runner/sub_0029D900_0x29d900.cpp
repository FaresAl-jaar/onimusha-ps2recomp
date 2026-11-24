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

// Function: sub_0029D900
// Address: 0x29d900 - 0x29dbb0
void sub_0029D900_0x29d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D900_0x29d900");
#endif

    switch (ctx->pc) {
        case 0x29d95cu: goto label_29d95c;
        case 0x29da48u: goto label_29da48;
        case 0x29da58u: goto label_29da58;
        case 0x29da78u: goto label_29da78;
        case 0x29da8cu: goto label_29da8c;
        case 0x29daacu: goto label_29daac;
        case 0x29dac4u: goto label_29dac4;
        case 0x29db10u: goto label_29db10;
        case 0x29db38u: goto label_29db38;
        case 0x29db58u: goto label_29db58;
        case 0x29db70u: goto label_29db70;
        case 0x29db88u: goto label_29db88;
        default: break;
    }

    ctx->pc = 0x29d900u;

    // 0x29d900: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29d904: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29d908: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29d90c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29d910: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29d910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d914: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29d918: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29d918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d91c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d920: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29d920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d924: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d928: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x29d928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d92c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d930: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x29d930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29d934: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D934u;
    {
        const bool branch_taken_0x29d934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D934u;
        // 0x29d938: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d934) {
            ctx->pc = 0x29D948u;
            goto label_29d948;
        }
    }
    ctx->pc = 0x29D93Cu;
    // 0x29d93c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x29D93Cu;
    {
        const bool branch_taken_0x29d93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D93Cu;
        // 0x29d940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d93c) {
            ctx->pc = 0x29DB90u;
            goto label_29db90;
        }
    }
    ctx->pc = 0x29D944u;
    // 0x29d944: 0x0  nop
    ctx->pc = 0x29d944u;
    // NOP
label_29d948:
    // 0x29d948: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x29d948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x29d94c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29D94Cu;
    {
        const bool branch_taken_0x29d94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D94Cu;
        // 0x29d950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d94c) {
            ctx->pc = 0x29D968u;
            goto label_29d968;
        }
    }
    ctx->pc = 0x29D954u;
    // 0x29d954: 0xc0a8754  jal         func_2A1D50
    ctx->pc = 0x29D954u;
    SET_GPR_U32(ctx, 31, 0x29D95Cu);
    ctx->pc = 0x2A1D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1D50u, 0x29D954u, 0x29D95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D95Cu;
label_29d95c:
    // 0x29d95c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x29D95Cu;
    {
        const bool branch_taken_0x29d95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d95c) {
            ctx->pc = 0x29DA58u;
            goto label_29da58;
        }
    }
    ctx->pc = 0x29D964u;
    // 0x29d964: 0x0  nop
    ctx->pc = 0x29d964u;
    // NOP
label_29d968:
    // 0x29d968: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x29d968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x29d96c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x29D96Cu;
    {
        const bool branch_taken_0x29d96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d96c) {
            ctx->pc = 0x29DA58u;
            goto label_29da58;
        }
    }
    ctx->pc = 0x29D974u;
    // 0x29d974: 0x8e820088  lw          $v0, 0x88($s4)
    ctx->pc = 0x29d974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x29d978: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x29d978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x29d97c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x29d97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29d980: 0x24636ba0  addiu       $v1, $v1, 0x6BA0
    ctx->pc = 0x29d980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27552));
    // 0x29d984: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x29d984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d988: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x29d988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x29d98c: 0xc6800084  lwc1        $f0, 0x84($s4)
    ctx->pc = 0x29d98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d990: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x29d990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x29d994: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x29d994u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x29d998: 0xd8a90000  lqc2        $vf9, 0x0($a1)
    ctx->pc = 0x29d998u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29d99c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x29d99cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d9a0: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x29d9a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x29d9a4: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x29d9a4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x29d9a8: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x29d9a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x29d9ac: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x29d9acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29d9b0: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x29d9b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29d9b4: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x29d9b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29d9b8: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x29d9b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29d9bc: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x29d9bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x29d9c0: 0x4a0002ff  vnop
    ctx->pc = 0x29d9c0u;
    // NOP operation, no action needed for VU0
    // 0x29d9c4: 0x4a0002ff  vnop
    ctx->pc = 0x29d9c4u;
    // NOP operation, no action needed for VU0
    // 0x29d9c8: 0x4a0002ff  vnop
    ctx->pc = 0x29d9c8u;
    // NOP operation, no action needed for VU0
    // 0x29d9cc: 0x4a0002ff  vnop
    ctx->pc = 0x29d9ccu;
    // NOP operation, no action needed for VU0
    // 0x29d9d0: 0x4a0002ff  vnop
    ctx->pc = 0x29d9d0u;
    // NOP operation, no action needed for VU0
    // 0x29d9d4: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x29d9d4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x29d9d8: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x29d9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x29d9dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D9DCu;
    {
        const bool branch_taken_0x29d9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9DCu;
        // 0x29d9e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9dc) {
            ctx->pc = 0x29D9F0u;
            goto label_29d9f0;
        }
    }
    ctx->pc = 0x29D9E4u;
    // 0x29d9e4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x29D9E4u;
    {
        const bool branch_taken_0x29d9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d9e4) {
            ctx->pc = 0x29DB90u;
            goto label_29db90;
        }
    }
    ctx->pc = 0x29D9ECu;
    // 0x29d9ec: 0x0  nop
    ctx->pc = 0x29d9ecu;
    // NOP
label_29d9f0:
    // 0x29d9f0: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x29d9f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x29d9f4: 0xd8a90000  lqc2        $vf9, 0x0($a1)
    ctx->pc = 0x29d9f4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29d9f8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x29d9f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d9fc: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x29d9fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x29da00: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x29da00u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x29da04: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x29da04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x29da08: 0x4be9407f  vsubaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x29da08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29da0c: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x29da0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29da10: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x29da10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29da14: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x29da14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29da18: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x29da18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x29da1c: 0x4a0002ff  vnop
    ctx->pc = 0x29da1cu;
    // NOP operation, no action needed for VU0
    // 0x29da20: 0x4a0002ff  vnop
    ctx->pc = 0x29da20u;
    // NOP operation, no action needed for VU0
    // 0x29da24: 0x4a0002ff  vnop
    ctx->pc = 0x29da24u;
    // NOP operation, no action needed for VU0
    // 0x29da28: 0x4a0002ff  vnop
    ctx->pc = 0x29da28u;
    // NOP operation, no action needed for VU0
    // 0x29da2c: 0x4a0002ff  vnop
    ctx->pc = 0x29da2cu;
    // NOP operation, no action needed for VU0
    // 0x29da30: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x29da30u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x29da34: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x29da34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x29da38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29DA38u;
    {
        const bool branch_taken_0x29da38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29da38) {
            ctx->pc = 0x29DA50u;
            goto label_29da50;
        }
    }
    ctx->pc = 0x29DA40u;
    // 0x29da40: 0xc0a8754  jal         func_2A1D50
    ctx->pc = 0x29DA40u;
    SET_GPR_U32(ctx, 31, 0x29DA48u);
    ctx->pc = 0x29DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DA40u;
    // 0x29da44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1D50u, 0x29DA40u, 0x29DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DA48u;
label_29da48:
    // 0x29da48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29DA48u;
    {
        const bool branch_taken_0x29da48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29da48) {
            ctx->pc = 0x29DA58u;
            goto label_29da58;
        }
    }
    ctx->pc = 0x29DA50u;
label_29da50:
    // 0x29da50: 0xc0a8754  jal         func_2A1D50
    ctx->pc = 0x29DA50u;
    SET_GPR_U32(ctx, 31, 0x29DA58u);
    ctx->pc = 0x29DA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DA50u;
    // 0x29da54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1D50u, 0x29DA50u, 0x29DA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DA58u;
label_29da58:
    // 0x29da58: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x29DA58u;
    {
        const bool branch_taken_0x29da58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA58u;
        // 0x29da5c: 0xaf938970  sw          $s3, -0x7690($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936944), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da58) {
            ctx->pc = 0x29DA80u;
            goto label_29da80;
        }
    }
    ctx->pc = 0x29DA60u;
    // 0x29da60: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x29da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x29da64: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29da64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x29da68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29DA68u;
    {
        const bool branch_taken_0x29da68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA68u;
        // 0x29da6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da68) {
            ctx->pc = 0x29DA80u;
            goto label_29da80;
        }
    }
    ctx->pc = 0x29DA70u;
    // 0x29da70: 0xc0a7c00  jal         func_29F000
    ctx->pc = 0x29DA70u;
    SET_GPR_U32(ctx, 31, 0x29DA78u);
    ctx->pc = 0x29DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DA70u;
    // 0x29da74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F000u, 0x29DA70u, 0x29DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DA78u;
label_29da78:
    // 0x29da78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29DA78u;
    {
        const bool branch_taken_0x29da78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29da78) {
            ctx->pc = 0x29DA90u;
            goto label_29da90;
        }
    }
    ctx->pc = 0x29DA80u;
label_29da80:
    // 0x29da80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29da80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29da84: 0xc0a7c00  jal         func_29F000
    ctx->pc = 0x29DA84u;
    SET_GPR_U32(ctx, 31, 0x29DA8Cu);
    ctx->pc = 0x29DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DA84u;
    // 0x29da88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F000u, 0x29DA84u, 0x29DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DA8Cu;
label_29da8c:
    // 0x29da8c: 0x0  nop
    ctx->pc = 0x29da8cu;
    // NOP
label_29da90:
    // 0x29da90: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x29DA90u;
    {
        const bool branch_taken_0x29da90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x29da90) {
            ctx->pc = 0x29DAB8u;
            goto label_29dab8;
        }
    }
    ctx->pc = 0x29DA98u;
    // 0x29da98: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x29da98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x29da9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29da9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29daa0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29daa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29daa4: 0xc0a87a0  jal         func_2A1E80
    ctx->pc = 0x29DAA4u;
    SET_GPR_U32(ctx, 31, 0x29DAACu);
    ctx->pc = 0x29DAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DAA4u;
    // 0x29daa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1E80u, 0x29DAA4u, 0x29DAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DAACu;
label_29daac:
    // 0x29daac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29DAACu;
    {
        const bool branch_taken_0x29daac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29daac) {
            ctx->pc = 0x29DAC8u;
            goto label_29dac8;
        }
    }
    ctx->pc = 0x29DAB4u;
    // 0x29dab4: 0x0  nop
    ctx->pc = 0x29dab4u;
    // NOP
label_29dab8:
    // 0x29dab8: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x29dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x29dabc: 0xc0a876c  jal         func_2A1DB0
    ctx->pc = 0x29DABCu;
    SET_GPR_U32(ctx, 31, 0x29DAC4u);
    ctx->pc = 0x29DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DABCu;
    // 0x29dac0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1DB0u, 0x29DABCu, 0x29DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DAC4u;
label_29dac4:
    // 0x29dac4: 0x0  nop
    ctx->pc = 0x29dac4u;
    // NOP
label_29dac8:
    // 0x29dac8: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x29DAC8u;
    {
        const bool branch_taken_0x29dac8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAC8u;
        // 0x29dacc: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dac8) {
            ctx->pc = 0x29DB78u;
            goto label_29db78;
        }
    }
    ctx->pc = 0x29DAD0u;
    // 0x29dad0: 0x8c22ceec  lw          $v0, -0x3114($at)
    ctx->pc = 0x29dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954732)));
    // 0x29dad4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x29dad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x29dad8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29DAD8u;
    {
        const bool branch_taken_0x29dad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dad8) {
            ctx->pc = 0x29DB58u;
            goto label_29db58;
        }
    }
    ctx->pc = 0x29DAE0u;
    // 0x29dae0: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x29DAE0u;
    {
        const bool branch_taken_0x29dae0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dae0) {
            ctx->pc = 0x29DB58u;
            goto label_29db58;
        }
    }
    ctx->pc = 0x29DAE8u;
    // 0x29dae8: 0x92650003  lbu         $a1, 0x3($s3)
    ctx->pc = 0x29dae8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x29daec: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x29daecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x29daf0: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x29daf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x29daf4: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x29daf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x29daf8: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x29daf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x29dafc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x29dafcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x29db00: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x29db00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x29db04: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x29db04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29db08: 0xc04cd08  jal         func_133420
    ctx->pc = 0x29DB08u;
    SET_GPR_U32(ctx, 31, 0x29DB10u);
    ctx->pc = 0x29DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB08u;
    // 0x29db0c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133420u, 0x29DB08u, 0x29DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB10u;
label_29db10:
    // 0x29db10: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x29db10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x29db14: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x29db14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x29db18: 0x2c410015  sltiu       $at, $v0, 0x15
    ctx->pc = 0x29db18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x29db1c: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x29DB1Cu;
    {
        const bool branch_taken_0x29db1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB1Cu;
        // 0x29db20: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db1c) {
            ctx->pc = 0x29DB58u;
            goto label_29db58;
        }
    }
    ctx->pc = 0x29DB24u;
    // 0x29db24: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x29db24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29db28: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x29db28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x29db2c: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x29db2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x29db30: 0xc04ca60  jal         func_132980
    ctx->pc = 0x29DB30u;
    SET_GPR_U32(ctx, 31, 0x29DB38u);
    ctx->pc = 0x29DB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB30u;
    // 0x29db34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132980u, 0x29DB30u, 0x29DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB38u;
label_29db38:
    // 0x29db38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29DB38u;
    {
        const bool branch_taken_0x29db38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29db38) {
            ctx->pc = 0x29DB58u;
            goto label_29db58;
        }
    }
    ctx->pc = 0x29DB40u;
    // 0x29db40: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x29db40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x29db44: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x29db44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x29db48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29db48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db4c: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x29db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x29db50: 0xc04c090  jal         func_130240
    ctx->pc = 0x29DB50u;
    SET_GPR_U32(ctx, 31, 0x29DB58u);
    ctx->pc = 0x29DB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB50u;
    // 0x29db54: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130240u, 0x29DB50u, 0x29DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB58u;
label_29db58:
    // 0x29db58: 0x8e85012c  lw          $a1, 0x12C($s4)
    ctx->pc = 0x29db58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x29db5c: 0x8e860130  lw          $a2, 0x130($s4)
    ctx->pc = 0x29db5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x29db60: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x29db60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x29db64: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x29db64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x29db68: 0xc04c090  jal         func_130240
    ctx->pc = 0x29DB68u;
    SET_GPR_U32(ctx, 31, 0x29DB70u);
    ctx->pc = 0x29DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB68u;
    // 0x29db6c: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130240u, 0x29DB68u, 0x29DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB70u;
label_29db70:
    // 0x29db70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29DB70u;
    {
        const bool branch_taken_0x29db70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29db70) {
            ctx->pc = 0x29DB88u;
            goto label_29db88;
        }
    }
    ctx->pc = 0x29DB78u;
label_29db78:
    // 0x29db78: 0x8e85012c  lw          $a1, 0x12C($s4)
    ctx->pc = 0x29db78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x29db7c: 0x8e860130  lw          $a2, 0x130($s4)
    ctx->pc = 0x29db7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x29db80: 0xc05e480  jal         func_179200
    ctx->pc = 0x29DB80u;
    SET_GPR_U32(ctx, 31, 0x29DB88u);
    ctx->pc = 0x29DB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB80u;
    // 0x29db84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179200u, 0x29DB80u, 0x29DB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB88u;
label_29db88:
    // 0x29db88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29db88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29db8c: 0x0  nop
    ctx->pc = 0x29db8cu;
    // NOP
label_29db90:
    // 0x29db90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29db90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29db94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29db94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29db98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29db98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29db9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29db9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29dba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29dba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29dba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29dba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29dba8: 0x3e00008  jr          $ra
    ctx->pc = 0x29DBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBA8u;
        // 0x29dbac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DBB0u;
}
