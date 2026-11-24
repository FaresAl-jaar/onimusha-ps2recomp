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

// Function: sub_002BDCB0
// Address: 0x2bdcb0 - 0x2bdd94
void sub_002BDCB0_0x2bdcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDCB0_0x2bdcb0");
#endif

    ctx->pc = 0x2bdcb0u;

    // 0x2bdcb0: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bdcb0u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2bdcb4: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2bdcb4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bdcb8: 0x94c50004  lhu         $a1, 0x4($a2)
    ctx->pc = 0x2bdcb8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2bdcbc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bdcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bdcc0: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x2bdcc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bdcc4: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2bdcc4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2bdcc8: 0x0  nop
    ctx->pc = 0x2bdcc8u;
    // NOP
    // 0x2bdccc: 0x0  nop
    ctx->pc = 0x2bdcccu;
    // NOP
    // 0x2bdcd0: 0x1810  mfhi        $v1
    ctx->pc = 0x2bdcd0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2bdcd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bdcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bdcd8: 0xa4820022  sh          $v0, 0x22($a0)
    ctx->pc = 0x2bdcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bdcdc: 0x94820022  lhu         $v0, 0x22($a0)
    ctx->pc = 0x2bdcdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2bdce0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDCE0u;
    {
        const bool branch_taken_0x2bdce0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCE0u;
        // 0x2bdce4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdce0) {
            ctx->pc = 0x2BDCF4u;
            goto label_2bdcf4;
        }
    }
    ctx->pc = 0x2BDCE8u;
    // 0x2bdce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdcec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDCECu;
    {
        const bool branch_taken_0x2bdcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCECu;
        // 0x2bdcf0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdcec) {
            ctx->pc = 0x2BDD0Cu;
            goto label_2bdd0c;
        }
    }
    ctx->pc = 0x2BDCF4u;
label_2bdcf4:
    // 0x2bdcf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bdcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bdcf8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bdcf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bdcfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bdcfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdd00: 0x0  nop
    ctx->pc = 0x2bdd00u;
    // NOP
    // 0x2bdd04: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bdd04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bdd08: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bdd08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bdd0c:
    // 0x2bdd0c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bdd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdd10: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bdd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bdd14: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bdd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bdd18: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bdd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bdd1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bdd1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdd20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdd20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdd24: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bdd24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bdd28: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bdd28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bdd2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bdd2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdd30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BDD30u;
    {
        const bool branch_taken_0x2bdd30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bdd30) {
            ctx->pc = 0x2BDD48u;
            goto label_2bdd48;
        }
    }
    ctx->pc = 0x2BDD38u;
    // 0x2bdd38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bdd38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bdd3c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bdd3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bdd40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDD40u;
    {
        const bool branch_taken_0x2bdd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdd40) {
            ctx->pc = 0x2BDD60u;
            goto label_2bdd60;
        }
    }
    ctx->pc = 0x2BDD48u;
label_2bdd48:
    // 0x2bdd48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bdd48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bdd4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bdd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bdd50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bdd50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bdd54: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bdd54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bdd58: 0x0  nop
    ctx->pc = 0x2bdd58u;
    // NOP
    // 0x2bdd5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bdd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2bdd60:
    // 0x2bdd60: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2bdd60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2bdd64: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2bdd64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bdd68: 0x24a55068  addiu       $a1, $a1, 0x5068
    ctx->pc = 0x2bdd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20584));
    // 0x2bdd6c: 0x24c30006  addiu       $v1, $a2, 0x6
    ctx->pc = 0x2bdd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x2bdd70: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2bdd70u;
    { uint32_t bits = FAST_READ32(0x4E5068u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdd74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bdd74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdd78: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2bdd78u;
    { uint32_t bits = FAST_READ32(0x4E506Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdd7c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2bdd7cu;
    { uint32_t bits = FAST_READ32(0x4E5070u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdd80: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2bdd80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2bdd84: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2bdd84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2bdd88: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2bdd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2bdd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD8Cu;
        // 0x2bdd90: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDD94u;
}
