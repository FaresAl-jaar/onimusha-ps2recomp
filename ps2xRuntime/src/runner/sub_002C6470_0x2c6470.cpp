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

// Function: sub_002C6470
// Address: 0x2c6470 - 0x2c65dc
void sub_002C6470_0x2c6470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6470_0x2c6470");
#endif

    ctx->pc = 0x2c6470u;

    // 0x2c6470: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x2c6470u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c6474: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C6474u;
    {
        const bool branch_taken_0x2c6474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6474u;
        // 0x2c6478: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6474) {
            ctx->pc = 0x2C6518u;
            goto label_2c6518;
        }
    }
    ctx->pc = 0x2C647Cu;
    // 0x2c647c: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2c647cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2c6480: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6480u;
    {
        const bool branch_taken_0x2c6480 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6480u;
        // 0x2c6484: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6480) {
            ctx->pc = 0x2C6494u;
            goto label_2c6494;
        }
    }
    ctx->pc = 0x2C6488u;
    // 0x2c6488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c648c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C648Cu;
    {
        const bool branch_taken_0x2c648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C648Cu;
        // 0x2c6490: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c648c) {
            ctx->pc = 0x2C64ACu;
            goto label_2c64ac;
        }
    }
    ctx->pc = 0x2C6494u;
label_2c6494:
    // 0x2c6494: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c6494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c6498: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c6498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c649c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c649cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c64a0: 0x0  nop
    ctx->pc = 0x2c64a0u;
    // NOP
    // 0x2c64a4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c64a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c64a8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c64a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c64ac:
    // 0x2c64ac: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c64acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c64b0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2c64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2c64b4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2c64b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2c64b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c64bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c64bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c64c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c64c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c64c4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c64c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c64c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c64c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c64cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c64ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c64d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C64D0u;
    {
        const bool branch_taken_0x2c64d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c64d0) {
            ctx->pc = 0x2C64E8u;
            goto label_2c64e8;
        }
    }
    ctx->pc = 0x2C64D8u;
    // 0x2c64d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c64d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c64dc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c64dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c64e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C64E0u;
    {
        const bool branch_taken_0x2c64e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64E0u;
        // 0x2c64e4: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c64e0) {
            ctx->pc = 0x2C6504u;
            goto label_2c6504;
        }
    }
    ctx->pc = 0x2C64E8u;
label_2c64e8:
    // 0x2c64e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c64e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c64ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c64ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c64f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c64f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c64f4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c64f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c64f8: 0x0  nop
    ctx->pc = 0x2c64f8u;
    // NOP
    // 0x2c64fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c64fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c6500: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2c6500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2c6504:
    // 0x2c6504: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c6504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c6508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6508u;
    {
        const bool branch_taken_0x2c6508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6508) {
            ctx->pc = 0x2C6518u;
            goto label_2c6518;
        }
    }
    ctx->pc = 0x2C6510u;
    // 0x2c6510: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x2c6510u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2c6514: 0x0  nop
    ctx->pc = 0x2c6514u;
    // NOP
label_2c6518:
    // 0x2c6518: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6518u;
    {
        const bool branch_taken_0x2c6518 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6518u;
        // 0x2c651c: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6518) {
            ctx->pc = 0x2C6528u;
            goto label_2c6528;
        }
    }
    ctx->pc = 0x2C6520u;
    // 0x2c6520: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C6520u;
    {
        const bool branch_taken_0x2c6520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6520u;
        // 0x2c6524: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6520) {
            ctx->pc = 0x2C65A8u;
            goto label_2c65a8;
        }
    }
    ctx->pc = 0x2C6528u;
label_2c6528:
    // 0x2c6528: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6528u;
    {
        const bool branch_taken_0x2c6528 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6528u;
        // 0x2c652c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6528) {
            ctx->pc = 0x2C653Cu;
            goto label_2c653c;
        }
    }
    ctx->pc = 0x2C6530u;
    // 0x2c6530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6534: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6534u;
    {
        const bool branch_taken_0x2c6534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6534u;
        // 0x2c6538: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6534) {
            ctx->pc = 0x2C6554u;
            goto label_2c6554;
        }
    }
    ctx->pc = 0x2C653Cu;
label_2c653c:
    // 0x2c653c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c653cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c6540: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c6540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c6544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6548: 0x0  nop
    ctx->pc = 0x2c6548u;
    // NOP
    // 0x2c654c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c654cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c6550: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c6550u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c6554:
    // 0x2c6554: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c6554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6558: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2c6558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2c655c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2c655cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2c6560: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c6560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c6564: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c6564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c656c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c656cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c6570: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c6570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c6574: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c6574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6578: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6578u;
    {
        const bool branch_taken_0x2c6578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6578) {
            ctx->pc = 0x2C6590u;
            goto label_2c6590;
        }
    }
    ctx->pc = 0x2C6580u;
    // 0x2c6580: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c6580u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c6584: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c6584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c6588: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6588u;
    {
        const bool branch_taken_0x2c6588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6588) {
            ctx->pc = 0x2C65A8u;
            goto label_2c65a8;
        }
    }
    ctx->pc = 0x2C6590u;
label_2c6590:
    // 0x2c6590: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c6590u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6594: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c6594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c6598: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c6598u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c659c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c659cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c65a0: 0x0  nop
    ctx->pc = 0x2c65a0u;
    // NOP
    // 0x2c65a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c65a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2c65a8:
    // 0x2c65a8: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2c65a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c65ac: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2c65acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c65b0: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2c65b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2c65b4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x2c65b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x2c65b8: 0x246351c0  addiu       $v1, $v1, 0x51C0
    ctx->pc = 0x2c65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20928));
    // 0x2c65bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c65bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c65c0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c65c0u;
    { uint32_t bits = FAST_READ32(0x4E51C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c65c4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c65c4u;
    { uint32_t bits = FAST_READ32(0x4E51C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c65c8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c65c8u;
    { uint32_t bits = FAST_READ32(0x4E51C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c65cc: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2c65ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c65d0: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2c65d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2c65d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C65D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C65D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65D4u;
        // 0x2c65d8: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C65D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C65DCu;
}
