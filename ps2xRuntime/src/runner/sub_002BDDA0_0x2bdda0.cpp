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

// Function: sub_002BDDA0
// Address: 0x2bdda0 - 0x2bdf54
void sub_002BDDA0_0x2bdda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDDA0_0x2bdda0");
#endif

    ctx->pc = 0x2bdda0u;

    // 0x2bdda0: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2bdda0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bdda4: 0xa082005e  sb          $v0, 0x5E($a0)
    ctx->pc = 0x2bdda4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bdda8: 0x90c20006  lbu         $v0, 0x6($a2)
    ctx->pc = 0x2bdda8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2bddac: 0xa0820046  sb          $v0, 0x46($a0)
    ctx->pc = 0x2bddacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bddb0: 0x90c20007  lbu         $v0, 0x7($a2)
    ctx->pc = 0x2bddb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x2bddb4: 0xa0820047  sb          $v0, 0x47($a0)
    ctx->pc = 0x2bddb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bddb8: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x2bddb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bddbc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDDBCu;
    {
        const bool branch_taken_0x2bddbc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BDDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDBCu;
        // 0x2bddc0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bddbc) {
            ctx->pc = 0x2BDDD0u;
            goto label_2bddd0;
        }
    }
    ctx->pc = 0x2BDDC4u;
    // 0x2bddc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bddc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bddc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDDC8u;
    {
        const bool branch_taken_0x2bddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDC8u;
        // 0x2bddcc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bddc8) {
            ctx->pc = 0x2BDDE8u;
            goto label_2bdde8;
        }
    }
    ctx->pc = 0x2BDDD0u;
label_2bddd0:
    // 0x2bddd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bddd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bddd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bddd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bddd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bddd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdddc: 0x0  nop
    ctx->pc = 0x2bdddcu;
    // NOP
    // 0x2bdde0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bdde0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bdde4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2bdde4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2bdde8:
    // 0x2bdde8: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x2bdde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x2bddec: 0x94c50004  lhu         $a1, 0x4($a2)
    ctx->pc = 0x2bddecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2bddf0: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BDDF0u;
    {
        const bool branch_taken_0x2bddf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDF0u;
        // 0x2bddf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bddf0) {
            ctx->pc = 0x2BDE90u;
            goto label_2bde90;
        }
    }
    ctx->pc = 0x2BDDF8u;
    // 0x2bddf8: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2bddf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2bddfc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDDFCu;
    {
        const bool branch_taken_0x2bddfc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BDE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDFCu;
        // 0x2bde00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bddfc) {
            ctx->pc = 0x2BDE10u;
            goto label_2bde10;
        }
    }
    ctx->pc = 0x2BDE04u;
    // 0x2bde04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bde04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bde08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDE08u;
    {
        const bool branch_taken_0x2bde08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE08u;
        // 0x2bde0c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde08) {
            ctx->pc = 0x2BDE28u;
            goto label_2bde28;
        }
    }
    ctx->pc = 0x2BDE10u;
label_2bde10:
    // 0x2bde10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bde10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bde14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bde14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bde18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bde18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bde1c: 0x0  nop
    ctx->pc = 0x2bde1cu;
    // NOP
    // 0x2bde20: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bde20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bde24: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bde24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bde28:
    // 0x2bde28: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bde28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bde2c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bde2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bde30: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bde30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bde34: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bde34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bde38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bde38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bde3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bde3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bde40: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bde40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bde44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bde44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bde48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bde48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bde4c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BDE4Cu;
    {
        const bool branch_taken_0x2bde4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bde4c) {
            ctx->pc = 0x2BDE64u;
            goto label_2bde64;
        }
    }
    ctx->pc = 0x2BDE54u;
    // 0x2bde54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bde54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bde58: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bde58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bde5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BDE5Cu;
    {
        const bool branch_taken_0x2bde5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE5Cu;
        // 0x2bde60: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde5c) {
            ctx->pc = 0x2BDE80u;
            goto label_2bde80;
        }
    }
    ctx->pc = 0x2BDE64u;
label_2bde64:
    // 0x2bde64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bde64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bde68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bde68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bde6c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bde6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bde70: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bde70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bde74: 0x0  nop
    ctx->pc = 0x2bde74u;
    // NOP
    // 0x2bde78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bde78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bde7c: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2bde7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2bde80:
    // 0x2bde80: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bde80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bde84: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BDE84u;
    {
        const bool branch_taken_0x2bde84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bde84) {
            ctx->pc = 0x2BDE90u;
            goto label_2bde90;
        }
    }
    ctx->pc = 0x2BDE8Cu;
    // 0x2bde8c: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x2bde8cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2bde90:
    // 0x2bde90: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDE90u;
    {
        const bool branch_taken_0x2bde90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE90u;
        // 0x2bde94: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde90) {
            ctx->pc = 0x2BDEA0u;
            goto label_2bdea0;
        }
    }
    ctx->pc = 0x2BDE98u;
    // 0x2bde98: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2BDE98u;
    {
        const bool branch_taken_0x2bde98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE98u;
        // 0x2bde9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde98) {
            ctx->pc = 0x2BDF20u;
            goto label_2bdf20;
        }
    }
    ctx->pc = 0x2BDEA0u;
label_2bdea0:
    // 0x2bdea0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDEA0u;
    {
        const bool branch_taken_0x2bdea0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEA0u;
        // 0x2bdea4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdea0) {
            ctx->pc = 0x2BDEB4u;
            goto label_2bdeb4;
        }
    }
    ctx->pc = 0x2BDEA8u;
    // 0x2bdea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdeac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDEACu;
    {
        const bool branch_taken_0x2bdeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEACu;
        // 0x2bdeb0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdeac) {
            ctx->pc = 0x2BDECCu;
            goto label_2bdecc;
        }
    }
    ctx->pc = 0x2BDEB4u;
label_2bdeb4:
    // 0x2bdeb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bdeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bdeb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bdeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bdebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bdebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdec0: 0x0  nop
    ctx->pc = 0x2bdec0u;
    // NOP
    // 0x2bdec4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bdec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bdec8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bdec8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bdecc:
    // 0x2bdecc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bdeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bded0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bded0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bded4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bded4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bded8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bded8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bdedc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bdedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdee4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bdee4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bdee8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bdee8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bdeec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bdeecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdef0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BDEF0u;
    {
        const bool branch_taken_0x2bdef0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bdef0) {
            ctx->pc = 0x2BDF08u;
            goto label_2bdf08;
        }
    }
    ctx->pc = 0x2BDEF8u;
    // 0x2bdef8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bdef8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bdefc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bdefcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bdf00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDF00u;
    {
        const bool branch_taken_0x2bdf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdf00) {
            ctx->pc = 0x2BDF20u;
            goto label_2bdf20;
        }
    }
    ctx->pc = 0x2BDF08u;
label_2bdf08:
    // 0x2bdf08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bdf08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bdf0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bdf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bdf10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bdf10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bdf14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bdf14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bdf18: 0x0  nop
    ctx->pc = 0x2bdf18u;
    // NOP
    // 0x2bdf1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bdf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2bdf20:
    // 0x2bdf20: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2bdf20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2bdf24: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2bdf24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bdf28: 0x24a55078  addiu       $a1, $a1, 0x5078
    ctx->pc = 0x2bdf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20600));
    // 0x2bdf2c: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x2bdf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2bdf30: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2bdf30u;
    { uint32_t bits = FAST_READ32(0x4E5078u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdf34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bdf34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf38: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2bdf38u;
    { uint32_t bits = FAST_READ32(0x4E507Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdf3c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2bdf3cu;
    { uint32_t bits = FAST_READ32(0x4E5080u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdf40: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2bdf40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2bdf44: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2bdf44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2bdf48: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2bdf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2bdf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF4Cu;
        // 0x2bdf50: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDF54u;
}
