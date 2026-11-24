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

// Function: sub_002C62E0
// Address: 0x2c62e0 - 0x2c6464
void sub_002C62E0_0x2c62e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C62E0_0x2c62e0");
#endif

    ctx->pc = 0x2c62e0u;

    // 0x2c62e0: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x2c62e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c62e4: 0xa4820046  sh          $v0, 0x46($a0)
    ctx->pc = 0x2c62e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c62e8: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x2c62e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c62ec: 0xa4820048  sh          $v0, 0x48($a0)
    ctx->pc = 0x2c62ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c62f0: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2c62f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c62f4: 0xa082004a  sb          $v0, 0x4A($a0)
    ctx->pc = 0x2c62f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 74), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c62f8: 0x94c50006  lhu         $a1, 0x6($a2)
    ctx->pc = 0x2c62f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2c62fc: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C62FCu;
    {
        const bool branch_taken_0x2c62fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62FCu;
        // 0x2c6300: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62fc) {
            ctx->pc = 0x2C63A0u;
            goto label_2c63a0;
        }
    }
    ctx->pc = 0x2C6304u;
    // 0x2c6304: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2c6304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2c6308: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6308u;
    {
        const bool branch_taken_0x2c6308 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6308u;
        // 0x2c630c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6308) {
            ctx->pc = 0x2C631Cu;
            goto label_2c631c;
        }
    }
    ctx->pc = 0x2C6310u;
    // 0x2c6310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6314: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6314u;
    {
        const bool branch_taken_0x2c6314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6314u;
        // 0x2c6318: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6314) {
            ctx->pc = 0x2C6334u;
            goto label_2c6334;
        }
    }
    ctx->pc = 0x2C631Cu;
label_2c631c:
    // 0x2c631c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c631cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c6320: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c6320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c6324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6328: 0x0  nop
    ctx->pc = 0x2c6328u;
    // NOP
    // 0x2c632c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c632cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c6330: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c6330u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c6334:
    // 0x2c6334: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c6334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6338: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2c6338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2c633c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2c633cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2c6340: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c6340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c6344: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c6344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c634c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c634cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c6350: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c6350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c6354: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c6354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6358: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6358u;
    {
        const bool branch_taken_0x2c6358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6358) {
            ctx->pc = 0x2C6370u;
            goto label_2c6370;
        }
    }
    ctx->pc = 0x2C6360u;
    // 0x2c6360: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c6360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c6364: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c6364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c6368: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6368u;
    {
        const bool branch_taken_0x2c6368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6368u;
        // 0x2c636c: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6368) {
            ctx->pc = 0x2C638Cu;
            goto label_2c638c;
        }
    }
    ctx->pc = 0x2C6370u;
label_2c6370:
    // 0x2c6370: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c6370u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6374: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c6374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c6378: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c6378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c637c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c637cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c6380: 0x0  nop
    ctx->pc = 0x2c6380u;
    // NOP
    // 0x2c6384: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c6384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c6388: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2c6388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2c638c:
    // 0x2c638c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c638cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c6390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6390u;
    {
        const bool branch_taken_0x2c6390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6390) {
            ctx->pc = 0x2C63A0u;
            goto label_2c63a0;
        }
    }
    ctx->pc = 0x2C6398u;
    // 0x2c6398: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x2c6398u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2c639c: 0x0  nop
    ctx->pc = 0x2c639cu;
    // NOP
label_2c63a0:
    // 0x2c63a0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C63A0u;
    {
        const bool branch_taken_0x2c63a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C63A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63A0u;
        // 0x2c63a4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63a0) {
            ctx->pc = 0x2C63B0u;
            goto label_2c63b0;
        }
    }
    ctx->pc = 0x2C63A8u;
    // 0x2c63a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C63A8u;
    {
        const bool branch_taken_0x2c63a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63A8u;
        // 0x2c63ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63a8) {
            ctx->pc = 0x2C6430u;
            goto label_2c6430;
        }
    }
    ctx->pc = 0x2C63B0u;
label_2c63b0:
    // 0x2c63b0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C63B0u;
    {
        const bool branch_taken_0x2c63b0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63B0u;
        // 0x2c63b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63b0) {
            ctx->pc = 0x2C63C4u;
            goto label_2c63c4;
        }
    }
    ctx->pc = 0x2C63B8u;
    // 0x2c63b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c63b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c63bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C63BCu;
    {
        const bool branch_taken_0x2c63bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63BCu;
        // 0x2c63c0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63bc) {
            ctx->pc = 0x2C63DCu;
            goto label_2c63dc;
        }
    }
    ctx->pc = 0x2C63C4u;
label_2c63c4:
    // 0x2c63c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c63c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c63c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c63c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c63cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c63ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c63d0: 0x0  nop
    ctx->pc = 0x2c63d0u;
    // NOP
    // 0x2c63d4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c63d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c63d8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c63d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c63dc:
    // 0x2c63dc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c63dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c63e0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2c63e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2c63e4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2c63e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2c63e8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c63e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c63ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c63ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c63f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c63f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c63f4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c63f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c63f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c63f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c63fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c63fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6400: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6400u;
    {
        const bool branch_taken_0x2c6400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6400) {
            ctx->pc = 0x2C6418u;
            goto label_2c6418;
        }
    }
    ctx->pc = 0x2C6408u;
    // 0x2c6408: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c6408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c640c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c640cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c6410: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6410u;
    {
        const bool branch_taken_0x2c6410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6410) {
            ctx->pc = 0x2C6430u;
            goto label_2c6430;
        }
    }
    ctx->pc = 0x2C6418u;
label_2c6418:
    // 0x2c6418: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c6418u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c641c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c641cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c6420: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c6420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c6424: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c6424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c6428: 0x0  nop
    ctx->pc = 0x2c6428u;
    // NOP
    // 0x2c642c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c642cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2c6430:
    // 0x2c6430: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2c6430u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c6434: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2c6434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2c6438: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2c6438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2c643c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x2c643cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x2c6440: 0x246351b0  addiu       $v1, $v1, 0x51B0
    ctx->pc = 0x2c6440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20912));
    // 0x2c6444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c6444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6448: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c6448u;
    { uint32_t bits = FAST_READ32(0x4E51B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c644c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c644cu;
    { uint32_t bits = FAST_READ32(0x4E51B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6450: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c6450u;
    { uint32_t bits = FAST_READ32(0x4E51B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6454: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2c6454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c6458: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2c6458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2c645c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C645Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C645Cu;
        // 0x2c6460: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C645Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6464u;
}
