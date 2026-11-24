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

// Function: sub_0029DBB0
// Address: 0x29dbb0 - 0x29de98
void sub_0029DBB0_0x29dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DBB0_0x29dbb0");
#endif

    switch (ctx->pc) {
        case 0x29dc0cu: goto label_29dc0c;
        case 0x29dcf8u: goto label_29dcf8;
        case 0x29dd08u: goto label_29dd08;
        case 0x29dd18u: goto label_29dd18;
        case 0x29dd34u: goto label_29dd34;
        case 0x29dd4cu: goto label_29dd4c;
        case 0x29dd98u: goto label_29dd98;
        case 0x29ddc0u: goto label_29ddc0;
        case 0x29ddecu: goto label_29ddec;
        case 0x29de10u: goto label_29de10;
        case 0x29de34u: goto label_29de34;
        case 0x29de58u: goto label_29de58;
        case 0x29de70u: goto label_29de70;
        default: break;
    }

    ctx->pc = 0x29dbb0u;

    // 0x29dbb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29dbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29dbb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29dbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29dbb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29dbbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29dbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29dbc0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29dbc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dbc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29dbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29dbc8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29dbc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dbcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29dbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29dbd0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29dbd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dbd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29dbd8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x29dbd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dbdc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29dbe0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x29dbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29dbe4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29DBE4u;
    {
        const bool branch_taken_0x29dbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBE4u;
        // 0x29dbe8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbe4) {
            ctx->pc = 0x29DBF8u;
            goto label_29dbf8;
        }
    }
    ctx->pc = 0x29DBECu;
    // 0x29dbec: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x29DBECu;
    {
        const bool branch_taken_0x29dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBECu;
        // 0x29dbf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbec) {
            ctx->pc = 0x29DE78u;
            goto label_29de78;
        }
    }
    ctx->pc = 0x29DBF4u;
    // 0x29dbf4: 0x0  nop
    ctx->pc = 0x29dbf4u;
    // NOP
label_29dbf8:
    // 0x29dbf8: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x29dbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x29dbfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29DBFCu;
    {
        const bool branch_taken_0x29dbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBFCu;
        // 0x29dc00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbfc) {
            ctx->pc = 0x29DC18u;
            goto label_29dc18;
        }
    }
    ctx->pc = 0x29DC04u;
    // 0x29dc04: 0xc0a8754  jal         func_2A1D50
    ctx->pc = 0x29DC04u;
    SET_GPR_U32(ctx, 31, 0x29DC0Cu);
    ctx->pc = 0x2A1D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1D50u, 0x29DC04u, 0x29DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC0Cu;
label_29dc0c:
    // 0x29dc0c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x29DC0Cu;
    {
        const bool branch_taken_0x29dc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dc0c) {
            ctx->pc = 0x29DD08u;
            goto label_29dd08;
        }
    }
    ctx->pc = 0x29DC14u;
    // 0x29dc14: 0x0  nop
    ctx->pc = 0x29dc14u;
    // NOP
label_29dc18:
    // 0x29dc18: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x29dc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x29dc1c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x29DC1Cu;
    {
        const bool branch_taken_0x29dc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dc1c) {
            ctx->pc = 0x29DD08u;
            goto label_29dd08;
        }
    }
    ctx->pc = 0x29DC24u;
    // 0x29dc24: 0x8e820088  lw          $v0, 0x88($s4)
    ctx->pc = 0x29dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x29dc28: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x29dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x29dc2c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x29dc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29dc30: 0x24636ba0  addiu       $v1, $v1, 0x6BA0
    ctx->pc = 0x29dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27552));
    // 0x29dc34: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x29dc34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29dc38: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x29dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x29dc3c: 0xc6800084  lwc1        $f0, 0x84($s4)
    ctx->pc = 0x29dc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dc40: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x29dc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x29dc44: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x29dc44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x29dc48: 0xd8a90000  lqc2        $vf9, 0x0($a1)
    ctx->pc = 0x29dc48u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29dc4c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x29dc4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29dc50: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x29dc50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x29dc54: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x29dc54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x29dc58: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x29dc58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x29dc5c: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x29dc5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29dc60: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x29dc60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29dc64: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x29dc64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29dc68: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x29dc68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29dc6c: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x29dc6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x29dc70: 0x4a0002ff  vnop
    ctx->pc = 0x29dc70u;
    // NOP operation, no action needed for VU0
    // 0x29dc74: 0x4a0002ff  vnop
    ctx->pc = 0x29dc74u;
    // NOP operation, no action needed for VU0
    // 0x29dc78: 0x4a0002ff  vnop
    ctx->pc = 0x29dc78u;
    // NOP operation, no action needed for VU0
    // 0x29dc7c: 0x4a0002ff  vnop
    ctx->pc = 0x29dc7cu;
    // NOP operation, no action needed for VU0
    // 0x29dc80: 0x4a0002ff  vnop
    ctx->pc = 0x29dc80u;
    // NOP operation, no action needed for VU0
    // 0x29dc84: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x29dc84u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x29dc88: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x29dc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x29dc8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29DC8Cu;
    {
        const bool branch_taken_0x29dc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC8Cu;
        // 0x29dc90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc8c) {
            ctx->pc = 0x29DCA0u;
            goto label_29dca0;
        }
    }
    ctx->pc = 0x29DC94u;
    // 0x29dc94: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x29DC94u;
    {
        const bool branch_taken_0x29dc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dc94) {
            ctx->pc = 0x29DE78u;
            goto label_29de78;
        }
    }
    ctx->pc = 0x29DC9Cu;
    // 0x29dc9c: 0x0  nop
    ctx->pc = 0x29dc9cu;
    // NOP
label_29dca0:
    // 0x29dca0: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x29dca0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x29dca4: 0xd8a90000  lqc2        $vf9, 0x0($a1)
    ctx->pc = 0x29dca4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29dca8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x29dca8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29dcac: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x29dcacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x29dcb0: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x29dcb0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x29dcb4: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x29dcb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x29dcb8: 0x4be9407f  vsubaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x29dcb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29dcbc: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x29dcbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29dcc0: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x29dcc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29dcc4: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x29dcc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29dcc8: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x29dcc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x29dccc: 0x4a0002ff  vnop
    ctx->pc = 0x29dcccu;
    // NOP operation, no action needed for VU0
    // 0x29dcd0: 0x4a0002ff  vnop
    ctx->pc = 0x29dcd0u;
    // NOP operation, no action needed for VU0
    // 0x29dcd4: 0x4a0002ff  vnop
    ctx->pc = 0x29dcd4u;
    // NOP operation, no action needed for VU0
    // 0x29dcd8: 0x4a0002ff  vnop
    ctx->pc = 0x29dcd8u;
    // NOP operation, no action needed for VU0
    // 0x29dcdc: 0x4a0002ff  vnop
    ctx->pc = 0x29dcdcu;
    // NOP operation, no action needed for VU0
    // 0x29dce0: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x29dce0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x29dce4: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x29dce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x29dce8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29DCE8u;
    {
        const bool branch_taken_0x29dce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29dce8) {
            ctx->pc = 0x29DD00u;
            goto label_29dd00;
        }
    }
    ctx->pc = 0x29DCF0u;
    // 0x29dcf0: 0xc0a8754  jal         func_2A1D50
    ctx->pc = 0x29DCF0u;
    SET_GPR_U32(ctx, 31, 0x29DCF8u);
    ctx->pc = 0x29DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DCF0u;
    // 0x29dcf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1D50u, 0x29DCF0u, 0x29DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCF8u;
label_29dcf8:
    // 0x29dcf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29DCF8u;
    {
        const bool branch_taken_0x29dcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dcf8) {
            ctx->pc = 0x29DD08u;
            goto label_29dd08;
        }
    }
    ctx->pc = 0x29DD00u;
label_29dd00:
    // 0x29dd00: 0xc0a8754  jal         func_2A1D50
    ctx->pc = 0x29DD00u;
    SET_GPR_U32(ctx, 31, 0x29DD08u);
    ctx->pc = 0x29DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD00u;
    // 0x29dd04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1D50u, 0x29DD00u, 0x29DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD08u;
label_29dd08:
    // 0x29dd08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29dd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29dd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd10: 0xc0a7c00  jal         func_29F000
    ctx->pc = 0x29DD10u;
    SET_GPR_U32(ctx, 31, 0x29DD18u);
    ctx->pc = 0x29DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD10u;
    // 0x29dd14: 0xaf938970  sw          $s3, -0x7690($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936944), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F000u, 0x29DD10u, 0x29DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD18u;
label_29dd18:
    // 0x29dd18: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x29DD18u;
    {
        const bool branch_taken_0x29dd18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dd18) {
            ctx->pc = 0x29DD40u;
            goto label_29dd40;
        }
    }
    ctx->pc = 0x29DD20u;
    // 0x29dd20: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x29dd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x29dd24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29dd24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd28: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29dd28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd2c: 0xc0a87a0  jal         func_2A1E80
    ctx->pc = 0x29DD2Cu;
    SET_GPR_U32(ctx, 31, 0x29DD34u);
    ctx->pc = 0x29DD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD2Cu;
    // 0x29dd30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1E80u, 0x29DD2Cu, 0x29DD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD34u;
label_29dd34:
    // 0x29dd34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29DD34u;
    {
        const bool branch_taken_0x29dd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dd34) {
            ctx->pc = 0x29DD50u;
            goto label_29dd50;
        }
    }
    ctx->pc = 0x29DD3Cu;
    // 0x29dd3c: 0x0  nop
    ctx->pc = 0x29dd3cu;
    // NOP
label_29dd40:
    // 0x29dd40: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x29dd40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x29dd44: 0xc0a876c  jal         func_2A1DB0
    ctx->pc = 0x29DD44u;
    SET_GPR_U32(ctx, 31, 0x29DD4Cu);
    ctx->pc = 0x29DD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD44u;
    // 0x29dd48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1DB0u, 0x29DD44u, 0x29DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD4Cu;
label_29dd4c:
    // 0x29dd4c: 0x0  nop
    ctx->pc = 0x29dd4cu;
    // NOP
label_29dd50:
    // 0x29dd50: 0x16000043  bnez        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x29DD50u;
    {
        const bool branch_taken_0x29dd50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD50u;
        // 0x29dd54: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd50) {
            ctx->pc = 0x29DE60u;
            goto label_29de60;
        }
    }
    ctx->pc = 0x29DD58u;
    // 0x29dd58: 0x8c22ceec  lw          $v0, -0x3114($at)
    ctx->pc = 0x29dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954732)));
    // 0x29dd5c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x29dd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x29dd60: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x29DD60u;
    {
        const bool branch_taken_0x29dd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dd60) {
            ctx->pc = 0x29DE10u;
            goto label_29de10;
        }
    }
    ctx->pc = 0x29DD68u;
    // 0x29dd68: 0x12600029  beqz        $s3, . + 4 + (0x29 << 2)
    ctx->pc = 0x29DD68u;
    {
        const bool branch_taken_0x29dd68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dd68) {
            ctx->pc = 0x29DE10u;
            goto label_29de10;
        }
    }
    ctx->pc = 0x29DD70u;
    // 0x29dd70: 0x92650003  lbu         $a1, 0x3($s3)
    ctx->pc = 0x29dd70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x29dd74: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x29dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x29dd78: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x29dd78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x29dd7c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x29dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x29dd80: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x29dd80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x29dd84: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x29dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x29dd88: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x29dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x29dd8c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x29dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29dd90: 0xc04cd08  jal         func_133420
    ctx->pc = 0x29DD90u;
    SET_GPR_U32(ctx, 31, 0x29DD98u);
    ctx->pc = 0x29DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD90u;
    // 0x29dd94: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133420u, 0x29DD90u, 0x29DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD98u;
label_29dd98:
    // 0x29dd98: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x29dd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x29dd9c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x29dd9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x29dda0: 0x2c410015  sltiu       $at, $v0, 0x15
    ctx->pc = 0x29dda0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x29dda4: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x29DDA4u;
    {
        const bool branch_taken_0x29dda4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDA4u;
        // 0x29dda8: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dda4) {
            ctx->pc = 0x29DE10u;
            goto label_29de10;
        }
    }
    ctx->pc = 0x29DDACu;
    // 0x29ddac: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x29ddacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ddb0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x29ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x29ddb4: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x29ddb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x29ddb8: 0xc04ca60  jal         func_132980
    ctx->pc = 0x29DDB8u;
    SET_GPR_U32(ctx, 31, 0x29DDC0u);
    ctx->pc = 0x29DDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DDB8u;
    // 0x29ddbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132980u, 0x29DDB8u, 0x29DDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DDC0u;
label_29ddc0:
    // 0x29ddc0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29DDC0u;
    {
        const bool branch_taken_0x29ddc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ddc0) {
            ctx->pc = 0x29DE10u;
            goto label_29de10;
        }
    }
    ctx->pc = 0x29DDC8u;
    // 0x29ddc8: 0x96622ac2  lhu         $v0, 0x2AC2($s3)
    ctx->pc = 0x29ddc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10946)));
    // 0x29ddcc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x29ddccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29ddd0: 0x14470009  bne         $v0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x29DDD0u;
    {
        const bool branch_taken_0x29ddd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x29ddd0) {
            ctx->pc = 0x29DDF8u;
            goto label_29ddf8;
        }
    }
    ctx->pc = 0x29DDD8u;
    // 0x29ddd8: 0x8e85012c  lw          $a1, 0x12C($s4)
    ctx->pc = 0x29ddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x29dddc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x29dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x29dde0: 0x8e860130  lw          $a2, 0x130($s4)
    ctx->pc = 0x29dde0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x29dde4: 0xc04c090  jal         func_130240
    ctx->pc = 0x29DDE4u;
    SET_GPR_U32(ctx, 31, 0x29DDECu);
    ctx->pc = 0x29DDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DDE4u;
    // 0x29dde8: 0x24846d20  addiu       $a0, $a0, 0x6D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130240u, 0x29DDE4u, 0x29DDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DDECu;
label_29ddec:
    // 0x29ddec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29DDECu;
    {
        const bool branch_taken_0x29ddec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ddec) {
            ctx->pc = 0x29DE10u;
            goto label_29de10;
        }
    }
    ctx->pc = 0x29DDF4u;
    // 0x29ddf4: 0x0  nop
    ctx->pc = 0x29ddf4u;
    // NOP
label_29ddf8:
    // 0x29ddf8: 0x8e85012c  lw          $a1, 0x12C($s4)
    ctx->pc = 0x29ddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x29ddfc: 0x8e860130  lw          $a2, 0x130($s4)
    ctx->pc = 0x29ddfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x29de00: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x29de00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x29de04: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x29de04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x29de08: 0xc04c090  jal         func_130240
    ctx->pc = 0x29DE08u;
    SET_GPR_U32(ctx, 31, 0x29DE10u);
    ctx->pc = 0x29DE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE08u;
    // 0x29de0c: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130240u, 0x29DE08u, 0x29DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE10u;
label_29de10:
    // 0x29de10: 0x96622ac2  lhu         $v0, 0x2AC2($s3)
    ctx->pc = 0x29de10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10946)));
    // 0x29de14: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x29de14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29de18: 0x14470009  bne         $v0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x29DE18u;
    {
        const bool branch_taken_0x29de18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x29de18) {
            ctx->pc = 0x29DE40u;
            goto label_29de40;
        }
    }
    ctx->pc = 0x29DE20u;
    // 0x29de20: 0x8e85012c  lw          $a1, 0x12C($s4)
    ctx->pc = 0x29de20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x29de24: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x29de24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x29de28: 0x8e860130  lw          $a2, 0x130($s4)
    ctx->pc = 0x29de28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x29de2c: 0xc04c090  jal         func_130240
    ctx->pc = 0x29DE2Cu;
    SET_GPR_U32(ctx, 31, 0x29DE34u);
    ctx->pc = 0x29DE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE2Cu;
    // 0x29de30: 0x24846d20  addiu       $a0, $a0, 0x6D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130240u, 0x29DE2Cu, 0x29DE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE34u;
label_29de34:
    // 0x29de34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x29DE34u;
    {
        const bool branch_taken_0x29de34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29de34) {
            ctx->pc = 0x29DE70u;
            goto label_29de70;
        }
    }
    ctx->pc = 0x29DE3Cu;
    // 0x29de3c: 0x0  nop
    ctx->pc = 0x29de3cu;
    // NOP
label_29de40:
    // 0x29de40: 0x8e85012c  lw          $a1, 0x12C($s4)
    ctx->pc = 0x29de40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x29de44: 0x8e860130  lw          $a2, 0x130($s4)
    ctx->pc = 0x29de44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x29de48: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x29de48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x29de4c: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x29de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x29de50: 0xc04c090  jal         func_130240
    ctx->pc = 0x29DE50u;
    SET_GPR_U32(ctx, 31, 0x29DE58u);
    ctx->pc = 0x29DE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE50u;
    // 0x29de54: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130240u, 0x29DE50u, 0x29DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE58u;
label_29de58:
    // 0x29de58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29DE58u;
    {
        const bool branch_taken_0x29de58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29de58) {
            ctx->pc = 0x29DE70u;
            goto label_29de70;
        }
    }
    ctx->pc = 0x29DE60u;
label_29de60:
    // 0x29de60: 0x8e85012c  lw          $a1, 0x12C($s4)
    ctx->pc = 0x29de60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x29de64: 0x8e860130  lw          $a2, 0x130($s4)
    ctx->pc = 0x29de64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x29de68: 0xc05e480  jal         func_179200
    ctx->pc = 0x29DE68u;
    SET_GPR_U32(ctx, 31, 0x29DE70u);
    ctx->pc = 0x29DE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE68u;
    // 0x29de6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179200u, 0x29DE68u, 0x29DE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE70u;
label_29de70:
    // 0x29de70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29de70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29de74: 0x0  nop
    ctx->pc = 0x29de74u;
    // NOP
label_29de78:
    // 0x29de78: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29de78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29de7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29de7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29de80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29de80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29de84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29de84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29de88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29de88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29de8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29de8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29de90: 0x3e00008  jr          $ra
    ctx->pc = 0x29DE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE90u;
        // 0x29de94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DE98u;
}
