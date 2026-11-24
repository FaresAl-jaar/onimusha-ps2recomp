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

// Function: sub_001690C0
// Address: 0x1690c0 - 0x169328
void sub_001690C0_0x1690c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001690C0_0x1690c0");
#endif

    switch (ctx->pc) {
        case 0x169200u: goto label_169200;
        case 0x1692f4u: goto label_1692f4;
        default: break;
    }

    ctx->pc = 0x1690c0u;

    // 0x1690c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1690c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1690c4: 0x3c090069  lui         $t1, 0x69
    ctx->pc = 0x1690c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)105 << 16));
    // 0x1690c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1690c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1690cc: 0x25296ba0  addiu       $t1, $t1, 0x6BA0
    ctx->pc = 0x1690ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 27552));
    // 0x1690d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1690d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1690d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1690d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1690d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1690d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1690dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1690dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1690e0: 0x264a0050  addiu       $t2, $s2, 0x50
    ctx->pc = 0x1690e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1690e4: 0x8c880018  lw          $t0, 0x18($a0)
    ctx->pc = 0x1690e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1690e8: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x1690e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1690ec: 0x94830028  lhu         $v1, 0x28($a0)
    ctx->pc = 0x1690ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1690f0: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x1690f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1690f4: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x1690f4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1690f8: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x1690f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1690fc: 0x1053821  addu        $a3, $t0, $a1
    ctx->pc = 0x1690fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x169100: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x169100u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x169104: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x169104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x169108: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x169108u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16910c: 0xe58821  addu        $s1, $a3, $a1
    ctx->pc = 0x16910cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x169110: 0x8625000a  lh          $a1, 0xA($s1)
    ctx->pc = 0x169110u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x169114: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x169114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x169118: 0x31b43  sra         $v1, $v1, 13
    ctx->pc = 0x169118u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 13));
    // 0x16911c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16911cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169120: 0x0  nop
    ctx->pc = 0x169120u;
    // NOP
    // 0x169124: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x169124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169128: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x169128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x16912c: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x16912cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x169130: 0xd9490000  lqc2        $vf9, 0x0($t2)
    ctx->pc = 0x169130u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x169134: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x169134u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x169138: 0xd9220010  lqc2        $vf2, 0x10($t1)
    ctx->pc = 0x169138u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x16913c: 0xd9230020  lqc2        $vf3, 0x20($t1)
    ctx->pc = 0x16913cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x169140: 0xd9240030  lqc2        $vf4, 0x30($t1)
    ctx->pc = 0x169140u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x169144: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x169144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x169148: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x169148u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16914c: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x16914cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x169150: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x169150u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x169154: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x169154u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x169158: 0x4a0002ff  vnop
    ctx->pc = 0x169158u;
    // NOP operation, no action needed for VU0
    // 0x16915c: 0x4a0002ff  vnop
    ctx->pc = 0x16915cu;
    // NOP operation, no action needed for VU0
    // 0x169160: 0x4a0002ff  vnop
    ctx->pc = 0x169160u;
    // NOP operation, no action needed for VU0
    // 0x169164: 0x4a0002ff  vnop
    ctx->pc = 0x169164u;
    // NOP operation, no action needed for VU0
    // 0x169168: 0x4a0002ff  vnop
    ctx->pc = 0x169168u;
    // NOP operation, no action needed for VU0
    // 0x16916c: 0x48458800  cfc2.ni     $a1, $vi17
    ctx->pc = 0x16916cu;
    SET_GPR_U32(ctx, 5, ctx->vu0_mac_flags);
    // 0x169170: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x169170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x169174: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x169174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
    // 0x169178: 0x30a300f0  andi        $v1, $a1, 0xF0
    ctx->pc = 0x169178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
    // 0x16917c: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x16917Cu;
    {
        const bool branch_taken_0x16917c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16917c) {
            ctx->pc = 0x169310u;
            goto label_169310;
        }
    }
    ctx->pc = 0x169184u;
    // 0x169184: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x169184u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x169188: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x169188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x16918c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16918Cu;
    {
        const bool branch_taken_0x16918c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16918Cu;
        // 0x169190: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16918c) {
            ctx->pc = 0x1691E0u;
            goto label_1691e0;
        }
    }
    ctx->pc = 0x169194u;
    // 0x169194: 0xc4230388  lwc1        $f3, 0x388($at)
    ctx->pc = 0x169194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x169198: 0xc6440058  lwc1        $f4, 0x58($s2)
    ctx->pc = 0x169198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16919c: 0xc6420050  lwc1        $f2, 0x50($s2)
    ctx->pc = 0x16919cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1691a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1691a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1691a4: 0xc4210380  lwc1        $f1, 0x380($at)
    ctx->pc = 0x1691a4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1691a8: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x1691a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1691ac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1691acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1691b0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1691b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1691b4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1691b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x1691b8: 0xc4200390  lwc1        $f0, 0x390($at)
    ctx->pc = 0x1691b8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000390u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1691bc: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x1691bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x1691c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1691c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1691c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1691C4u;
    {
        const bool branch_taken_0x1691c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1691C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691C4u;
        // 0x1691c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691c4) {
            ctx->pc = 0x1691D0u;
            goto label_1691d0;
        }
    }
    ctx->pc = 0x1691CCu;
    // 0x1691cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1691ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1691d0:
    // 0x1691d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1691d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1691d4: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1691D4u;
    {
        const bool branch_taken_0x1691d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1691d4) {
            ctx->pc = 0x169310u;
            goto label_169310;
        }
    }
    ctx->pc = 0x1691DCu;
    // 0x1691dc: 0x0  nop
    ctx->pc = 0x1691dcu;
    // NOP
label_1691e0:
    // 0x1691e0: 0x8648002c  lh          $t0, 0x2C($s2)
    ctx->pc = 0x1691e0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1691e4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1691e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1691e8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1691e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1691ec: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x1691ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1691f0: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x1691f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1691f4: 0x344702a0  ori         $a3, $v0, 0x2A0
    ctx->pc = 0x1691f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x1691f8: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x1691F8u;
    SET_GPR_U32(ctx, 31, 0x169200u);
    ctx->pc = 0x1691FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1691F8u;
    // 0x1691fc: 0x24c669a0  addiu       $a2, $a2, 0x69A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x1691F8u, 0x169200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169200u;
label_169200:
    // 0x169200: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x169200u;
    {
        const bool branch_taken_0x169200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169200u;
        // 0x169204: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169200) {
            ctx->pc = 0x169310u;
            goto label_169310;
        }
    }
    ctx->pc = 0x169208u;
    // 0x169208: 0x3c022438  lui         $v0, 0x2438
    ctx->pc = 0x169208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9272 << 16));
    // 0x16920c: 0x8c27fc90  lw          $a3, -0x370($at)
    ctx->pc = 0x16920cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
    // 0x169210: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x169210u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x169214: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x169214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x169218: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x169218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16921c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16921cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x169220: 0x34420156  ori         $v0, $v0, 0x156
    ctx->pc = 0x169220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)342);
    // 0x169224: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x169224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x169228: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x169228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16922c: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x16922cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x169230: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169234: 0xe58024  and         $s0, $a3, $a1
    ctx->pc = 0x169234u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x169238: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x169238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16923c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16923cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169240: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x169240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x169244: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x169244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x169248: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x169248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16924c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x169250: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x169250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x169254: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x169254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x169258: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x169258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x16925c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16925cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x169260: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x169260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x169264: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x169264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x169268: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x169268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x16926c: 0x8c220100  lw          $v0, 0x100($at)
    ctx->pc = 0x16926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 256)));
    // 0x169270: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x169270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x169274: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169278: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x169278u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16927c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16927cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x169280: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169284: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x169284u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x169288: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x169288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x16928c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16928cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169290: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x169290u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169294: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x169294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x169298: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16929c: 0x92430012  lbu         $v1, 0x12($s2)
    ctx->pc = 0x16929cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x1692a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1692a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1692a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1692a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1692a8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1692a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1692ac: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1692acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1692b0: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1692b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1692b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1692b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1692b8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1692b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1692bc: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x1692bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x1692c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1692c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1692c4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1692c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1692c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1692c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1692cc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1692ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1692d0: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x1692d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x1692d4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1692d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1692d8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1692d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1692dc: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x1692dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1692e0: 0x92420013  lbu         $v0, 0x13($s2)
    ctx->pc = 0x1692e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
    // 0x1692e4: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x1692e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x1692e8: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x1692e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 264)));
    // 0x1692ec: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1692ECu;
    SET_GPR_U32(ctx, 31, 0x1692F4u);
    ctx->pc = 0x1692F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692ECu;
    // 0x1692f0: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1692ECu, 0x1692F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1692F4u;
label_1692f4:
    // 0x1692f4: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1692f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1692f8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1692f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1692fc: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x1692fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x169300: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x169300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x169304: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x169304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x169308: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x169308u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x16930c: 0x0  nop
    ctx->pc = 0x16930cu;
    // NOP
label_169310:
    // 0x169310: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x169310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169314: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x169314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16931c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16931cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169320: 0x3e00008  jr          $ra
    ctx->pc = 0x169320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169320u;
        // 0x169324: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169328u;
}
