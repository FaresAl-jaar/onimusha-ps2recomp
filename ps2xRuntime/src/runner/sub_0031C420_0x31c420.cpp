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

// Function: sub_0031C420
// Address: 0x31c420 - 0x31c4e4
void sub_0031C420_0x31c420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C420_0x31c420");
#endif

    ctx->pc = 0x31c420u;

    // 0x31c420: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x31c420u;
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
    // 0x31c424: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x31c424u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x31c428: 0x94a60004  lhu         $a2, 0x4($a1)
    ctx->pc = 0x31c428u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31c42c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31c42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31c430: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x31c430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x31c434: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x31c434u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x31c438: 0x0  nop
    ctx->pc = 0x31c438u;
    // NOP
    // 0x31c43c: 0x0  nop
    ctx->pc = 0x31c43cu;
    // NOP
    // 0x31c440: 0x1810  mfhi        $v1
    ctx->pc = 0x31c440u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x31c444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31c444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31c448: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x31c448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x31c44c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x31c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x31c450: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C450u;
    {
        const bool branch_taken_0x31c450 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x31C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C450u;
        // 0x31c454: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c450) {
            ctx->pc = 0x31C464u;
            goto label_31c464;
        }
    }
    ctx->pc = 0x31C458u;
    // 0x31c458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c45c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31C45Cu;
    {
        const bool branch_taken_0x31c45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C45Cu;
        // 0x31c460: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c45c) {
            ctx->pc = 0x31C47Cu;
            goto label_31c47c;
        }
    }
    ctx->pc = 0x31C464u;
label_31c464:
    // 0x31c464: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31c464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31c468: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31c468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31c46c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c46cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c470: 0x0  nop
    ctx->pc = 0x31c470u;
    // NOP
    // 0x31c474: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x31c474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31c478: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x31c478u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_31c47c:
    // 0x31c47c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x31c47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31c480: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x31c480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x31c484: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x31c484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x31c488: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x31c488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x31c48c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31c48cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31c490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c494: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x31c494u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x31c498: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x31c498u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x31c49c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31c49cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31c4a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31C4A0u;
    {
        const bool branch_taken_0x31c4a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31c4a0) {
            ctx->pc = 0x31C4B8u;
            goto label_31c4b8;
        }
    }
    ctx->pc = 0x31C4A8u;
    // 0x31c4a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c4a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31c4ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31c4acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31c4b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31C4B0u;
    {
        const bool branch_taken_0x31c4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4B0u;
        // 0x31c4b4: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c4b0) {
            ctx->pc = 0x31C4D4u;
            goto label_31c4d4;
        }
    }
    ctx->pc = 0x31C4B8u;
label_31c4b8:
    // 0x31c4b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31c4b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31c4bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31c4c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c4c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31c4c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31c4c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31c4c8: 0x0  nop
    ctx->pc = 0x31c4c8u;
    // NOP
    // 0x31c4cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31c4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31c4d0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x31c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_31c4d4:
    // 0x31c4d4: 0x24a20006  addiu       $v0, $a1, 0x6
    ctx->pc = 0x31c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x31c4d8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x31c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x31c4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x31C4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4DCu;
        // 0x31c4e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C4E4u;
}
