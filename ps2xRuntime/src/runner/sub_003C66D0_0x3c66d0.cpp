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

// Function: sub_003C66D0
// Address: 0x3c66d0 - 0x3c6798
void sub_003C66D0_0x3c66d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C66D0_0x3c66d0");
#endif

    switch (ctx->pc) {
        case 0x3c670cu: goto label_3c670c;
        case 0x3c6740u: goto label_3c6740;
        case 0x3c6780u: goto label_3c6780;
        default: break;
    }

    ctx->pc = 0x3c66d0u;

    // 0x3c66d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c66d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c66d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c66d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c66d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c66d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c66dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c66dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c66e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c66e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c66e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c66e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c66e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c66ec: 0x26230590  addiu       $v1, $s1, 0x590
    ctx->pc = 0x3c66ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c66f0: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x3c66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3c66f4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3c66f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c66f8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3c66f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c66fc: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3c66fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3c6700: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3c6700u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3c6704: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x3C6704u;
    SET_GPR_U32(ctx, 31, 0x3C670Cu);
    ctx->pc = 0x3C6708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6704u;
    // 0x3c6708: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x3C6704u, 0x3C670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C670Cu;
label_3c670c:
    // 0x3c670c: 0xc62105a0  lwc1        $f1, 0x5A0($s1)
    ctx->pc = 0x3c670cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c6710: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c6710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6714: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3C6714u;
    {
        const bool branch_taken_0x3c6714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6714) {
            ctx->pc = 0x3C6728u;
            goto label_3c6728;
        }
    }
    ctx->pc = 0x3C671Cu;
    // 0x3c671c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3c671cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c6720: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x3c6720u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x3c6724: 0x0  nop
    ctx->pc = 0x3c6724u;
    // NOP
label_3c6728:
    // 0x3c6728: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x3c6728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3c672c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3c672cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3c6730: 0x0  nop
    ctx->pc = 0x3c6730u;
    // NOP
    // 0x3c6734: 0x0  nop
    ctx->pc = 0x3c6734u;
    // NOP
    // 0x3c6738: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3C6738u;
    SET_GPR_U32(ctx, 31, 0x3C6740u);
    ctx->pc = 0x3C673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6738u;
    // 0x3c673c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3C6738u, 0x3C6740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6740u;
label_3c6740:
    // 0x3c6740: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x3c6740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x3c6744: 0xc6210090  lwc1        $f1, 0x90($s1)
    ctx->pc = 0x3c6744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c6748: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3c6748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c674c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c674cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c6750: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x3c6750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x3c6754: 0xc6210094  lwc1        $f1, 0x94($s1)
    ctx->pc = 0x3c6754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c6758: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x3c6758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c675c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c675cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c6760: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x3c6760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x3c6764: 0xc6210098  lwc1        $f1, 0x98($s1)
    ctx->pc = 0x3c6764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c6768: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x3c6768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c676c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c676cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c6770: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C6770u;
    {
        const bool branch_taken_0x3c6770 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6770u;
        // 0x3c6774: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6770) {
            ctx->pc = 0x3C6780u;
            goto label_3c6780;
        }
    }
    ctx->pc = 0x3C6778u;
    // 0x3c6778: 0xc0f19e8  jal         func_3C67A0
    ctx->pc = 0x3C6778u;
    SET_GPR_U32(ctx, 31, 0x3C6780u);
    ctx->pc = 0x3C677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6778u;
    // 0x3c677c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C67A0u, 0x3C6778u, 0x3C6780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6780u;
label_3c6780:
    // 0x3c6780: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c6780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6784: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c6784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c6788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c6788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c678c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c678cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c6790: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6790u;
        // 0x3c6794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6798u;
}
