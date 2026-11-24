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

// Function: sub_0037FDC0
// Address: 0x37fdc0 - 0x380164
void sub_0037FDC0_0x37fdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FDC0_0x37fdc0");
#endif

    switch (ctx->pc) {
        case 0x37fee4u: goto label_37fee4;
        case 0x37ff20u: goto label_37ff20;
        case 0x37ff34u: goto label_37ff34;
        case 0x37ff9cu: goto label_37ff9c;
        case 0x380000u: goto label_380000;
        case 0x380010u: goto label_380010;
        case 0x380020u: goto label_380020;
        case 0x380058u: goto label_380058;
        case 0x38007cu: goto label_38007c;
        case 0x380140u: goto label_380140;
        default: break;
    }

    ctx->pc = 0x37fdc0u;

    // 0x37fdc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x37fdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x37fdc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37fdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x37fdc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37fdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x37fdcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37fdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37fdd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37fdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37fdd4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37fdd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x37fdd8: 0x80832b90  lb          $v1, 0x2B90($a0)
    ctx->pc = 0x37fdd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 11152)));
    // 0x37fddc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37FDDCu;
    {
        const bool branch_taken_0x37fddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FDDCu;
        // 0x37fde0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fddc) {
            ctx->pc = 0x37FDF8u;
            goto label_37fdf8;
        }
    }
    ctx->pc = 0x37FDE4u;
    // 0x37fde4: 0x3c0343e1  lui         $v1, 0x43E1
    ctx->pc = 0x37fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17377 << 16));
    // 0x37fde8: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x37fde8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x37fdec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37FDECu;
    {
        const bool branch_taken_0x37fdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fdec) {
            ctx->pc = 0x37FE00u;
            goto label_37fe00;
        }
    }
    ctx->pc = 0x37FDF4u;
    // 0x37fdf4: 0x0  nop
    ctx->pc = 0x37fdf4u;
    // NOP
label_37fdf8:
    // 0x37fdf8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x37fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x37fdfc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x37fdfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_37fe00:
    // 0x37fe00: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x37fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x37fe04: 0x2463afe0  addiu       $v1, $v1, -0x5020
    ctx->pc = 0x37fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946784));
    // 0x37fe08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x37fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37fe0c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x37fe0cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65AFE0u));
    // 0x37fe10: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x37fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37fe14: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x37fe14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x37fe18: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x37fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x37fe1c: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x37fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x37fe20: 0x24630c30  addiu       $v1, $v1, 0xC30
    ctx->pc = 0x37fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3120));
    // 0x37fe24: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x37fe24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37fe28: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x37fe28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37fe2c: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x37fe2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37fe30: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x37fe30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37fe34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37fe38: 0x92442b88  lbu         $a0, 0x2B88($s2)
    ctx->pc = 0x37fe38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11144)));
    // 0x37fe3c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x37fe3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x37fe40: 0x10830071  beq         $a0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x37FE40u;
    {
        const bool branch_taken_0x37fe40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37fe40) {
            ctx->pc = 0x380008u;
            goto label_380008;
        }
    }
    ctx->pc = 0x37FE48u;
    // 0x37fe48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37fe4c: 0x1083006e  beq         $a0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x37FE4Cu;
    {
        const bool branch_taken_0x37fe4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x37FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FE4Cu;
        // 0x37fe50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fe4c) {
            ctx->pc = 0x380008u;
            goto label_380008;
        }
    }
    ctx->pc = 0x37FE54u;
    // 0x37fe54: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37FE54u;
    {
        const bool branch_taken_0x37fe54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37fe54) {
            ctx->pc = 0x37FE78u;
            goto label_37fe78;
        }
    }
    ctx->pc = 0x37FE5Cu;
    // 0x37fe5c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FE5Cu;
    {
        const bool branch_taken_0x37fe5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fe5c) {
            ctx->pc = 0x37FE70u;
            goto label_37fe70;
        }
    }
    ctx->pc = 0x37FE64u;
    // 0x37fe64: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x37FE64u;
    {
        const bool branch_taken_0x37fe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fe64) {
            ctx->pc = 0x380108u;
            goto label_380108;
        }
    }
    ctx->pc = 0x37FE6Cu;
    // 0x37fe6c: 0x0  nop
    ctx->pc = 0x37fe6cu;
    // NOP
label_37fe70:
    // 0x37fe70: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x37FE70u;
    {
        const bool branch_taken_0x37fe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fe70) {
            ctx->pc = 0x380148u;
            goto label_380148;
        }
    }
    ctx->pc = 0x37FE78u;
label_37fe78:
    // 0x37fe78: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x37fe78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x37fe7c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x37fe7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x37fe80: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x37fe80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x37fe84: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x37fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37fe88: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x37fe88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x37fe8c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x37fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x37fe90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37fe94: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x37fe94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37fe98: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x37fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x37fe9c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FE9Cu;
    {
        const bool branch_taken_0x37fe9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FE9Cu;
        // 0x37fea0: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fe9c) {
            ctx->pc = 0x37FEB0u;
            goto label_37feb0;
        }
    }
    ctx->pc = 0x37FEA4u;
    // 0x37fea4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FEA4u;
    {
        const bool branch_taken_0x37fea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fea4) {
            ctx->pc = 0x37FEB8u;
            goto label_37feb8;
        }
    }
    ctx->pc = 0x37FEACu;
    // 0x37feac: 0x0  nop
    ctx->pc = 0x37feacu;
    // NOP
label_37feb0:
    // 0x37feb0: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x37FEB0u;
    {
        const bool branch_taken_0x37feb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37feb0) {
            ctx->pc = 0x380148u;
            goto label_380148;
        }
    }
    ctx->pc = 0x37FEB8u;
label_37feb8:
    // 0x37feb8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x37feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x37febc: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x37febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37fec0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x37fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37fec4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x37fec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37fec8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x37fec8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37fecc: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x37feccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37fed0: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x37fed0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37fed4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37fed4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37fed8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x37fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37fedc: 0xc04d8e4  jal         func_136390
    ctx->pc = 0x37FEDCu;
    SET_GPR_U32(ctx, 31, 0x37FEE4u);
    ctx->pc = 0x37FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FEDCu;
    // 0x37fee0: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x136390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136390u, 0x37FEDCu, 0x37FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FEE4u;
label_37fee4:
    // 0x37fee4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x37fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x37fee8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x37fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37feec: 0x87a2008e  lh          $v0, 0x8E($sp)
    ctx->pc = 0x37feecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
    // 0x37fef0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x37fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37fef4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x37fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37fef8: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x37fef8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37fefc: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x37fefcu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x37ff00: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x37ff00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37ff04: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x37ff04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37ff08: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x37ff08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37ff0c: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x37ff0cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37ff10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37ff10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ff14: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x37ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37ff18: 0xc04d8e4  jal         func_136390
    ctx->pc = 0x37FF18u;
    SET_GPR_U32(ctx, 31, 0x37FF20u);
    ctx->pc = 0x37FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FF18u;
    // 0x37ff1c: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x136390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136390u, 0x37FF18u, 0x37FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FF20u;
label_37ff20:
    // 0x37ff20: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x37ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x37ff24: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x37ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37ff28: 0x87b0008e  lh          $s0, 0x8E($sp)
    ctx->pc = 0x37ff28u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
    // 0x37ff2c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x37FF2Cu;
    SET_GPR_U32(ctx, 31, 0x37FF34u);
    ctx->pc = 0x37FF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FF2Cu;
    // 0x37ff30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x37FF2Cu, 0x37FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FF34u;
label_37ff34:
    // 0x37ff34: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x37ff34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x37ff38: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x37ff38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x37ff3c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37ff3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37ff40: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37ff40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37ff44: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x37ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37ff48: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37ff48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37ff4c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x37ff4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37ff50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37ff50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37ff54: 0x28610801  slti        $at, $v1, 0x801
    ctx->pc = 0x37ff54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x37ff58: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x37FF58u;
    {
        const bool branch_taken_0x37ff58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF58u;
        // 0x37ff5c: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ff58) {
            ctx->pc = 0x37FF70u;
            goto label_37ff70;
        }
    }
    ctx->pc = 0x37FF60u;
    // 0x37ff60: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37ff64: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x37ff64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37ff68: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x37FF68u;
    {
        const bool branch_taken_0x37ff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF68u;
        // 0x37ff6c: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ff68) {
            ctx->pc = 0x37FF70u;
            goto label_37ff70;
        }
    }
    ctx->pc = 0x37FF70u;
label_37ff70:
    // 0x37ff70: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x37ff70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37ff74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37ff74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37ff78: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37FF78u;
    {
        const bool branch_taken_0x37ff78 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x37FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF78u;
        // 0x37ff7c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ff78) {
            ctx->pc = 0x37FF88u;
            goto label_37ff88;
        }
    }
    ctx->pc = 0x37FF80u;
    // 0x37ff80: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x37ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37ff84: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x37ff84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_37ff88:
    // 0x37ff88: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x37ff88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37ff8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37ff8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ff90: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x37ff90u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x37ff94: 0xc0decb8  jal         func_37B2E0
    ctx->pc = 0x37FF94u;
    SET_GPR_U32(ctx, 31, 0x37FF9Cu);
    ctx->pc = 0x37FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FF94u;
    // 0x37ff98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B2E0u, 0x37FF94u, 0x37FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FF9Cu;
label_37ff9c:
    // 0x37ff9c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x37ff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37ffa0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x37ffa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x37ffa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37ffa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37ffa8: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x37ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x37ffac: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x37ffacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37ffb0: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x37ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x37ffb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37ffb8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37ffb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37ffbc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x37ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37ffc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37ffc4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x37ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37ffc8: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x37ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x37ffcc: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x37ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37ffd0: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x37ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x37ffd4: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x37ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37ffd8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x37ffd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37ffdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37ffe0: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x37ffe0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x37ffe4: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x37ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x37ffe8: 0x4605101c  madd.s      $f0, $f2, $f5
    ctx->pc = 0x37ffe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x37ffec: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x37ffecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x37fff0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x37fff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x37fff4: 0x4605181d  msub.s      $f0, $f3, $f5
    ctx->pc = 0x37fff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x37fff8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x37fff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x37fffc: 0x10000042  b           . + 4 + (0x42 << 2)
label_380000:
    if (ctx->pc == 0x380000u) {
        ctx->pc = 0x380000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FFFCu;
        // 0x380000: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x380004u;
        goto label_fallthrough_0x37fffc;
    }
    ctx->pc = 0x37FFFCu;
    {
        const bool branch_taken_0x37fffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FFFCu;
        // 0x380000: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fffc) {
            ctx->pc = 0x380108u;
            goto label_380108;
        }
    }
label_fallthrough_0x37fffc:
    ctx->pc = 0x380004u;
    // 0x380004: 0x0  nop
    ctx->pc = 0x380004u;
    // NOP
label_380008:
    // 0x380008: 0xc0e007c  jal         func_3801F0
    ctx->pc = 0x380008u;
    SET_GPR_U32(ctx, 31, 0x380010u);
    ctx->pc = 0x38000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380008u;
    // 0x38000c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3801F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3801F0u, 0x380008u, 0x380010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380010u;
label_380010:
    // 0x380010: 0x8e4507c0  lw          $a1, 0x7C0($s2)
    ctx->pc = 0x380010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1984)));
    // 0x380014: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x380014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x380018: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x380018u;
    SET_GPR_U32(ctx, 31, 0x380020u);
    ctx->pc = 0x38001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380018u;
    // 0x38001c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x380018u, 0x380020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380020u;
label_380020:
    // 0x380020: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x380020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380024: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x380024u;
    {
        const bool branch_taken_0x380024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x380028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380024u;
        // 0x380028: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380024) {
            ctx->pc = 0x380148u;
            goto label_380148;
        }
    }
    ctx->pc = 0x38002Cu;
    // 0x38002c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x38002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x380030: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x380030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x380034: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x380034u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x380038: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x380038u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38003c: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x38003cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x380040: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x380040u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x380044: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x380044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380048: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x380048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x38004c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x38004cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x380050: 0xc041472  jal         func_1051C8
    ctx->pc = 0x380050u;
    SET_GPR_U32(ctx, 31, 0x380058u);
    ctx->pc = 0x380054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380050u;
    // 0x380054: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x380050u, 0x380058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380058u;
label_380058:
    // 0x380058: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x380058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x38005c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x380060: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x380060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x380064: 0x92432b88  lbu         $v1, 0x2B88($s2)
    ctx->pc = 0x380064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11144)));
    // 0x380068: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x380068u;
    {
        const bool branch_taken_0x380068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380068u;
        // 0x38006c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380068) {
            ctx->pc = 0x3800C8u;
            goto label_3800c8;
        }
    }
    ctx->pc = 0x380070u;
    // 0x380070: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x380070u;
    {
        const bool branch_taken_0x380070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x380070) {
            ctx->pc = 0x380080u;
            goto label_380080;
        }
    }
    ctx->pc = 0x380078u;
    // 0x380078: 0x10000023  b           . + 4 + (0x23 << 2)
label_38007c:
    if (ctx->pc == 0x38007Cu) {
        ctx->pc = 0x380080u;
        goto label_380080;
    }
    ctx->pc = 0x380078u;
    {
        const bool branch_taken_0x380078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380078) {
            ctx->pc = 0x380108u;
            goto label_380108;
        }
    }
    ctx->pc = 0x380080u;
label_380080:
    // 0x380080: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x380080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x380084: 0xc4269d40  lwc1        $f6, -0x62C0($at)
    ctx->pc = 0x380084u;
    { uint32_t bits = FAST_READ32(0x409D40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x380088: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x380088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38008c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x38008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x380090: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x380090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x380094: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x380094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x380098: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x380098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x38009c: 0xc4256d40  lwc1        $f5, 0x6D40($at)
    ctx->pc = 0x38009cu;
    { uint32_t bits = FAST_READ32(0x406D40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3800a0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x3800a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3800a4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3800a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x3800a8: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x3800a8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x3800ac: 0x4606185c  madd.s      $f1, $f3, $f6
    ctx->pc = 0x3800acu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x3800b0: 0x4605181a  mula.s      $f3, $f5
    ctx->pc = 0x3800b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x3800b4: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x3800b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3800b8: 0x4606205d  msub.s      $f1, $f4, $f6
    ctx->pc = 0x3800b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x3800bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3800BCu;
    {
        const bool branch_taken_0x3800bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3800C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3800BCu;
        // 0x3800c0: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3800bc) {
            ctx->pc = 0x380108u;
            goto label_380108;
        }
    }
    ctx->pc = 0x3800C4u;
    // 0x3800c4: 0x0  nop
    ctx->pc = 0x3800c4u;
    // NOP
label_3800c8:
    // 0x3800c8: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x3800c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x3800cc: 0xc4266d40  lwc1        $f6, 0x6D40($at)
    ctx->pc = 0x3800ccu;
    { uint32_t bits = FAST_READ32(0x406D40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3800d0: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x3800d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3800d4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x3800d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3800d8: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x3800d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3800dc: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x3800dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3800e0: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x3800e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x3800e4: 0xc4257d40  lwc1        $f5, 0x7D40($at)
    ctx->pc = 0x3800e4u;
    { uint32_t bits = FAST_READ32(0x407D40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3800e8: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x3800e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3800ec: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3800ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x3800f0: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x3800f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x3800f4: 0x4606185c  madd.s      $f1, $f3, $f6
    ctx->pc = 0x3800f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x3800f8: 0x4605181a  mula.s      $f3, $f5
    ctx->pc = 0x3800f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x3800fc: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x3800fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x380100: 0x4606205d  msub.s      $f1, $f4, $f6
    ctx->pc = 0x380100u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x380104: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x380104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_380108:
    // 0x380108: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x380108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x38010c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x38010cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x380110: 0x3c080068  lui         $t0, 0x68
    ctx->pc = 0x380110u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)104 << 16));
    // 0x380114: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x380114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x380118: 0x924408e8  lbu         $a0, 0x8E8($s2)
    ctx->pc = 0x380118u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x38011c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38011cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x380120: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x380120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380124: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x380124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x380128: 0x25081e30  addiu       $t0, $t0, 0x1E30
    ctx->pc = 0x380128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7728));
    // 0x38012c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38012cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x380130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x380130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x380134: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x380134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x380138: 0xc0bc6f8  jal         func_2F1BE0
    ctx->pc = 0x380138u;
    SET_GPR_U32(ctx, 31, 0x380140u);
    ctx->pc = 0x38013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380138u;
    // 0x38013c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BE0u, 0x380138u, 0x380140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380140u;
label_380140:
    // 0x380140: 0xae422b84  sw          $v0, 0x2B84($s2)
    ctx->pc = 0x380140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11140), GPR_U32(ctx, 2));
    // 0x380144: 0x0  nop
    ctx->pc = 0x380144u;
    // NOP
label_380148:
    // 0x380148: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x380148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38014c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38014cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x380150: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x380150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x380154: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x380154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380158: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x380158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38015c: 0x3e00008  jr          $ra
    ctx->pc = 0x38015Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38015Cu;
        // 0x380160: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38015Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380164u;
}
