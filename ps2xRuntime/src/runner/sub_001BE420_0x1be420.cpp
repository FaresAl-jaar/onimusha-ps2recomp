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

// Function: sub_001BE420
// Address: 0x1be420 - 0x1be7b0
void sub_001BE420_0x1be420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE420_0x1be420");
#endif

    switch (ctx->pc) {
        case 0x1be460u: goto label_1be460;
        case 0x1be4bcu: goto label_1be4bc;
        case 0x1be534u: goto label_1be534;
        case 0x1be5acu: goto label_1be5ac;
        case 0x1be670u: goto label_1be670;
        case 0x1be68cu: goto label_1be68c;
        case 0x1be69cu: goto label_1be69c;
        case 0x1be6a4u: goto label_1be6a4;
        case 0x1be6c8u: goto label_1be6c8;
        case 0x1be6d0u: goto label_1be6d0;
        case 0x1be6ecu: goto label_1be6ec;
        case 0x1be6fcu: goto label_1be6fc;
        case 0x1be704u: goto label_1be704;
        case 0x1be724u: goto label_1be724;
        case 0x1be72cu: goto label_1be72c;
        case 0x1be748u: goto label_1be748;
        case 0x1be758u: goto label_1be758;
        case 0x1be760u: goto label_1be760;
        case 0x1be784u: goto label_1be784;
        default: break;
    }

    ctx->pc = 0x1be420u;

    // 0x1be420: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x1be420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
    // 0x1be424: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1be424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1be428: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1be428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1be42c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1be42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1be430: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x1be430u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1be434: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1be434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1be438: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1be438u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be43c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1be43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1be440: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1be440u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be444: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1be444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1be448: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1be448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be44c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1be44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1be450: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1be450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1be454: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1be454u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1be458: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1be458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be45c: 0x0  nop
    ctx->pc = 0x1be45cu;
    // NOP
label_1be460:
    // 0x1be460: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE460u;
    {
        const bool branch_taken_0x1be460 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x1BE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE460u;
        // 0x1be464: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be460) {
            ctx->pc = 0x1BE474u;
            goto label_1be474;
        }
    }
    ctx->pc = 0x1BE468u;
    // 0x1be468: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1be468u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be46c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE46Cu;
    {
        const bool branch_taken_0x1be46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE46Cu;
        // 0x1be470: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be46c) {
            ctx->pc = 0x1BE48Cu;
            goto label_1be48c;
        }
    }
    ctx->pc = 0x1BE474u;
label_1be474:
    // 0x1be474: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1be474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1be478: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1be478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be47c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be47cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be480: 0x0  nop
    ctx->pc = 0x1be480u;
    // NOP
    // 0x1be484: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1be484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1be488: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1be488u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1be48c:
    // 0x1be48c: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x1be48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be490: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1be490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x1be494: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1be494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1be498: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1be498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1be49c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be49cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be4a0: 0x46021d03  div.s       $f20, $f3, $f2
    ctx->pc = 0x1be4a0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1be4a4: 0x0  nop
    ctx->pc = 0x1be4a4u;
    // NOP
    // 0x1be4a8: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x1be4a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1be4ac: 0x0  nop
    ctx->pc = 0x1be4acu;
    // NOP
    // 0x1be4b0: 0x0  nop
    ctx->pc = 0x1be4b0u;
    // NOP
    // 0x1be4b4: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1BE4B4u;
    SET_GPR_U32(ctx, 31, 0x1BE4BCu);
    ctx->pc = 0x1BE4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4B4u;
    // 0x1be4b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1BE4B4u, 0x1BE4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4BCu;
label_1be4bc:
    // 0x1be4bc: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1be4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x1be4c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1be4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1be4c4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1be4c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1be4c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be4cc: 0x0  nop
    ctx->pc = 0x1be4ccu;
    // NOP
    // 0x1be4d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1be4d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1be4d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1be4d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be4d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE4D8u;
    {
        const bool branch_taken_0x1be4d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be4d8) {
            ctx->pc = 0x1BE4F0u;
            goto label_1be4f0;
        }
    }
    ctx->pc = 0x1BE4E0u;
    // 0x1be4e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1be4e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1be4e4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1be4e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1be4e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE4E8u;
    {
        const bool branch_taken_0x1be4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4E8u;
        // 0x1be4ec: 0xc6800014  lwc1        $f0, 0x14($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be4e8) {
            ctx->pc = 0x1BE50Cu;
            goto label_1be50c;
        }
    }
    ctx->pc = 0x1BE4F0u;
label_1be4f0:
    // 0x1be4f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1be4f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1be4f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1be4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1be4f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1be4f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1be4fc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1be4fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1be500: 0x0  nop
    ctx->pc = 0x1be500u;
    // NOP
    // 0x1be504: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1be504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1be508: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x1be508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be50c:
    // 0x1be50c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1be50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1be510: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be514: 0x9283001c  lbu         $v1, 0x1C($s4)
    ctx->pc = 0x1be514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1be518: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1be518u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1be51c: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x1be51cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1be520: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x1be520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1be524: 0x0  nop
    ctx->pc = 0x1be524u;
    // NOP
    // 0x1be528: 0x0  nop
    ctx->pc = 0x1be528u;
    // NOP
    // 0x1be52c: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1BE52Cu;
    SET_GPR_U32(ctx, 31, 0x1BE534u);
    ctx->pc = 0x1BE530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE52Cu;
    // 0x1be530: 0x291c2  srl         $s2, $v0, 7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1BE52Cu, 0x1BE534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE534u;
label_1be534:
    // 0x1be534: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1be534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x1be538: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1be538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1be53c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1be53cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1be540: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be544: 0x0  nop
    ctx->pc = 0x1be544u;
    // NOP
    // 0x1be548: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1be548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1be54c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1be54cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be550: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE550u;
    {
        const bool branch_taken_0x1be550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be550) {
            ctx->pc = 0x1BE568u;
            goto label_1be568;
        }
    }
    ctx->pc = 0x1BE558u;
    // 0x1be558: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1be558u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1be55c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1be55cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1be560: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE560u;
    {
        const bool branch_taken_0x1be560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE560u;
        // 0x1be564: 0xc6800018  lwc1        $f0, 0x18($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be560) {
            ctx->pc = 0x1BE584u;
            goto label_1be584;
        }
    }
    ctx->pc = 0x1BE568u;
label_1be568:
    // 0x1be568: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1be568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1be56c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1be56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1be570: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1be570u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1be574: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1be574u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1be578: 0x0  nop
    ctx->pc = 0x1be578u;
    // NOP
    // 0x1be57c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1be57cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1be580: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x1be580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be584:
    // 0x1be584: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1be584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1be588: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be58c: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x1be58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1be590: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1be590u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1be594: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x1be594u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1be598: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x1be598u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1be59c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1be59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1be5a0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1be5a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1be5a4: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1BE5A4u;
    SET_GPR_U32(ctx, 31, 0x1BE5ACu);
    ctx->pc = 0x1BE5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE5A4u;
    // 0x1be5a8: 0x289c2  srl         $s1, $v0, 7 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1BE5A4u, 0x1BE5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5ACu;
label_1be5ac:
    // 0x1be5ac: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1be5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x1be5b0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1be5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1be5b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1be5b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1be5b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be5bc: 0x0  nop
    ctx->pc = 0x1be5bcu;
    // NOP
    // 0x1be5c0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1be5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1be5c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1be5c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be5c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE5C8u;
    {
        const bool branch_taken_0x1be5c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be5c8) {
            ctx->pc = 0x1BE5E0u;
            goto label_1be5e0;
        }
    }
    ctx->pc = 0x1BE5D0u;
    // 0x1be5d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1be5d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1be5d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1be5d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1be5d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE5D8u;
    {
        const bool branch_taken_0x1be5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5D8u;
        // 0x1be5dc: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5d8) {
            ctx->pc = 0x1BE5FCu;
            goto label_1be5fc;
        }
    }
    ctx->pc = 0x1BE5E0u;
label_1be5e0:
    // 0x1be5e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1be5e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1be5e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1be5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1be5e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1be5e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1be5ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1be5ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1be5f0: 0x0  nop
    ctx->pc = 0x1be5f0u;
    // NOP
    // 0x1be5f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1be5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be5f8: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x1be5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1be5fc:
    // 0x1be5fc: 0x2e410100  sltiu       $at, $s2, 0x100
    ctx->pc = 0x1be5fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1be600: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1be600u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1be604: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1be604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1be608: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1be608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1be60c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE60Cu;
    {
        const bool branch_taken_0x1be60c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE60Cu;
        // 0x1be610: 0x211c2  srl         $v0, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be60c) {
            ctx->pc = 0x1BE618u;
            goto label_1be618;
        }
    }
    ctx->pc = 0x1BE614u;
    // 0x1be614: 0x241200ff  addiu       $s2, $zero, 0xFF
    ctx->pc = 0x1be614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1be618:
    // 0x1be618: 0x2e210100  sltiu       $at, $s1, 0x100
    ctx->pc = 0x1be618u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1be61c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE61Cu;
    {
        const bool branch_taken_0x1be61c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be61c) {
            ctx->pc = 0x1BE628u;
            goto label_1be628;
        }
    }
    ctx->pc = 0x1BE624u;
    // 0x1be624: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x1be624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1be628:
    // 0x1be628: 0x2c410100  sltiu       $at, $v0, 0x100
    ctx->pc = 0x1be628u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1be62c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE62Cu;
    {
        const bool branch_taken_0x1be62c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be62c) {
            ctx->pc = 0x1BE638u;
            goto label_1be638;
        }
    }
    ctx->pc = 0x1BE634u;
    // 0x1be634: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1be634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1be638:
    // 0x1be638: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1be638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1be63c: 0x111200  sll         $v0, $s1, 8
    ctx->pc = 0x1be63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x1be640: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1be640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1be644: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1be644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1be648: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1be648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1be64c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1be64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1be650: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1be650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1be654: 0x2e620100  sltiu       $v0, $s3, 0x100
    ctx->pc = 0x1be654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1be658: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x1be658u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x1be65c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1be65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1be660: 0x1440ff7f  bnez        $v0, . + 4 + (-0x81 << 2)
    ctx->pc = 0x1BE660u;
    {
        const bool branch_taken_0x1be660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE660u;
        // 0x1be664: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be660) {
            ctx->pc = 0x1BE460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be460;
        }
    }
    ctx->pc = 0x1BE668u;
    // 0x1be668: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BE668u;
    SET_GPR_U32(ctx, 31, 0x1BE670u);
    ctx->pc = 0x1BE66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE668u;
    // 0x1be66c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BE668u, 0x1BE670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE670u;
label_1be670:
    // 0x1be670: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1be670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be674: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be678: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1be678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1be67c: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1be67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1be680: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1be680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1be684: 0xc06f9ec  jal         func_1BE7B0
    ctx->pc = 0x1BE684u;
    SET_GPR_U32(ctx, 31, 0x1BE68Cu);
    ctx->pc = 0x1BE688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE684u;
    // 0x1be688: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE7B0u, 0x1BE684u, 0x1BE68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE68Cu;
label_1be68c:
    // 0x1be68c: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1be68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1be690: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be694: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BE694u;
    SET_GPR_U32(ctx, 31, 0x1BE69Cu);
    ctx->pc = 0x1BE698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE694u;
    // 0x1be698: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BE694u, 0x1BE69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE69Cu;
label_1be69c:
    // 0x1be69c: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BE69Cu;
    SET_GPR_U32(ctx, 31, 0x1BE6A4u);
    ctx->pc = 0x1BE6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE69Cu;
    // 0x1be6a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BE69Cu, 0x1BE6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6A4u;
label_1be6a4:
    // 0x1be6a4: 0x8ea978d0  lw          $t1, 0x78D0($s5)
    ctx->pc = 0x1be6a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1be6a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1be6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1be6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1be6b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6b4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1be6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1be6b8: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1be6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1be6bc: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1be6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1be6c0: 0xc06fdfc  jal         func_1BF7F0
    ctx->pc = 0x1BE6C0u;
    SET_GPR_U32(ctx, 31, 0x1BE6C8u);
    ctx->pc = 0x1BE6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6C0u;
    // 0x1be6c4: 0x344a00ff  ori         $t2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF7F0u, 0x1BE6C0u, 0x1BE6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6C8u;
label_1be6c8:
    // 0x1be6c8: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BE6C8u;
    SET_GPR_U32(ctx, 31, 0x1BE6D0u);
    ctx->pc = 0x1BE6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6C8u;
    // 0x1be6cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BE6C8u, 0x1BE6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6D0u;
label_1be6d0:
    // 0x1be6d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1be6d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6d8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1be6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1be6dc: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1be6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1be6e0: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1be6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1be6e4: 0xc06f9ec  jal         func_1BE7B0
    ctx->pc = 0x1BE6E4u;
    SET_GPR_U32(ctx, 31, 0x1BE6ECu);
    ctx->pc = 0x1BE6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6E4u;
    // 0x1be6e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE7B0u, 0x1BE6E4u, 0x1BE6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6ECu;
label_1be6ec:
    // 0x1be6ec: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1be6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1be6f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6f4: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BE6F4u;
    SET_GPR_U32(ctx, 31, 0x1BE6FCu);
    ctx->pc = 0x1BE6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6F4u;
    // 0x1be6f8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BE6F4u, 0x1BE6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6FCu;
label_1be6fc:
    // 0x1be6fc: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BE6FCu;
    SET_GPR_U32(ctx, 31, 0x1BE704u);
    ctx->pc = 0x1BE700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6FCu;
    // 0x1be700: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BE6FCu, 0x1BE704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE704u;
label_1be704:
    // 0x1be704: 0x8ea978d0  lw          $t1, 0x78D0($s5)
    ctx->pc = 0x1be704u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1be708: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1be708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be70c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be710: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1be710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1be714: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1be714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1be718: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1be718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1be71c: 0xc06fdfc  jal         func_1BF7F0
    ctx->pc = 0x1BE71Cu;
    SET_GPR_U32(ctx, 31, 0x1BE724u);
    ctx->pc = 0x1BE720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE71Cu;
    // 0x1be720: 0x240aff00  addiu       $t2, $zero, -0x100 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF7F0u, 0x1BE71Cu, 0x1BE724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE724u;
label_1be724:
    // 0x1be724: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BE724u;
    SET_GPR_U32(ctx, 31, 0x1BE72Cu);
    ctx->pc = 0x1BE728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE724u;
    // 0x1be728: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BE724u, 0x1BE72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE72Cu;
label_1be72c:
    // 0x1be72c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1be72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be730: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be734: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1be734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1be738: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1be738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1be73c: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1be73cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1be740: 0xc06f9ec  jal         func_1BE7B0
    ctx->pc = 0x1BE740u;
    SET_GPR_U32(ctx, 31, 0x1BE748u);
    ctx->pc = 0x1BE744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE740u;
    // 0x1be744: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE7B0u, 0x1BE740u, 0x1BE748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE748u;
label_1be748:
    // 0x1be748: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1be748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1be74c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be750: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BE750u;
    SET_GPR_U32(ctx, 31, 0x1BE758u);
    ctx->pc = 0x1BE754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE750u;
    // 0x1be754: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BE750u, 0x1BE758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE758u;
label_1be758:
    // 0x1be758: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BE758u;
    SET_GPR_U32(ctx, 31, 0x1BE760u);
    ctx->pc = 0x1BE75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE758u;
    // 0x1be75c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BE758u, 0x1BE760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE760u;
label_1be760:
    // 0x1be760: 0x8ea978d0  lw          $t1, 0x78D0($s5)
    ctx->pc = 0x1be760u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1be764: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1be764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be768: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1be768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1be76c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be770: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1be770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1be774: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1be774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1be778: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1be778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1be77c: 0xc06fdfc  jal         func_1BF7F0
    ctx->pc = 0x1BE77Cu;
    SET_GPR_U32(ctx, 31, 0x1BE784u);
    ctx->pc = 0x1BE780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE77Cu;
    // 0x1be780: 0x344affff  ori         $t2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF7F0u, 0x1BE77Cu, 0x1BE784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE784u;
label_1be784:
    // 0x1be784: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1be784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1be788: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1be788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1be78c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1be78cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1be790: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1be790u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1be794: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1be794u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be798: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1be798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be79c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1be79cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be7a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1be7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be7a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1be7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7A8u;
        // 0x1be7ac: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE7B0u;
}
