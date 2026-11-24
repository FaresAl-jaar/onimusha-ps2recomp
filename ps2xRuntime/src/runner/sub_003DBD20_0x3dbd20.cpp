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

// Function: sub_003DBD20
// Address: 0x3dbd20 - 0x3dbe18
void sub_003DBD20_0x3dbd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBD20_0x3dbd20");
#endif

    switch (ctx->pc) {
        case 0x3dbd90u: goto label_3dbd90;
        case 0x3dbdc0u: goto label_3dbdc0;
        case 0x3dbdf0u: goto label_3dbdf0;
        default: break;
    }

    ctx->pc = 0x3dbd20u;

    // 0x3dbd20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3dbd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3dbd24: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3dbd24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbd28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dbd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3dbd2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dbd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dbd30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dbd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dbd34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dbd34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbd38: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBD38u;
    {
        const bool branch_taken_0x3dbd38 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x3DBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD38u;
        // 0x3dbd3c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbd38) {
            ctx->pc = 0x3DBD4Cu;
            goto label_3dbd4c;
        }
    }
    ctx->pc = 0x3DBD40u;
    // 0x3dbd40: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3dbd40u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dbd44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DBD44u;
    {
        const bool branch_taken_0x3dbd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD44u;
        // 0x3dbd48: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbd44) {
            ctx->pc = 0x3DBD68u;
            goto label_3dbd68;
        }
    }
    ctx->pc = 0x3DBD4Cu;
label_3dbd4c:
    // 0x3dbd4c: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x3dbd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x3dbd50: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x3dbd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x3dbd54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3dbd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3dbd58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dbd58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dbd5c: 0x0  nop
    ctx->pc = 0x3dbd5cu;
    // NOP
    // 0x3dbd60: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3dbd60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3dbd64: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3dbd64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3dbd68:
    // 0x3dbd68: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3dbd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x3dbd6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dbd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbd70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dbd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dbd74: 0x25050070  addiu       $a1, $t0, 0x70
    ctx->pc = 0x3dbd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x3dbd78: 0x25060060  addiu       $a2, $t0, 0x60
    ctx->pc = 0x3dbd78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x3dbd7c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3dbd7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3dbd80: 0x0  nop
    ctx->pc = 0x3dbd80u;
    // NOP
    // 0x3dbd84: 0x0  nop
    ctx->pc = 0x3dbd84u;
    // NOP
    // 0x3dbd88: 0xc0414c0  jal         func_105300
    ctx->pc = 0x3DBD88u;
    SET_GPR_U32(ctx, 31, 0x3DBD90u);
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x3DBD88u, 0x3DBD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBD90u;
label_3dbd90:
    // 0x3dbd90: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3dbd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dbd94: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3dbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3dbd98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dbd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dbd9c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3dbd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3dbda0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3dbda0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3dbda4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3dbda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x3dbda8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3dbda8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dbdac: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x3dbdacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dbdb0: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dbdb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dbdb4: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x3dbdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dbdb8: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x3DBDB8u;
    SET_GPR_U32(ctx, 31, 0x3DBDC0u);
    ctx->pc = 0x3DBDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBDB8u;
    // 0x3dbdbc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x3DBDB8u, 0x3DBDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBDC0u;
label_3dbdc0:
    // 0x3dbdc0: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x3dbdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x3dbdc4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3dbdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3dbdc8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3dbdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3dbdcc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3dbdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3dbdd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3dbdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dbdd4: 0x0  nop
    ctx->pc = 0x3dbdd4u;
    // NOP
    // 0x3dbdd8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3dbdd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3dbddc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3dbddcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3dbde0: 0x0  nop
    ctx->pc = 0x3dbde0u;
    // NOP
    // 0x3dbde4: 0x0  nop
    ctx->pc = 0x3dbde4u;
    // NOP
    // 0x3dbde8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DBDE8u;
    SET_GPR_U32(ctx, 31, 0x3DBDF0u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DBDE8u, 0x3DBDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBDF0u;
label_3dbdf0:
    // 0x3dbdf0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3dbdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3dbdf4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3dbdf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dbdf8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3dbdf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dbdfc: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dbdfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dbe00: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x3dbe00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dbe04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dbe04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dbe08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dbe08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dbe0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dbe0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dbe10: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBE10u;
        // 0x3dbe14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBE18u;
}
