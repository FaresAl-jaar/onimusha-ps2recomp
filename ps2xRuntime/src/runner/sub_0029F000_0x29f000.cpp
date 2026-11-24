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

// Function: sub_0029F000
// Address: 0x29f000 - 0x29f838
void sub_0029F000_0x29f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F000_0x29f000");
#endif

    switch (ctx->pc) {
        case 0x29f060u: goto label_29f060;
        case 0x29f12cu: goto label_29f12c;
        case 0x29f15cu: goto label_29f15c;
        case 0x29f19cu: goto label_29f19c;
        case 0x29f1f4u: goto label_29f1f4;
        case 0x29f218u: goto label_29f218;
        case 0x29f24cu: goto label_29f24c;
        case 0x29f294u: goto label_29f294;
        case 0x29f2b8u: goto label_29f2b8;
        case 0x29f2e0u: goto label_29f2e0;
        case 0x29f324u: goto label_29f324;
        case 0x29f36cu: goto label_29f36c;
        case 0x29f390u: goto label_29f390;
        case 0x29f3b0u: goto label_29f3b0;
        case 0x29f450u: goto label_29f450;
        case 0x29f4a0u: goto label_29f4a0;
        case 0x29f56cu: goto label_29f56c;
        case 0x29f5b0u: goto label_29f5b0;
        case 0x29f5f0u: goto label_29f5f0;
        case 0x29f638u: goto label_29f638;
        case 0x29f658u: goto label_29f658;
        case 0x29f6a8u: goto label_29f6a8;
        case 0x29f6e8u: goto label_29f6e8;
        case 0x29f744u: goto label_29f744;
        default: break;
    }

    ctx->pc = 0x29f000u;

    // 0x29f000: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x29f000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x29f004: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29f004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29f008: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x29f008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29f00c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x29f00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29f010: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29f010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x29f014: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29f014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29f018: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29f018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29f01c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29f01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29f020: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x29f020u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f024: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29f024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29f028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29f028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29f02c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29f030: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29f030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29f034: 0xa3a500cf  sb          $a1, 0xCF($sp)
    ctx->pc = 0x29f034u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 207), (uint8_t)GPR_U32(ctx, 5));
    // 0x29f038: 0x8c850078  lw          $a1, 0x78($a0)
    ctx->pc = 0x29f038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x29f03c: 0x8c94007c  lw          $s4, 0x7C($a0)
    ctx->pc = 0x29f03cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x29f040: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x29f040u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x29f044: 0x9032cea4  lbu         $s2, -0x315C($at)
    ctx->pc = 0x29f044u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x29f048: 0x24b30010  addiu       $s3, $a1, 0x10
    ctx->pc = 0x29f048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x29f04c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x29f04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x29f050: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x29f050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f054: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29f054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29f058: 0x8c760050  lw          $s6, 0x50($v1)
    ctx->pc = 0x29f058u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x29f05c: 0x0  nop
    ctx->pc = 0x29f05cu;
    // NOP
label_29f060:
    // 0x29f060: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x29f060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29f064: 0x106001dc  beqz        $v1, . + 4 + (0x1DC << 2)
    ctx->pc = 0x29F064u;
    {
        const bool branch_taken_0x29f064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f064) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F06Cu;
    // 0x29f06c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x29f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f070: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x29f070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x29f074: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29f074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29f078: 0x146001d7  bnez        $v1, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x29F078u;
    {
        const bool branch_taken_0x29f078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f078) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F080u;
    // 0x29f080: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x29f080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x29f084: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x29f084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x29f088: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F088u;
    {
        const bool branch_taken_0x29f088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f088) {
            ctx->pc = 0x29F0A0u;
            goto label_29f0a0;
        }
    }
    ctx->pc = 0x29F090u;
    // 0x29f090: 0x968300dc  lhu         $v1, 0xDC($s4)
    ctx->pc = 0x29f090u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x29f094: 0x106001d0  beqz        $v1, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x29F094u;
    {
        const bool branch_taken_0x29f094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f094) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F09Cu;
    // 0x29f09c: 0x0  nop
    ctx->pc = 0x29f09cu;
    // NOP
label_29f0a0:
    // 0x29f0a0: 0x93a300cf  lbu         $v1, 0xCF($sp)
    ctx->pc = 0x29f0a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 207)));
    // 0x29f0a4: 0x146001aa  bnez        $v1, . + 4 + (0x1AA << 2)
    ctx->pc = 0x29F0A4u;
    {
        const bool branch_taken_0x29f0a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f0a4) {
            ctx->pc = 0x29F750u;
            goto label_29f750;
        }
    }
    ctx->pc = 0x29F0ACu;
    // 0x29f0ac: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f0b0: 0x30632781  andi        $v1, $v1, 0x2781
    ctx->pc = 0x29f0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)10113);
    // 0x29f0b4: 0x106001a6  beqz        $v1, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x29F0B4u;
    {
        const bool branch_taken_0x29f0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f0b4) {
            ctx->pc = 0x29F750u;
            goto label_29f750;
        }
    }
    ctx->pc = 0x29F0BCu;
    // 0x29f0bc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x29f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x29f0c0: 0x92630019  lbu         $v1, 0x19($s3)
    ctx->pc = 0x29f0c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 25)));
    // 0x29f0c4: 0x34441f70  ori         $a0, $v0, 0x1F70
    ctx->pc = 0x29f0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8048);
    // 0x29f0c8: 0x8ea20128  lw          $v0, 0x128($s5)
    ctx->pc = 0x29f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
    // 0x29f0cc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x29f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x29f0d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29f0d4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x29f0d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29f0d8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x29f0d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29f0dc: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x29f0dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29f0e0: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x29f0e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x29f0e4: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x29f0e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29f0e8: 0x4be111bc  vmulax.xyzw $ACC, $vf2, $vf1x
    ctx->pc = 0x29f0e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29f0ec: 0x4be118bd  vmadday.xyzw $ACC, $vf3, $vf1y
    ctx->pc = 0x29f0ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29f0f0: 0x4be120be  vmaddaz.xyzw $ACC, $vf4, $vf1z
    ctx->pc = 0x29f0f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29f0f4: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x29f0f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x29f0f8: 0x4a0002ff  vnop
    ctx->pc = 0x29f0f8u;
    // NOP operation, no action needed for VU0
    // 0x29f0fc: 0x4a0002ff  vnop
    ctx->pc = 0x29f0fcu;
    // NOP operation, no action needed for VU0
    // 0x29f100: 0x4a0002ff  vnop
    ctx->pc = 0x29f100u;
    // NOP operation, no action needed for VU0
    // 0x29f104: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x29f104u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x29f108: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x29f108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x29f10c: 0x34451f70  ori         $a1, $v0, 0x1F70
    ctx->pc = 0x29f10cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8048);
    // 0x29f110: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x29f110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x29f114: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x29f114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x29f118: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x29f118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x29f11c: 0x34471cec  ori         $a3, $v0, 0x1CEC
    ctx->pc = 0x29f11cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7404);
    // 0x29f120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29f120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f124: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x29F124u;
    SET_GPR_U32(ctx, 31, 0x29F12Cu);
    ctx->pc = 0x29F128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F124u;
    // 0x29f128: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x29F124u, 0x29F12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F12Cu;
label_29f12c:
    // 0x29f12c: 0x8fb100d8  lw          $s1, 0xD8($sp)
    ctx->pc = 0x29f12cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29f130: 0x62001a9  bltz        $s1, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x29F130u;
    {
        const bool branch_taken_0x29f130 = (GPR_S64(ctx, 17) < 0);
        if (branch_taken_0x29f130) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F138u;
    // 0x29f138: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29f138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f13c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x29f13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x29f140: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x29F140u;
    {
        const bool branch_taken_0x29f140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F140u;
        // 0x29f144: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f140) {
            ctx->pc = 0x29F200u;
            goto label_29f200;
        }
    }
    ctx->pc = 0x29F148u;
    // 0x29f148: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x29f148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x29f14c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x29f14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x29f150: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x29f150u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x29f154: 0xc05e360  jal         func_178D80
    ctx->pc = 0x29F154u;
    SET_GPR_U32(ctx, 31, 0x29F15Cu);
    ctx->pc = 0x29F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F154u;
    // 0x29f158: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x29F154u, 0x29F15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F15Cu;
label_29f15c:
    // 0x29f15c: 0x92880002  lbu         $t0, 0x2($s4)
    ctx->pc = 0x29f15cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x29f160: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29f160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f164: 0x8ea30118  lw          $v1, 0x118($s5)
    ctx->pc = 0x29f164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x29f168: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29f168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f16c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x29f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29f170: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f174: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x29f174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x29f178: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f17c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x29f17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f180: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x29f180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f184: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x29f184u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x29f188: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29f188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29f18c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f190: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29f190u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f194: 0xc0a8ab8  jal         func_2A2AE0
    ctx->pc = 0x29F194u;
    SET_GPR_U32(ctx, 31, 0x29F19Cu);
    ctx->pc = 0x29F198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F194u;
    // 0x29f198: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2AE0u, 0x29F194u, 0x29F19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F19Cu;
label_29f19c:
    // 0x29f19c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x29f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f1a0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x29f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x29f1a4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29f1a8: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x29f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x29f1ac: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x29f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x29f1b0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x29f1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x29f1b4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f1b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29f1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29f1bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29F1BCu;
    {
        const bool branch_taken_0x29f1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f1bc) {
            ctx->pc = 0x29F1D0u;
            goto label_29f1d0;
        }
    }
    ctx->pc = 0x29F1C4u;
    // 0x29f1c4: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x29f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x29f1c8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x29f1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x29f1cc: 0x8e9000d0  lw          $s0, 0xD0($s4)
    ctx->pc = 0x29f1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
label_29f1d0:
    // 0x29f1d0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f1d4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x29f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29f1d8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x29f1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x29f1dc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x29f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x29f1e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29f1e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1e8: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x29f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x29f1ec: 0xc04c0bc  jal         func_1302F0
    ctx->pc = 0x29F1ECu;
    SET_GPR_U32(ctx, 31, 0x29F1F4u);
    ctx->pc = 0x29F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F1ECu;
    // 0x29f1f0: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1302F0u, 0x29F1ECu, 0x29F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1F4u;
label_29f1f4:
    // 0x29f1f4: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x29F1F4u;
    {
        const bool branch_taken_0x29f1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f1f4) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F1FCu;
    // 0x29f1fc: 0x0  nop
    ctx->pc = 0x29f1fcu;
    // NOP
label_29f200:
    // 0x29f200: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x29f200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x29f204: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x29F204u;
    {
        const bool branch_taken_0x29f204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F204u;
        // 0x29f208: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f204) {
            ctx->pc = 0x29F2C0u;
            goto label_29f2c0;
        }
    }
    ctx->pc = 0x29F20Cu;
    // 0x29f20c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x29f20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29f210: 0xc05e360  jal         func_178D80
    ctx->pc = 0x29F210u;
    SET_GPR_U32(ctx, 31, 0x29F218u);
    ctx->pc = 0x29F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F210u;
    // 0x29f214: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x29F210u, 0x29F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F218u;
label_29f218:
    // 0x29f218: 0x8ea30118  lw          $v1, 0x118($s5)
    ctx->pc = 0x29f218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x29f21c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29f21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f220: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29f220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f224: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29f224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f228: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x29f228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29f22c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f230: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x29f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x29f234: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x29f234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f238: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x29f238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f23c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x29f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x29f240: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29f240u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f244: 0xc0a8e2c  jal         func_2A38B0
    ctx->pc = 0x29F244u;
    SET_GPR_U32(ctx, 31, 0x29F24Cu);
    ctx->pc = 0x29F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F244u;
    // 0x29f248: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A38B0u, 0x29F244u, 0x29F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F24Cu;
label_29f24c:
    // 0x29f24c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x29f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f250: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x29f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x29f254: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29f254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29f258: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x29f258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x29f25c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x29f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x29f260: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x29f260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x29f264: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29f264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f268: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29f268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29f26c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29F26Cu;
    {
        const bool branch_taken_0x29f26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f26c) {
            ctx->pc = 0x29F2A0u;
            goto label_29f2a0;
        }
    }
    ctx->pc = 0x29F274u;
    // 0x29f274: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x29f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x29f278: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x29f278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x29f27c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29f27cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f280: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x29f280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x29f284: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x29f284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x29f288: 0x8e8500d0  lw          $a1, 0xD0($s4)
    ctx->pc = 0x29f288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x29f28c: 0xc04c0bc  jal         func_1302F0
    ctx->pc = 0x29F28Cu;
    SET_GPR_U32(ctx, 31, 0x29F294u);
    ctx->pc = 0x29F290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F28Cu;
    // 0x29f290: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1302F0u, 0x29F28Cu, 0x29F294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F294u;
label_29f294:
    // 0x29f294: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x29F294u;
    {
        const bool branch_taken_0x29f294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f294) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F29Cu;
    // 0x29f29c: 0x0  nop
    ctx->pc = 0x29f29cu;
    // NOP
label_29f2a0:
    // 0x29f2a0: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x29f2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x29f2a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29f2a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f2a8: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x29f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x29f2ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f2b0: 0xc04c0bc  jal         func_1302F0
    ctx->pc = 0x29F2B0u;
    SET_GPR_U32(ctx, 31, 0x29F2B8u);
    ctx->pc = 0x29F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F2B0u;
    // 0x29f2b4: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1302F0u, 0x29F2B0u, 0x29F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2B8u;
label_29f2b8:
    // 0x29f2b8: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x29F2B8u;
    {
        const bool branch_taken_0x29f2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f2b8) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F2C0u;
label_29f2c0:
    // 0x29f2c0: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x29f2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x29f2c4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x29F2C4u;
    {
        const bool branch_taken_0x29f2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2C4u;
        // 0x29f2c8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f2c4) {
            ctx->pc = 0x29F398u;
            goto label_29f398;
        }
    }
    ctx->pc = 0x29F2CCu;
    // 0x29f2cc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x29f2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x29f2d0: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x29f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x29f2d4: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x29f2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x29f2d8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x29F2D8u;
    SET_GPR_U32(ctx, 31, 0x29F2E0u);
    ctx->pc = 0x29F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F2D8u;
    // 0x29f2dc: 0x24050140  addiu       $a1, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x29F2D8u, 0x29F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2E0u;
label_29f2e0:
    // 0x29f2e0: 0x92890002  lbu         $t1, 0x2($s4)
    ctx->pc = 0x29f2e0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x29f2e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29f2e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f2e8: 0x8ea30118  lw          $v1, 0x118($s5)
    ctx->pc = 0x29f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x29f2ec: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f2f0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x29f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29f2f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29f2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f2f8: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x29f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x29f2fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f300: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x29f300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f304: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x29f304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f308: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x29f308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f30c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x29f30cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x29f310: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x29f310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29f314: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f318: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29f318u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f31c: 0xc0a8bc0  jal         func_2A2F00
    ctx->pc = 0x29F31Cu;
    SET_GPR_U32(ctx, 31, 0x29F324u);
    ctx->pc = 0x29F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F31Cu;
    // 0x29f320: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2F00u, 0x29F31Cu, 0x29F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F324u;
label_29f324:
    // 0x29f324: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x29f324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f328: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x29f328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x29f32c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29f330: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x29f330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x29f334: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x29f334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x29f338: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x29f338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x29f33c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f340: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29f340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29f344: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29F344u;
    {
        const bool branch_taken_0x29f344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f344) {
            ctx->pc = 0x29F378u;
            goto label_29f378;
        }
    }
    ctx->pc = 0x29F34Cu;
    // 0x29f34c: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x29f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x29f350: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x29f350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x29f354: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x29f354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x29f358: 0x26060130  addiu       $a2, $s0, 0x130
    ctx->pc = 0x29f358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x29f35c: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x29f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x29f360: 0x8e8500d0  lw          $a1, 0xD0($s4)
    ctx->pc = 0x29f360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x29f364: 0xc04c0bc  jal         func_1302F0
    ctx->pc = 0x29F364u;
    SET_GPR_U32(ctx, 31, 0x29F36Cu);
    ctx->pc = 0x29F368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F364u;
    // 0x29f368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1302F0u, 0x29F364u, 0x29F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F36Cu;
label_29f36c:
    // 0x29f36c: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x29F36Cu;
    {
        const bool branch_taken_0x29f36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f36c) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F374u;
    // 0x29f374: 0x0  nop
    ctx->pc = 0x29f374u;
    // NOP
label_29f378:
    // 0x29f378: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x29f378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x29f37c: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x29f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x29f380: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f384: 0x26060130  addiu       $a2, $s0, 0x130
    ctx->pc = 0x29f384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x29f388: 0xc04c0bc  jal         func_1302F0
    ctx->pc = 0x29F388u;
    SET_GPR_U32(ctx, 31, 0x29F390u);
    ctx->pc = 0x29F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F388u;
    // 0x29f38c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1302F0u, 0x29F388u, 0x29F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F390u;
label_29f390:
    // 0x29f390: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x29F390u;
    {
        const bool branch_taken_0x29f390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f390) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F398u;
label_29f398:
    // 0x29f398: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x29f398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x29f39c: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x29F39Cu;
    {
        const bool branch_taken_0x29f39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F39Cu;
        // 0x29f3a0: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f39c) {
            ctx->pc = 0x29F590u;
            goto label_29f590;
        }
    }
    ctx->pc = 0x29F3A4u;
    // 0x29f3a4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x29f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x29f3a8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x29F3A8u;
    SET_GPR_U32(ctx, 31, 0x29F3B0u);
    ctx->pc = 0x29F3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F3A8u;
    // 0x29f3ac: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x29F3A8u, 0x29F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F3B0u;
label_29f3b0:
    // 0x29f3b0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x29f3b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f3b4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x29f3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f3b8: 0x26f00020  addiu       $s0, $s7, 0x20
    ctx->pc = 0x29f3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x29f3bc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29f3c0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x29f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x29f3c4: 0x3c0a2000  lui         $t2, 0x2000
    ctx->pc = 0x29f3c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8192 << 16));
    // 0x29f3c8: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x29f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x29f3cc: 0x3c096000  lui         $t1, 0x6000
    ctx->pc = 0x29f3ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24576 << 16));
    // 0x29f3d0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x29f3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29f3d4: 0x8c670068  lw          $a3, 0x68($v1)
    ctx->pc = 0x29f3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x29f3d8: 0x249e01a0  addiu       $fp, $a0, 0x1A0
    ctx->pc = 0x29f3d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x29f3dc: 0x26e40010  addiu       $a0, $s7, 0x10
    ctx->pc = 0x29f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x29f3e0: 0x7593c  dsll32      $t3, $a3, 4
    ctx->pc = 0x29f3e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << (32 + 4));
    // 0x29f3e4: 0x4293c  dsll32      $a1, $a0, 4
    ctx->pc = 0x29f3e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 4));
    // 0x29f3e8: 0xb593e  dsrl32      $t3, $t3, 4
    ctx->pc = 0x29f3e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 4));
    // 0x29f3ec: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x29f3ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x29f3f0: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x29f3f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x29f3f4: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x29f3f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x29f3f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29f3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f3fc: 0xca4025  or          $t0, $a2, $t2
    ctx->pc = 0x29f3fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x29f400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f404: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x29f404u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x29f408: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x29f408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f40c: 0xfc4a0000  sd          $t2, 0x0($v0)
    ctx->pc = 0x29f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 10));
    // 0x29f410: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x29f410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f414: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x29f414u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x29f418: 0xfc490010  sd          $t1, 0x10($v0)
    ctx->pc = 0x29f418u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 9));
    // 0x29f41c: 0xfc400018  sd          $zero, 0x18($v0)
    ctx->pc = 0x29f41cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
    // 0x29f420: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x29f420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x29f424: 0xfc480010  sd          $t0, 0x10($v0)
    ctx->pc = 0x29f424u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 8));
    // 0x29f428: 0xa2800002  sb          $zero, 0x2($s4)
    ctx->pc = 0x29f428u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f42c: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x29f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x29f430: 0x92880002  lbu         $t0, 0x2($s4)
    ctx->pc = 0x29f430u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x29f434: 0x8ea30118  lw          $v1, 0x118($s5)
    ctx->pc = 0x29f434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x29f438: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x29f438u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x29f43c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29f440: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f444: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29f444u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f448: 0xc0a8ab8  jal         func_2A2AE0
    ctx->pc = 0x29F448u;
    SET_GPR_U32(ctx, 31, 0x29F450u);
    ctx->pc = 0x29F44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F448u;
    // 0x29f44c: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2AE0u, 0x29F448u, 0x29F450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F450u;
label_29f450:
    // 0x29f450: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x29f450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x29f454: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x29f454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29f458: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x29f458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x29f45c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29f45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f460: 0xa2830002  sb          $v1, 0x2($s4)
    ctx->pc = 0x29f460u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f464: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29f464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f468: 0x92890002  lbu         $t1, 0x2($s4)
    ctx->pc = 0x29f468u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x29f46c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x29f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29f470: 0x8ea30118  lw          $v1, 0x118($s5)
    ctx->pc = 0x29f470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x29f474: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x29f474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f478: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x29f478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x29f47c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x29f47cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f480: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x29f480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29f484: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x29f484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f488: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x29f488u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x29f48c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x29f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29f490: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f494: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29f494u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f498: 0xc0a8cb0  jal         func_2A32C0
    ctx->pc = 0x29F498u;
    SET_GPR_U32(ctx, 31, 0x29F4A0u);
    ctx->pc = 0x29F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F498u;
    // 0x29f49c: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A32C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A32C0u, 0x29F498u, 0x29F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4A0u;
label_29f4a0:
    // 0x29f4a0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x29f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29f4a4: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x29f4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x29f4a8: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x29f4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f4ac: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x29f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x29f4b0: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x29f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x29f4b4: 0xa2800002  sb          $zero, 0x2($s4)
    ctx->pc = 0x29f4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f4b8: 0x17213c  dsll32      $a0, $s7, 4
    ctx->pc = 0x29f4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 4));
    // 0x29f4bc: 0x928a0002  lbu         $t2, 0x2($s4)
    ctx->pc = 0x29f4bcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x29f4c0: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x29f4c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x29f4c4: 0x8ea90118  lw          $t1, 0x118($s5)
    ctx->pc = 0x29f4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x29f4c8: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x29f4c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29f4cc: 0x8c680070  lw          $t0, 0x70($v1)
    ctx->pc = 0x29f4ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x29f4d0: 0x26e40010  addiu       $a0, $s7, 0x10
    ctx->pc = 0x29f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x29f4d4: 0x4213c  dsll32      $a0, $a0, 4
    ctx->pc = 0x29f4d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 4));
    // 0x29f4d8: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x29f4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x29f4dc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x29f4dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29f4e0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x29f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x29f4e4: 0xc43825  or          $a3, $a2, $a0
    ctx->pc = 0x29f4e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x29f4e8: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x29f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x29f4ec: 0xa43025  or          $a2, $a1, $a0
    ctx->pc = 0x29f4ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x29f4f0: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x29f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x29f4f4: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x29f4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x29f4f8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x29f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x29f4fc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f500: 0xdc840000  ld          $a0, 0x0($a0)
    ctx->pc = 0x29f500u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f504: 0xfd040000  sd          $a0, 0x0($t0)
    ctx->pc = 0x29f504u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 4));
    // 0x29f508: 0xfe070040  sd          $a3, 0x40($s0)
    ctx->pc = 0x29f508u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 7));
    // 0x29f50c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x29f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29f510: 0xfc870150  sd          $a3, 0x150($a0)
    ctx->pc = 0x29f510u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 336), GPR_U64(ctx, 7));
    // 0x29f514: 0x8c670058  lw          $a3, 0x58($v1)
    ctx->pc = 0x29f514u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x29f518: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x29f518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x29f51c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x29f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x29f520: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x29f520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x29f524: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x29f524u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x29f528: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29f528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f52c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x29f52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x29f530: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F530u;
    {
        const bool branch_taken_0x29f530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f530) {
            ctx->pc = 0x29F548u;
            goto label_29f548;
        }
    }
    ctx->pc = 0x29F538u;
    // 0x29f538: 0x8e8300d4  lw          $v1, 0xD4($s4)
    ctx->pc = 0x29f538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x29f53c: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x29f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x29f540: 0x8e9000d0  lw          $s0, 0xD0($s4)
    ctx->pc = 0x29f540u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x29f544: 0x0  nop
    ctx->pc = 0x29f544u;
    // NOP
label_29f548:
    // 0x29f548: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29f548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f54c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29f54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29f550: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29F550u;
    {
        const bool branch_taken_0x29f550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F550u;
        // 0x29f554: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f550) {
            ctx->pc = 0x29F578u;
            goto label_29f578;
        }
    }
    ctx->pc = 0x29F558u;
    // 0x29f558: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f55c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x29f55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f560: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29f560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f564: 0xc04c0e4  jal         func_130390
    ctx->pc = 0x29F564u;
    SET_GPR_U32(ctx, 31, 0x29F56Cu);
    ctx->pc = 0x29F568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F564u;
    // 0x29f568: 0x24846d20  addiu       $a0, $a0, 0x6D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130390u, 0x29F564u, 0x29F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F56Cu;
label_29f56c:
    // 0x29f56c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x29F56Cu;
    {
        const bool branch_taken_0x29f56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f56c) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F574u;
    // 0x29f574: 0x0  nop
    ctx->pc = 0x29f574u;
    // NOP
label_29f578:
    // 0x29f578: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x29f578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x29f57c: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x29f57cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x29f580: 0xffc00008  sd          $zero, 0x8($fp)
    ctx->pc = 0x29f580u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 0));
    // 0x29f584: 0xaed00004  sw          $s0, 0x4($s6)
    ctx->pc = 0x29f584u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 16));
    // 0x29f588: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x29F588u;
    {
        const bool branch_taken_0x29f588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F588u;
        // 0x29f58c: 0x3c0b02d  daddu       $s6, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f588) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F590u;
label_29f590:
    // 0x29f590: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x29f590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x29f594: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x29F594u;
    {
        const bool branch_taken_0x29f594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F594u;
        // 0x29f598: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f594) {
            ctx->pc = 0x29F660u;
            goto label_29f660;
        }
    }
    ctx->pc = 0x29F59Cu;
    // 0x29f59c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x29f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x29f5a0: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x29f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x29f5a4: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x29f5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x29f5a8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x29F5A8u;
    SET_GPR_U32(ctx, 31, 0x29F5B0u);
    ctx->pc = 0x29F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F5A8u;
    // 0x29f5ac: 0x24050150  addiu       $a1, $zero, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x29F5A8u, 0x29F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F5B0u;
label_29f5b0:
    // 0x29f5b0: 0x92880002  lbu         $t0, 0x2($s4)
    ctx->pc = 0x29f5b0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x29f5b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29f5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f5b8: 0x8ea30118  lw          $v1, 0x118($s5)
    ctx->pc = 0x29f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x29f5bc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f5c0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x29f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29f5c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29f5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f5c8: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x29f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x29f5cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f5d0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x29f5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f5d4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x29f5d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f5d8: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x29f5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x29f5dc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29f5e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f5e4: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29f5e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f5e8: 0xc0a8af4  jal         func_2A2BD0
    ctx->pc = 0x29F5E8u;
    SET_GPR_U32(ctx, 31, 0x29F5F0u);
    ctx->pc = 0x29F5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F5E8u;
    // 0x29f5ec: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2BD0u, 0x29F5E8u, 0x29F5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F5F0u;
label_29f5f0:
    // 0x29f5f0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x29f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f5f4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x29f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x29f5f8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29f5fc: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x29f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x29f600: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x29f600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x29f604: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x29f604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x29f608: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29f608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f60c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29f60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29f610: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29F610u;
    {
        const bool branch_taken_0x29f610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f610) {
            ctx->pc = 0x29F640u;
            goto label_29f640;
        }
    }
    ctx->pc = 0x29F618u;
    // 0x29f618: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x29f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x29f61c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x29f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x29f620: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29f620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f624: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x29f624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x29f628: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x29f628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x29f62c: 0x8e8500d0  lw          $a1, 0xD0($s4)
    ctx->pc = 0x29f62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x29f630: 0xc04c0e4  jal         func_130390
    ctx->pc = 0x29F630u;
    SET_GPR_U32(ctx, 31, 0x29F638u);
    ctx->pc = 0x29F634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F630u;
    // 0x29f634: 0x26060140  addiu       $a2, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130390u, 0x29F630u, 0x29F638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F638u;
label_29f638:
    // 0x29f638: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x29F638u;
    {
        const bool branch_taken_0x29f638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f638) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F640u;
label_29f640:
    // 0x29f640: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x29f640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x29f644: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29f644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f648: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x29f648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x29f64c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f650: 0xc04c0e4  jal         func_130390
    ctx->pc = 0x29F650u;
    SET_GPR_U32(ctx, 31, 0x29F658u);
    ctx->pc = 0x29F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F650u;
    // 0x29f654: 0x26060140  addiu       $a2, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130390u, 0x29F650u, 0x29F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F658u;
label_29f658:
    // 0x29f658: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x29F658u;
    {
        const bool branch_taken_0x29f658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f658) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F660u;
label_29f660:
    // 0x29f660: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x29f660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x29f664: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29F664u;
    {
        const bool branch_taken_0x29f664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F664u;
        // 0x29f668: 0x30620005  andi        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f664) {
            ctx->pc = 0x29F680u;
            goto label_29f680;
        }
    }
    ctx->pc = 0x29F66Cu;
    // 0x29f66c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29F66Cu;
    {
        const bool branch_taken_0x29f66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f66c) {
            ctx->pc = 0x29F680u;
            goto label_29f680;
        }
    }
    ctx->pc = 0x29F674u;
    // 0x29f674: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29f674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29f678: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x29f678u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x29f67c: 0x0  nop
    ctx->pc = 0x29f67cu;
    // NOP
label_29f680:
    // 0x29f680: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x29f680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f684: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x29f684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x29f688: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29F688u;
    {
        const bool branch_taken_0x29f688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F688u;
        // 0x29f68c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f688) {
            ctx->pc = 0x29F698u;
            goto label_29f698;
        }
    }
    ctx->pc = 0x29F690u;
    // 0x29f690: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x29f690u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x29f694: 0x0  nop
    ctx->pc = 0x29f694u;
    // NOP
label_29f698:
    // 0x29f698: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x29f698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x29f69c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x29f69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x29f6a0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x29F6A0u;
    SET_GPR_U32(ctx, 31, 0x29F6A8u);
    ctx->pc = 0x29F6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6A0u;
    // 0x29f6a4: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x29F6A0u, 0x29F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6A8u;
label_29f6a8:
    // 0x29f6a8: 0x92880002  lbu         $t0, 0x2($s4)
    ctx->pc = 0x29f6a8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x29f6ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29f6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6b0: 0x8ea30118  lw          $v1, 0x118($s5)
    ctx->pc = 0x29f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x29f6b4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f6b8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x29f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29f6bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29f6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6c0: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x29f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x29f6c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6c8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x29f6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x29f6ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6d0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x29f6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x29f6d4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29f6d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f6dc: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29f6dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f6e0: 0xc0a8ab8  jal         func_2A2AE0
    ctx->pc = 0x29F6E0u;
    SET_GPR_U32(ctx, 31, 0x29F6E8u);
    ctx->pc = 0x29F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6E0u;
    // 0x29f6e4: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2AE0u, 0x29F6E0u, 0x29F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6E8u;
label_29f6e8:
    // 0x29f6e8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x29f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f6ec: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x29f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x29f6f0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29f6f4: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x29f6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x29f6f8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x29f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x29f6fc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x29f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x29f700: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29f700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f704: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29f704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29f708: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F708u;
    {
        const bool branch_taken_0x29f708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f708) {
            ctx->pc = 0x29F720u;
            goto label_29f720;
        }
    }
    ctx->pc = 0x29F710u;
    // 0x29f710: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x29f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x29f714: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x29f714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x29f718: 0x8e9000d0  lw          $s0, 0xD0($s4)
    ctx->pc = 0x29f718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x29f71c: 0x0  nop
    ctx->pc = 0x29f71cu;
    // NOP
label_29f720:
    // 0x29f720: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29f720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f724: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x29f724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29f728: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x29f728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x29f72c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x29f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x29f730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f734: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29f734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f738: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x29f738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x29f73c: 0xc04c0e4  jal         func_130390
    ctx->pc = 0x29F73Cu;
    SET_GPR_U32(ctx, 31, 0x29F744u);
    ctx->pc = 0x29F740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F73Cu;
    // 0x29f740: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130390u, 0x29F73Cu, 0x29F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F744u;
label_29f744:
    // 0x29f744: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x29F744u;
    {
        const bool branch_taken_0x29f744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f744) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F74Cu;
    // 0x29f74c: 0x0  nop
    ctx->pc = 0x29f74cu;
    // NOP
label_29f750:
    // 0x29f750: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29f750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f754: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29f754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29f758: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29F758u;
    {
        const bool branch_taken_0x29f758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F758u;
        // 0x29f75c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f758) {
            ctx->pc = 0x29F768u;
            goto label_29f768;
        }
    }
    ctx->pc = 0x29F760u;
    // 0x29f760: 0xa2830002  sb          $v1, 0x2($s4)
    ctx->pc = 0x29f760u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f764: 0x0  nop
    ctx->pc = 0x29f764u;
    // NOP
label_29f768:
    // 0x29f768: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29f768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f76c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x29f76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x29f770: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29F770u;
    {
        const bool branch_taken_0x29f770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F770u;
        // 0x29f774: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f770) {
            ctx->pc = 0x29F780u;
            goto label_29f780;
        }
    }
    ctx->pc = 0x29F778u;
    // 0x29f778: 0xa2830002  sb          $v1, 0x2($s4)
    ctx->pc = 0x29f778u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f77c: 0x0  nop
    ctx->pc = 0x29f77cu;
    // NOP
label_29f780:
    // 0x29f780: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x29f780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f784: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x29f784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x29f788: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29f788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29f78c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29F78Cu;
    {
        const bool branch_taken_0x29f78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f78c) {
            ctx->pc = 0x29F7A0u;
            goto label_29f7a0;
        }
    }
    ctx->pc = 0x29F794u;
    // 0x29f794: 0x8e8300d0  lw          $v1, 0xD0($s4)
    ctx->pc = 0x29f794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x29f798: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x29f798u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
    // 0x29f79c: 0x8e9600d4  lw          $s6, 0xD4($s4)
    ctx->pc = 0x29f79cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_29f7a0:
    // 0x29f7a0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x29f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29f7a4: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x29f7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29f7a8: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x29f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x29f7ac: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x29f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
    // 0x29f7b0: 0x8c960058  lw          $s6, 0x58($a0)
    ctx->pc = 0x29f7b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x29f7b4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x29f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x29f7b8: 0x92850002  lbu         $a1, 0x2($s4)
    ctx->pc = 0x29f7b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x29f7bc: 0x8ea40118  lw          $a0, 0x118($s5)
    ctx->pc = 0x29f7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x29f7c0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x29f7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29f7c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x29f7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29f7c8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f7cc: 0xdc840000  ld          $a0, 0x0($a0)
    ctx->pc = 0x29f7ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f7d0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x29f7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x29f7d4: 0x0  nop
    ctx->pc = 0x29f7d4u;
    // NOP
label_29f7d8:
    // 0x29f7d8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x29f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29f7dc: 0x269401f0  addiu       $s4, $s4, 0x1F0
    ctx->pc = 0x29f7dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 496));
    // 0x29f7e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29f7e4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x29f7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x29f7e8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x29f7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29f7ec: 0x1460fe1c  bnez        $v1, . + 4 + (-0x1E4 << 2)
    ctx->pc = 0x29F7ECu;
    {
        const bool branch_taken_0x29f7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7ECu;
        // 0x29f7f0: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f7ec) {
            ctx->pc = 0x29F060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f060;
        }
    }
    ctx->pc = 0x29F7F4u;
    // 0x29f7f4: 0x8ea30130  lw          $v1, 0x130($s5)
    ctx->pc = 0x29f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 304)));
    // 0x29f7f8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x29f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x29f7fc: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x29f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
    // 0x29f800: 0x8ea30130  lw          $v1, 0x130($s5)
    ctx->pc = 0x29f800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 304)));
    // 0x29f804: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x29f804u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x29f808: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x29f808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29f80c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29f80cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29f810: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29f810u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29f814: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29f814u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29f818: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29f818u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29f81c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29f81cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29f820: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29f820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29f824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29f824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29f828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f82c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29f82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f830: 0x3e00008  jr          $ra
    ctx->pc = 0x29F830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F830u;
        // 0x29f834: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F838u;
}
