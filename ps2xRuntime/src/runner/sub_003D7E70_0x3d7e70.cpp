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

// Function: sub_003D7E70
// Address: 0x3d7e70 - 0x3d7f3c
void sub_003D7E70_0x3d7e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7E70_0x3d7e70");
#endif

    switch (ctx->pc) {
        case 0x3d7eb4u: goto label_3d7eb4;
        case 0x3d7ef0u: goto label_3d7ef0;
        default: break;
    }

    ctx->pc = 0x3d7e70u;

    // 0x3d7e70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d7e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3d7e74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d7e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3d7e78: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3d7e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3d7e7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d7e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3d7e80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d7e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3d7e84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d7e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7e88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d7e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3d7e8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d7e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7e90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3d7e90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3d7e94: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3d7e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7e98: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3d7e98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3d7e9c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3d7e9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d7ea0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x3d7ea0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d7ea4: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3d7ea4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3d7ea8: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x3d7ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3d7eac: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x3D7EACu;
    SET_GPR_U32(ctx, 31, 0x3D7EB4u);
    ctx->pc = 0x3D7EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7EACu;
    // 0x3d7eb0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x3D7EACu, 0x3D7EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7EB4u;
label_3d7eb4:
    // 0x3d7eb4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3d7eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d7eb8: 0x0  nop
    ctx->pc = 0x3d7eb8u;
    // NOP
    // 0x3d7ebc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d7ebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d7ec0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x3D7EC0u;
    {
        const bool branch_taken_0x3d7ec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d7ec0) {
            ctx->pc = 0x3D7F10u;
            goto label_3d7f10;
        }
    }
    ctx->pc = 0x3D7EC8u;
    // 0x3d7ec8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3d7ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d7ecc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x3D7ECCu;
    {
        const bool branch_taken_0x3d7ecc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d7ecc) {
            ctx->pc = 0x3D7F10u;
            goto label_3d7f10;
        }
    }
    ctx->pc = 0x3D7ED4u;
    // 0x3d7ed4: 0x0  nop
    ctx->pc = 0x3d7ed4u;
    // NOP
    // 0x3d7ed8: 0x0  nop
    ctx->pc = 0x3d7ed8u;
    // NOP
    // 0x3d7edc: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x3d7edcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x3d7ee0: 0x0  nop
    ctx->pc = 0x3d7ee0u;
    // NOP
    // 0x3d7ee4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3d7ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3d7ee8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3D7EE8u;
    SET_GPR_U32(ctx, 31, 0x3D7EF0u);
    ctx->pc = 0x3D7EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7EE8u;
    // 0x3d7eec: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3D7EE8u, 0x3D7EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7EF0u;
label_3d7ef0:
    // 0x3d7ef0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3d7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3d7ef4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3d7ef4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d7ef8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3d7ef8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d7efc: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3d7efcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3d7f00: 0xfa430000  sqc2        $vf3, 0x0($s2)
    ctx->pc = 0x3d7f00u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3d7f04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D7F04u;
    {
        const bool branch_taken_0x3d7f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F04u;
        // 0x3d7f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7f04) {
            ctx->pc = 0x3D7F20u;
            goto label_3d7f20;
        }
    }
    ctx->pc = 0x3D7F0Cu;
    // 0x3d7f0c: 0x0  nop
    ctx->pc = 0x3d7f0cu;
    // NOP
label_3d7f10:
    // 0x3d7f10: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3d7f10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7f14: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x3d7f14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d7f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d7f1c: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x3d7f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
label_3d7f20:
    // 0x3d7f20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d7f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d7f24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d7f24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d7f28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3d7f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3d7f2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d7f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d7f30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d7f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d7f34: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F34u;
        // 0x3d7f38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7F3Cu;
}
