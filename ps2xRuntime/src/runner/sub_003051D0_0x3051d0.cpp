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

// Function: sub_003051D0
// Address: 0x3051d0 - 0x3053d8
void sub_003051D0_0x3051d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003051D0_0x3051d0");
#endif

    switch (ctx->pc) {
        case 0x305204u: goto label_305204;
        case 0x305220u: goto label_305220;
        case 0x3052d8u: goto label_3052d8;
        case 0x3052e0u: goto label_3052e0;
        case 0x305340u: goto label_305340;
        default: break;
    }

    ctx->pc = 0x3051d0u;

    // 0x3051d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3051d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3051d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3051d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3051d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3051d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3051dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3051dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3051e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3051e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3051e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3051e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3051e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3051e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3051ec: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x3051ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x3051f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3051f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3051f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3051f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3051f8: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x3051f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x3051fc: 0xc041494  jal         func_105250
    ctx->pc = 0x3051FCu;
    SET_GPR_U32(ctx, 31, 0x305204u);
    ctx->pc = 0x305200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051FCu;
    // 0x305200: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x3051FCu, 0x305204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305204u;
label_305204:
    // 0x305204: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x305204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x305208: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x305208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x30520c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30520cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305210: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x305210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305214: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x305214u;
    {
        const bool branch_taken_0x305214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305214u;
        // 0x305218: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305214) {
            ctx->pc = 0x3053A8u;
            goto label_3053a8;
        }
    }
    ctx->pc = 0x30521Cu;
    // 0x30521c: 0x0  nop
    ctx->pc = 0x30521cu;
    // NOP
label_305220:
    // 0x305220: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x305220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x305224: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x305224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x305228: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x305228u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30522c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x30522cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x305230: 0x3063000b  andi        $v1, $v1, 0xB
    ctx->pc = 0x305230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)11);
    // 0x305234: 0x1460005a  bnez        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x305234u;
    {
        const bool branch_taken_0x305234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305234) {
            ctx->pc = 0x3053A0u;
            goto label_3053a0;
        }
    }
    ctx->pc = 0x30523Cu;
    // 0x30523c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x30523cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x305240: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x305240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x305244: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x305244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x305248: 0x14830055  bne         $a0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x305248u;
    {
        const bool branch_taken_0x305248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x305248) {
            ctx->pc = 0x3053A0u;
            goto label_3053a0;
        }
    }
    ctx->pc = 0x305250u;
    // 0x305250: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x305250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305254: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x305254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x305258: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x305258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30525c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x30525cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x305260: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x305260u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x305264: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x305264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305268: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x305268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30526c: 0x24636ba0  addiu       $v1, $v1, 0x6BA0
    ctx->pc = 0x30526cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27552));
    // 0x305270: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x305270u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x305274: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x305274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305278: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x305278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x30527c: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x30527cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x305280: 0xd8890000  lqc2        $vf9, 0x0($a0)
    ctx->pc = 0x305280u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x305284: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x305284u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305288: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x305288u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30528c: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x30528cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x305290: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x305290u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x305294: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x305294u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x305298: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x305298u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30529c: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x30529cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3052a0: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x3052a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3052a4: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x3052a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3052a8: 0x4a0002ff  vnop
    ctx->pc = 0x3052a8u;
    // NOP operation, no action needed for VU0
    // 0x3052ac: 0x4a0002ff  vnop
    ctx->pc = 0x3052acu;
    // NOP operation, no action needed for VU0
    // 0x3052b0: 0x4a0002ff  vnop
    ctx->pc = 0x3052b0u;
    // NOP operation, no action needed for VU0
    // 0x3052b4: 0x4a0002ff  vnop
    ctx->pc = 0x3052b4u;
    // NOP operation, no action needed for VU0
    // 0x3052b8: 0x4a0002ff  vnop
    ctx->pc = 0x3052b8u;
    // NOP operation, no action needed for VU0
    // 0x3052bc: 0x48438800  cfc2.ni     $v1, $vi17
    ctx->pc = 0x3052bcu;
    SET_GPR_U32(ctx, 3, ctx->vu0_mac_flags);
    // 0x3052c0: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x3052c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x3052c4: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3052C4u;
    {
        const bool branch_taken_0x3052c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3052c4) {
            ctx->pc = 0x3053A0u;
            goto label_3053a0;
        }
    }
    ctx->pc = 0x3052CCu;
    // 0x3052cc: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x3052ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3052d0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3052D0u;
    SET_GPR_U32(ctx, 31, 0x3052D8u);
    ctx->pc = 0x3052D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3052D0u;
    // 0x3052d4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3052D0u, 0x3052D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052D8u;
label_3052d8:
    // 0x3052d8: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x3052D8u;
    SET_GPR_U32(ctx, 31, 0x3052E0u);
    ctx->pc = 0x3052DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3052D8u;
    // 0x3052dc: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x3052D8u, 0x3052E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052E0u;
label_3052e0:
    // 0x3052e0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3052e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3052e4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3052e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3052e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3052e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3052ec: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x3052ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x3052f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3052f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3052f4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3052F4u;
    {
        const bool branch_taken_0x3052f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3052F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052F4u;
        // 0x3052f8: 0xa42824  and         $a1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3052f4) {
            ctx->pc = 0x30530Cu;
            goto label_30530c;
        }
    }
    ctx->pc = 0x3052FCu;
    // 0x3052fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3052fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x305300: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x305300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x305304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x305304u;
    {
        const bool branch_taken_0x305304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305304u;
        // 0x305308: 0x3c0300ff  lui         $v1, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305304) {
            ctx->pc = 0x305328u;
            goto label_305328;
        }
    }
    ctx->pc = 0x30530Cu;
label_30530c:
    // 0x30530c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30530cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x305310: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x305310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x305314: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x305314u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x305318: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x305318u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30531c: 0x0  nop
    ctx->pc = 0x30531cu;
    // NOP
    // 0x305320: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x305320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x305324: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x305324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_305328:
    // 0x305328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x305328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30532c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30532cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x305330: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x305330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x305334: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x305334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x305338: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x305338u;
    {
        const bool branch_taken_0x305338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305338u;
        // 0x30533c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305338) {
            ctx->pc = 0x305370u;
            goto label_305370;
        }
    }
    ctx->pc = 0x305340u;
label_305340:
    // 0x305340: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x305340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x305344: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x305344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x305348: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x305348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x30534c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x30534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x305350: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x305350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x305354: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x305354u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x305358: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x305358u;
    {
        const bool branch_taken_0x305358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x305358) {
            ctx->pc = 0x305368u;
            goto label_305368;
        }
    }
    ctx->pc = 0x305360u;
    // 0x305360: 0xacd10004  sw          $s1, 0x4($a2)
    ctx->pc = 0x305360u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 17));
    // 0x305364: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x305364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_305368:
    // 0x305368: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x305368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30536c: 0x0  nop
    ctx->pc = 0x30536cu;
    // NOP
label_305370:
    // 0x305370: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x305370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x305374: 0xe5182b  sltu        $v1, $a3, $a1
    ctx->pc = 0x305374u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x305378: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x305378u;
    {
        const bool branch_taken_0x305378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305378) {
            ctx->pc = 0x305340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305340;
        }
    }
    ctx->pc = 0x305380u;
    // 0x305380: 0x2ca10004  sltiu       $at, $a1, 0x4
    ctx->pc = 0x305380u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x305384: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x305384u;
    {
        const bool branch_taken_0x305384 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x305384) {
            ctx->pc = 0x3053A0u;
            goto label_3053a0;
        }
    }
    ctx->pc = 0x30538Cu;
    // 0x30538c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x30538cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x305390: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x305390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x305394: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x305394u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x305398: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x305398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x30539c: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x30539cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
label_3053a0:
    // 0x3053a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3053a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3053a4: 0x0  nop
    ctx->pc = 0x3053a4u;
    // NOP
label_3053a8:
    // 0x3053a8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3053a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3053ac: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x3053acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3053b0: 0x1460ff9b  bnez        $v1, . + 4 + (-0x65 << 2)
    ctx->pc = 0x3053B0u;
    {
        const bool branch_taken_0x3053b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3053b0) {
            ctx->pc = 0x305220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305220;
        }
    }
    ctx->pc = 0x3053B8u;
    // 0x3053b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3053b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3053bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3053bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3053c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3053c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3053c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3053c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3053c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3053c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3053cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3053ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3053d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3053D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3053D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3053D0u;
        // 0x3053d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3053D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3053D8u;
}
