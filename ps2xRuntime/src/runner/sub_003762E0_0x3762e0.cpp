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

// Function: sub_003762E0
// Address: 0x3762e0 - 0x3764ac
void sub_003762E0_0x3762e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003762E0_0x3762e0");
#endif

    switch (ctx->pc) {
        case 0x37631cu: goto label_37631c;
        case 0x376394u: goto label_376394;
        case 0x37639cu: goto label_37639c;
        case 0x3763b4u: goto label_3763b4;
        case 0x37642cu: goto label_37642c;
        case 0x376498u: goto label_376498;
        default: break;
    }

    ctx->pc = 0x3762e0u;

    // 0x3762e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3762e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3762e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3762e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3762e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3762e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3762ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3762ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3762f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3762f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3762f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3762f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3762f8: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x3762f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x3762fc: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x3762fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x376300: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x376300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x376304: 0x90460014  lbu         $a2, 0x14($v0)
    ctx->pc = 0x376304u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x376308: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x376308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x37630c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x37630cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x376310: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x376310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x376314: 0xc0bce7c  jal         func_2F39F0
    ctx->pc = 0x376314u;
    SET_GPR_U32(ctx, 31, 0x37631Cu);
    ctx->pc = 0x376318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376314u;
    // 0x376318: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39F0u, 0x376314u, 0x37631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37631Cu;
label_37631c:
    // 0x37631c: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x37631Cu;
    {
        const bool branch_taken_0x37631c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x37631c) {
            ctx->pc = 0x3763A8u;
            goto label_3763a8;
        }
    }
    ctx->pc = 0x376324u;
    // 0x376324: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x376324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376328: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x376328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37632c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37632cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x376330: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x376330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x376334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376338: 0x0  nop
    ctx->pc = 0x376338u;
    // NOP
    // 0x37633c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x37633cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x376340: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x376340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376344: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x376344u;
    {
        const bool branch_taken_0x376344 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x376344) {
            ctx->pc = 0x37635Cu;
            goto label_37635c;
        }
    }
    ctx->pc = 0x37634Cu;
    // 0x37634c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37634cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x376350: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x376350u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x376354: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x376354u;
    {
        const bool branch_taken_0x376354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376354u;
        // 0x376358: 0x3343c  dsll32      $a2, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376354) {
            ctx->pc = 0x376378u;
            goto label_376378;
        }
    }
    ctx->pc = 0x37635Cu;
label_37635c:
    // 0x37635c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37635cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376360: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x376360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x376364: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x376364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x376368: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x376368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x37636c: 0x0  nop
    ctx->pc = 0x37636cu;
    // NOP
    // 0x376370: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x376370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x376374: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x376374u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
label_376378:
    // 0x376378: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x376378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x37637c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x37637cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x376380: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x376380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x376384: 0x24842160  addiu       $a0, $a0, 0x2160
    ctx->pc = 0x376384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    // 0x376388: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37638c: 0xc0e1a40  jal         func_386900
    ctx->pc = 0x37638Cu;
    SET_GPR_U32(ctx, 31, 0x376394u);
    ctx->pc = 0x376390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37638Cu;
    // 0x376390: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386900u, 0x37638Cu, 0x376394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376394u;
label_376394:
    // 0x376394: 0xc0dd8a4  jal         func_376290
    ctx->pc = 0x376394u;
    SET_GPR_U32(ctx, 31, 0x37639Cu);
    ctx->pc = 0x376398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376394u;
    // 0x376398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376290u, 0x376394u, 0x37639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37639Cu;
label_37639c:
    // 0x37639c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x37639Cu;
    {
        const bool branch_taken_0x37639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37639c) {
            ctx->pc = 0x376498u;
            goto label_376498;
        }
    }
    ctx->pc = 0x3763A4u;
    // 0x3763a4: 0x0  nop
    ctx->pc = 0x3763a4u;
    // NOP
label_3763a8:
    // 0x3763a8: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x3763a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x3763ac: 0xc0d0af4  jal         func_342BD0
    ctx->pc = 0x3763ACu;
    SET_GPR_U32(ctx, 31, 0x3763B4u);
    ctx->pc = 0x3763B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3763ACu;
    // 0x3763b0: 0x24440024  addiu       $a0, $v0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x3763ACu, 0x3763B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763B4u;
label_3763b4:
    // 0x3763b4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3763B4u;
    {
        const bool branch_taken_0x3763b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3763b4) {
            ctx->pc = 0x376498u;
            goto label_376498;
        }
    }
    ctx->pc = 0x3763BCu;
    // 0x3763bc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3763bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3763c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3763c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3763c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3763c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3763c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3763c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3763cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3763ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3763d0: 0x0  nop
    ctx->pc = 0x3763d0u;
    // NOP
    // 0x3763d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3763d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3763d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3763d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3763dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3763DCu;
    {
        const bool branch_taken_0x3763dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3763dc) {
            ctx->pc = 0x3763F4u;
            goto label_3763f4;
        }
    }
    ctx->pc = 0x3763E4u;
    // 0x3763e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3763e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3763e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3763e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3763ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3763ECu;
    {
        const bool branch_taken_0x3763ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3763F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3763ECu;
        // 0x3763f0: 0x3343c  dsll32      $a2, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3763ec) {
            ctx->pc = 0x376410u;
            goto label_376410;
        }
    }
    ctx->pc = 0x3763F4u;
label_3763f4:
    // 0x3763f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3763f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3763f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3763f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3763fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3763fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x376400: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x376400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x376404: 0x0  nop
    ctx->pc = 0x376404u;
    // NOP
    // 0x376408: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x376408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37640c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x37640cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
label_376410:
    // 0x376410: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x376410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x376414: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376418: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x376418u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x37641c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x37641cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x376420: 0x24842160  addiu       $a0, $a0, 0x2160
    ctx->pc = 0x376420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    // 0x376424: 0xc0e1a40  jal         func_386900
    ctx->pc = 0x376424u;
    SET_GPR_U32(ctx, 31, 0x37642Cu);
    ctx->pc = 0x376428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376424u;
    // 0x376428: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386900u, 0x376424u, 0x37642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37642Cu;
label_37642c:
    // 0x37642c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376430: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x376430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x376434: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x376434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x376438: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x376438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x37643c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x37643cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x376440: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x376440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x376444: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x376444u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x376448: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x376448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37644c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37644cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376450: 0x0  nop
    ctx->pc = 0x376450u;
    // NOP
    // 0x376454: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x376454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x376458: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x376458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37645c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37645Cu;
    {
        const bool branch_taken_0x37645c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37645c) {
            ctx->pc = 0x376474u;
            goto label_376474;
        }
    }
    ctx->pc = 0x376464u;
    // 0x376464: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x376464u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x376468: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x376468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37646c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37646Cu;
    {
        const bool branch_taken_0x37646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37646Cu;
        // 0x376470: 0x8e220144  lw          $v0, 0x144($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37646c) {
            ctx->pc = 0x376490u;
            goto label_376490;
        }
    }
    ctx->pc = 0x376474u;
label_376474:
    // 0x376474: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x376474u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376478: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x376478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37647c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37647cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x376480: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x376480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x376484: 0x0  nop
    ctx->pc = 0x376484u;
    // NOP
    // 0x376488: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x376488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x37648c: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x37648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_376490:
    // 0x376490: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x376490u;
    SET_GPR_U32(ctx, 31, 0x376498u);
    ctx->pc = 0x376494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376490u;
    // 0x376494: 0x24440024  addiu       $a0, $v0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x376490u, 0x376498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376498u;
label_376498:
    // 0x376498: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x376498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37649c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37649cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3764a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3764a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3764a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3764A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3764A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764A4u;
        // 0x3764a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3764A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3764ACu;
}
