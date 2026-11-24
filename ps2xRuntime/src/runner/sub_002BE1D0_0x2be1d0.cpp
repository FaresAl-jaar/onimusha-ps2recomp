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

// Function: sub_002BE1D0
// Address: 0x2be1d0 - 0x2be344
void sub_002BE1D0_0x2be1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE1D0_0x2be1d0");
#endif

    ctx->pc = 0x2be1d0u;

    // 0x2be1d0: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2be1d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2be1d4: 0xa082005e  sb          $v0, 0x5E($a0)
    ctx->pc = 0x2be1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 2));
    // 0x2be1d8: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x2be1d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2be1dc: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2BE1DCu;
    {
        const bool branch_taken_0x2be1dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1DCu;
        // 0x2be1e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1dc) {
            ctx->pc = 0x2BE280u;
            goto label_2be280;
        }
    }
    ctx->pc = 0x2BE1E4u;
    // 0x2be1e4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2be1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2be1e8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE1E8u;
    {
        const bool branch_taken_0x2be1e8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BE1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1E8u;
        // 0x2be1ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1e8) {
            ctx->pc = 0x2BE1FCu;
            goto label_2be1fc;
        }
    }
    ctx->pc = 0x2BE1F0u;
    // 0x2be1f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be1f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE1F4u;
    {
        const bool branch_taken_0x2be1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F4u;
        // 0x2be1f8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1f4) {
            ctx->pc = 0x2BE214u;
            goto label_2be214;
        }
    }
    ctx->pc = 0x2BE1FCu;
label_2be1fc:
    // 0x2be1fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2be1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2be200: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2be200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2be204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be208: 0x0  nop
    ctx->pc = 0x2be208u;
    // NOP
    // 0x2be20c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2be20cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2be210: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2be210u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2be214:
    // 0x2be214: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2be214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be218: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2be218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2be21c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2be21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2be220: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2be220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2be224: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2be224u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be22c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2be22cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2be230: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2be230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2be234: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2be234u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be238: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE238u;
    {
        const bool branch_taken_0x2be238 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2be238) {
            ctx->pc = 0x2BE250u;
            goto label_2be250;
        }
    }
    ctx->pc = 0x2BE240u;
    // 0x2be240: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2be240u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2be244: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2be244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2be248: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE248u;
    {
        const bool branch_taken_0x2be248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE248u;
        // 0x2be24c: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be248) {
            ctx->pc = 0x2BE26Cu;
            goto label_2be26c;
        }
    }
    ctx->pc = 0x2BE250u;
label_2be250:
    // 0x2be250: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2be250u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2be254: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2be254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2be258: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2be258u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2be25c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2be25cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2be260: 0x0  nop
    ctx->pc = 0x2be260u;
    // NOP
    // 0x2be264: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2be264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2be268: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2be268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2be26c:
    // 0x2be26c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2be26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2be270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE270u;
    {
        const bool branch_taken_0x2be270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be270) {
            ctx->pc = 0x2BE280u;
            goto label_2be280;
        }
    }
    ctx->pc = 0x2BE278u;
    // 0x2be278: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x2be278u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2be27c: 0x0  nop
    ctx->pc = 0x2be27cu;
    // NOP
label_2be280:
    // 0x2be280: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE280u;
    {
        const bool branch_taken_0x2be280 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE280u;
        // 0x2be284: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be280) {
            ctx->pc = 0x2BE290u;
            goto label_2be290;
        }
    }
    ctx->pc = 0x2BE288u;
    // 0x2be288: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2BE288u;
    {
        const bool branch_taken_0x2be288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE288u;
        // 0x2be28c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be288) {
            ctx->pc = 0x2BE310u;
            goto label_2be310;
        }
    }
    ctx->pc = 0x2BE290u;
label_2be290:
    // 0x2be290: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE290u;
    {
        const bool branch_taken_0x2be290 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE290u;
        // 0x2be294: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be290) {
            ctx->pc = 0x2BE2A4u;
            goto label_2be2a4;
        }
    }
    ctx->pc = 0x2BE298u;
    // 0x2be298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be29c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE29Cu;
    {
        const bool branch_taken_0x2be29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE29Cu;
        // 0x2be2a0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be29c) {
            ctx->pc = 0x2BE2BCu;
            goto label_2be2bc;
        }
    }
    ctx->pc = 0x2BE2A4u;
label_2be2a4:
    // 0x2be2a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2be2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2be2a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2be2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2be2ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be2acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be2b0: 0x0  nop
    ctx->pc = 0x2be2b0u;
    // NOP
    // 0x2be2b4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2be2b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2be2b8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2be2b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2be2bc:
    // 0x2be2bc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2be2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be2c0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2be2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2be2c4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2be2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2be2c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2be2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2be2cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2be2ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be2d4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2be2d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2be2d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2be2d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2be2dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2be2dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be2e0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE2E0u;
    {
        const bool branch_taken_0x2be2e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2be2e0) {
            ctx->pc = 0x2BE2F8u;
            goto label_2be2f8;
        }
    }
    ctx->pc = 0x2BE2E8u;
    // 0x2be2e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2be2e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2be2ec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2be2ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2be2f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE2F0u;
    {
        const bool branch_taken_0x2be2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be2f0) {
            ctx->pc = 0x2BE310u;
            goto label_2be310;
        }
    }
    ctx->pc = 0x2BE2F8u;
label_2be2f8:
    // 0x2be2f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2be2f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2be2fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2be2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2be300: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2be300u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2be304: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2be304u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2be308: 0x0  nop
    ctx->pc = 0x2be308u;
    // NOP
    // 0x2be30c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2be30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2be310:
    // 0x2be310: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2be310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2be314: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2be314u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2be318: 0x24a550a8  addiu       $a1, $a1, 0x50A8
    ctx->pc = 0x2be318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20648));
    // 0x2be31c: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x2be31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2be320: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2be320u;
    { uint32_t bits = FAST_READ32(0x4E50A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2be324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be328: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2be328u;
    { uint32_t bits = FAST_READ32(0x4E50ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be32c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2be32cu;
    { uint32_t bits = FAST_READ32(0x4E50B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be330: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2be330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2be334: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2be334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2be338: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2be338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2be33c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE33Cu;
        // 0x2be340: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE344u;
}
