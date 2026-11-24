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

// Function: sub_00169330
// Address: 0x169330 - 0x169598
void sub_00169330_0x169330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169330_0x169330");
#endif

    switch (ctx->pc) {
        case 0x169470u: goto label_169470;
        case 0x169564u: goto label_169564;
        default: break;
    }

    ctx->pc = 0x169330u;

    // 0x169330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x169330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x169334: 0x3c090069  lui         $t1, 0x69
    ctx->pc = 0x169334u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)105 << 16));
    // 0x169338: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x169338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16933c: 0x25296ba0  addiu       $t1, $t1, 0x6BA0
    ctx->pc = 0x16933cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 27552));
    // 0x169340: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x169340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x169344: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x169348: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x169348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16934c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169350: 0x264a0050  addiu       $t2, $s2, 0x50
    ctx->pc = 0x169350u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x169354: 0x8c880018  lw          $t0, 0x18($a0)
    ctx->pc = 0x169354u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x169358: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x169358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x16935c: 0x94830028  lhu         $v1, 0x28($a0)
    ctx->pc = 0x16935cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x169360: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x169360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x169364: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x169364u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169368: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x169368u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x16936c: 0x1053821  addu        $a3, $t0, $a1
    ctx->pc = 0x16936cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x169370: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x169370u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x169374: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x169374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x169378: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x169378u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16937c: 0xe58821  addu        $s1, $a3, $a1
    ctx->pc = 0x16937cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x169380: 0x8625000a  lh          $a1, 0xA($s1)
    ctx->pc = 0x169380u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x169384: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x169384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x169388: 0x31b43  sra         $v1, $v1, 13
    ctx->pc = 0x169388u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 13));
    // 0x16938c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16938cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169390: 0x0  nop
    ctx->pc = 0x169390u;
    // NOP
    // 0x169394: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x169394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169398: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x169398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x16939c: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x16939cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1693a0: 0xd9490000  lqc2        $vf9, 0x0($t2)
    ctx->pc = 0x1693a0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1693a4: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x1693a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1693a8: 0xd9220010  lqc2        $vf2, 0x10($t1)
    ctx->pc = 0x1693a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1693ac: 0xd9230020  lqc2        $vf3, 0x20($t1)
    ctx->pc = 0x1693acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x1693b0: 0xd9240030  lqc2        $vf4, 0x30($t1)
    ctx->pc = 0x1693b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x1693b4: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x1693b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1693b8: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x1693b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1693bc: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x1693bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1693c0: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x1693c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1693c4: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x1693c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1693c8: 0x4a0002ff  vnop
    ctx->pc = 0x1693c8u;
    // NOP operation, no action needed for VU0
    // 0x1693cc: 0x4a0002ff  vnop
    ctx->pc = 0x1693ccu;
    // NOP operation, no action needed for VU0
    // 0x1693d0: 0x4a0002ff  vnop
    ctx->pc = 0x1693d0u;
    // NOP operation, no action needed for VU0
    // 0x1693d4: 0x4a0002ff  vnop
    ctx->pc = 0x1693d4u;
    // NOP operation, no action needed for VU0
    // 0x1693d8: 0x4a0002ff  vnop
    ctx->pc = 0x1693d8u;
    // NOP operation, no action needed for VU0
    // 0x1693dc: 0x48458800  cfc2.ni     $a1, $vi17
    ctx->pc = 0x1693dcu;
    SET_GPR_U32(ctx, 5, ctx->vu0_mac_flags);
    // 0x1693e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1693e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1693e4: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x1693e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
    // 0x1693e8: 0x30a300f0  andi        $v1, $a1, 0xF0
    ctx->pc = 0x1693e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
    // 0x1693ec: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x1693ECu;
    {
        const bool branch_taken_0x1693ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1693ec) {
            ctx->pc = 0x169580u;
            goto label_169580;
        }
    }
    ctx->pc = 0x1693F4u;
    // 0x1693f4: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x1693f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1693f8: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x1693f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1693fc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1693FCu;
    {
        const bool branch_taken_0x1693fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693FCu;
        // 0x169400: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693fc) {
            ctx->pc = 0x169450u;
            goto label_169450;
        }
    }
    ctx->pc = 0x169404u;
    // 0x169404: 0xc4230388  lwc1        $f3, 0x388($at)
    ctx->pc = 0x169404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x169408: 0xc6440058  lwc1        $f4, 0x58($s2)
    ctx->pc = 0x169408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16940c: 0xc6420050  lwc1        $f2, 0x50($s2)
    ctx->pc = 0x16940cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x169410: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169414: 0xc4210380  lwc1        $f1, 0x380($at)
    ctx->pc = 0x169414u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169418: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x169418u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x16941c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16941cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169420: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x169420u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x169424: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x169424u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x169428: 0xc4200390  lwc1        $f0, 0x390($at)
    ctx->pc = 0x169428u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000390u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16942c: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x16942cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x169430: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x169430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169434: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x169434u;
    {
        const bool branch_taken_0x169434 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x169438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169434u;
        // 0x169438: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169434) {
            ctx->pc = 0x169440u;
            goto label_169440;
        }
    }
    ctx->pc = 0x16943Cu;
    // 0x16943c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16943cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169440:
    // 0x169440: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x169440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x169444: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x169444u;
    {
        const bool branch_taken_0x169444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169444) {
            ctx->pc = 0x169580u;
            goto label_169580;
        }
    }
    ctx->pc = 0x16944Cu;
    // 0x16944c: 0x0  nop
    ctx->pc = 0x16944cu;
    // NOP
label_169450:
    // 0x169450: 0x8648002c  lh          $t0, 0x2C($s2)
    ctx->pc = 0x169450u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x169454: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x169454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x169458: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x169458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16945c: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x16945cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x169460: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x169460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x169464: 0x344702a0  ori         $a3, $v0, 0x2A0
    ctx->pc = 0x169464u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x169468: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x169468u;
    SET_GPR_U32(ctx, 31, 0x169470u);
    ctx->pc = 0x16946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169468u;
    // 0x16946c: 0x24c669a0  addiu       $a2, $a2, 0x69A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x169468u, 0x169470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169470u;
label_169470:
    // 0x169470: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x169470u;
    {
        const bool branch_taken_0x169470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169470u;
        // 0x169474: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169470) {
            ctx->pc = 0x169580u;
            goto label_169580;
        }
    }
    ctx->pc = 0x169478u;
    // 0x169478: 0x3c022838  lui         $v0, 0x2838
    ctx->pc = 0x169478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10296 << 16));
    // 0x16947c: 0x8c27fc90  lw          $a3, -0x370($at)
    ctx->pc = 0x16947cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
    // 0x169480: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x169480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x169484: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x169484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x169488: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x169488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16948c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16948cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x169490: 0x34420154  ori         $v0, $v0, 0x154
    ctx->pc = 0x169490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)340);
    // 0x169494: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x169494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x169498: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x169498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16949c: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x16949cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x1694a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1694a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1694a4: 0xe58024  and         $s0, $a3, $a1
    ctx->pc = 0x1694a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1694a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1694a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1694ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1694acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1694b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1694b4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1694b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1694b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1694b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1694bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1694bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1694c0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1694c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1694c4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1694c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1694c8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1694c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1694cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1694ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1694d0: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1694d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1694d4: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1694d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1694d8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1694d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1694dc: 0x8c220100  lw          $v0, 0x100($at)
    ctx->pc = 0x1694dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 256)));
    // 0x1694e0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1694e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1694e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1694e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1694e8: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x1694e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x1694ec: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1694ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1694f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1694f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1694f4: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x1694f4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x1694f8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1694f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1694fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1694fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169500: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x169500u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169504: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x169504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x169508: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16950c: 0x92430012  lbu         $v1, 0x12($s2)
    ctx->pc = 0x16950cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x169510: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x169510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x169514: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x169514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x169518: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x169518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16951c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16951cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169520: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x169520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x169524: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169528: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x169528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16952c: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x16952cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x169530: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x169530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x169534: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x169534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x169538: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x169538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16953c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16953cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x169540: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x169540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x169544: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x169544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x169548: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x169548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16954c: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16954cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x169550: 0x92420013  lbu         $v0, 0x13($s2)
    ctx->pc = 0x169550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
    // 0x169554: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x169554u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x169558: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x169558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 264)));
    // 0x16955c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16955Cu;
    SET_GPR_U32(ctx, 31, 0x169564u);
    ctx->pc = 0x169560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16955Cu;
    // 0x169560: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16955Cu, 0x169564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169564u;
label_169564:
    // 0x169564: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x169564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x169568: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x169568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16956c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16956cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x169570: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x169570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x169574: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x169574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x169578: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x169578u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x16957c: 0x0  nop
    ctx->pc = 0x16957cu;
    // NOP
label_169580:
    // 0x169580: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x169580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169584: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x169584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169588: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16958c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16958cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169590: 0x3e00008  jr          $ra
    ctx->pc = 0x169590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169590u;
        // 0x169594: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169598u;
}
