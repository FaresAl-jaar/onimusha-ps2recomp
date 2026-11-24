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

// Function: sub_003DBF00
// Address: 0x3dbf00 - 0x3dc00c
void sub_003DBF00_0x3dbf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBF00_0x3dbf00");
#endif

    switch (ctx->pc) {
        case 0x3dbfb4u: goto label_3dbfb4;
        case 0x3dbfe4u: goto label_3dbfe4;
        default: break;
    }

    ctx->pc = 0x3dbf00u;

    // 0x3dbf00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3dbf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3dbf04: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x3dbf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3dbf08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dbf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3dbf0c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3dbf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3dbf10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dbf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dbf14: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3dbf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3dbf18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dbf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dbf1c: 0x2442e5f0  addiu       $v0, $v0, -0x1A10
    ctx->pc = 0x3dbf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960624));
    // 0x3dbf20: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3dbf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dbf24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dbf24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbf28: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3dbf28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbf2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dbf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dbf30: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3dbf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3dbf34: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x3dbf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dbf38: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x3dbf38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3dbf3c: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x3dbf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dbf40: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3dbf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3dbf44: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3dbf44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dbf48: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3dbf48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dbf4c: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dbf4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dbf50: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x3dbf50u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dbf54: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3dbf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dbf58: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3dbf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dbf5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3dbf5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dbf60: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBF60u;
    {
        const bool branch_taken_0x3dbf60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dbf60) {
            ctx->pc = 0x3DBF70u;
            goto label_3dbf70;
        }
    }
    ctx->pc = 0x3DBF68u;
    // 0x3dbf68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBF68u;
    {
        const bool branch_taken_0x3dbf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBF68u;
        // 0x3dbf6c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbf68) {
            ctx->pc = 0x3DBF78u;
            goto label_3dbf78;
        }
    }
    ctx->pc = 0x3DBF70u;
label_3dbf70:
    // 0x3dbf70: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x3dbf70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3dbf74: 0x0  nop
    ctx->pc = 0x3dbf74u;
    // NOP
label_3dbf78:
    // 0x3dbf78: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3dbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3dbf7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dbf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dbf80: 0x0  nop
    ctx->pc = 0x3dbf80u;
    // NOP
    // 0x3dbf84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3dbf84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dbf88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBF88u;
    {
        const bool branch_taken_0x3dbf88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DBF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBF88u;
        // 0x3dbf8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbf88) {
            ctx->pc = 0x3DBF98u;
            goto label_3dbf98;
        }
    }
    ctx->pc = 0x3DBF90u;
    // 0x3dbf90: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x3dbf90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3dbf94: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3dbf94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_3dbf98:
    // 0x3dbf98: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3dbf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3dbf9c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3dbf9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dbfa0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x3dbfa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dbfa4: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dbfa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dbfa8: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x3dbfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dbfac: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x3DBFACu;
    SET_GPR_U32(ctx, 31, 0x3DBFB4u);
    ctx->pc = 0x3DBFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBFACu;
    // 0x3dbfb0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x3DBFACu, 0x3DBFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBFB4u;
label_3dbfb4:
    // 0x3dbfb4: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x3dbfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x3dbfb8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3dbfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3dbfbc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3dbfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3dbfc0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3dbfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3dbfc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3dbfc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dbfc8: 0x0  nop
    ctx->pc = 0x3dbfc8u;
    // NOP
    // 0x3dbfcc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3dbfccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3dbfd0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3dbfd0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3dbfd4: 0x0  nop
    ctx->pc = 0x3dbfd4u;
    // NOP
    // 0x3dbfd8: 0x0  nop
    ctx->pc = 0x3dbfd8u;
    // NOP
    // 0x3dbfdc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DBFDCu;
    SET_GPR_U32(ctx, 31, 0x3DBFE4u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DBFDCu, 0x3DBFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBFE4u;
label_3dbfe4:
    // 0x3dbfe4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3dbfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3dbfe8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3dbfe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dbfec: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3dbfecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dbff0: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dbff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dbff4: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x3dbff4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dbff8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dbff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dbffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dbffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dc000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc004: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC004u;
        // 0x3dc008: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC00Cu;
}
