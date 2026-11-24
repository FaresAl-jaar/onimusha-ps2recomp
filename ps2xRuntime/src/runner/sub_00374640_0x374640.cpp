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

// Function: sub_00374640
// Address: 0x374640 - 0x374978
void sub_00374640_0x374640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374640_0x374640");
#endif

    switch (ctx->pc) {
        case 0x374710u: goto label_374710;
        case 0x37487cu: goto label_37487c;
        case 0x3748f8u: goto label_3748f8;
        case 0x374900u: goto label_374900;
        case 0x37490cu: goto label_37490c;
        case 0x374918u: goto label_374918;
        case 0x374940u: goto label_374940;
        case 0x374960u: goto label_374960;
        default: break;
    }

    ctx->pc = 0x374640u;

    // 0x374640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x374640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x374644: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x374644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x374648: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x374648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37464c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x374650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x374650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x374654: 0x83828c04  lb          $v0, -0x73FC($gp)
    ctx->pc = 0x374654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937604)));
    // 0x374658: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x374658u;
    {
        const bool branch_taken_0x374658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374658u;
        // 0x37465c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374658) {
            ctx->pc = 0x374688u;
            goto label_374688;
        }
    }
    ctx->pc = 0x374660u;
    // 0x374660: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x374660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374664: 0x3c02c19c  lui         $v0, 0xC19C
    ctx->pc = 0x374664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49564 << 16));
    // 0x374668: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x374668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x37466c: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x37466cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x374670: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x374670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x374674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x374674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374678: 0xa3828c04  sb          $v0, -0x73FC($gp)
    ctx->pc = 0x374678u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937604), (uint8_t)GPR_U32(ctx, 2));
    // 0x37467c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x37467cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x374680: 0xe4201a00  swc1        $f0, 0x1A00($at)
    ctx->pc = 0x374680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x681A00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x681A00u, _value); } while (0); }
    // 0x374684: 0x0  nop
    ctx->pc = 0x374684u;
    // NOP
label_374688:
    // 0x374688: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x374688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x37468c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374690: 0x1062007d  beq         $v1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x374690u;
    {
        const bool branch_taken_0x374690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x374694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374690u;
        // 0x374694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374690) {
            ctx->pc = 0x374888u;
            goto label_374888;
        }
    }
    ctx->pc = 0x374698u;
    // 0x374698: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x374698u;
    {
        const bool branch_taken_0x374698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x374698) {
            ctx->pc = 0x3746D0u;
            goto label_3746d0;
        }
    }
    ctx->pc = 0x3746A0u;
    // 0x3746a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3746A0u;
    {
        const bool branch_taken_0x3746a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3746a0) {
            ctx->pc = 0x3746B0u;
            goto label_3746b0;
        }
    }
    ctx->pc = 0x3746A8u;
    // 0x3746a8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x3746A8u;
    {
        const bool branch_taken_0x3746a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3746a8) {
            ctx->pc = 0x3748E8u;
            goto label_3748e8;
        }
    }
    ctx->pc = 0x3746B0u;
label_3746b0:
    // 0x3746b0: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x3746b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x3746b4: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x3746b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3746b8: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x3746b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x3746bc: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x3746bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x3746c0: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x3746c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x3746c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3746c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3746c8: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3746c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3746cc: 0x0  nop
    ctx->pc = 0x3746ccu;
    // NOP
label_3746d0:
    // 0x3746d0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3746d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x3746d4: 0xc60128f0  lwc1        $f1, 0x28F0($s0)
    ctx->pc = 0x3746d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3746d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3746d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3746dc: 0x0  nop
    ctx->pc = 0x3746dcu;
    // NOP
    // 0x3746e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3746e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3746e4: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
    ctx->pc = 0x3746E4u;
    {
        const bool branch_taken_0x3746e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3746e4) {
            ctx->pc = 0x374860u;
            goto label_374860;
        }
    }
    ctx->pc = 0x3746ECu;
    // 0x3746ec: 0xc60d0094  lwc1        $f13, 0x94($s0)
    ctx->pc = 0x3746ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3746f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3746f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3746f4: 0x0  nop
    ctx->pc = 0x3746f4u;
    // NOP
    // 0x3746f8: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x3746f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3746fc: 0x45000058  bc1f        . + 4 + (0x58 << 2)
    ctx->pc = 0x3746FCu;
    {
        const bool branch_taken_0x3746fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x374700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3746FCu;
        // 0x374700: 0x3c02c040  lui         $v0, 0xC040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3746fc) {
            ctx->pc = 0x374860u;
            goto label_374860;
        }
    }
    ctx->pc = 0x374704u;
    // 0x374704: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x374704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x374708: 0xc096964  jal         func_25A590
    ctx->pc = 0x374708u;
    SET_GPR_U32(ctx, 31, 0x374710u);
    ctx->pc = 0x25A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A590u, 0x374708u, 0x374710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374710u;
label_374710:
    // 0x374710: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x374710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x374714: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x374714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x374718: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x374718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x37471c: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x37471cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
    // 0x374720: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x374720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x374724: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x374724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x374728: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x374728u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x37472c: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x37472cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x374730: 0x0  nop
    ctx->pc = 0x374730u;
    // NOP
    // 0x374734: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x374734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x374738: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x374738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x37473c: 0xc60328f0  lwc1        $f3, 0x28F0($s0)
    ctx->pc = 0x37473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x374740: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x374740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x374744: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x374744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37474c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37474cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x374750: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x374750u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x374754: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x374754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x374758: 0xe60100a4  swc1        $f1, 0xA4($s0)
    ctx->pc = 0x374758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x37475c: 0xc6020094  lwc1        $f2, 0x94($s0)
    ctx->pc = 0x37475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x374760: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x374760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374764: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x374764u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x374768: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x374768u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x37476c: 0x0  nop
    ctx->pc = 0x37476cu;
    // NOP
    // 0x374770: 0x0  nop
    ctx->pc = 0x374770u;
    // NOP
    // 0x374774: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x374774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374778: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x374778u;
    {
        const bool branch_taken_0x374778 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x374778) {
            ctx->pc = 0x374790u;
            goto label_374790;
        }
    }
    ctx->pc = 0x374780u;
    // 0x374780: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374780u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x374784: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x374784u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x374788: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x374788u;
    {
        const bool branch_taken_0x374788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x374788) {
            ctx->pc = 0x3747A8u;
            goto label_3747a8;
        }
    }
    ctx->pc = 0x374790u;
label_374790:
    // 0x374790: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x374790u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x374794: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x374794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x374798: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374798u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37479c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37479cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3747a0: 0x0  nop
    ctx->pc = 0x3747a0u;
    // NOP
    // 0x3747a4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3747a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3747a8:
    // 0x3747a8: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3747A8u;
    {
        const bool branch_taken_0x3747a8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3747ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747A8u;
        // 0x3747ac: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3747a8) {
            ctx->pc = 0x3747BCu;
            goto label_3747bc;
        }
    }
    ctx->pc = 0x3747B0u;
    // 0x3747b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3747b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3747b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3747B4u;
    {
        const bool branch_taken_0x3747b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3747B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747B4u;
        // 0x3747b8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3747b4) {
            ctx->pc = 0x3747D4u;
            goto label_3747d4;
        }
    }
    ctx->pc = 0x3747BCu;
label_3747bc:
    // 0x3747bc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3747bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3747c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3747c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3747c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3747c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3747c8: 0x0  nop
    ctx->pc = 0x3747c8u;
    // NOP
    // 0x3747cc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3747ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3747d0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3747d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3747d4:
    // 0x3747d4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3747d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3747d8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3747d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3747dc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3747dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3747e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3747e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3747e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3747e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3747e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3747e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3747ec: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3747ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3747f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3747f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3747f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3747f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3747f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3747F8u;
    {
        const bool branch_taken_0x3747f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3747f8) {
            ctx->pc = 0x374810u;
            goto label_374810;
        }
    }
    ctx->pc = 0x374800u;
    // 0x374800: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374800u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x374804: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x374804u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x374808: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x374808u;
    {
        const bool branch_taken_0x374808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374808u;
        // 0x37480c: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374808) {
            ctx->pc = 0x37482Cu;
            goto label_37482c;
        }
    }
    ctx->pc = 0x374810u;
label_374810:
    // 0x374810: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x374810u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x374814: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x374814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x374818: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374818u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37481c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x37481cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x374820: 0x0  nop
    ctx->pc = 0x374820u;
    // NOP
    // 0x374824: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x374824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x374828: 0xa6030826  sh          $v1, 0x826($s0)
    ctx->pc = 0x374828u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
label_37482c:
    // 0x37482c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x37482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x374830: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x374830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x374834: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x374834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x374838: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x374838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x37483c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37483cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x374840: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x374840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x374844: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x374844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x374848: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x374848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x37484c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37484cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374850: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x374850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x374854: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x374854u;
    {
        const bool branch_taken_0x374854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374854u;
        // 0x374858: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374854) {
            ctx->pc = 0x3748E8u;
            goto label_3748e8;
        }
    }
    ctx->pc = 0x37485Cu;
    // 0x37485c: 0x0  nop
    ctx->pc = 0x37485cu;
    // NOP
label_374860:
    // 0x374860: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x374860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x374864: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x374864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374868: 0x3c02c1e8  lui         $v0, 0xC1E8
    ctx->pc = 0x374868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49640 << 16));
    // 0x37486c: 0xc4201a00  lwc1        $f0, 0x1A00($at)
    ctx->pc = 0x37486cu;
    { uint32_t bits = FAST_READ32(0x681A00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374870: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x374870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x374874: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x374874u;
    SET_GPR_U32(ctx, 31, 0x37487Cu);
    ctx->pc = 0x374878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374874u;
    // 0x374878: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x374874u, 0x37487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37487Cu;
label_37487c:
    // 0x37487c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x37487Cu;
    {
        const bool branch_taken_0x37487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37487Cu;
        // 0x374880: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37487c) {
            ctx->pc = 0x3748E8u;
            goto label_3748e8;
        }
    }
    ctx->pc = 0x374884u;
    // 0x374884: 0x0  nop
    ctx->pc = 0x374884u;
    // NOP
label_374888:
    // 0x374888: 0x96020826  lhu         $v0, 0x826($s0)
    ctx->pc = 0x374888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
    // 0x37488c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x37488Cu;
    {
        const bool branch_taken_0x37488c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x37488c) {
            ctx->pc = 0x3748B8u;
            goto label_3748b8;
        }
    }
    ctx->pc = 0x374894u;
    // 0x374894: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x374894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374898: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x374898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37489c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37489cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3748a0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3748a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3748a4: 0x96020826  lhu         $v0, 0x826($s0)
    ctx->pc = 0x3748a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
    // 0x3748a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3748a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3748ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3748ACu;
    {
        const bool branch_taken_0x3748ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3748B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748ACu;
        // 0x3748b0: 0xa6020826  sh          $v0, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3748ac) {
            ctx->pc = 0x3748E8u;
            goto label_3748e8;
        }
    }
    ctx->pc = 0x3748B4u;
    // 0x3748b4: 0x0  nop
    ctx->pc = 0x3748b4u;
    // NOP
label_3748b8:
    // 0x3748b8: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x3748b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x3748bc: 0x920207f6  lbu         $v0, 0x7F6($s0)
    ctx->pc = 0x3748bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3748c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3748C0u;
    {
        const bool branch_taken_0x3748c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3748c0) {
            ctx->pc = 0x3748E8u;
            goto label_3748e8;
        }
    }
    ctx->pc = 0x3748C8u;
    // 0x3748c8: 0xa2002b60  sb          $zero, 0x2B60($s0)
    ctx->pc = 0x3748c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11104), (uint8_t)GPR_U32(ctx, 0));
    // 0x3748cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3748ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3748d0: 0xc60128f0  lwc1        $f1, 0x28F0($s0)
    ctx->pc = 0x3748d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3748d4: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x3748d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3748d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3748d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3748dc: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x3748dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x3748e0: 0xa2020780  sb          $v0, 0x780($s0)
    ctx->pc = 0x3748e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x3748e4: 0x0  nop
    ctx->pc = 0x3748e4u;
    // NOP
label_3748e8:
    // 0x3748e8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3748e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3748ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3748ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3748f0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3748F0u;
    SET_GPR_U32(ctx, 31, 0x3748F8u);
    ctx->pc = 0x3748F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3748F0u;
    // 0x3748f4: 0x26060090  addiu       $a2, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3748F0u, 0x3748F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3748F8u;
label_3748f8:
    // 0x3748f8: 0xc04b946  jal         func_12E518
    ctx->pc = 0x3748F8u;
    SET_GPR_U32(ctx, 31, 0x374900u);
    ctx->pc = 0x3748FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3748F8u;
    // 0x3748fc: 0xc60c28f0  lwc1        $f12, 0x28F0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x3748F8u, 0x374900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374900u;
label_374900:
    // 0x374900: 0xc60c0094  lwc1        $f12, 0x94($s0)
    ctx->pc = 0x374900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x374904: 0xc04b946  jal         func_12E518
    ctx->pc = 0x374904u;
    SET_GPR_U32(ctx, 31, 0x37490Cu);
    ctx->pc = 0x374908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374904u;
    // 0x374908: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x374904u, 0x37490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37490Cu;
label_37490c:
    // 0x37490c: 0xc60c00a4  lwc1        $f12, 0xA4($s0)
    ctx->pc = 0x37490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x374910: 0xc04b946  jal         func_12E518
    ctx->pc = 0x374910u;
    SET_GPR_U32(ctx, 31, 0x374918u);
    ctx->pc = 0x374914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374910u;
    // 0x374914: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x374910u, 0x374918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374918u;
label_374918:
    // 0x374918: 0x3c080068  lui         $t0, 0x68
    ctx->pc = 0x374918u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)104 << 16));
    // 0x37491c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x37491cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374920: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x374920u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374924: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x374924u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374928: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x374928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37492c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37492cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374930: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374934: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x374934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x374938: 0xc0a2730  jal         func_289CC0
    ctx->pc = 0x374938u;
    SET_GPR_U32(ctx, 31, 0x374940u);
    ctx->pc = 0x37493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374938u;
    // 0x37493c: 0x25081a10  addiu       $t0, $t0, 0x1A10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289CC0u, 0x374938u, 0x374940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374940u;
label_374940:
    // 0x374940: 0x96090826  lhu         $t1, 0x826($s0)
    ctx->pc = 0x374940u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
    // 0x374944: 0x3c080068  lui         $t0, 0x68
    ctx->pc = 0x374944u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)104 << 16));
    // 0x374948: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x374948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37494c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37494cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374954: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x374954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x374958: 0xc0a2730  jal         func_289CC0
    ctx->pc = 0x374958u;
    SET_GPR_U32(ctx, 31, 0x374960u);
    ctx->pc = 0x37495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374958u;
    // 0x37495c: 0x25081a28  addiu       $t0, $t0, 0x1A28 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289CC0u, 0x374958u, 0x374960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374960u;
label_374960:
    // 0x374960: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x374960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374964: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x374964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37496c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37496cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374970: 0x3e00008  jr          $ra
    ctx->pc = 0x374970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374970u;
        // 0x374974: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374978u;
}
