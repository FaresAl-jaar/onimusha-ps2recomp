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

// Function: sub_0017CB80
// Address: 0x17cb80 - 0x17cf34
void sub_0017CB80_0x17cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CB80_0x17cb80");
#endif

    switch (ctx->pc) {
        case 0x17cd3cu: goto label_17cd3c;
        case 0x17cdd4u: goto label_17cdd4;
        case 0x17cf1cu: goto label_17cf1c;
        default: break;
    }

    ctx->pc = 0x17cb80u;

    // 0x17cb80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17cb84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17cb88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17cb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17cb8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17cb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17cb90: 0x9083007c  lbu         $v1, 0x7C($a0)
    ctx->pc = 0x17cb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x17cb94: 0x106000e2  beqz        $v1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x17CB94u;
    {
        const bool branch_taken_0x17cb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB94u;
        // 0x17cb98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb94) {
            ctx->pc = 0x17CF20u;
            goto label_17cf20;
        }
    }
    ctx->pc = 0x17CB9Cu;
    // 0x17cb9c: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x17cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x17cba0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CBA0u;
    {
        const bool branch_taken_0x17cba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cba0) {
            ctx->pc = 0x17CBB0u;
            goto label_17cbb0;
        }
    }
    ctx->pc = 0x17CBA8u;
    // 0x17cba8: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x17cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    // 0x17cbac: 0x0  nop
    ctx->pc = 0x17cbacu;
    // NOP
label_17cbb0:
    // 0x17cbb0: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x17cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x17cbb4: 0x106000da  beqz        $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x17CBB4u;
    {
        const bool branch_taken_0x17cbb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cbb4) {
            ctx->pc = 0x17CF20u;
            goto label_17cf20;
        }
    }
    ctx->pc = 0x17CBBCu;
    // 0x17cbbc: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x17cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    // 0x17cbc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x17cbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x17cbc4: 0x8c23cee0  lw          $v1, -0x3120($at)
    ctx->pc = 0x17cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEE0u));
    // 0x17cbc8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x17cbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x17cbcc: 0x146000d4  bnez        $v1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x17CBCCu;
    {
        const bool branch_taken_0x17cbcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBCCu;
        // 0x17cbd0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cbcc) {
            ctx->pc = 0x17CF20u;
            goto label_17cf20;
        }
    }
    ctx->pc = 0x17CBD4u;
    // 0x17cbd4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x17cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x17cbd8: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x17cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x17cbdc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17cbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17cbe0: 0x146000cf  bnez        $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x17CBE0u;
    {
        const bool branch_taken_0x17cbe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cbe0) {
            ctx->pc = 0x17CF20u;
            goto label_17cf20;
        }
    }
    ctx->pc = 0x17CBE8u;
    // 0x17cbe8: 0x9223001d  lbu         $v1, 0x1D($s1)
    ctx->pc = 0x17cbe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x17cbec: 0x106000cc  beqz        $v1, . + 4 + (0xCC << 2)
    ctx->pc = 0x17CBECu;
    {
        const bool branch_taken_0x17cbec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cbec) {
            ctx->pc = 0x17CF20u;
            goto label_17cf20;
        }
    }
    ctx->pc = 0x17CBF4u;
    // 0x17cbf4: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x17cbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x17cbf8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x17cbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17cbfc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17cbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x17cc00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17cc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17cc04: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x17cc04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x17cc08: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x17cc08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x17cc0c: 0x108300c4  beq         $a0, $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x17CC0Cu;
    {
        const bool branch_taken_0x17cc0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17cc0c) {
            ctx->pc = 0x17CF20u;
            goto label_17cf20;
        }
    }
    ctx->pc = 0x17CC14u;
    // 0x17cc14: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x17cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x17cc18: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x17CC18u;
    {
        const bool branch_taken_0x17cc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cc18) {
            ctx->pc = 0x17CDB0u;
            goto label_17cdb0;
        }
    }
    ctx->pc = 0x17CC20u;
    // 0x17cc20: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x17cc20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17cc24: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x17cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17cc28: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x17cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17cc2c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17cc30: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x17cc30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17cc34: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17cc38: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x17cc38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17cc3c: 0x8d040078  lw          $a0, 0x78($t0)
    ctx->pc = 0x17cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x17cc40: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x17cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17cc44: 0x8d06007c  lw          $a2, 0x7C($t0)
    ctx->pc = 0x17cc44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 124)));
    // 0x17cc48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17cc4c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x17cc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x17cc50: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x17cc50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17cc54: 0x146000b2  bnez        $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x17CC54u;
    {
        const bool branch_taken_0x17cc54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC54u;
        // 0x17cc58: 0xc73021  addu        $a2, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc54) {
            ctx->pc = 0x17CF20u;
            goto label_17cf20;
        }
    }
    ctx->pc = 0x17CC5Cu;
    // 0x17cc5c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x17cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17cc60: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x17cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x17cc64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17cc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17cc68: 0x146000ad  bnez        $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x17CC68u;
    {
        const bool branch_taken_0x17cc68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cc68) {
            ctx->pc = 0x17CF20u;
            goto label_17cf20;
        }
    }
    ctx->pc = 0x17CC70u;
    // 0x17cc70: 0x8d050128  lw          $a1, 0x128($t0)
    ctx->pc = 0x17cc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 296)));
    // 0x17cc74: 0x10a000aa  beqz        $a1, . + 4 + (0xAA << 2)
    ctx->pc = 0x17CC74u;
    {
        const bool branch_taken_0x17cc74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cc74) {
            ctx->pc = 0x17CF20u;
            goto label_17cf20;
        }
    }
    ctx->pc = 0x17CC7Cu;
    // 0x17cc7c: 0x92040019  lbu         $a0, 0x19($s0)
    ctx->pc = 0x17cc7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x17cc80: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x17cc84: 0x34661f70  ori         $a2, $v1, 0x1F70
    ctx->pc = 0x17cc84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8048);
    // 0x17cc88: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x17cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x17cc8c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x17cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17cc90: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x17cc90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17cc94: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x17cc94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cc98: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x17cc98u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x17cc9c: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x17cc9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17cca0: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x17cca0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x17cca4: 0x4be111bc  vmulax.xyzw $ACC, $vf2, $vf1x
    ctx->pc = 0x17cca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17cca8: 0x4be118bd  vmadday.xyzw $ACC, $vf3, $vf1y
    ctx->pc = 0x17cca8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17ccac: 0x4be120be  vmaddaz.xyzw $ACC, $vf4, $vf1z
    ctx->pc = 0x17ccacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17ccb0: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x17ccb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17ccb4: 0x4a0002ff  vnop
    ctx->pc = 0x17ccb4u;
    // NOP operation, no action needed for VU0
    // 0x17ccb8: 0x4a0002ff  vnop
    ctx->pc = 0x17ccb8u;
    // NOP operation, no action needed for VU0
    // 0x17ccbc: 0x4a0002ff  vnop
    ctx->pc = 0x17ccbcu;
    // NOP operation, no action needed for VU0
    // 0x17ccc0: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x17ccc0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17ccc4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x17ccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x17ccc8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17cccc: 0x34851f70  ori         $a1, $a0, 0x1F70
    ctx->pc = 0x17ccccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8048);
    // 0x17ccd0: 0x24636ba0  addiu       $v1, $v1, 0x6BA0
    ctx->pc = 0x17ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27552));
    // 0x17ccd4: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x17ccd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x17ccd8: 0xd8a90000  lqc2        $vf9, 0x0($a1)
    ctx->pc = 0x17ccd8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17ccdc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x17ccdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cce0: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x17cce0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x17cce4: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x17cce4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17cce8: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x17cce8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x17ccec: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x17ccecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17ccf0: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x17ccf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17ccf4: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x17ccf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17ccf8: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x17ccf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17ccfc: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x17ccfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x17cd00: 0x4a0002ff  vnop
    ctx->pc = 0x17cd00u;
    // NOP operation, no action needed for VU0
    // 0x17cd04: 0x4a0002ff  vnop
    ctx->pc = 0x17cd04u;
    // NOP operation, no action needed for VU0
    // 0x17cd08: 0x4a0002ff  vnop
    ctx->pc = 0x17cd08u;
    // NOP operation, no action needed for VU0
    // 0x17cd0c: 0x4a0002ff  vnop
    ctx->pc = 0x17cd0cu;
    // NOP operation, no action needed for VU0
    // 0x17cd10: 0x4a0002ff  vnop
    ctx->pc = 0x17cd10u;
    // NOP operation, no action needed for VU0
    // 0x17cd14: 0x48438800  cfc2.ni     $v1, $vi17
    ctx->pc = 0x17cd14u;
    SET_GPR_U32(ctx, 3, ctx->vu0_mac_flags);
    // 0x17cd18: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x17cd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x17cd1c: 0x14600080  bnez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x17CD1Cu;
    {
        const bool branch_taken_0x17cd1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD1Cu;
        // 0x17cd20: 0x34871cec  ori         $a3, $a0, 0x1CEC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7404);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd1c) {
            ctx->pc = 0x17CF20u;
            goto label_17cf20;
        }
    }
    ctx->pc = 0x17CD24u;
    // 0x17cd24: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x17cd24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x17cd28: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x17cd28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x17cd2c: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x17cd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x17cd30: 0x2484e070  addiu       $a0, $a0, -0x1F90
    ctx->pc = 0x17cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959216));
    // 0x17cd34: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x17CD34u;
    SET_GPR_U32(ctx, 31, 0x17CD3Cu);
    ctx->pc = 0x17CD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD34u;
    // 0x17cd38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x17CD34u, 0x17CD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD3Cu;
label_17cd3c:
    // 0x17cd3c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x17cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17cd40: 0x94630068  lhu         $v1, 0x68($v1)
    ctx->pc = 0x17cd40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x17cd44: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x17cd44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17cd48: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x17CD48u;
    {
        const bool branch_taken_0x17cd48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD48u;
        // 0x17cd4c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd48) {
            ctx->pc = 0x17CD80u;
            goto label_17cd80;
        }
    }
    ctx->pc = 0x17CD50u;
    // 0x17cd50: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x17cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x17cd54: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x17cd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17cd58: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x17cd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x17cd5c: 0xc4211cec  lwc1        $f1, 0x1CEC($at)
    ctx->pc = 0x17cd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cd60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17cd60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cd64: 0x0  nop
    ctx->pc = 0x17cd64u;
    // NOP
    // 0x17cd68: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17cd68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17cd6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17cd6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cd70: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x17CD70u;
    {
        const bool branch_taken_0x17cd70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cd70) {
            ctx->pc = 0x17CDB0u;
            goto label_17cdb0;
        }
    }
    ctx->pc = 0x17CD78u;
    // 0x17cd78: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x17CD78u;
    {
        const bool branch_taken_0x17cd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd78) {
            ctx->pc = 0x17CF20u;
            goto label_17cf20;
        }
    }
    ctx->pc = 0x17CD80u;
label_17cd80:
    // 0x17cd80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17cd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17cd84: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x17cd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17cd88: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x17cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x17cd8c: 0xc4211cec  lwc1        $f1, 0x1CEC($at)
    ctx->pc = 0x17cd8cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001CECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cd90: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x17cd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x17cd94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17cd94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cd98: 0x0  nop
    ctx->pc = 0x17cd98u;
    // NOP
    // 0x17cd9c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17cd9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17cda0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17cda0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cda4: 0x4501005e  bc1t        . + 4 + (0x5E << 2)
    ctx->pc = 0x17CDA4u;
    {
        const bool branch_taken_0x17cda4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cda4) {
            ctx->pc = 0x17CF20u;
            goto label_17cf20;
        }
    }
    ctx->pc = 0x17CDACu;
    // 0x17cdac: 0x0  nop
    ctx->pc = 0x17cdacu;
    // NOP
label_17cdb0:
    // 0x17cdb0: 0x9e230024  lwu         $v1, 0x24($s1)
    ctx->pc = 0x17cdb0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17cdb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17cdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17cdb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17cdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x17cdbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17cdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17cdc0: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x17CDC0u;
    {
        const bool branch_taken_0x17cdc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDC0u;
        // 0x17cdc4: 0x3c050084  lui         $a1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdc0) {
            ctx->pc = 0x17CF10u;
            goto label_17cf10;
        }
    }
    ctx->pc = 0x17CDC8u;
    // 0x17cdc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17cdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cdcc: 0xc05ef54  jal         func_17BD50
    ctx->pc = 0x17CDCCu;
    SET_GPR_U32(ctx, 31, 0x17CDD4u);
    ctx->pc = 0x17CDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDCCu;
    // 0x17cdd0: 0x24a5e080  addiu       $a1, $a1, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BD50u, 0x17CDCCu, 0x17CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDD4u;
label_17cdd4:
    // 0x17cdd4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x17cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17cdd8: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x17cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x17cddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17cddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cde0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17cde0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cde4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17cde4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cde8: 0x3c090084  lui         $t1, 0x84
    ctx->pc = 0x17cde8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)132 << 16));
    // 0x17cdec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17cdecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cdf0: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x17cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x17cdf4: 0x3c080084  lui         $t0, 0x84
    ctx->pc = 0x17cdf4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)132 << 16));
    // 0x17cdf8: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x17cdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17cdfc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17cdfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce00: 0x2463e080  addiu       $v1, $v1, -0x1F80
    ctx->pc = 0x17ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959232));
    // 0x17ce04: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x17ce04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x17ce08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17ce08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce0c: 0x786a0000  lq          $t2, 0x0($v1)
    ctx->pc = 0x17ce0cu;
    SET_GPR_VEC(ctx, 10, FAST_READ128(0x83E080u));
    // 0x17ce10: 0x2529e090  addiu       $t1, $t1, -0x1F70
    ctx->pc = 0x17ce10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959248));
    // 0x17ce14: 0x2508e0a0  addiu       $t0, $t0, -0x1F60
    ctx->pc = 0x17ce14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959264));
    // 0x17ce18: 0x2484e080  addiu       $a0, $a0, -0x1F80
    ctx->pc = 0x17ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    // 0x17ce1c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x17ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17ce20: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x17ce20u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17ce24: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x17ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x17ce28: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x17ce28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x17ce2c: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x17ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x17ce30: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17ce30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17ce34: 0x2463e090  addiu       $v1, $v1, -0x1F70
    ctx->pc = 0x17ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959248));
    // 0x17ce38: 0x7caa0000  sq          $t2, 0x0($a1)
    ctx->pc = 0x17ce38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 10));
    // 0x17ce3c: 0x2442e0a0  addiu       $v0, $v0, -0x1F60
    ctx->pc = 0x17ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
    // 0x17ce40: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x17ce40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17ce44: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x17ce44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17ce48: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x17ce48u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17ce4c: 0x8ca50080  lw          $a1, 0x80($a1)
    ctx->pc = 0x17ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x17ce50: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x17ce50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x17ce54: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x17ce54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x17ce58: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x17ce58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x17ce5c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17ce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17ce60: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x17ce60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x17ce64: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x17ce64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x17ce68: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x17ce68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17ce6c: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x17ce6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17ce70: 0x79080000  lq          $t0, 0x0($t0)
    ctx->pc = 0x17ce70u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17ce74: 0x8ca50080  lw          $a1, 0x80($a1)
    ctx->pc = 0x17ce74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x17ce78: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x17ce78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x17ce7c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x17ce7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x17ce80: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x17ce80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x17ce84: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17ce88: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x17ce88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x17ce8c: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x17ce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x17ce90: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x17ce90u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ce94: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x17ce94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17ce98: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x17ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17ce9c: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x17ce9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17cea0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x17cea0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17cea4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x17cea4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17cea8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x17cea8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17ceac: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x17ceacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x17ceb0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17ceb4: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x17ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x17ceb8: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x17ceb8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cebc: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x17cebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17cec0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x17cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17cec4: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x17cec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17cec8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17cec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17cecc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x17ceccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17ced0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x17ced0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17ced4: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x17ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x17ced8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17cedc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x17cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x17cee0: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x17cee0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x17cee4: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x17cee4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17cee8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x17cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17ceec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x17ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17cef0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x17cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17cef4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x17cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17cef8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x17cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17cefc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x17cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17cf00: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x17cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x17cf04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17cf08: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x17cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x17cf0c: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x17cf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_17cf10:
    // 0x17cf10: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x17cf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17cf14: 0xc0a883c  jal         func_2A20F0
    ctx->pc = 0x17CF14u;
    SET_GPR_U32(ctx, 31, 0x17CF1Cu);
    ctx->pc = 0x17CF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF14u;
    // 0x17cf18: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A20F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A20F0u, 0x17CF14u, 0x17CF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF1Cu;
label_17cf1c:
    // 0x17cf1c: 0x0  nop
    ctx->pc = 0x17cf1cu;
    // NOP
label_17cf20:
    // 0x17cf20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17cf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cf24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17cf24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cf28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17cf28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cf2c: 0x3e00008  jr          $ra
    ctx->pc = 0x17CF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF2Cu;
        // 0x17cf30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CF34u;
}
