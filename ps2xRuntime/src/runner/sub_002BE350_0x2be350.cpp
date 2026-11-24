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

// Function: sub_002BE350
// Address: 0x2be350 - 0x2be4bc
void sub_002BE350_0x2be350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE350_0x2be350");
#endif

    ctx->pc = 0x2be350u;

    // 0x2be350: 0xa0800046  sb          $zero, 0x46($a0)
    ctx->pc = 0x2be350u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be354: 0x90c50001  lbu         $a1, 0x1($a2)
    ctx->pc = 0x2be354u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2be358: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BE358u;
    {
        const bool branch_taken_0x2be358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE358u;
        // 0x2be35c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be358) {
            ctx->pc = 0x2BE3F8u;
            goto label_2be3f8;
        }
    }
    ctx->pc = 0x2BE360u;
    // 0x2be360: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2be360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2be364: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE364u;
    {
        const bool branch_taken_0x2be364 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BE368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE364u;
        // 0x2be368: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be364) {
            ctx->pc = 0x2BE378u;
            goto label_2be378;
        }
    }
    ctx->pc = 0x2BE36Cu;
    // 0x2be36c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be370: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE370u;
    {
        const bool branch_taken_0x2be370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE370u;
        // 0x2be374: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be370) {
            ctx->pc = 0x2BE390u;
            goto label_2be390;
        }
    }
    ctx->pc = 0x2BE378u;
label_2be378:
    // 0x2be378: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2be378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2be37c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2be37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2be380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be384: 0x0  nop
    ctx->pc = 0x2be384u;
    // NOP
    // 0x2be388: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2be388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2be38c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2be38cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2be390:
    // 0x2be390: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2be390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be394: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2be394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2be398: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2be398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2be39c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2be39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2be3a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2be3a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be3a8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2be3a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2be3ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2be3acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2be3b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2be3b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be3b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE3B4u;
    {
        const bool branch_taken_0x2be3b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2be3b4) {
            ctx->pc = 0x2BE3CCu;
            goto label_2be3cc;
        }
    }
    ctx->pc = 0x2BE3BCu;
    // 0x2be3bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2be3bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2be3c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2be3c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2be3c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE3C4u;
    {
        const bool branch_taken_0x2be3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3C4u;
        // 0x2be3c8: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3c4) {
            ctx->pc = 0x2BE3E8u;
            goto label_2be3e8;
        }
    }
    ctx->pc = 0x2BE3CCu;
label_2be3cc:
    // 0x2be3cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2be3ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2be3d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2be3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2be3d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2be3d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2be3d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2be3d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2be3dc: 0x0  nop
    ctx->pc = 0x2be3dcu;
    // NOP
    // 0x2be3e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2be3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2be3e4: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2be3e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2be3e8:
    // 0x2be3e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2be3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2be3ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BE3ECu;
    {
        const bool branch_taken_0x2be3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be3ec) {
            ctx->pc = 0x2BE3F8u;
            goto label_2be3f8;
        }
    }
    ctx->pc = 0x2BE3F4u;
    // 0x2be3f4: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x2be3f4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2be3f8:
    // 0x2be3f8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE3F8u;
    {
        const bool branch_taken_0x2be3f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3F8u;
        // 0x2be3fc: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3f8) {
            ctx->pc = 0x2BE408u;
            goto label_2be408;
        }
    }
    ctx->pc = 0x2BE400u;
    // 0x2be400: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2BE400u;
    {
        const bool branch_taken_0x2be400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE400u;
        // 0x2be404: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be400) {
            ctx->pc = 0x2BE488u;
            goto label_2be488;
        }
    }
    ctx->pc = 0x2BE408u;
label_2be408:
    // 0x2be408: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE408u;
    {
        const bool branch_taken_0x2be408 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE408u;
        // 0x2be40c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be408) {
            ctx->pc = 0x2BE41Cu;
            goto label_2be41c;
        }
    }
    ctx->pc = 0x2BE410u;
    // 0x2be410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be414: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE414u;
    {
        const bool branch_taken_0x2be414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE414u;
        // 0x2be418: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be414) {
            ctx->pc = 0x2BE434u;
            goto label_2be434;
        }
    }
    ctx->pc = 0x2BE41Cu;
label_2be41c:
    // 0x2be41c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2be41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2be420: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2be420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2be424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be428: 0x0  nop
    ctx->pc = 0x2be428u;
    // NOP
    // 0x2be42c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2be42cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2be430: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2be430u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2be434:
    // 0x2be434: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2be434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be438: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2be438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2be43c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2be43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2be440: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2be440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2be444: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2be444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be44c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2be44cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2be450: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2be450u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2be454: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2be454u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be458: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE458u;
    {
        const bool branch_taken_0x2be458 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2be458) {
            ctx->pc = 0x2BE470u;
            goto label_2be470;
        }
    }
    ctx->pc = 0x2BE460u;
    // 0x2be460: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2be460u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2be464: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2be464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2be468: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE468u;
    {
        const bool branch_taken_0x2be468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be468) {
            ctx->pc = 0x2BE488u;
            goto label_2be488;
        }
    }
    ctx->pc = 0x2BE470u;
label_2be470:
    // 0x2be470: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2be470u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2be474: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2be474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2be478: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2be478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2be47c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2be47cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2be480: 0x0  nop
    ctx->pc = 0x2be480u;
    // NOP
    // 0x2be484: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2be484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2be488:
    // 0x2be488: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2be488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2be48c: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2be48cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2be490: 0x24a550b8  addiu       $a1, $a1, 0x50B8
    ctx->pc = 0x2be490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20664));
    // 0x2be494: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x2be494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2be498: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2be498u;
    { uint32_t bits = FAST_READ32(0x4E50B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be49c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2be49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4a0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2be4a0u;
    { uint32_t bits = FAST_READ32(0x4E50BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be4a4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2be4a4u;
    { uint32_t bits = FAST_READ32(0x4E50C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be4a8: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2be4a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2be4ac: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2be4acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2be4b0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2be4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2be4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4B4u;
        // 0x2be4b8: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE4BCu;
}
