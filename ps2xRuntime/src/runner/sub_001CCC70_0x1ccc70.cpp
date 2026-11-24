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

// Function: sub_001CCC70
// Address: 0x1ccc70 - 0x1ccee8
void sub_001CCC70_0x1ccc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCC70_0x1ccc70");
#endif

    switch (ctx->pc) {
        case 0x1cccd0u: goto label_1cccd0;
        default: break;
    }

    ctx->pc = 0x1ccc70u;

    // 0x1ccc70: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x1ccc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1ccc74: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1ccc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1ccc78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCC78u;
    {
        const bool branch_taken_0x1ccc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC78u;
        // 0x1ccc7c: 0x8c890048  lw          $t1, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc78) {
            ctx->pc = 0x1CCC88u;
            goto label_1ccc88;
        }
    }
    ctx->pc = 0x1CCC80u;
    // 0x1ccc80: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1CCC80u;
    {
        const bool branch_taken_0x1ccc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC80u;
        // 0x1ccc84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc80) {
            ctx->pc = 0x1CCEE0u;
            goto label_1ccee0;
        }
    }
    ctx->pc = 0x1CCC88u;
label_1ccc88:
    // 0x1ccc88: 0x8c8a0094  lw          $t2, 0x94($a0)
    ctx->pc = 0x1ccc88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1ccc8c: 0x15400004  bnez        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCC8Cu;
    {
        const bool branch_taken_0x1ccc8c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc8c) {
            ctx->pc = 0x1CCCA0u;
            goto label_1ccca0;
        }
    }
    ctx->pc = 0x1CCC94u;
    // 0x1ccc94: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1CCC94u;
    {
        const bool branch_taken_0x1ccc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC94u;
        // 0x1ccc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc94) {
            ctx->pc = 0x1CCEE0u;
            goto label_1ccee0;
        }
    }
    ctx->pc = 0x1CCC9Cu;
    // 0x1ccc9c: 0x0  nop
    ctx->pc = 0x1ccc9cu;
    // NOP
label_1ccca0:
    // 0x1ccca0: 0x8c8800c4  lw          $t0, 0xC4($a0)
    ctx->pc = 0x1ccca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1ccca4: 0x8c8700a0  lw          $a3, 0xA0($a0)
    ctx->pc = 0x1ccca4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1ccca8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ccca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cccac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cccacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cccb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cccb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cccb4: 0x25220010  addiu       $v0, $t1, 0x10
    ctx->pc = 0x1cccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1cccb8: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1cccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1cccbc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1cccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1cccc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cccc4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1CCCC4u;
    {
        const bool branch_taken_0x1cccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCC4u;
        // 0x1cccc8: 0x1431821  addu        $v1, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccc4) {
            ctx->pc = 0x1CCE50u;
            goto label_1cce50;
        }
    }
    ctx->pc = 0x1CCCCCu;
    // 0x1ccccc: 0x0  nop
    ctx->pc = 0x1cccccu;
    // NOP
label_1cccd0:
    // 0x1cccd0: 0x8c88009c  lw          $t0, 0x9C($a0)
    ctx->pc = 0x1cccd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1cccd4: 0x8c870098  lw          $a3, 0x98($a0)
    ctx->pc = 0x1cccd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x1cccd8: 0x952a006a  lhu         $t2, 0x6A($t1)
    ctx->pc = 0x1cccd8u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 106)));
    // 0x1cccdc: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1cccdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1ccce0: 0x81080000  lb          $t0, 0x0($t0)
    ctx->pc = 0x1ccce0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ccce4: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x1ccce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1ccce8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1ccce8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1cccec: 0x148082a  slt         $at, $t2, $t0
    ctx->pc = 0x1cccecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1cccf0: 0x1420004d  bnez        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x1CCCF0u;
    {
        const bool branch_taken_0x1cccf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCF0u;
        // 0x1cccf4: 0x90e70000  lbu         $a3, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccf0) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCCF8u;
    // 0x1cccf8: 0x30ea00ff  andi        $t2, $a3, 0xFF
    ctx->pc = 0x1cccf8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1cccfc: 0x314a0008  andi        $t2, $t2, 0x8
    ctx->pc = 0x1cccfcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)8);
    // 0x1ccd00: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x1CCD00u;
    {
        const bool branch_taken_0x1ccd00 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd00) {
            ctx->pc = 0x1CCD40u;
            goto label_1ccd40;
        }
    }
    ctx->pc = 0x1CCD08u;
    // 0x1ccd08: 0x8c8a004c  lw          $t2, 0x4C($a0)
    ctx->pc = 0x1ccd08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1ccd0c: 0x11400046  beqz        $t2, . + 4 + (0x46 << 2)
    ctx->pc = 0x1CCD0Cu;
    {
        const bool branch_taken_0x1ccd0c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd0c) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCD14u;
    // 0x1ccd14: 0x8d4b0080  lw          $t3, 0x80($t2)
    ctx->pc = 0x1ccd14u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 128)));
    // 0x1ccd18: 0x850c0  sll         $t2, $t0, 3
    ctx->pc = 0x1ccd18u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1ccd1c: 0x1486023  subu        $t4, $t2, $t0
    ctx->pc = 0x1ccd1cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1ccd20: 0x908a00cd  lbu         $t2, 0xCD($a0)
    ctx->pc = 0x1ccd20u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 205)));
    // 0x1ccd24: 0xc6140  sll         $t4, $t4, 5
    ctx->pc = 0x1ccd24u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x1ccd28: 0x16c6021  addu        $t4, $t3, $t4
    ctx->pc = 0x1ccd28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x1ccd2c: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x1ccd2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1ccd30: 0x8463c  dsll32      $t0, $t0, 24
    ctx->pc = 0x1ccd30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 24));
    // 0x1ccd34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCD34u;
    {
        const bool branch_taken_0x1ccd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD34u;
        // 0x1ccd38: 0x8463f  dsra32      $t0, $t0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd34) {
            ctx->pc = 0x1CCD58u;
            goto label_1ccd58;
        }
    }
    ctx->pc = 0x1CCD3Cu;
    // 0x1ccd3c: 0x0  nop
    ctx->pc = 0x1ccd3cu;
    // NOP
label_1ccd40:
    // 0x1ccd40: 0x850c0  sll         $t2, $t0, 3
    ctx->pc = 0x1ccd40u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1ccd44: 0x1485823  subu        $t3, $t2, $t0
    ctx->pc = 0x1ccd44u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1ccd48: 0x8d2a0080  lw          $t2, 0x80($t1)
    ctx->pc = 0x1ccd48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 128)));
    // 0x1ccd4c: 0xb5940  sll         $t3, $t3, 5
    ctx->pc = 0x1ccd4cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
    // 0x1ccd50: 0x14b6021  addu        $t4, $t2, $t3
    ctx->pc = 0x1ccd50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1ccd54: 0x0  nop
    ctx->pc = 0x1ccd54u;
    // NOP
label_1ccd58:
    // 0x1ccd58: 0x958a00c6  lhu         $t2, 0xC6($t4)
    ctx->pc = 0x1ccd58u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 198)));
    // 0x1ccd5c: 0x314a0010  andi        $t2, $t2, 0x10
    ctx->pc = 0x1ccd5cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16);
    // 0x1ccd60: 0x15400031  bnez        $t2, . + 4 + (0x31 << 2)
    ctx->pc = 0x1CCD60u;
    {
        const bool branch_taken_0x1ccd60 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd60) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCD68u;
    // 0x1ccd68: 0x30eb00ff  andi        $t3, $a3, 0xFF
    ctx->pc = 0x1ccd68u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1ccd6c: 0x316a0002  andi        $t2, $t3, 0x2
    ctx->pc = 0x1ccd6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2);
    // 0x1ccd70: 0x11400011  beqz        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CCD70u;
    {
        const bool branch_taken_0x1ccd70 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd70) {
            ctx->pc = 0x1CCDB8u;
            goto label_1ccdb8;
        }
    }
    ctx->pc = 0x1CCD78u;
    // 0x1ccd78: 0x8563c  dsll32      $t2, $t0, 24
    ctx->pc = 0x1ccd78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) << (32 + 24));
    // 0x1ccd7c: 0x8d280074  lw          $t0, 0x74($t1)
    ctx->pc = 0x1ccd7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 116)));
    // 0x1ccd80: 0xa563f  dsra32      $t2, $t2, 24
    ctx->pc = 0x1ccd80u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 24));
    // 0x1ccd84: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1ccd84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1ccd88: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x1ccd88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x1ccd8c: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x1ccd8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ccd90: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1ccd90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccd94: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x1ccd94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ccd98: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x1ccd98u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ccd9c: 0x4a20012a  vmul.w      $vf4, $vf0, $vf0
    ctx->pc = 0x1ccd9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ccda0: 0xf9810000  sqc2        $vf1, 0x0($t4)
    ctx->pc = 0x1ccda0u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ccda4: 0xf9820010  sqc2        $vf2, 0x10($t4)
    ctx->pc = 0x1ccda4u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ccda8: 0xf9830020  sqc2        $vf3, 0x20($t4)
    ctx->pc = 0x1ccda8u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ccdac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1CCDACu;
    {
        const bool branch_taken_0x1ccdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDACu;
        // 0x1ccdb0: 0xf9840030  sqc2        $vf4, 0x30($t4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 12), 48), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdac) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCDB4u;
    // 0x1ccdb4: 0x0  nop
    ctx->pc = 0x1ccdb4u;
    // NOP
label_1ccdb8:
    // 0x1ccdb8: 0x31680001  andi        $t0, $t3, 0x1
    ctx->pc = 0x1ccdb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1ccdbc: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CCDBCu;
    {
        const bool branch_taken_0x1ccdbc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccdbc) {
            ctx->pc = 0x1CCE08u;
            goto label_1cce08;
        }
    }
    ctx->pc = 0x1CCDC4u;
    // 0x1ccdc4: 0x8c8800b0  lw          $t0, 0xB0($a0)
    ctx->pc = 0x1ccdc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1ccdc8: 0x31080040  andi        $t0, $t0, 0x40
    ctx->pc = 0x1ccdc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
    // 0x1ccdcc: 0x11000016  beqz        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CCDCCu;
    {
        const bool branch_taken_0x1ccdcc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccdcc) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCDD4u;
    // 0x1ccdd4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1ccdd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccdd8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ccdd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccddc: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x1ccddcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ccde0: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x1ccde0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ccde4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1ccde4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ccde8: 0x4be001aa  vmul.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1ccde8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1ccdec: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x1ccdecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1ccdf0: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x1ccdf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1ccdf4: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x1ccdf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1ccdf8: 0x4bc0218b  vmaddw.xyz  $vf6, $vf4, $vf0w
    ctx->pc = 0x1ccdf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1ccdfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CCDFCu;
    {
        const bool branch_taken_0x1ccdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDFCu;
        // 0x1cce00: 0xf8a60000  sqc2        $vf6, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdfc) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCE04u;
    // 0x1cce04: 0x0  nop
    ctx->pc = 0x1cce04u;
    // NOP
label_1cce08:
    // 0x1cce08: 0x31680004  andi        $t0, $t3, 0x4
    ctx->pc = 0x1cce08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4);
    // 0x1cce0c: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCE0Cu;
    {
        const bool branch_taken_0x1cce0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cce0c) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCE14u;
    // 0x1cce14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cce14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce18: 0x25880030  addiu       $t0, $t4, 0x30
    ctx->pc = 0x1cce18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
    // 0x1cce1c: 0x786a0000  lq          $t2, 0x0($v1)
    ctx->pc = 0x1cce1cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cce20: 0x7d0a0000  sq          $t2, 0x0($t0)
    ctx->pc = 0x1cce20u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 10));
    // 0x1cce24: 0xe580003c  swc1        $f0, 0x3C($t4)
    ctx->pc = 0x1cce24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 60), bits); }
label_1cce28:
    // 0x1cce28: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1cce28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1cce2c: 0x30e70002  andi        $a3, $a3, 0x2
    ctx->pc = 0x1cce2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x1cce30: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCE30u;
    {
        const bool branch_taken_0x1cce30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE30u;
        // 0x1cce34: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce30) {
            ctx->pc = 0x1CCE40u;
            goto label_1cce40;
        }
    }
    ctx->pc = 0x1CCE38u;
    // 0x1cce38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCE38u;
    {
        const bool branch_taken_0x1cce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE38u;
        // 0x1cce3c: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce38) {
            ctx->pc = 0x1CCE48u;
            goto label_1cce48;
        }
    }
    ctx->pc = 0x1CCE40u;
label_1cce40:
    // 0x1cce40: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cce40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cce44: 0x0  nop
    ctx->pc = 0x1cce44u;
    // NOP
label_1cce48:
    // 0x1cce48: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cce48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cce4c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1cce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1cce50:
    // 0x1cce50: 0x908700cc  lbu         $a3, 0xCC($a0)
    ctx->pc = 0x1cce50u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1cce54: 0xc7382b  sltu        $a3, $a2, $a3
    ctx->pc = 0x1cce54u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1cce58: 0x14e0ff9d  bnez        $a3, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1CCE58u;
    {
        const bool branch_taken_0x1cce58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cce58) {
            ctx->pc = 0x1CCCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cccd0;
        }
    }
    ctx->pc = 0x1CCE60u;
    // 0x1cce60: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x1cce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1cce64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cce64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cce68: 0xac8200c4  sw          $v0, 0xC4($a0)
    ctx->pc = 0x1cce68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 2));
    // 0x1cce6c: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x1cce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x1cce70: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x1cce70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1cce74: 0x948200c8  lhu         $v0, 0xC8($a0)
    ctx->pc = 0x1cce74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x1cce78: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCE78u;
    {
        const bool branch_taken_0x1cce78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cce78) {
            ctx->pc = 0x1CCE88u;
            goto label_1cce88;
        }
    }
    ctx->pc = 0x1CCE80u;
    // 0x1cce80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cce80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce84: 0xac8200c0  sw          $v0, 0xC0($a0)
    ctx->pc = 0x1cce84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
label_1cce88:
    // 0x1cce88: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x1cce88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1cce8c: 0x948200c8  lhu         $v0, 0xC8($a0)
    ctx->pc = 0x1cce8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x1cce90: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1cce90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cce94: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCE94u;
    {
        const bool branch_taken_0x1cce94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cce94) {
            ctx->pc = 0x1CCEA8u;
            goto label_1ccea8;
        }
    }
    ctx->pc = 0x1CCE9Cu;
    // 0x1cce9c: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x1cce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x1ccea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ccea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccea4: 0xac8200c0  sw          $v0, 0xC0($a0)
    ctx->pc = 0x1ccea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
label_1ccea8:
    // 0x1ccea8: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x1ccea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x1cceac: 0xac8200b8  sw          $v0, 0xB8($a0)
    ctx->pc = 0x1cceacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 2));
    // 0x1cceb0: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x1cceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1cceb4: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1cceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1cceb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ccebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ccebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ccec0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ccec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccec4: 0xac8200b4  sw          $v0, 0xB4($a0)
    ctx->pc = 0x1ccec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
    // 0x1ccec8: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x1ccec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x1ccecc: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x1cceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x1cced0: 0x601827  not         $v1, $v1
    ctx->pc = 0x1cced0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1cced4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1cced4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1cced8: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x1cced8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x1ccedc: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x1ccedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_1ccee0:
    // 0x1ccee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCEE8u;
}
