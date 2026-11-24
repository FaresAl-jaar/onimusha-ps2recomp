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

// Function: sub_00166F80
// Address: 0x166f80 - 0x167328
void sub_00166F80_0x166f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166F80_0x166f80");
#endif

    switch (ctx->pc) {
        case 0x167000u: goto label_167000;
        case 0x167010u: goto label_167010;
        case 0x167028u: goto label_167028;
        case 0x1670bcu: goto label_1670bc;
        case 0x1670f8u: goto label_1670f8;
        case 0x167110u: goto label_167110;
        case 0x167144u: goto label_167144;
        case 0x167164u: goto label_167164;
        case 0x1671f0u: goto label_1671f0;
        case 0x16721cu: goto label_16721c;
        case 0x167288u: goto label_167288;
        case 0x1672b8u: goto label_1672b8;
        case 0x1672f4u: goto label_1672f4;
        default: break;
    }

    ctx->pc = 0x166f80u;

    // 0x166f80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x166f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x166f84: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x166f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x166f88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x166f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x166f8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x166f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x166f90: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x166f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x166f94: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x166f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x166f98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x166f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x166f9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x166f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x166fa0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x166fa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166fa4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x166fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x166fa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x166fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x166fac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x166fb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166fb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166fb8: 0x9030cea4  lbu         $s0, -0x315C($at)
    ctx->pc = 0x166fb8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x166fbc: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x166fbcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x166fc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x166fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x166fc4: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x166fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x166fc8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x166fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x166fcc: 0x146000ca  bnez        $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x166FCCu;
    {
        const bool branch_taken_0x166fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x166FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FCCu;
        // 0x166fd0: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166fcc) {
            ctx->pc = 0x1672F8u;
            goto label_1672f8;
        }
    }
    ctx->pc = 0x166FD4u;
    // 0x166fd4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x166fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x166fd8: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x166fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x166fdc: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x166fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095B4u));
    // 0x166fe0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x166fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x166fe4: 0x8e74007c  lw          $s4, 0x7C($s3)
    ctx->pc = 0x166fe4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x166fe8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x166fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x166fec: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x166fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x166ff0: 0x27a700cc  addiu       $a3, $sp, 0xCC
    ctx->pc = 0x166ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x166ff4: 0x24750010  addiu       $s5, $v1, 0x10
    ctx->pc = 0x166ff4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x166ff8: 0xc04d81c  jal         func_136070
    ctx->pc = 0x166FF8u;
    SET_GPR_U32(ctx, 31, 0x167000u);
    ctx->pc = 0x166FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166FF8u;
    // 0x166ffc: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136070u, 0x166FF8u, 0x167000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167000u;
label_167000:
    // 0x167000: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x167000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x167004: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x167004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167008: 0xc0c0fb8  jal         func_303EE0
    ctx->pc = 0x167008u;
    SET_GPR_U32(ctx, 31, 0x167010u);
    ctx->pc = 0x16700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167008u;
    // 0x16700c: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303EE0u, 0x167008u, 0x167010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167010u;
label_167010:
    // 0x167010: 0xaec221a0  sw          $v0, 0x21A0($s6)
    ctx->pc = 0x167010u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8608), GPR_U32(ctx, 2));
    // 0x167014: 0x10b880  sll         $s7, $s0, 2
    ctx->pc = 0x167014u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x167018: 0x96620068  lhu         $v0, 0x68($s3)
    ctx->pc = 0x167018u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x16701c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16701cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167020: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x167020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167024: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x167024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_167028:
    // 0x167028: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x167028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x16702c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x16702cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x167030: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x167030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x167034: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x167034u;
    {
        const bool branch_taken_0x167034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167034u;
        // 0x167038: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167034) {
            ctx->pc = 0x1671F0u;
            goto label_1671f0;
        }
    }
    ctx->pc = 0x16703Cu;
    // 0x16703c: 0x24426ba0  addiu       $v0, $v0, 0x6BA0
    ctx->pc = 0x16703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27552));
    // 0x167040: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x167040u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x167044: 0xdaa90000  lqc2        $vf9, 0x0($s5)
    ctx->pc = 0x167044u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x167048: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x167048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16704c: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x16704cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x167050: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x167050u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x167054: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x167054u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x167058: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x167058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16705c: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x16705cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x167060: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x167060u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x167064: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x167064u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x167068: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x167068u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x16706c: 0x4a0002ff  vnop
    ctx->pc = 0x16706cu;
    // NOP operation, no action needed for VU0
    // 0x167070: 0x4a0002ff  vnop
    ctx->pc = 0x167070u;
    // NOP operation, no action needed for VU0
    // 0x167074: 0x4a0002ff  vnop
    ctx->pc = 0x167074u;
    // NOP operation, no action needed for VU0
    // 0x167078: 0x4a0002ff  vnop
    ctx->pc = 0x167078u;
    // NOP operation, no action needed for VU0
    // 0x16707c: 0x4a0002ff  vnop
    ctx->pc = 0x16707cu;
    // NOP operation, no action needed for VU0
    // 0x167080: 0x48448800  cfc2.ni     $a0, $vi17
    ctx->pc = 0x167080u;
    SET_GPR_U32(ctx, 4, ctx->vu0_mac_flags);
    // 0x167084: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x167084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x167088: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167088u;
    {
        const bool branch_taken_0x167088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167088u;
        // 0x16708c: 0x308300f0  andi        $v1, $a0, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167088) {
            ctx->pc = 0x167098u;
            goto label_167098;
        }
    }
    ctx->pc = 0x167090u;
    // 0x167090: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x167090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167094: 0x0  nop
    ctx->pc = 0x167094u;
    // NOP
label_167098:
    // 0x167098: 0x14600055  bnez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x167098u;
    {
        const bool branch_taken_0x167098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167098u;
        // 0x16709c: 0x3c060069  lui         $a2, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167098) {
            ctx->pc = 0x1671F0u;
            goto label_1671f0;
        }
    }
    ctx->pc = 0x1670A0u;
    // 0x1670a0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1670a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1670a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1670a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1670a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1670a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670ac: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x1670acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x1670b0: 0x34471cec  ori         $a3, $v0, 0x1CEC
    ctx->pc = 0x1670b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7404);
    // 0x1670b4: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x1670B4u;
    SET_GPR_U32(ctx, 31, 0x1670BCu);
    ctx->pc = 0x1670B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670B4u;
    // 0x1670b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x1670B4u, 0x1670BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1670BCu;
label_1670bc:
    // 0x1670bc: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1670bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1670c0: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1670c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1670c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1670C4u;
    {
        const bool branch_taken_0x1670c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1670C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670C4u;
        // 0x1670c8: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670c4) {
            ctx->pc = 0x1670D8u;
            goto label_1670d8;
        }
    }
    ctx->pc = 0x1670CCu;
    // 0x1670cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1670CCu;
    {
        const bool branch_taken_0x1670cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1670cc) {
            ctx->pc = 0x167100u;
            goto label_167100;
        }
    }
    ctx->pc = 0x1670D4u;
    // 0x1670d4: 0x0  nop
    ctx->pc = 0x1670d4u;
    // NOP
label_1670d8:
    // 0x1670d8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1670d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1670dc: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1670dcu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1670e0: 0x8ec221a0  lw          $v0, 0x21A0($s6)
    ctx->pc = 0x1670e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8608)));
    // 0x1670e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1670E4u;
    {
        const bool branch_taken_0x1670e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1670E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670E4u;
        // 0x1670e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670e4) {
            ctx->pc = 0x167100u;
            goto label_167100;
        }
    }
    ctx->pc = 0x1670ECu;
    // 0x1670ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1670ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670f0: 0xc059ce8  jal         func_1673A0
    ctx->pc = 0x1670F0u;
    SET_GPR_U32(ctx, 31, 0x1670F8u);
    ctx->pc = 0x1670F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670F0u;
    // 0x1670f4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1673A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1673A0u, 0x1670F0u, 0x1670F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1670F8u;
label_1670f8:
    // 0x1670f8: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1670f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1670fc: 0x0  nop
    ctx->pc = 0x1670fcu;
    // NOP
label_167100:
    // 0x167100: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x167100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x167104: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x167104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167108: 0xc0a874c  jal         func_2A1D30
    ctx->pc = 0x167108u;
    SET_GPR_U32(ctx, 31, 0x167110u);
    ctx->pc = 0x16710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167108u;
    // 0x16710c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1D30u, 0x167108u, 0x167110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167110u;
label_167110:
    // 0x167110: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x167110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x167114: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x167114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x167118: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x167118u;
    {
        const bool branch_taken_0x167118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167118) {
            ctx->pc = 0x167148u;
            goto label_167148;
        }
    }
    ctx->pc = 0x167120u;
    // 0x167120: 0x96a7002e  lhu         $a3, 0x2E($s5)
    ctx->pc = 0x167120u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 46)));
    // 0x167124: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x167124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167128: 0x86ab002c  lh          $t3, 0x2C($s5)
    ctx->pc = 0x167128u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x16712c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16712cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x167130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167134: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x167134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167138: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x167138u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16713c: 0xc0a8724  jal         func_2A1C90
    ctx->pc = 0x16713Cu;
    SET_GPR_U32(ctx, 31, 0x167144u);
    ctx->pc = 0x167140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16713Cu;
    // 0x167140: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1C90u, 0x16713Cu, 0x167144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167144u;
label_167144:
    // 0x167144: 0x0  nop
    ctx->pc = 0x167144u;
    // NOP
label_167148:
    // 0x167148: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x167148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x16714c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16714cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x167150: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x167150u;
    {
        const bool branch_taken_0x167150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167150u;
        // 0x167154: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167150) {
            ctx->pc = 0x1671F0u;
            goto label_1671f0;
        }
    }
    ctx->pc = 0x167158u;
    // 0x167158: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x167158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x16715c: 0xc05e360  jal         func_178D80
    ctx->pc = 0x16715Cu;
    SET_GPR_U32(ctx, 31, 0x167164u);
    ctx->pc = 0x167160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16715Cu;
    // 0x167160: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x16715Cu, 0x167164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167164u;
label_167164:
    // 0x167164: 0x268400f0  addiu       $a0, $s4, 0xF0
    ctx->pc = 0x167164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
    // 0x167168: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x167168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x16716c: 0x4213c  dsll32      $a0, $a0, 4
    ctx->pc = 0x16716cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 4));
    // 0x167170: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x167170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x167174: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x167174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x167178: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x167178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x16717c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x16717cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x167180: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x167180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x167184: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x167184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x167188: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x167188u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x16718c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x16718cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x167190: 0x34640005  ori         $a0, $v1, 0x5
    ctx->pc = 0x167190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x167194: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x167194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x167198: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x167198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x16719c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16719cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1671a0: 0x92880002  lbu         $t0, 0x2($s4)
    ctx->pc = 0x1671a0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1671a4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1671a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671a8: 0x8e670118  lw          $a3, 0x118($s3)
    ctx->pc = 0x1671a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x1671ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1671acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671b0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1671b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1671b4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1671b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1671b8: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1671b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1671bc: 0xdce70000  ld          $a3, 0x0($a3)
    ctx->pc = 0x1671bcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1671c0: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x1671c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x1671c4: 0xfc400018  sd          $zero, 0x18($v0)
    ctx->pc = 0x1671c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
    // 0x1671c8: 0x8e67007c  lw          $a3, 0x7C($s3)
    ctx->pc = 0x1671c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x1671cc: 0x2e73821  addu        $a3, $s7, $a3
    ctx->pc = 0x1671ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 7)));
    // 0x1671d0: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x1671d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x1671d4: 0x8ce70088  lw          $a3, 0x88($a3)
    ctx->pc = 0x1671d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x1671d8: 0xdce70000  ld          $a3, 0x0($a3)
    ctx->pc = 0x1671d8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1671dc: 0xfc470020  sd          $a3, 0x20($v0)
    ctx->pc = 0x1671dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 7));
    // 0x1671e0: 0xfc400028  sd          $zero, 0x28($v0)
    ctx->pc = 0x1671e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 0));
    // 0x1671e4: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x1671e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x1671e8: 0xc05e480  jal         func_179200
    ctx->pc = 0x1671E8u;
    SET_GPR_U32(ctx, 31, 0x1671F0u);
    ctx->pc = 0x1671ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1671E8u;
    // 0x1671ec: 0xfc400038  sd          $zero, 0x38($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179200u, 0x1671E8u, 0x1671F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1671F0u;
label_1671f0:
    // 0x1671f0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1671f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1671f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1671f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1671f8: 0x269401f0  addiu       $s4, $s4, 0x1F0
    ctx->pc = 0x1671f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 496));
    // 0x1671fc: 0x26b50050  addiu       $s5, $s5, 0x50
    ctx->pc = 0x1671fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x167200: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x167200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x167204: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x167204u;
    {
        const bool branch_taken_0x167204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167204u;
        // 0x167208: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167204) {
            ctx->pc = 0x167028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167028;
        }
    }
    ctx->pc = 0x16720Cu;
    // 0x16720c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x16720cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x167210: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x167210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x167214: 0xc05e360  jal         func_178D80
    ctx->pc = 0x167214u;
    SET_GPR_U32(ctx, 31, 0x16721Cu);
    ctx->pc = 0x167218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167214u;
    // 0x167218: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x167214u, 0x16721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16721Cu;
label_16721c:
    // 0x16721c: 0x2f36021  addu        $t4, $s7, $s3
    ctx->pc = 0x16721cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x167220: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x167220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x167224: 0x8d8500f8  lw          $a1, 0xF8($t4)
    ctx->pc = 0x167224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 248)));
    // 0x167228: 0x346a0003  ori         $t2, $v1, 0x3
    ctx->pc = 0x167228u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x16722c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x16722cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x167230: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x167230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x167234: 0x34690003  ori         $t1, $v1, 0x3
    ctx->pc = 0x167234u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x167238: 0x24470020  addiu       $a3, $v0, 0x20
    ctx->pc = 0x167238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16723c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x16723cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x167240: 0x34680008  ori         $t0, $v1, 0x8
    ctx->pc = 0x167240u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x167244: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x167244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x167248: 0x5593c  dsll32      $t3, $a1, 4
    ctx->pc = 0x167248u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) << (32 + 4));
    // 0x16724c: 0x34640404  ori         $a0, $v1, 0x404
    ctx->pc = 0x16724cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x167250: 0xb593e  dsrl32      $t3, $t3, 4
    ctx->pc = 0x167250u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 4));
    // 0x167254: 0x3c036c08  lui         $v1, 0x6C08
    ctx->pc = 0x167254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27656 << 16));
    // 0x167258: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x167258u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x16725c: 0x346303f8  ori         $v1, $v1, 0x3F8
    ctx->pc = 0x16725cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1016);
    // 0x167260: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x167260u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x167264: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x167264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x167268: 0xfc4a0000  sd          $t2, 0x0($v0)
    ctx->pc = 0x167268u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 10));
    // 0x16726c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x16726cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x167270: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x167270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
    // 0x167274: 0xfc480010  sd          $t0, 0x10($v0)
    ctx->pc = 0x167274u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 8));
    // 0x167278: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x167278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x16727c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x16727cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x167280: 0x8d880100  lw          $t0, 0x100($t4)
    ctx->pc = 0x167280u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 256)));
    // 0x167284: 0x0  nop
    ctx->pc = 0x167284u;
    // NOP
label_167288:
    // 0x167288: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x167288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16728c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x16728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x167290: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x167290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x167294: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x167294u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x167298: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x167298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x16729c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x16729cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1672a0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1672A0u;
    {
        const bool branch_taken_0x1672a0 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x1672A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672A0u;
        // 0x1672a4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672a0) {
            ctx->pc = 0x167288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167288;
        }
    }
    ctx->pc = 0x1672A8u;
    // 0x1672a8: 0x2f31821  addu        $v1, $s7, $s3
    ctx->pc = 0x1672a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x1672ac: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1672acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1672b0: 0x8c680108  lw          $t0, 0x108($v1)
    ctx->pc = 0x1672b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x1672b4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1672b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1672b8:
    // 0x1672b8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1672b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1672bc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1672bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1672c0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1672c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1672c4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1672c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1672c8: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1672c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1672cc: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1672ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1672d0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1672D0u;
    {
        const bool branch_taken_0x1672d0 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x1672D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672D0u;
        // 0x1672d4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672d0) {
            ctx->pc = 0x1672B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1672b8;
        }
    }
    ctx->pc = 0x1672D8u;
    // 0x1672d8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1672d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1672dc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1672dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672e0: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x1672e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x1672e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1672e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672e8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1672e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x1672ec: 0xc05e480  jal         func_179200
    ctx->pc = 0x1672ECu;
    SET_GPR_U32(ctx, 31, 0x1672F4u);
    ctx->pc = 0x1672F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672ECu;
    // 0x1672f0: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179200u, 0x1672ECu, 0x1672F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672F4u;
label_1672f4:
    // 0x1672f4: 0x0  nop
    ctx->pc = 0x1672f4u;
    // NOP
label_1672f8:
    // 0x1672f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1672f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1672fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1672fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x167300: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x167300u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x167304: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x167304u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167308: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x167308u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16730c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16730cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167310: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x167310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167314: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16731c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16731cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167320: 0x3e00008  jr          $ra
    ctx->pc = 0x167320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167320u;
        // 0x167324: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167328u;
}
