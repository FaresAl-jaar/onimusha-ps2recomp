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

// Function: sub_002BDF60
// Address: 0x2bdf60 - 0x2be10c
void sub_002BDF60_0x2bdf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDF60_0x2bdf60");
#endif

    ctx->pc = 0x2bdf60u;

    // 0x2bdf60: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2bdf60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bdf64: 0xa082005e  sb          $v0, 0x5E($a0)
    ctx->pc = 0x2bdf64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bdf68: 0x90c20006  lbu         $v0, 0x6($a2)
    ctx->pc = 0x2bdf68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2bdf6c: 0xa0820046  sb          $v0, 0x46($a0)
    ctx->pc = 0x2bdf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bdf70: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x2bdf70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bdf74: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDF74u;
    {
        const bool branch_taken_0x2bdf74 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BDF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF74u;
        // 0x2bdf78: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf74) {
            ctx->pc = 0x2BDF88u;
            goto label_2bdf88;
        }
    }
    ctx->pc = 0x2BDF7Cu;
    // 0x2bdf7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdf80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDF80u;
    {
        const bool branch_taken_0x2bdf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF80u;
        // 0x2bdf84: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf80) {
            ctx->pc = 0x2BDFA0u;
            goto label_2bdfa0;
        }
    }
    ctx->pc = 0x2BDF88u;
label_2bdf88:
    // 0x2bdf88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bdf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bdf8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bdf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bdf90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bdf90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdf94: 0x0  nop
    ctx->pc = 0x2bdf94u;
    // NOP
    // 0x2bdf98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bdf98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bdf9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2bdf9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2bdfa0:
    // 0x2bdfa0: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x2bdfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x2bdfa4: 0x94c50004  lhu         $a1, 0x4($a2)
    ctx->pc = 0x2bdfa4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2bdfa8: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BDFA8u;
    {
        const bool branch_taken_0x2bdfa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFA8u;
        // 0x2bdfac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdfa8) {
            ctx->pc = 0x2BE048u;
            goto label_2be048;
        }
    }
    ctx->pc = 0x2BDFB0u;
    // 0x2bdfb0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2bdfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2bdfb4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDFB4u;
    {
        const bool branch_taken_0x2bdfb4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BDFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFB4u;
        // 0x2bdfb8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdfb4) {
            ctx->pc = 0x2BDFC8u;
            goto label_2bdfc8;
        }
    }
    ctx->pc = 0x2BDFBCu;
    // 0x2bdfbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdfc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDFC0u;
    {
        const bool branch_taken_0x2bdfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFC0u;
        // 0x2bdfc4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdfc0) {
            ctx->pc = 0x2BDFE0u;
            goto label_2bdfe0;
        }
    }
    ctx->pc = 0x2BDFC8u;
label_2bdfc8:
    // 0x2bdfc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bdfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bdfcc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bdfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bdfd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bdfd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdfd4: 0x0  nop
    ctx->pc = 0x2bdfd4u;
    // NOP
    // 0x2bdfd8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bdfd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bdfdc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bdfdcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bdfe0:
    // 0x2bdfe0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bdfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdfe4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bdfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bdfe8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bdfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bdfec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bdfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bdff0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bdff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdff8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bdff8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bdffc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bdffcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2be000: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2be000u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be004: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE004u;
    {
        const bool branch_taken_0x2be004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2be004) {
            ctx->pc = 0x2BE01Cu;
            goto label_2be01c;
        }
    }
    ctx->pc = 0x2BE00Cu;
    // 0x2be00c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2be00cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2be010: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2be010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2be014: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE014u;
    {
        const bool branch_taken_0x2be014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE014u;
        // 0x2be018: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be014) {
            ctx->pc = 0x2BE038u;
            goto label_2be038;
        }
    }
    ctx->pc = 0x2BE01Cu;
label_2be01c:
    // 0x2be01c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2be01cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2be020: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2be020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2be024: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2be024u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2be028: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2be028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2be02c: 0x0  nop
    ctx->pc = 0x2be02cu;
    // NOP
    // 0x2be030: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2be030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2be034: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2be034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2be038:
    // 0x2be038: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2be038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2be03c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BE03Cu;
    {
        const bool branch_taken_0x2be03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be03c) {
            ctx->pc = 0x2BE048u;
            goto label_2be048;
        }
    }
    ctx->pc = 0x2BE044u;
    // 0x2be044: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x2be044u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2be048:
    // 0x2be048: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE048u;
    {
        const bool branch_taken_0x2be048 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE048u;
        // 0x2be04c: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be048) {
            ctx->pc = 0x2BE058u;
            goto label_2be058;
        }
    }
    ctx->pc = 0x2BE050u;
    // 0x2be050: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2BE050u;
    {
        const bool branch_taken_0x2be050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE050u;
        // 0x2be054: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be050) {
            ctx->pc = 0x2BE0D8u;
            goto label_2be0d8;
        }
    }
    ctx->pc = 0x2BE058u;
label_2be058:
    // 0x2be058: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE058u;
    {
        const bool branch_taken_0x2be058 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BE05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE058u;
        // 0x2be05c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be058) {
            ctx->pc = 0x2BE06Cu;
            goto label_2be06c;
        }
    }
    ctx->pc = 0x2BE060u;
    // 0x2be060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be064: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE064u;
    {
        const bool branch_taken_0x2be064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE064u;
        // 0x2be068: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be064) {
            ctx->pc = 0x2BE084u;
            goto label_2be084;
        }
    }
    ctx->pc = 0x2BE06Cu;
label_2be06c:
    // 0x2be06c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2be06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2be070: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2be070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2be074: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be078: 0x0  nop
    ctx->pc = 0x2be078u;
    // NOP
    // 0x2be07c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2be07cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2be080: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2be080u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2be084:
    // 0x2be084: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2be084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be088: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2be088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2be08c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2be08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2be090: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2be090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2be094: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2be094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be09c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2be09cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2be0a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2be0a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2be0a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2be0a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be0a8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE0A8u;
    {
        const bool branch_taken_0x2be0a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2be0a8) {
            ctx->pc = 0x2BE0C0u;
            goto label_2be0c0;
        }
    }
    ctx->pc = 0x2BE0B0u;
    // 0x2be0b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2be0b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2be0b4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2be0b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2be0b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE0B8u;
    {
        const bool branch_taken_0x2be0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be0b8) {
            ctx->pc = 0x2BE0D8u;
            goto label_2be0d8;
        }
    }
    ctx->pc = 0x2BE0C0u;
label_2be0c0:
    // 0x2be0c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2be0c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2be0c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2be0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2be0c8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2be0c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2be0cc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2be0ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2be0d0: 0x0  nop
    ctx->pc = 0x2be0d0u;
    // NOP
    // 0x2be0d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2be0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2be0d8:
    // 0x2be0d8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2be0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2be0dc: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2be0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2be0e0: 0x24a55088  addiu       $a1, $a1, 0x5088
    ctx->pc = 0x2be0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20616));
    // 0x2be0e4: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x2be0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2be0e8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2be0e8u;
    { uint32_t bits = FAST_READ32(0x4E5088u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be0ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2be0ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0f0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2be0f0u;
    { uint32_t bits = FAST_READ32(0x4E508Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be0f4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2be0f4u;
    { uint32_t bits = FAST_READ32(0x4E5090u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be0f8: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2be0f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2be0fc: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2be0fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2be100: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2be100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2be104: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE104u;
        // 0x2be108: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE10Cu;
}
