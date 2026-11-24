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

// Function: sub_002636A0
// Address: 0x2636a0 - 0x263a3c
void sub_002636A0_0x2636a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002636A0_0x2636a0");
#endif

    switch (ctx->pc) {
        case 0x263714u: goto label_263714;
        case 0x263914u: goto label_263914;
        case 0x263948u: goto label_263948;
        case 0x263a1cu: goto label_263a1c;
        default: break;
    }

    ctx->pc = 0x2636a0u;

    // 0x2636a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2636a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2636a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2636a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2636a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2636a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2636ac: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x2636acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2636b0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2636b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2636b4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2636B4u;
    {
        const bool branch_taken_0x2636b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2636b4) {
            ctx->pc = 0x263720u;
            goto label_263720;
        }
    }
    ctx->pc = 0x2636BCu;
    // 0x2636bc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2636bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2636c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2636c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2636c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2636c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2636c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2636c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2636cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2636ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2636d0: 0x0  nop
    ctx->pc = 0x2636d0u;
    // NOP
    // 0x2636d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2636d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2636d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2636d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2636dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2636DCu;
    {
        const bool branch_taken_0x2636dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2636dc) {
            ctx->pc = 0x2636F4u;
            goto label_2636f4;
        }
    }
    ctx->pc = 0x2636E4u;
    // 0x2636e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2636e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2636e8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2636e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2636ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2636ECu;
    {
        const bool branch_taken_0x2636ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2636ec) {
            ctx->pc = 0x26370Cu;
            goto label_26370c;
        }
    }
    ctx->pc = 0x2636F4u;
label_2636f4:
    // 0x2636f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2636f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2636f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2636f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2636fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2636fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x263700: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x263700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x263704: 0x0  nop
    ctx->pc = 0x263704u;
    // NOP
    // 0x263708: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x263708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_26370c:
    // 0x26370c: 0xc0b2d80  jal         func_2CB600
    ctx->pc = 0x26370Cu;
    SET_GPR_U32(ctx, 31, 0x263714u);
    ctx->pc = 0x2CB600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB600u, 0x26370Cu, 0x263714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263714u;
label_263714:
    // 0x263714: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x263714u;
    {
        const bool branch_taken_0x263714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263714u;
        // 0x263718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263714) {
            ctx->pc = 0x263A30u;
            goto label_263a30;
        }
    }
    ctx->pc = 0x26371Cu;
    // 0x26371c: 0x0  nop
    ctx->pc = 0x26371cu;
    // NOP
label_263720:
    // 0x263720: 0x90830640  lbu         $v1, 0x640($a0)
    ctx->pc = 0x263720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x263724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263728: 0x14620053  bne         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x263728u;
    {
        const bool branch_taken_0x263728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x263728) {
            ctx->pc = 0x263878u;
            goto label_263878;
        }
    }
    ctx->pc = 0x263730u;
    // 0x263730: 0xa080083d  sb          $zero, 0x83D($a0)
    ctx->pc = 0x263730u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2109), (uint8_t)GPR_U32(ctx, 0));
    // 0x263734: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x263734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x263738: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x263738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26373c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26373cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x263740: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x263740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x263744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263748: 0x0  nop
    ctx->pc = 0x263748u;
    // NOP
    // 0x26374c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x26374cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x263750: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x263750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263754: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x263754u;
    {
        const bool branch_taken_0x263754 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263754) {
            ctx->pc = 0x26376Cu;
            goto label_26376c;
        }
    }
    ctx->pc = 0x26375Cu;
    // 0x26375c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26375cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x263760: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x263760u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x263764: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263764u;
    {
        const bool branch_taken_0x263764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263764u;
        // 0x263768: 0xa4830786  sh          $v1, 0x786($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1926), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263764) {
            ctx->pc = 0x263788u;
            goto label_263788;
        }
    }
    ctx->pc = 0x26376Cu;
label_26376c:
    // 0x26376c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26376cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263770: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x263770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x263774: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x263774u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x263778: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x263778u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26377c: 0x0  nop
    ctx->pc = 0x26377cu;
    // NOP
    // 0x263780: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x263780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x263784: 0xa4830786  sh          $v1, 0x786($a0)
    ctx->pc = 0x263784u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1926), (uint16_t)GPR_U32(ctx, 3));
label_263788:
    // 0x263788: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x263788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x26378c: 0xa4832ac8  sh          $v1, 0x2AC8($a0)
    ctx->pc = 0x26378cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10952), (uint16_t)GPR_U32(ctx, 3));
    // 0x263790: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x263790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x263794: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x263794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263798: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x263798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x26379c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26379cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2637a0: 0x0  nop
    ctx->pc = 0x2637a0u;
    // NOP
    // 0x2637a4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2637a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2637a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2637a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2637ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2637ACu;
    {
        const bool branch_taken_0x2637ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2637ac) {
            ctx->pc = 0x2637C4u;
            goto label_2637c4;
        }
    }
    ctx->pc = 0x2637B4u;
    // 0x2637b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2637b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2637b8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2637b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2637bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2637BCu;
    {
        const bool branch_taken_0x2637bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2637C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2637BCu;
        // 0x2637c0: 0xa4830784  sh          $v1, 0x784($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1924), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2637bc) {
            ctx->pc = 0x2637E0u;
            goto label_2637e0;
        }
    }
    ctx->pc = 0x2637C4u;
label_2637c4:
    // 0x2637c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2637c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2637c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2637c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2637cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2637ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2637d0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2637d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2637d4: 0x0  nop
    ctx->pc = 0x2637d4u;
    // NOP
    // 0x2637d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2637d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2637dc: 0xa4830784  sh          $v1, 0x784($a0)
    ctx->pc = 0x2637dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1924), (uint16_t)GPR_U32(ctx, 3));
label_2637e0:
    // 0x2637e0: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x2637e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2637e4: 0x2444003e  addiu       $a0, $v0, 0x3E
    ctx->pc = 0x2637e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 62));
    // 0x2637e8: 0x9442003e  lhu         $v0, 0x3E($v0)
    ctx->pc = 0x2637e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x2637ec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2637ECu;
    {
        const bool branch_taken_0x2637ec = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2637ec) {
            ctx->pc = 0x263800u;
            goto label_263800;
        }
    }
    ctx->pc = 0x2637F4u;
    // 0x2637f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2637f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2637f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2637F8u;
    {
        const bool branch_taken_0x2637f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2637FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2637F8u;
        // 0x2637fc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2637f8) {
            ctx->pc = 0x26381Cu;
            goto label_26381c;
        }
    }
    ctx->pc = 0x263800u;
label_263800:
    // 0x263800: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x263800u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x263804: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x263804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x263808: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x263808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26380c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26380cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263810: 0x0  nop
    ctx->pc = 0x263810u;
    // NOP
    // 0x263814: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x263814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x263818: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x263818u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26381c:
    // 0x26381c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x26381cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x263820: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x263820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x263824: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x263824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x263828: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x263828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26382c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26382cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263830: 0x0  nop
    ctx->pc = 0x263830u;
    // NOP
    // 0x263834: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x263834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x263838: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x263838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26383c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x26383Cu;
    {
        const bool branch_taken_0x26383c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26383c) {
            ctx->pc = 0x263854u;
            goto label_263854;
        }
    }
    ctx->pc = 0x263844u;
    // 0x263844: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x263844u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x263848: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x263848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26384c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26384Cu;
    {
        const bool branch_taken_0x26384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26384Cu;
        // 0x263850: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26384c) {
            ctx->pc = 0x263870u;
            goto label_263870;
        }
    }
    ctx->pc = 0x263854u;
label_263854:
    // 0x263854: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x263854u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263858: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x263858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26385c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26385cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x263860: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x263860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x263864: 0x0  nop
    ctx->pc = 0x263864u;
    // NOP
    // 0x263868: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x263868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26386c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x26386cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_263870:
    // 0x263870: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x263870u;
    {
        const bool branch_taken_0x263870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263870) {
            ctx->pc = 0x263A28u;
            goto label_263a28;
        }
    }
    ctx->pc = 0x263878u;
label_263878:
    // 0x263878: 0x8c8206c8  lw          $v0, 0x6C8($a0)
    ctx->pc = 0x263878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x26387c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26387cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x263880: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x263880u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x263884: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x263884u;
    {
        const bool branch_taken_0x263884 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x263888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263884u;
        // 0x263888: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263884) {
            ctx->pc = 0x2638A0u;
            goto label_2638a0;
        }
    }
    ctx->pc = 0x26388Cu;
    // 0x26388c: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x26388cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x263890: 0x240200fb  addiu       $v0, $zero, 0xFB
    ctx->pc = 0x263890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x263894: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x263894u;
    {
        const bool branch_taken_0x263894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x263894) {
            ctx->pc = 0x2638A0u;
            goto label_2638a0;
        }
    }
    ctx->pc = 0x26389Cu;
    // 0x26389c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26389cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2638a0:
    // 0x2638a0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2638A0u;
    {
        const bool branch_taken_0x2638a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2638a0) {
            ctx->pc = 0x2638C0u;
            goto label_2638c0;
        }
    }
    ctx->pc = 0x2638A8u;
    // 0x2638a8: 0x90832ad8  lbu         $v1, 0x2AD8($a0)
    ctx->pc = 0x2638a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10968)));
    // 0x2638ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2638acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2638b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2638B0u;
    {
        const bool branch_taken_0x2638b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2638B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638B0u;
        // 0x2638b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638b0) {
            ctx->pc = 0x2638C0u;
            goto label_2638c0;
        }
    }
    ctx->pc = 0x2638B8u;
    // 0x2638b8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2638B8u;
    {
        const bool branch_taken_0x2638b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2638b8) {
            ctx->pc = 0x263A30u;
            goto label_263a30;
        }
    }
    ctx->pc = 0x2638C0u;
label_2638c0:
    // 0x2638c0: 0x8c8529c0  lw          $a1, 0x29C0($a0)
    ctx->pc = 0x2638c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2638c4: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x2638c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x2638c8: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x2638c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x2638cc: 0x90a2005f  lbu         $v0, 0x5F($a1)
    ctx->pc = 0x2638ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 95)));
    // 0x2638d0: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x2638d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x2638d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2638d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2638d8: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x2638d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x2638dc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2638DCu;
    {
        const bool branch_taken_0x2638dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2638dc) {
            ctx->pc = 0x263950u;
            goto label_263950;
        }
    }
    ctx->pc = 0x2638E4u;
    // 0x2638e4: 0x8c4700c4  lw          $a3, 0xC4($v0)
    ctx->pc = 0x2638e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2638e8: 0x30e20800  andi        $v0, $a3, 0x800
    ctx->pc = 0x2638e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2048);
    // 0x2638ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2638ECu;
    {
        const bool branch_taken_0x2638ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2638ec) {
            ctx->pc = 0x263920u;
            goto label_263920;
        }
    }
    ctx->pc = 0x2638F4u;
    // 0x2638f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2638f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2638f8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2638f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2638fc: 0xa082083d  sb          $v0, 0x83D($a0)
    ctx->pc = 0x2638fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2109), (uint8_t)GPR_U32(ctx, 2));
    // 0x263900: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x263900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x263904: 0x9042005f  lbu         $v0, 0x5F($v0)
    ctx->pc = 0x263904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 95)));
    // 0x263908: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x263908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x26390c: 0xc0e0ab4  jal         func_382AD0
    ctx->pc = 0x26390Cu;
    SET_GPR_U32(ctx, 31, 0x263914u);
    ctx->pc = 0x263910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26390Cu;
    // 0x263910: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382AD0u, 0x26390Cu, 0x263914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263914u;
label_263914:
    // 0x263914: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x263914u;
    {
        const bool branch_taken_0x263914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263914u;
        // 0x263918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263914) {
            ctx->pc = 0x263A30u;
            goto label_263a30;
        }
    }
    ctx->pc = 0x26391Cu;
    // 0x26391c: 0x0  nop
    ctx->pc = 0x26391cu;
    // NOP
label_263920:
    // 0x263920: 0x30e21000  andi        $v0, $a3, 0x1000
    ctx->pc = 0x263920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4096);
    // 0x263924: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x263924u;
    {
        const bool branch_taken_0x263924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263924u;
        // 0x263928: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263924) {
            ctx->pc = 0x263950u;
            goto label_263950;
        }
    }
    ctx->pc = 0x26392Cu;
    // 0x26392c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x26392cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x263930: 0xa082083d  sb          $v0, 0x83D($a0)
    ctx->pc = 0x263930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2109), (uint8_t)GPR_U32(ctx, 2));
    // 0x263934: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x263934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x263938: 0x9042005f  lbu         $v0, 0x5F($v0)
    ctx->pc = 0x263938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 95)));
    // 0x26393c: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x26393cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x263940: 0xc0e0ab4  jal         func_382AD0
    ctx->pc = 0x263940u;
    SET_GPR_U32(ctx, 31, 0x263948u);
    ctx->pc = 0x263944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263940u;
    // 0x263944: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382AD0u, 0x263940u, 0x263948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263948u;
label_263948:
    // 0x263948: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x263948u;
    {
        const bool branch_taken_0x263948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263948u;
        // 0x26394c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263948) {
            ctx->pc = 0x263A30u;
            goto label_263a30;
        }
    }
    ctx->pc = 0x263950u;
label_263950:
    // 0x263950: 0x6102b  sltu        $v0, $zero, $a2
    ctx->pc = 0x263950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x263954: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263954u;
    {
        const bool branch_taken_0x263954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263954) {
            ctx->pc = 0x263968u;
            goto label_263968;
        }
    }
    ctx->pc = 0x26395Cu;
    // 0x26395c: 0x9082065c  lbu         $v0, 0x65C($a0)
    ctx->pc = 0x26395cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x263960: 0x384200fb  xori        $v0, $v0, 0xFB
    ctx->pc = 0x263960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)251);
    // 0x263964: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x263964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_263968:
    // 0x263968: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x263968u;
    {
        const bool branch_taken_0x263968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263968) {
            ctx->pc = 0x2639C0u;
            goto label_2639c0;
        }
    }
    ctx->pc = 0x263970u;
    // 0x263970: 0x94a2000a  lhu         $v0, 0xA($a1)
    ctx->pc = 0x263970u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x263974: 0x28420500  slti        $v0, $v0, 0x500
    ctx->pc = 0x263974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x263978: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x263978u;
    {
        const bool branch_taken_0x263978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263978) {
            ctx->pc = 0x2639C0u;
            goto label_2639c0;
        }
    }
    ctx->pc = 0x263980u;
    // 0x263980: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x263980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x263984: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x263984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x263988: 0x8c8329c8  lw          $v1, 0x29C8($a0)
    ctx->pc = 0x263988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10696)));
    // 0x26398c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x26398cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x263990: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x263990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x263994: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x263994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x263998: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x263998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26399c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26399Cu;
    {
        const bool branch_taken_0x26399c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26399c) {
            ctx->pc = 0x2639C0u;
            goto label_2639c0;
        }
    }
    ctx->pc = 0x2639A4u;
    // 0x2639a4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2639a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2639a8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2639a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2639ac: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2639ACu;
    {
        const bool branch_taken_0x2639ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2639B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639ACu;
        // 0x2639b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639ac) {
            ctx->pc = 0x2639C0u;
            goto label_2639c0;
        }
    }
    ctx->pc = 0x2639B4u;
    // 0x2639b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2639b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2639b8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2639B8u;
    {
        const bool branch_taken_0x2639b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2639BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639B8u;
        // 0x2639bc: 0xa083083d  sb          $v1, 0x83D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2109), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639b8) {
            ctx->pc = 0x263A30u;
            goto label_263a30;
        }
    }
    ctx->pc = 0x2639C0u;
label_2639c0:
    // 0x2639c0: 0xa080083d  sb          $zero, 0x83D($a0)
    ctx->pc = 0x2639c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2109), (uint8_t)GPR_U32(ctx, 0));
    // 0x2639c4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2639c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2639c8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2639c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2639cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2639ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2639d0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2639d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2639d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2639d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2639d8: 0x0  nop
    ctx->pc = 0x2639d8u;
    // NOP
    // 0x2639dc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2639dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2639e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2639e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2639e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2639E4u;
    {
        const bool branch_taken_0x2639e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2639e4) {
            ctx->pc = 0x2639FCu;
            goto label_2639fc;
        }
    }
    ctx->pc = 0x2639ECu;
    // 0x2639ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2639ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2639f0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2639f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2639f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2639F4u;
    {
        const bool branch_taken_0x2639f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2639f4) {
            ctx->pc = 0x263A14u;
            goto label_263a14;
        }
    }
    ctx->pc = 0x2639FCu;
label_2639fc:
    // 0x2639fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2639fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263a00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x263a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x263a04: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x263a04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x263a08: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x263a08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x263a0c: 0x0  nop
    ctx->pc = 0x263a0cu;
    // NOP
    // 0x263a10: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x263a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_263a14:
    // 0x263a14: 0xc0b2d80  jal         func_2CB600
    ctx->pc = 0x263A14u;
    SET_GPR_U32(ctx, 31, 0x263A1Cu);
    ctx->pc = 0x2CB600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB600u, 0x263A14u, 0x263A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A1Cu;
label_263a1c:
    // 0x263a1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x263a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x263a20: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x263a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x263a24: 0xa022e000  sb          $v0, -0x2000($at)
    ctx->pc = 0x263a24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8DE000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE000u, _value); } while (0);
label_263a28:
    // 0x263a28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x263a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a2c: 0x0  nop
    ctx->pc = 0x263a2cu;
    // NOP
label_263a30:
    // 0x263a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263a34: 0x3e00008  jr          $ra
    ctx->pc = 0x263A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A34u;
        // 0x263a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263A3Cu;
}
