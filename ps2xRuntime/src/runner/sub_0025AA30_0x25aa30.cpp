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

// Function: sub_0025AA30
// Address: 0x25aa30 - 0x25abf8
void sub_0025AA30_0x25aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AA30_0x25aa30");
#endif

    ctx->pc = 0x25aa30u;

    // 0x25aa30: 0xd88102c0  lqc2        $vf1, 0x2C0($a0)
    ctx->pc = 0x25aa30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 704)));
    // 0x25aa34: 0x4be0083c  vaddax.xyzw $ACC, $vf1, $vf0x
    ctx->pc = 0x25aa34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25aa38: 0x84810288  lh          $at, 0x288($a0)
    ctx->pc = 0x25aa38u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 648)));
    // 0x25aa3c: 0x48c10800  ctc2.ni     $at, $vi1
    ctx->pc = 0x25aa3cu;
    ctx->vi[1] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aa40: 0x8481028a  lh          $at, 0x28A($a0)
    ctx->pc = 0x25aa40u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 650)));
    // 0x25aa44: 0x48c11000  ctc2.ni     $at, $vi2
    ctx->pc = 0x25aa44u;
    ctx->vi[2] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aa48: 0x8481028c  lh          $at, 0x28C($a0)
    ctx->pc = 0x25aa48u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 652)));
    // 0x25aa4c: 0x48c11800  ctc2.ni     $at, $vi3
    ctx->pc = 0x25aa4cu;
    ctx->vi[3] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aa50: 0x8481028e  lh          $at, 0x28E($a0)
    ctx->pc = 0x25aa50u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 654)));
    // 0x25aa54: 0x48c12000  ctc2.ni     $at, $vi4
    ctx->pc = 0x25aa54u;
    ctx->vi[4] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aa58: 0x84810290  lh          $at, 0x290($a0)
    ctx->pc = 0x25aa58u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 656)));
    // 0x25aa5c: 0x48c12800  ctc2.ni     $at, $vi5
    ctx->pc = 0x25aa5cu;
    ctx->vi[5] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aa60: 0x84810292  lh          $at, 0x292($a0)
    ctx->pc = 0x25aa60u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 658)));
    // 0x25aa64: 0x48c13000  ctc2.ni     $at, $vi6
    ctx->pc = 0x25aa64u;
    ctx->vi[6] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aa68: 0x84810294  lh          $at, 0x294($a0)
    ctx->pc = 0x25aa68u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 660)));
    // 0x25aa6c: 0x48c13800  ctc2.ni     $at, $vi7
    ctx->pc = 0x25aa6cu;
    ctx->vi[7] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aa70: 0x84810296  lh          $at, 0x296($a0)
    ctx->pc = 0x25aa70u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 662)));
    // 0x25aa74: 0x48c14000  ctc2.ni     $at, $vi8
    ctx->pc = 0x25aa74u;
    ctx->vi[8] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aa78: 0x84810298  lh          $at, 0x298($a0)
    ctx->pc = 0x25aa78u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x25aa7c: 0x48c14800  ctc2.ni     $at, $vi9
    ctx->pc = 0x25aa7cu;
    ctx->vi[9] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aa80: 0x8481029a  lh          $at, 0x29A($a0)
    ctx->pc = 0x25aa80u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 666)));
    // 0x25aa84: 0x48c15000  ctc2.ni     $at, $vi10
    ctx->pc = 0x25aa84u;
    ctx->vi[10] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aa88: 0x8481029c  lh          $at, 0x29C($a0)
    ctx->pc = 0x25aa88u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 668)));
    // 0x25aa8c: 0x48c15800  ctc2.ni     $at, $vi11
    ctx->pc = 0x25aa8cu;
    ctx->vi[11] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aa90: 0x8481029e  lh          $at, 0x29E($a0)
    ctx->pc = 0x25aa90u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 670)));
    // 0x25aa94: 0x48c16000  ctc2.ni     $at, $vi12
    ctx->pc = 0x25aa94u;
    ctx->vi[12] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aa98: 0x848102a0  lh          $at, 0x2A0($a0)
    ctx->pc = 0x25aa98u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 672)));
    // 0x25aa9c: 0x48c16800  ctc2.ni     $at, $vi13
    ctx->pc = 0x25aa9cu;
    ctx->vi[13] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aaa0: 0x848102a2  lh          $at, 0x2A2($a0)
    ctx->pc = 0x25aaa0u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 674)));
    // 0x25aaa4: 0x48c17000  ctc2.ni     $at, $vi14
    ctx->pc = 0x25aaa4u;
    ctx->vi[14] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aaa8: 0x848102a4  lh          $at, 0x2A4($a0)
    ctx->pc = 0x25aaa8u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 676)));
    // 0x25aaac: 0x48c17800  ctc2.ni     $at, $vi15
    ctx->pc = 0x25aaacu;
    ctx->vi[15] = static_cast<uint16_t>(GPR_U32(ctx, 1));
    // 0x25aab0: 0x848102a6  lh          $at, 0x2A6($a0)
    ctx->pc = 0x25aab0u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 678)));
    // 0x25aab4: 0x48c18000  ctc2.ni     $at, $vi16
    ctx->pc = 0x25aab4u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 1) & 0xFFFFu);
    // 0x25aab8: 0x848102a8  lh          $at, 0x2A8($a0)
    ctx->pc = 0x25aab8u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x25aabc: 0x48c18800  ctc2.ni     $at, $vi17
    ctx->pc = 0x25aabcu;
    // CTC2 write to read-only VU control register 17 ignored
    // 0x25aac0: 0x8c8102ac  lw          $at, 0x2AC($a0)
    ctx->pc = 0x25aac0u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 684)));
    // 0x25aac4: 0x48c19000  ctc2.ni     $at, $vi18
    ctx->pc = 0x25aac4u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 1) & 0x00FFFFFFu;
    // 0x25aac8: 0x8c8102b0  lw          $at, 0x2B0($a0)
    ctx->pc = 0x25aac8u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x25aacc: 0x48c1a000  ctc2.ni     $at, $vi20
    ctx->pc = 0x25aaccu;
    ctx->vu0_r = _mm_castsi128_ps(_mm_set1_epi32(static_cast<int32_t>(GPR_U32(ctx, 1))));
    // 0x25aad0: 0x8c8102b4  lw          $at, 0x2B4($a0)
    ctx->pc = 0x25aad0u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x25aad4: 0x48c1a800  ctc2.ni     $at, $vi21
    ctx->pc = 0x25aad4u;
    { uint32_t tmp = GPR_U32(ctx, 1); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x25aad8: 0x8c8102b8  lw          $at, 0x2B8($a0)
    ctx->pc = 0x25aad8u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 696)));
    // 0x25aadc: 0x48c1b000  ctc2.ni     $at, $vi22
    ctx->pc = 0x25aadcu;
    { uint32_t tmp = GPR_U32(ctx, 1); std::memcpy(&ctx->vu0_q, &tmp, sizeof(tmp)); }
    // 0x25aae0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x25aae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25aae4: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x25aae4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25aae8: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x25aae8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25aaec: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x25aaecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x25aaf0: 0xd8850040  lqc2        $vf5, 0x40($a0)
    ctx->pc = 0x25aaf0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x25aaf4: 0xd8860050  lqc2        $vf6, 0x50($a0)
    ctx->pc = 0x25aaf4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x25aaf8: 0xd8870060  lqc2        $vf7, 0x60($a0)
    ctx->pc = 0x25aaf8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x25aafc: 0xd8880070  lqc2        $vf8, 0x70($a0)
    ctx->pc = 0x25aafcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x25ab00: 0xd8890080  lqc2        $vf9, 0x80($a0)
    ctx->pc = 0x25ab00u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x25ab04: 0xd88a0090  lqc2        $vf10, 0x90($a0)
    ctx->pc = 0x25ab04u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x25ab08: 0xd88b00a0  lqc2        $vf11, 0xA0($a0)
    ctx->pc = 0x25ab08u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x25ab0c: 0xd88c00b0  lqc2        $vf12, 0xB0($a0)
    ctx->pc = 0x25ab0cu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x25ab10: 0xd88d00c0  lqc2        $vf13, 0xC0($a0)
    ctx->pc = 0x25ab10u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x25ab14: 0xd88e00d0  lqc2        $vf14, 0xD0($a0)
    ctx->pc = 0x25ab14u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x25ab18: 0xd88f00e0  lqc2        $vf15, 0xE0($a0)
    ctx->pc = 0x25ab18u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x25ab1c: 0xd89000f0  lqc2        $vf16, 0xF0($a0)
    ctx->pc = 0x25ab1cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x25ab20: 0xd8910100  lqc2        $vf17, 0x100($a0)
    ctx->pc = 0x25ab20u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x25ab24: 0xd8920110  lqc2        $vf18, 0x110($a0)
    ctx->pc = 0x25ab24u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x25ab28: 0xd8930120  lqc2        $vf19, 0x120($a0)
    ctx->pc = 0x25ab28u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x25ab2c: 0xd8940130  lqc2        $vf20, 0x130($a0)
    ctx->pc = 0x25ab2cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x25ab30: 0xd8950140  lqc2        $vf21, 0x140($a0)
    ctx->pc = 0x25ab30u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x25ab34: 0xd8960150  lqc2        $vf22, 0x150($a0)
    ctx->pc = 0x25ab34u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x25ab38: 0xd8970160  lqc2        $vf23, 0x160($a0)
    ctx->pc = 0x25ab38u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x25ab3c: 0xd8980170  lqc2        $vf24, 0x170($a0)
    ctx->pc = 0x25ab3cu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 368)));
    // 0x25ab40: 0xd8990180  lqc2        $vf25, 0x180($a0)
    ctx->pc = 0x25ab40u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x25ab44: 0xd89a0190  lqc2        $vf26, 0x190($a0)
    ctx->pc = 0x25ab44u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x25ab48: 0xd89b01a0  lqc2        $vf27, 0x1A0($a0)
    ctx->pc = 0x25ab48u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x25ab4c: 0xd89c01b0  lqc2        $vf28, 0x1B0($a0)
    ctx->pc = 0x25ab4cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x25ab50: 0xd89d01c0  lqc2        $vf29, 0x1C0($a0)
    ctx->pc = 0x25ab50u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x25ab54: 0xd89e01d0  lqc2        $vf30, 0x1D0($a0)
    ctx->pc = 0x25ab54u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x25ab58: 0xd89f01e0  lqc2        $vf31, 0x1E0($a0)
    ctx->pc = 0x25ab58u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x25ab5c: 0xc4810280  lwc1        $f1, 0x280($a0)
    ctx->pc = 0x25ab5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ab60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25ab60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ab64: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x25ab64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x25ab68: 0x8c880284  lw          $t0, 0x284($a0)
    ctx->pc = 0x25ab68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
    // 0x25ab6c: 0x44c8f800  ctc1        $t0, $FpcCsr
    ctx->pc = 0x25ab6cu;
    ctx->fcr31 = GPR_U32(ctx, 8) & 0x0183FFFF;
    // 0x25ab70: 0xc4800200  lwc1        $f0, 0x200($a0)
    ctx->pc = 0x25ab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ab74: 0xc4810204  lwc1        $f1, 0x204($a0)
    ctx->pc = 0x25ab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ab78: 0xc4820208  lwc1        $f2, 0x208($a0)
    ctx->pc = 0x25ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25ab7c: 0xc483020c  lwc1        $f3, 0x20C($a0)
    ctx->pc = 0x25ab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25ab80: 0xc4840210  lwc1        $f4, 0x210($a0)
    ctx->pc = 0x25ab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25ab84: 0xc4850214  lwc1        $f5, 0x214($a0)
    ctx->pc = 0x25ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25ab88: 0xc4860218  lwc1        $f6, 0x218($a0)
    ctx->pc = 0x25ab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25ab8c: 0xc487021c  lwc1        $f7, 0x21C($a0)
    ctx->pc = 0x25ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25ab90: 0xc4880220  lwc1        $f8, 0x220($a0)
    ctx->pc = 0x25ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25ab94: 0xc4890224  lwc1        $f9, 0x224($a0)
    ctx->pc = 0x25ab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25ab98: 0xc48a0228  lwc1        $f10, 0x228($a0)
    ctx->pc = 0x25ab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25ab9c: 0xc48b022c  lwc1        $f11, 0x22C($a0)
    ctx->pc = 0x25ab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x25aba0: 0xc48c0230  lwc1        $f12, 0x230($a0)
    ctx->pc = 0x25aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25aba4: 0xc48d0234  lwc1        $f13, 0x234($a0)
    ctx->pc = 0x25aba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25aba8: 0xc48e0238  lwc1        $f14, 0x238($a0)
    ctx->pc = 0x25aba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25abac: 0xc48f023c  lwc1        $f15, 0x23C($a0)
    ctx->pc = 0x25abacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x25abb0: 0xc4900240  lwc1        $f16, 0x240($a0)
    ctx->pc = 0x25abb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x25abb4: 0xc4910244  lwc1        $f17, 0x244($a0)
    ctx->pc = 0x25abb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x25abb8: 0xc4920248  lwc1        $f18, 0x248($a0)
    ctx->pc = 0x25abb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x25abbc: 0xc493024c  lwc1        $f19, 0x24C($a0)
    ctx->pc = 0x25abbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x25abc0: 0xc4940250  lwc1        $f20, 0x250($a0)
    ctx->pc = 0x25abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25abc4: 0xc4950254  lwc1        $f21, 0x254($a0)
    ctx->pc = 0x25abc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25abc8: 0xc4960258  lwc1        $f22, 0x258($a0)
    ctx->pc = 0x25abc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25abcc: 0xc497025c  lwc1        $f23, 0x25C($a0)
    ctx->pc = 0x25abccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25abd0: 0xc4980260  lwc1        $f24, 0x260($a0)
    ctx->pc = 0x25abd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x25abd4: 0xc4990264  lwc1        $f25, 0x264($a0)
    ctx->pc = 0x25abd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x25abd8: 0xc49a0268  lwc1        $f26, 0x268($a0)
    ctx->pc = 0x25abd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x25abdc: 0xc49b026c  lwc1        $f27, 0x26C($a0)
    ctx->pc = 0x25abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x25abe0: 0xc49c0270  lwc1        $f28, 0x270($a0)
    ctx->pc = 0x25abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x25abe4: 0xc49d0274  lwc1        $f29, 0x274($a0)
    ctx->pc = 0x25abe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x25abe8: 0xc49e0278  lwc1        $f30, 0x278($a0)
    ctx->pc = 0x25abe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x25abec: 0xc49f027c  lwc1        $f31, 0x27C($a0)
    ctx->pc = 0x25abecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x25abf0: 0x3e00008  jr          $ra
    ctx->pc = 0x25ABF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ABF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ABF8u;
}
