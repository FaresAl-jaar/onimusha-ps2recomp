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

// Function: sub_0025A860
// Address: 0x25a860 - 0x25aa28
void sub_0025A860_0x25a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A860_0x25a860");
#endif

    ctx->pc = 0x25a860u;

    // 0x25a860: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x25a860u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25a864: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x25a864u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x25a868: 0xf8830020  sqc2        $vf3, 0x20($a0)
    ctx->pc = 0x25a868u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x25a86c: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x25a86cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25a870: 0xf8850040  sqc2        $vf5, 0x40($a0)
    ctx->pc = 0x25a870u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25a874: 0xf8860050  sqc2        $vf6, 0x50($a0)
    ctx->pc = 0x25a874u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25a878: 0xf8870060  sqc2        $vf7, 0x60($a0)
    ctx->pc = 0x25a878u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x25a87c: 0xf8880070  sqc2        $vf8, 0x70($a0)
    ctx->pc = 0x25a87cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x25a880: 0xf8890080  sqc2        $vf9, 0x80($a0)
    ctx->pc = 0x25a880u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x25a884: 0xf88a0090  sqc2        $vf10, 0x90($a0)
    ctx->pc = 0x25a884u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x25a888: 0xf88b00a0  sqc2        $vf11, 0xA0($a0)
    ctx->pc = 0x25a888u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x25a88c: 0xf88c00b0  sqc2        $vf12, 0xB0($a0)
    ctx->pc = 0x25a88cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x25a890: 0xf88d00c0  sqc2        $vf13, 0xC0($a0)
    ctx->pc = 0x25a890u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x25a894: 0xf88e00d0  sqc2        $vf14, 0xD0($a0)
    ctx->pc = 0x25a894u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x25a898: 0xf88f00e0  sqc2        $vf15, 0xE0($a0)
    ctx->pc = 0x25a898u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x25a89c: 0xf89000f0  sqc2        $vf16, 0xF0($a0)
    ctx->pc = 0x25a89cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25a8a0: 0xf8910100  sqc2        $vf17, 0x100($a0)
    ctx->pc = 0x25a8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 256), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x25a8a4: 0xf8920110  sqc2        $vf18, 0x110($a0)
    ctx->pc = 0x25a8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 272), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x25a8a8: 0xf8930120  sqc2        $vf19, 0x120($a0)
    ctx->pc = 0x25a8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 288), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x25a8ac: 0xf8940130  sqc2        $vf20, 0x130($a0)
    ctx->pc = 0x25a8acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 304), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x25a8b0: 0xf8950140  sqc2        $vf21, 0x140($a0)
    ctx->pc = 0x25a8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 320), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x25a8b4: 0xf8960150  sqc2        $vf22, 0x150($a0)
    ctx->pc = 0x25a8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 336), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x25a8b8: 0xf8970160  sqc2        $vf23, 0x160($a0)
    ctx->pc = 0x25a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 352), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x25a8bc: 0xf8980170  sqc2        $vf24, 0x170($a0)
    ctx->pc = 0x25a8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 368), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x25a8c0: 0xf8990180  sqc2        $vf25, 0x180($a0)
    ctx->pc = 0x25a8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 384), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x25a8c4: 0xf89a0190  sqc2        $vf26, 0x190($a0)
    ctx->pc = 0x25a8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 400), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x25a8c8: 0xf89b01a0  sqc2        $vf27, 0x1A0($a0)
    ctx->pc = 0x25a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 416), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x25a8cc: 0xf89c01b0  sqc2        $vf28, 0x1B0($a0)
    ctx->pc = 0x25a8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 432), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x25a8d0: 0xf89d01c0  sqc2        $vf29, 0x1C0($a0)
    ctx->pc = 0x25a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 448), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x25a8d4: 0xf89e01d0  sqc2        $vf30, 0x1D0($a0)
    ctx->pc = 0x25a8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 464), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x25a8d8: 0xf89f01e0  sqc2        $vf31, 0x1E0($a0)
    ctx->pc = 0x25a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 480), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x25a8dc: 0x48410800  cfc2.ni     $at, $vi1
    ctx->pc = 0x25a8dcu;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[1]));
    // 0x25a8e0: 0xa4810288  sh          $at, 0x288($a0)
    ctx->pc = 0x25a8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 648), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a8e4: 0x48411000  cfc2.ni     $at, $vi2
    ctx->pc = 0x25a8e4u;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[2]));
    // 0x25a8e8: 0xa481028a  sh          $at, 0x28A($a0)
    ctx->pc = 0x25a8e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 650), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a8ec: 0x48411800  cfc2.ni     $at, $vi3
    ctx->pc = 0x25a8ecu;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[3]));
    // 0x25a8f0: 0xa481028c  sh          $at, 0x28C($a0)
    ctx->pc = 0x25a8f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 652), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a8f4: 0x48412000  cfc2.ni     $at, $vi4
    ctx->pc = 0x25a8f4u;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[4]));
    // 0x25a8f8: 0xa481028e  sh          $at, 0x28E($a0)
    ctx->pc = 0x25a8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 654), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a8fc: 0x48412800  cfc2.ni     $at, $vi5
    ctx->pc = 0x25a8fcu;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[5]));
    // 0x25a900: 0xa4810290  sh          $at, 0x290($a0)
    ctx->pc = 0x25a900u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 656), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a904: 0x48413000  cfc2.ni     $at, $vi6
    ctx->pc = 0x25a904u;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[6]));
    // 0x25a908: 0xa4810292  sh          $at, 0x292($a0)
    ctx->pc = 0x25a908u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 658), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a90c: 0x48413800  cfc2.ni     $at, $vi7
    ctx->pc = 0x25a90cu;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[7]));
    // 0x25a910: 0xa4810294  sh          $at, 0x294($a0)
    ctx->pc = 0x25a910u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 660), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a914: 0x48414000  cfc2.ni     $at, $vi8
    ctx->pc = 0x25a914u;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[8]));
    // 0x25a918: 0xa4810296  sh          $at, 0x296($a0)
    ctx->pc = 0x25a918u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 662), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a91c: 0x48414800  cfc2.ni     $at, $vi9
    ctx->pc = 0x25a91cu;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[9]));
    // 0x25a920: 0xa4810298  sh          $at, 0x298($a0)
    ctx->pc = 0x25a920u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 664), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a924: 0x48415000  cfc2.ni     $at, $vi10
    ctx->pc = 0x25a924u;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[10]));
    // 0x25a928: 0xa481029a  sh          $at, 0x29A($a0)
    ctx->pc = 0x25a928u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 666), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a92c: 0x48415800  cfc2.ni     $at, $vi11
    ctx->pc = 0x25a92cu;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[11]));
    // 0x25a930: 0xa481029c  sh          $at, 0x29C($a0)
    ctx->pc = 0x25a930u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 668), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a934: 0x48416000  cfc2.ni     $at, $vi12
    ctx->pc = 0x25a934u;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[12]));
    // 0x25a938: 0xa481029e  sh          $at, 0x29E($a0)
    ctx->pc = 0x25a938u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 670), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a93c: 0x48416800  cfc2.ni     $at, $vi13
    ctx->pc = 0x25a93cu;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[13]));
    // 0x25a940: 0xa48102a0  sh          $at, 0x2A0($a0)
    ctx->pc = 0x25a940u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 672), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a944: 0x48417000  cfc2.ni     $at, $vi14
    ctx->pc = 0x25a944u;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[14]));
    // 0x25a948: 0xa48102a2  sh          $at, 0x2A2($a0)
    ctx->pc = 0x25a948u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 674), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a94c: 0x48417800  cfc2.ni     $at, $vi15
    ctx->pc = 0x25a94cu;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(ctx->vi[15]));
    // 0x25a950: 0xa48102a4  sh          $at, 0x2A4($a0)
    ctx->pc = 0x25a950u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 676), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a954: 0x48418000  cfc2.ni     $at, $vi16
    ctx->pc = 0x25a954u;
    SET_GPR_U32(ctx, 1, ctx->vu0_status);
    // 0x25a958: 0xa48102a6  sh          $at, 0x2A6($a0)
    ctx->pc = 0x25a958u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 678), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a95c: 0x48418800  cfc2.ni     $at, $vi17
    ctx->pc = 0x25a95cu;
    SET_GPR_U32(ctx, 1, ctx->vu0_mac_flags);
    // 0x25a960: 0xa48102a8  sh          $at, 0x2A8($a0)
    ctx->pc = 0x25a960u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 680), (uint16_t)GPR_U32(ctx, 1));
    // 0x25a964: 0x48419000  cfc2.ni     $at, $vi18
    ctx->pc = 0x25a964u;
    SET_GPR_U32(ctx, 1, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x25a968: 0xac8102ac  sw          $at, 0x2AC($a0)
    ctx->pc = 0x25a968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 684), GPR_U32(ctx, 1));
    // 0x25a96c: 0x4841a000  cfc2.ni     $at, $vi20
    ctx->pc = 0x25a96cu;
    SET_GPR_U32(ctx, 1, static_cast<uint32_t>(_mm_cvtsi128_si32(_mm_castps_si128(ctx->vu0_r))));
    // 0x25a970: 0xac8102b0  sw          $at, 0x2B0($a0)
    ctx->pc = 0x25a970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 688), GPR_U32(ctx, 1));
    // 0x25a974: 0x4841a800  cfc2.ni     $at, $vi21
    ctx->pc = 0x25a974u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_i, sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x25a978: 0xac8102b4  sw          $at, 0x2B4($a0)
    ctx->pc = 0x25a978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 692), GPR_U32(ctx, 1));
    // 0x25a97c: 0x4841b000  cfc2.ni     $at, $vi22
    ctx->pc = 0x25a97cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x25a980: 0xac8102b8  sw          $at, 0x2B8($a0)
    ctx->pc = 0x25a980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 696), GPR_U32(ctx, 1));
    // 0x25a984: 0x4be00048  vmaddx.xyzw $vf1, $vf0, $vf0x
    ctx->pc = 0x25a984u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25a988: 0xf88102c0  sqc2        $vf1, 0x2C0($a0)
    ctx->pc = 0x25a988u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 704), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25a98c: 0xe4800200  swc1        $f0, 0x200($a0)
    ctx->pc = 0x25a98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 512), bits); }
    // 0x25a990: 0xe4810204  swc1        $f1, 0x204($a0)
    ctx->pc = 0x25a990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 516), bits); }
    // 0x25a994: 0xe4820208  swc1        $f2, 0x208($a0)
    ctx->pc = 0x25a994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 520), bits); }
    // 0x25a998: 0xe483020c  swc1        $f3, 0x20C($a0)
    ctx->pc = 0x25a998u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 524), bits); }
    // 0x25a99c: 0xe4840210  swc1        $f4, 0x210($a0)
    ctx->pc = 0x25a99cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 528), bits); }
    // 0x25a9a0: 0xe4850214  swc1        $f5, 0x214($a0)
    ctx->pc = 0x25a9a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 532), bits); }
    // 0x25a9a4: 0xe4860218  swc1        $f6, 0x218($a0)
    ctx->pc = 0x25a9a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 536), bits); }
    // 0x25a9a8: 0xe487021c  swc1        $f7, 0x21C($a0)
    ctx->pc = 0x25a9a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 540), bits); }
    // 0x25a9ac: 0xe4880220  swc1        $f8, 0x220($a0)
    ctx->pc = 0x25a9acu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 544), bits); }
    // 0x25a9b0: 0xe4890224  swc1        $f9, 0x224($a0)
    ctx->pc = 0x25a9b0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 548), bits); }
    // 0x25a9b4: 0xe48a0228  swc1        $f10, 0x228($a0)
    ctx->pc = 0x25a9b4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 552), bits); }
    // 0x25a9b8: 0xe48b022c  swc1        $f11, 0x22C($a0)
    ctx->pc = 0x25a9b8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 556), bits); }
    // 0x25a9bc: 0xe48c0230  swc1        $f12, 0x230($a0)
    ctx->pc = 0x25a9bcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
    // 0x25a9c0: 0xe48d0234  swc1        $f13, 0x234($a0)
    ctx->pc = 0x25a9c0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 564), bits); }
    // 0x25a9c4: 0xe48e0238  swc1        $f14, 0x238($a0)
    ctx->pc = 0x25a9c4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 568), bits); }
    // 0x25a9c8: 0xe48f023c  swc1        $f15, 0x23C($a0)
    ctx->pc = 0x25a9c8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 572), bits); }
    // 0x25a9cc: 0xe4900240  swc1        $f16, 0x240($a0)
    ctx->pc = 0x25a9ccu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 576), bits); }
    // 0x25a9d0: 0xe4910244  swc1        $f17, 0x244($a0)
    ctx->pc = 0x25a9d0u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 580), bits); }
    // 0x25a9d4: 0xe4920248  swc1        $f18, 0x248($a0)
    ctx->pc = 0x25a9d4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 584), bits); }
    // 0x25a9d8: 0xe493024c  swc1        $f19, 0x24C($a0)
    ctx->pc = 0x25a9d8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 588), bits); }
    // 0x25a9dc: 0xe4940250  swc1        $f20, 0x250($a0)
    ctx->pc = 0x25a9dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 592), bits); }
    // 0x25a9e0: 0xe4950254  swc1        $f21, 0x254($a0)
    ctx->pc = 0x25a9e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 596), bits); }
    // 0x25a9e4: 0xe4960258  swc1        $f22, 0x258($a0)
    ctx->pc = 0x25a9e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 600), bits); }
    // 0x25a9e8: 0xe497025c  swc1        $f23, 0x25C($a0)
    ctx->pc = 0x25a9e8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 604), bits); }
    // 0x25a9ec: 0xe4980260  swc1        $f24, 0x260($a0)
    ctx->pc = 0x25a9ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 608), bits); }
    // 0x25a9f0: 0xe4990264  swc1        $f25, 0x264($a0)
    ctx->pc = 0x25a9f0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 612), bits); }
    // 0x25a9f4: 0xe49a0268  swc1        $f26, 0x268($a0)
    ctx->pc = 0x25a9f4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 616), bits); }
    // 0x25a9f8: 0xe49b026c  swc1        $f27, 0x26C($a0)
    ctx->pc = 0x25a9f8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 620), bits); }
    // 0x25a9fc: 0xe49c0270  swc1        $f28, 0x270($a0)
    ctx->pc = 0x25a9fcu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 624), bits); }
    // 0x25aa00: 0xe49d0274  swc1        $f29, 0x274($a0)
    ctx->pc = 0x25aa00u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 628), bits); }
    // 0x25aa04: 0xe49e0278  swc1        $f30, 0x278($a0)
    ctx->pc = 0x25aa04u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 632), bits); }
    // 0x25aa08: 0xe49f027c  swc1        $f31, 0x27C($a0)
    ctx->pc = 0x25aa08u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 636), bits); }
    // 0x25aa0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25aa0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25aa10: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x25aa10u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x25aa14: 0xe4810280  swc1        $f1, 0x280($a0)
    ctx->pc = 0x25aa14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 640), bits); }
    // 0x25aa18: 0x4448f800  cfc1        $t0, $FpcCsr
    ctx->pc = 0x25aa18u;
    SET_GPR_U32(ctx, 8, ctx->fcr31);
    // 0x25aa1c: 0xac880284  sw          $t0, 0x284($a0)
    ctx->pc = 0x25aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 8));
    // 0x25aa20: 0x3e00008  jr          $ra
    ctx->pc = 0x25AA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AA28u;
}
