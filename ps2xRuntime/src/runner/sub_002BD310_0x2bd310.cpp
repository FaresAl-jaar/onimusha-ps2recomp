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

// Function: sub_002BD310
// Address: 0x2bd310 - 0x2bd45c
void sub_002BD310_0x2bd310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD310_0x2bd310");
#endif

    ctx->pc = 0x2bd310u;

    // 0x2bd310: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2bd310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bd314: 0xa4a2078c  sh          $v0, 0x78C($a1)
    ctx->pc = 0x2bd314u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bd318: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x2bd318u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bd31c: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2BD31Cu;
    {
        const bool branch_taken_0x2bd31c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD31Cu;
        // 0x2bd320: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd31c) {
            ctx->pc = 0x2BD3C0u;
            goto label_2bd3c0;
        }
    }
    ctx->pc = 0x2BD324u;
    // 0x2bd324: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2bd324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2bd328: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD328u;
    {
        const bool branch_taken_0x2bd328 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BD32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD328u;
        // 0x2bd32c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd328) {
            ctx->pc = 0x2BD33Cu;
            goto label_2bd33c;
        }
    }
    ctx->pc = 0x2BD330u;
    // 0x2bd330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd334: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD334u;
    {
        const bool branch_taken_0x2bd334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD334u;
        // 0x2bd338: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd334) {
            ctx->pc = 0x2BD354u;
            goto label_2bd354;
        }
    }
    ctx->pc = 0x2BD33Cu;
label_2bd33c:
    // 0x2bd33c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd340: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bd340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bd344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd348: 0x0  nop
    ctx->pc = 0x2bd348u;
    // NOP
    // 0x2bd34c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bd34cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd350: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bd350u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bd354:
    // 0x2bd354: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bd354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd358: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bd358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bd35c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bd35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bd360: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bd360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bd364: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bd364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd36c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bd36cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bd370: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bd370u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bd374: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bd374u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd378: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD378u;
    {
        const bool branch_taken_0x2bd378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd378) {
            ctx->pc = 0x2BD390u;
            goto label_2bd390;
        }
    }
    ctx->pc = 0x2BD380u;
    // 0x2bd380: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd380u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd384: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bd384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd388: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD388u;
    {
        const bool branch_taken_0x2bd388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD388u;
        // 0x2bd38c: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd388) {
            ctx->pc = 0x2BD3ACu;
            goto label_2bd3ac;
        }
    }
    ctx->pc = 0x2BD390u;
label_2bd390:
    // 0x2bd390: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bd390u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bd394: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bd394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bd398: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd39c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bd39cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd3a0: 0x0  nop
    ctx->pc = 0x2bd3a0u;
    // NOP
    // 0x2bd3a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bd3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bd3a8: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2bd3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2bd3ac:
    // 0x2bd3ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bd3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bd3b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD3B0u;
    {
        const bool branch_taken_0x2bd3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd3b0) {
            ctx->pc = 0x2BD3C0u;
            goto label_2bd3c0;
        }
    }
    ctx->pc = 0x2BD3B8u;
    // 0x2bd3b8: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x2bd3b8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2bd3bc: 0x0  nop
    ctx->pc = 0x2bd3bcu;
    // NOP
label_2bd3c0:
    // 0x2bd3c0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD3C0u;
    {
        const bool branch_taken_0x2bd3c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3C0u;
        // 0x2bd3c4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3c0) {
            ctx->pc = 0x2BD3D0u;
            goto label_2bd3d0;
        }
    }
    ctx->pc = 0x2BD3C8u;
    // 0x2bd3c8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2BD3C8u;
    {
        const bool branch_taken_0x2bd3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3C8u;
        // 0x2bd3cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3c8) {
            ctx->pc = 0x2BD450u;
            goto label_2bd450;
        }
    }
    ctx->pc = 0x2BD3D0u;
label_2bd3d0:
    // 0x2bd3d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD3D0u;
    {
        const bool branch_taken_0x2bd3d0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BD3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3D0u;
        // 0x2bd3d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3d0) {
            ctx->pc = 0x2BD3E4u;
            goto label_2bd3e4;
        }
    }
    ctx->pc = 0x2BD3D8u;
    // 0x2bd3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd3dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD3DCu;
    {
        const bool branch_taken_0x2bd3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3DCu;
        // 0x2bd3e0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3dc) {
            ctx->pc = 0x2BD3FCu;
            goto label_2bd3fc;
        }
    }
    ctx->pc = 0x2BD3E4u;
label_2bd3e4:
    // 0x2bd3e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd3e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bd3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bd3ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd3ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd3f0: 0x0  nop
    ctx->pc = 0x2bd3f0u;
    // NOP
    // 0x2bd3f4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bd3f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd3f8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bd3f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bd3fc:
    // 0x2bd3fc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bd3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd400: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bd400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bd404: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bd404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bd408: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bd408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bd40c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bd40cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd414: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bd414u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bd418: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bd418u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bd41c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bd41cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd420: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD420u;
    {
        const bool branch_taken_0x2bd420 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd420) {
            ctx->pc = 0x2BD438u;
            goto label_2bd438;
        }
    }
    ctx->pc = 0x2BD428u;
    // 0x2bd428: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd42c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bd42cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd430: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD430u;
    {
        const bool branch_taken_0x2bd430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd430) {
            ctx->pc = 0x2BD450u;
            goto label_2bd450;
        }
    }
    ctx->pc = 0x2BD438u;
label_2bd438:
    // 0x2bd438: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bd438u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bd43c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bd43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bd440: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd444: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bd444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd448: 0x0  nop
    ctx->pc = 0x2bd448u;
    // NOP
    // 0x2bd44c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bd44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2bd450:
    // 0x2bd450: 0xa4830054  sh          $v1, 0x54($a0)
    ctx->pc = 0x2bd450u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bd454: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD454u;
        // 0x2bd458: 0x24c20004  addiu       $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD45Cu;
}
