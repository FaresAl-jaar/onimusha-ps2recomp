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

// Function: sub_0014ECB0
// Address: 0x14ecb0 - 0x14edb8
void sub_0014ECB0_0x14ecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ECB0_0x14ecb0");
#endif

    switch (ctx->pc) {
        case 0x14ed7cu: goto label_14ed7c;
        case 0x14eda8u: goto label_14eda8;
        default: break;
    }

    ctx->pc = 0x14ecb0u;

    // 0x14ecb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ecb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ecb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14ecb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ecbc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x14ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x14ecc0: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14ECC0u;
    {
        const bool branch_taken_0x14ecc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECC0u;
        // 0x14ecc4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ecc0) {
            ctx->pc = 0x14ED40u;
            goto label_14ed40;
        }
    }
    ctx->pc = 0x14ECC8u;
    // 0x14ecc8: 0x8ca300e0  lw          $v1, 0xE0($a1)
    ctx->pc = 0x14ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x14eccc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x14ecccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x14ecd0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x14ECD0u;
    {
        const bool branch_taken_0x14ecd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ecd0) {
            ctx->pc = 0x14ED08u;
            goto label_14ed08;
        }
    }
    ctx->pc = 0x14ECD8u;
    // 0x14ecd8: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x14ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x14ecdc: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x14ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x14ece0: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x14ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x14ece4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x14ece4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ece8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x14ece8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ecec: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x14ececu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x14ecf0: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x14ecf0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14ecf4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x14ecf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14ecf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ecfc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x14ECFCu;
    {
        const bool branch_taken_0x14ecfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECFCu;
        // 0x14ed00: 0xe60000ac  swc1        $f0, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ecfc) {
            ctx->pc = 0x14EDA8u;
            goto label_14eda8;
        }
    }
    ctx->pc = 0x14ED04u;
    // 0x14ed04: 0x0  nop
    ctx->pc = 0x14ed04u;
    // NOP
label_14ed08:
    // 0x14ed08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x14ed0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14ed0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ed10: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x14ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x14ed14: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x14ed14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x14ed18: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x14ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x14ed1c: 0xe60000cc  swc1        $f0, 0xCC($s0)
    ctx->pc = 0x14ed1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
    // 0x14ed20: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x14ed20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ed24: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x14ed24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ed28: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x14ed28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x14ed2c: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x14ed2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14ed30: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14ed30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x14ed34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14ed34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ed38: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14ED38u;
    {
        const bool branch_taken_0x14ed38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED38u;
        // 0x14ed3c: 0xe60000ac  swc1        $f0, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed38) {
            ctx->pc = 0x14EDA8u;
            goto label_14eda8;
        }
    }
    ctx->pc = 0x14ED40u;
label_14ed40:
    // 0x14ed40: 0x8ca200e0  lw          $v0, 0xE0($a1)
    ctx->pc = 0x14ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x14ed44: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x14ed44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x14ed48: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14ED48u;
    {
        const bool branch_taken_0x14ed48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed48) {
            ctx->pc = 0x14ED90u;
            goto label_14ed90;
        }
    }
    ctx->pc = 0x14ED50u;
    // 0x14ed50: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x14ed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ed54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14ed58: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x14ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x14ed5c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x14ed5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14ed60: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x14ed60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x14ed64: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x14ed64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ed68: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x14ed68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14ed6c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x14ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x14ed70: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14ed70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14ed74: 0xc041442  jal         func_105108
    ctx->pc = 0x14ED74u;
    SET_GPR_U32(ctx, 31, 0x14ED7Cu);
    ctx->pc = 0x14ED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED74u;
    // 0x14ed78: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x14ED74u, 0x14ED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED7Cu;
label_14ed7c:
    // 0x14ed7c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x14ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ed80: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x14ed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ed84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14ed84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14ed88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14ED88u;
    {
        const bool branch_taken_0x14ed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED88u;
        // 0x14ed8c: 0xe60000a4  swc1        $f0, 0xA4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed88) {
            ctx->pc = 0x14EDA8u;
            goto label_14eda8;
        }
    }
    ctx->pc = 0x14ED90u;
label_14ed90:
    // 0x14ed90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14ed94: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x14ed94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
    // 0x14ed98: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x14ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x14ed9c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14ed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14eda0: 0xc041442  jal         func_105108
    ctx->pc = 0x14EDA0u;
    SET_GPR_U32(ctx, 31, 0x14EDA8u);
    ctx->pc = 0x14EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDA0u;
    // 0x14eda4: 0x260600e0  addiu       $a2, $s0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x14EDA0u, 0x14EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDA8u;
label_14eda8:
    // 0x14eda8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14eda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14edac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14edacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14edb0: 0x3e00008  jr          $ra
    ctx->pc = 0x14EDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDB0u;
        // 0x14edb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EDB8u;
}
