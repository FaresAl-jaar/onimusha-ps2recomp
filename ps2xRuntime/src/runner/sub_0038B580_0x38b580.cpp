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

// Function: sub_0038B580
// Address: 0x38b580 - 0x38b7d0
void sub_0038B580_0x38b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B580_0x38b580");
#endif

    switch (ctx->pc) {
        case 0x38b690u: goto label_38b690;
        case 0x38b73cu: goto label_38b73c;
        case 0x38b750u: goto label_38b750;
        case 0x38b7a0u: goto label_38b7a0;
        default: break;
    }

    ctx->pc = 0x38b580u;

    // 0x38b580: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38b584: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38b584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38b588: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38b58c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x38b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x38b590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38b590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38b594: 0x94850030  lhu         $a1, 0x30($a0)
    ctx->pc = 0x38b594u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x38b598: 0x30a5fffd  andi        $a1, $a1, 0xFFFD
    ctx->pc = 0x38b598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65533);
    // 0x38b59c: 0xa4850030  sh          $a1, 0x30($a0)
    ctx->pc = 0x38b59cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x38b5a0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x38b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x38b5a4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x38b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x38b5a8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x38b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x38b5ac: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x38b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38b5b0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x38b5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38b5b4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x38b5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38b5b8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x38b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38b5bc: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x38b5bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x38b5c0: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x38b5c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x38b5c4: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x38b5c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x38b5c8: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x38b5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x38b5cc: 0x90830119  lbu         $v1, 0x119($a0)
    ctx->pc = 0x38b5ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 281)));
    // 0x38b5d0: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x38B5D0u;
    {
        const bool branch_taken_0x38b5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5D0u;
        // 0x38b5d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b5d0) {
            ctx->pc = 0x38B688u;
            goto label_38b688;
        }
    }
    ctx->pc = 0x38B5D8u;
    // 0x38b5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38b5dc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x38B5DCu;
    {
        const bool branch_taken_0x38b5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38b5dc) {
            ctx->pc = 0x38B660u;
            goto label_38b660;
        }
    }
    ctx->pc = 0x38B5E4u;
    // 0x38b5e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38B5E4u;
    {
        const bool branch_taken_0x38b5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b5e4) {
            ctx->pc = 0x38B5F8u;
            goto label_38b5f8;
        }
    }
    ctx->pc = 0x38B5ECu;
    // 0x38b5ec: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x38B5ECu;
    {
        const bool branch_taken_0x38b5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b5ec) {
            ctx->pc = 0x38B7B8u;
            goto label_38b7b8;
        }
    }
    ctx->pc = 0x38B5F4u;
    // 0x38b5f4: 0x0  nop
    ctx->pc = 0x38b5f4u;
    // NOP
label_38b5f8:
    // 0x38b5f8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x38b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x38b5fc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x38b5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38b600: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x38b600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38b604: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x38b604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x38b608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38b608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38b60c: 0x0  nop
    ctx->pc = 0x38b60cu;
    // NOP
    // 0x38b610: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x38b610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x38b614: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38b614u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38b618: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38B618u;
    {
        const bool branch_taken_0x38b618 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38b618) {
            ctx->pc = 0x38B630u;
            goto label_38b630;
        }
    }
    ctx->pc = 0x38B620u;
    // 0x38b620: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38b620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38b624: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x38b624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x38b628: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38B628u;
    {
        const bool branch_taken_0x38b628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B628u;
        // 0x38b62c: 0xa6032aca  sh          $v1, 0x2ACA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10954), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b628) {
            ctx->pc = 0x38B64Cu;
            goto label_38b64c;
        }
    }
    ctx->pc = 0x38B630u;
label_38b630:
    // 0x38b630: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38b630u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38b634: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38b634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38b638: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38b638u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38b63c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x38b63cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x38b640: 0x0  nop
    ctx->pc = 0x38b640u;
    // NOP
    // 0x38b644: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38b644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x38b648: 0xa6032aca  sh          $v1, 0x2ACA($s0)
    ctx->pc = 0x38b648u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10954), (uint16_t)GPR_U32(ctx, 3));
label_38b64c:
    // 0x38b64c: 0x92020119  lbu         $v0, 0x119($s0)
    ctx->pc = 0x38b64cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 281)));
    // 0x38b650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38b654: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x38B654u;
    {
        const bool branch_taken_0x38b654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B654u;
        // 0x38b658: 0xa2020119  sb          $v0, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b654) {
            ctx->pc = 0x38B7B8u;
            goto label_38b7b8;
        }
    }
    ctx->pc = 0x38B65Cu;
    // 0x38b65c: 0x0  nop
    ctx->pc = 0x38b65cu;
    // NOP
label_38b660:
    // 0x38b660: 0x86022aca  lh          $v0, 0x2ACA($s0)
    ctx->pc = 0x38b660u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10954)));
    // 0x38b664: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38b668: 0xa6022aca  sh          $v0, 0x2ACA($s0)
    ctx->pc = 0x38b668u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10954), (uint16_t)GPR_U32(ctx, 2));
    // 0x38b66c: 0x86022aca  lh          $v0, 0x2ACA($s0)
    ctx->pc = 0x38b66cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10954)));
    // 0x38b670: 0x1c400051  bgtz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x38B670u;
    {
        const bool branch_taken_0x38b670 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x38b670) {
            ctx->pc = 0x38B7B8u;
            goto label_38b7b8;
        }
    }
    ctx->pc = 0x38B678u;
    // 0x38b678: 0x92020119  lbu         $v0, 0x119($s0)
    ctx->pc = 0x38b678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 281)));
    // 0x38b67c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38b680: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x38B680u;
    {
        const bool branch_taken_0x38b680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B680u;
        // 0x38b684: 0xa2020119  sb          $v0, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b680) {
            ctx->pc = 0x38B7B8u;
            goto label_38b7b8;
        }
    }
    ctx->pc = 0x38B688u;
label_38b688:
    // 0x38b688: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x38B688u;
    SET_GPR_U32(ctx, 31, 0x38B690u);
    ctx->pc = 0x38B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B688u;
    // 0x38b68c: 0x8e040144  lw          $a0, 0x144($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x38B688u, 0x38B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B690u;
label_38b690:
    // 0x38b690: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x38b690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x38b694: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x38b694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x38b698: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38b698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38b69c: 0x24846ba0  addiu       $a0, $a0, 0x6BA0
    ctx->pc = 0x38b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27552));
    // 0x38b6a0: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x38b6a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x38b6a4: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x38b6a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x38b6a8: 0x48a15000  qmtc2.ni    $at, $vf10
    ctx->pc = 0x38b6a8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x38b6ac: 0xd8490000  lqc2        $vf9, 0x0($v0)
    ctx->pc = 0x38b6acu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38b6b0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x38b6b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38b6b4: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x38b6b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38b6b8: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x38b6b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x38b6bc: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x38b6bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x38b6c0: 0x4bea403c  vaddax.xyzw $ACC, $vf8, $vf10x
    ctx->pc = 0x38b6c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x38b6c4: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x38b6c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x38b6c8: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x38b6c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x38b6cc: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x38b6ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x38b6d0: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x38b6d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x38b6d4: 0x4a0002ff  vnop
    ctx->pc = 0x38b6d4u;
    // NOP operation, no action needed for VU0
    // 0x38b6d8: 0x4a0002ff  vnop
    ctx->pc = 0x38b6d8u;
    // NOP operation, no action needed for VU0
    // 0x38b6dc: 0x4a0002ff  vnop
    ctx->pc = 0x38b6dcu;
    // NOP operation, no action needed for VU0
    // 0x38b6e0: 0x4a0002ff  vnop
    ctx->pc = 0x38b6e0u;
    // NOP operation, no action needed for VU0
    // 0x38b6e4: 0x4a0002ff  vnop
    ctx->pc = 0x38b6e4u;
    // NOP operation, no action needed for VU0
    // 0x38b6e8: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x38b6e8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x38b6ec: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x38b6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x38b6f0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x38B6F0u;
    {
        const bool branch_taken_0x38b6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B6F0u;
        // 0x38b6f4: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b6f0) {
            ctx->pc = 0x38B7B8u;
            goto label_38b7b8;
        }
    }
    ctx->pc = 0x38B6F8u;
    // 0x38b6f8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x38b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x38b6fc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x38b6fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x38b700: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x38b700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38b704: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38b704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38b708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38b708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38b70c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x38b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38b710: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x38b710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38b714: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x38b714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38b718: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x38b718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38b71c: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x38b71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38b720: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x38b720u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x38b724: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x38b724u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x38b728: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x38b728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x38b72c: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x38b72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x38b730: 0x8e050144  lw          $a1, 0x144($s0)
    ctx->pc = 0x38b730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x38b734: 0xc0414d0  jal         func_105340
    ctx->pc = 0x38B734u;
    SET_GPR_U32(ctx, 31, 0x38B73Cu);
    ctx->pc = 0x38B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B734u;
    // 0x38b738: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x38B734u, 0x38B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B73Cu;
label_38b73c:
    // 0x38b73c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x38b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38b740: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x38b740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38b744: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x38b744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38b748: 0xc07cd48  jal         func_1F3520
    ctx->pc = 0x38B748u;
    SET_GPR_U32(ctx, 31, 0x38B750u);
    ctx->pc = 0x38B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B748u;
    // 0x38b74c: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3520u, 0x38B748u, 0x38B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B750u;
label_38b750:
    // 0x38b750: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x38b750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x38b754: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x38b754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x38b758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38b758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38b75c: 0x0  nop
    ctx->pc = 0x38b75cu;
    // NOP
    // 0x38b760: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38b760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38b764: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x38B764u;
    {
        const bool branch_taken_0x38b764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38b764) {
            ctx->pc = 0x38B7B8u;
            goto label_38b7b8;
        }
    }
    ctx->pc = 0x38B76Cu;
    // 0x38b76c: 0x96022ace  lhu         $v0, 0x2ACE($s0)
    ctx->pc = 0x38b76cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10958)));
    // 0x38b770: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x38b770u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x38b774: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38b774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x38b778: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x38b778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38b77c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x38b77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38b780: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x38b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38b784: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x38b784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38b788: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x38b788u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x38b78c: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x38b78cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x38b790: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x38b790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x38b794: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x38b794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x38b798: 0xc0a866c  jal         func_2A19B0
    ctx->pc = 0x38B798u;
    SET_GPR_U32(ctx, 31, 0x38B7A0u);
    ctx->pc = 0x38B79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B798u;
    // 0x38b79c: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A19B0u, 0x38B798u, 0x38B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B7A0u;
label_38b7a0:
    // 0x38b7a0: 0x96030030  lhu         $v1, 0x30($s0)
    ctx->pc = 0x38b7a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x38b7a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38b7a8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x38b7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x38b7ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38B7ACu;
    {
        const bool branch_taken_0x38b7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7ACu;
        // 0x38b7b0: 0xa6030030  sh          $v1, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b7ac) {
            ctx->pc = 0x38B7C0u;
            goto label_38b7c0;
        }
    }
    ctx->pc = 0x38B7B4u;
    // 0x38b7b4: 0x0  nop
    ctx->pc = 0x38b7b4u;
    // NOP
label_38b7b8:
    // 0x38b7b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38b7b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b7bc: 0x0  nop
    ctx->pc = 0x38b7bcu;
    // NOP
label_38b7c0:
    // 0x38b7c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38b7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b7c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38b7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x38B7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7C8u;
        // 0x38b7cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B7D0u;
}
