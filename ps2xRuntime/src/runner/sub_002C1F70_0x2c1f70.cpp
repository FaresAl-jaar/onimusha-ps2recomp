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

// Function: sub_002C1F70
// Address: 0x2c1f70 - 0x2c2124
void sub_002C1F70_0x2c1f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1F70_0x2c1f70");
#endif

    switch (ctx->pc) {
        case 0x2c2070u: goto label_2c2070;
        case 0x2c20f0u: goto label_2c20f0;
        default: break;
    }

    ctx->pc = 0x2c1f70u;

    // 0x2c1f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c1f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1f78: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x2c1f78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c1f7c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1F7Cu;
    {
        const bool branch_taken_0x2c1f7c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F7Cu;
        // 0x2c1f80: 0x90c20001  lbu         $v0, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f7c) {
            ctx->pc = 0x2C1F90u;
            goto label_2c1f90;
        }
    }
    ctx->pc = 0x2C1F84u;
    // 0x2c1f84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1f88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1F88u;
    {
        const bool branch_taken_0x2c1f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F88u;
        // 0x2c1f8c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f88) {
            ctx->pc = 0x2C1FACu;
            goto label_2c1fac;
        }
    }
    ctx->pc = 0x2C1F90u;
label_2c1f90:
    // 0x2c1f90: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x2c1f90u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c1f94: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c1f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c1f98: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2c1f98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2c1f9c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2c1f9cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1fa0: 0x0  nop
    ctx->pc = 0x2c1fa0u;
    // NOP
    // 0x2c1fa4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c1fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c1fa8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c1fa8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c1fac:
    // 0x2c1fac: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c1facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1fb0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2c1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2c1fb4: 0x34678889  ori         $a3, $v1, 0x8889
    ctx->pc = 0x2c1fb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2c1fb8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2c1fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2c1fbc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2c1fbcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1fc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1fc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1fc4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c1fc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c1fc8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c1fc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c1fcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c1fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1fd0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1FD0u;
    {
        const bool branch_taken_0x2c1fd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1fd0) {
            ctx->pc = 0x2C1FE8u;
            goto label_2c1fe8;
        }
    }
    ctx->pc = 0x2C1FD8u;
    // 0x2c1fd8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c1fd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c1fdc: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2c1fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c1fe0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1FE0u;
    {
        const bool branch_taken_0x2c1fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FE0u;
        // 0x2c1fe4: 0x73c3c  dsll32      $a3, $a3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1fe0) {
            ctx->pc = 0x2C2004u;
            goto label_2c2004;
        }
    }
    ctx->pc = 0x2C1FE8u;
label_2c1fe8:
    // 0x2c1fe8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c1fe8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c1fec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2c1fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2c1ff0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c1ff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c1ff4: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2c1ff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c1ff8: 0x0  nop
    ctx->pc = 0x2c1ff8u;
    // NOP
    // 0x2c1ffc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2c1ffcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2c2000: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x2c2000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
label_2c2004:
    // 0x2c2004: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2c2004u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2c2008: 0x4e10021  bgez        $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C2008u;
    {
        const bool branch_taken_0x2c2008 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x2C200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2008u;
        // 0x2c200c: 0x71823  negu        $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2008) {
            ctx->pc = 0x2C2090u;
            goto label_2c2090;
        }
    }
    ctx->pc = 0x2C2010u;
    // 0x2c2010: 0x9487005a  lhu         $a3, 0x5A($a0)
    ctx->pc = 0x2c2010u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x2c2014: 0xe3082a  slt         $at, $a3, $v1
    ctx->pc = 0x2c2014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c2018: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x2C2018u;
    {
        const bool branch_taken_0x2c2018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2018) {
            ctx->pc = 0x2C2110u;
            goto label_2c2110;
        }
    }
    ctx->pc = 0x2C2020u;
    // 0x2c2020: 0x938389d0  lbu         $v1, -0x7630($gp)
    ctx->pc = 0x2c2020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c2024: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C2024u;
    {
        const bool branch_taken_0x2c2024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2024) {
            ctx->pc = 0x2C2078u;
            goto label_2c2078;
        }
    }
    ctx->pc = 0x2C202Cu;
    // 0x2c202c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C202Cu;
    {
        const bool branch_taken_0x2c202c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C202Cu;
        // 0x2c2030: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c202c) {
            ctx->pc = 0x2C2068u;
            goto label_2c2068;
        }
    }
    ctx->pc = 0x2C2034u;
    // 0x2c2034: 0x90860037  lbu         $a2, 0x37($a0)
    ctx->pc = 0x2c2034u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c2038: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c2038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c203c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c203cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2040: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c2040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c2044: 0xa086004e  sb          $a2, 0x4E($a0)
    ctx->pc = 0x2c2044u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c2048: 0xa0820037  sb          $v0, 0x37($a0)
    ctx->pc = 0x2c2048u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c204c: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c204cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2050: 0xa085005f  sb          $a1, 0x5F($a0)
    ctx->pc = 0x2c2050u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c2054: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c2054u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c2058: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c2058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c205c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c205cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c2060: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2060u;
    {
        const bool branch_taken_0x2c2060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2060u;
        // 0x2c2064: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2060) {
            ctx->pc = 0x2C2088u;
            goto label_2c2088;
        }
    }
    ctx->pc = 0x2C2068u;
label_2c2068:
    // 0x2c2068: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C2068u;
    SET_GPR_U32(ctx, 31, 0x2C2070u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C2068u, 0x2C2070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2070u;
label_2c2070:
    // 0x2c2070: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2070u;
    {
        const bool branch_taken_0x2c2070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2070) {
            ctx->pc = 0x2C2080u;
            goto label_2c2080;
        }
    }
    ctx->pc = 0x2C2078u;
label_2c2078:
    // 0x2c2078: 0xa38289d8  sb          $v0, -0x7628($gp)
    ctx->pc = 0x2c2078u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c207c: 0x0  nop
    ctx->pc = 0x2c207cu;
    // NOP
label_2c2080:
    // 0x2c2080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2084: 0x0  nop
    ctx->pc = 0x2c2084u;
    // NOP
label_2c2088:
    // 0x2c2088: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C2088u;
    {
        const bool branch_taken_0x2c2088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2088) {
            ctx->pc = 0x2C2118u;
            goto label_2c2118;
        }
    }
    ctx->pc = 0x2C2090u;
label_2c2090:
    // 0x2c2090: 0x9483005a  lhu         $v1, 0x5A($a0)
    ctx->pc = 0x2c2090u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x2c2094: 0xe3082a  slt         $at, $a3, $v1
    ctx->pc = 0x2c2094u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c2098: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C2098u;
    {
        const bool branch_taken_0x2c2098 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2098) {
            ctx->pc = 0x2C2110u;
            goto label_2c2110;
        }
    }
    ctx->pc = 0x2C20A0u;
    // 0x2c20a0: 0x938389d0  lbu         $v1, -0x7630($gp)
    ctx->pc = 0x2c20a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c20a4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C20A4u;
    {
        const bool branch_taken_0x2c20a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c20a4) {
            ctx->pc = 0x2C20F8u;
            goto label_2c20f8;
        }
    }
    ctx->pc = 0x2C20ACu;
    // 0x2c20ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C20ACu;
    {
        const bool branch_taken_0x2c20ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C20B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20ACu;
        // 0x2c20b0: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20ac) {
            ctx->pc = 0x2C20E8u;
            goto label_2c20e8;
        }
    }
    ctx->pc = 0x2C20B4u;
    // 0x2c20b4: 0x90860037  lbu         $a2, 0x37($a0)
    ctx->pc = 0x2c20b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c20b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c20b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c20bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c20bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c20c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c20c4: 0xa086004e  sb          $a2, 0x4E($a0)
    ctx->pc = 0x2c20c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c20c8: 0xa0820037  sb          $v0, 0x37($a0)
    ctx->pc = 0x2c20c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c20cc: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c20ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c20d0: 0xa085005f  sb          $a1, 0x5F($a0)
    ctx->pc = 0x2c20d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c20d4: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c20d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c20d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c20dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c20e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C20E0u;
    {
        const bool branch_taken_0x2c20e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20E0u;
        // 0x2c20e4: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20e0) {
            ctx->pc = 0x2C2108u;
            goto label_2c2108;
        }
    }
    ctx->pc = 0x2C20E8u;
label_2c20e8:
    // 0x2c20e8: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C20E8u;
    SET_GPR_U32(ctx, 31, 0x2C20F0u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C20E8u, 0x2C20F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C20F0u;
label_2c20f0:
    // 0x2c20f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C20F0u;
    {
        const bool branch_taken_0x2c20f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c20f0) {
            ctx->pc = 0x2C2100u;
            goto label_2c2100;
        }
    }
    ctx->pc = 0x2C20F8u;
label_2c20f8:
    // 0x2c20f8: 0xa38289d8  sb          $v0, -0x7628($gp)
    ctx->pc = 0x2c20f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c20fc: 0x0  nop
    ctx->pc = 0x2c20fcu;
    // NOP
label_2c2100:
    // 0x2c2100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2104: 0x0  nop
    ctx->pc = 0x2c2104u;
    // NOP
label_2c2108:
    // 0x2c2108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2108u;
    {
        const bool branch_taken_0x2c2108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2108) {
            ctx->pc = 0x2C2118u;
            goto label_2c2118;
        }
    }
    ctx->pc = 0x2C2110u;
label_2c2110:
    // 0x2c2110: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2c2110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c2114: 0x0  nop
    ctx->pc = 0x2c2114u;
    // NOP
label_2c2118:
    // 0x2c2118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c211c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C211Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C211Cu;
        // 0x2c2120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C211Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2124u;
}
