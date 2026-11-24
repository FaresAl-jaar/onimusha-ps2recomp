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

// Function: sub_003DBE20
// Address: 0x3dbe20 - 0x3dbef4
void sub_003DBE20_0x3dbe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBE20_0x3dbe20");
#endif

    switch (ctx->pc) {
        case 0x3dbe50u: goto label_3dbe50;
        case 0x3dbe98u: goto label_3dbe98;
        case 0x3dbec8u: goto label_3dbec8;
        default: break;
    }

    ctx->pc = 0x3dbe20u;

    // 0x3dbe20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dbe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3dbe24: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3dbe24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbe28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dbe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3dbe2c: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x3dbe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x3dbe30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dbe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3dbe34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dbe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dbe38: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3dbe38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbe3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dbe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dbe40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dbe40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbe44: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3dbe44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbe48: 0xc0414c0  jal         func_105300
    ctx->pc = 0x3DBE48u;
    SET_GPR_U32(ctx, 31, 0x3DBE50u);
    ctx->pc = 0x3DBE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBE48u;
    // 0x3dbe4c: 0x24460040  addiu       $a2, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x3DBE48u, 0x3DBE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBE50u;
label_3dbe50:
    // 0x3dbe50: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3dbe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dbe54: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x3dbe54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3dbe58: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3dbe58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3dbe5c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3dbe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3dbe60: 0x2442e5f0  addiu       $v0, $v0, -0x1A10
    ctx->pc = 0x3dbe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960624));
    // 0x3dbe64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dbe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dbe68: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3dbe68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3dbe6c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3dbe6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dbe70: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3dbe70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dbe74: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dbe74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dbe78: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x3dbe78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dbe7c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3dbe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3dbe80: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3dbe80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dbe84: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x3dbe84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dbe88: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dbe88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dbe8c: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x3dbe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dbe90: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x3DBE90u;
    SET_GPR_U32(ctx, 31, 0x3DBE98u);
    ctx->pc = 0x3DBE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBE90u;
    // 0x3dbe94: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x3DBE90u, 0x3DBE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBE98u;
label_3dbe98:
    // 0x3dbe98: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x3dbe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x3dbe9c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3dbe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3dbea0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3dbea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3dbea4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3dbea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3dbea8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3dbea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dbeac: 0x0  nop
    ctx->pc = 0x3dbeacu;
    // NOP
    // 0x3dbeb0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3dbeb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3dbeb4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3dbeb4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3dbeb8: 0x0  nop
    ctx->pc = 0x3dbeb8u;
    // NOP
    // 0x3dbebc: 0x0  nop
    ctx->pc = 0x3dbebcu;
    // NOP
    // 0x3dbec0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DBEC0u;
    SET_GPR_U32(ctx, 31, 0x3DBEC8u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DBEC0u, 0x3DBEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBEC8u;
label_3dbec8:
    // 0x3dbec8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3dbec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3dbecc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3dbeccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dbed0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3dbed0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dbed4: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dbed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dbed8: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x3dbed8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dbedc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dbedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dbee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dbee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dbee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dbee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dbee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dbee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dbeec: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBEECu;
        // 0x3dbef0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBEF4u;
}
