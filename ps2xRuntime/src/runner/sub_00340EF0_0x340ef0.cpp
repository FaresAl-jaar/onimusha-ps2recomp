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

// Function: sub_00340EF0
// Address: 0x340ef0 - 0x341098
void sub_00340EF0_0x340ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340EF0_0x340ef0");
#endif

    ctx->pc = 0x340ef0u;

    // 0x340ef0: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x340ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x340ef4: 0x10c00054  beqz        $a2, . + 4 + (0x54 << 2)
    ctx->pc = 0x340EF4u;
    {
        const bool branch_taken_0x340ef4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x340ef4) {
            ctx->pc = 0x341048u;
            goto label_341048;
        }
    }
    ctx->pc = 0x340EFCu;
    // 0x340efc: 0x8c880020  lw          $t0, 0x20($a0)
    ctx->pc = 0x340efcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x340f00: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x340f00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340f04: 0xc91804  sllv        $v1, $t1, $a2
    ctx->pc = 0x340f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x340f08: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x340f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x340f0c: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x340F0Cu;
    {
        const bool branch_taken_0x340f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340f0c) {
            ctx->pc = 0x341048u;
            goto label_341048;
        }
    }
    ctx->pc = 0x340F14u;
    // 0x340f14: 0x9087001b  lbu         $a3, 0x1B($a0)
    ctx->pc = 0x340f14u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
    // 0x340f18: 0x28e10005  slti        $at, $a3, 0x5
    ctx->pc = 0x340f18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x340f1c: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x340F1Cu;
    {
        const bool branch_taken_0x340f1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x340f1c) {
            ctx->pc = 0x340F50u;
            goto label_340f50;
        }
    }
    ctx->pc = 0x340F24u;
    // 0x340f24: 0x10c7000a  beq         $a2, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x340F24u;
    {
        const bool branch_taken_0x340f24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x340F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F24u;
        // 0x340f28: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f24) {
            ctx->pc = 0x340F50u;
            goto label_340f50;
        }
    }
    ctx->pc = 0x340F2Cu;
    // 0x340f2c: 0x94830018  lhu         $v1, 0x18($a0)
    ctx->pc = 0x340f2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x340f30: 0x94266ac4  lhu         $a2, 0x6AC4($at)
    ctx->pc = 0x340f30u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    // 0x340f34: 0x10660006  beq         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x340F34u;
    {
        const bool branch_taken_0x340f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x340F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F34u;
        // 0x340f38: 0x24030241  addiu       $v1, $zero, 0x241 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f34) {
            ctx->pc = 0x340F50u;
            goto label_340f50;
        }
    }
    ctx->pc = 0x340F3Cu;
    // 0x340f3c: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x340F3Cu;
    {
        const bool branch_taken_0x340f3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x340f3c) {
            ctx->pc = 0x340F50u;
            goto label_340f50;
        }
    }
    ctx->pc = 0x340F44u;
    // 0x340f44: 0xe91804  sllv        $v1, $t1, $a3
    ctx->pc = 0x340f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x340f48: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x340f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x340f4c: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x340f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_340f50:
    // 0x340f50: 0xa085001b  sb          $a1, 0x1B($a0)
    ctx->pc = 0x340f50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 5));
    // 0x340f54: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x340f54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x340f58: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x340f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x340f5c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x340f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x340f60: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x340f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x340f64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x340f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x340f68: 0x24637740  addiu       $v1, $v1, 0x7740
    ctx->pc = 0x340f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30528));
    // 0x340f6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x340f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340f70: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x340f70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x340f74: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x340f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x340f78: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x340f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x340f7c: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x340f7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x340f80: 0xa083001a  sb          $v1, 0x1A($a0)
    ctx->pc = 0x340f80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x340f84: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x340f84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x340f88: 0xa4830018  sh          $v1, 0x18($a0)
    ctx->pc = 0x340f88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x340f8c: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x340f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x340f90: 0xa083001d  sb          $v1, 0x1D($a0)
    ctx->pc = 0x340f90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x340f94: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x340f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x340f98: 0x9083001d  lbu         $v1, 0x1D($a0)
    ctx->pc = 0x340f98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x340f9c: 0x10660010  beq         $v1, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x340F9Cu;
    {
        const bool branch_taken_0x340f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x340f9c) {
            ctx->pc = 0x340FE0u;
            goto label_340fe0;
        }
    }
    ctx->pc = 0x340FA4u;
    // 0x340fa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x340FA4u;
    {
        const bool branch_taken_0x340fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x340fa4) {
            ctx->pc = 0x340FB8u;
            goto label_340fb8;
        }
    }
    ctx->pc = 0x340FACu;
    // 0x340fac: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x340FACu;
    {
        const bool branch_taken_0x340fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340fac) {
            ctx->pc = 0x341090u;
            goto label_341090;
        }
    }
    ctx->pc = 0x340FB4u;
    // 0x340fb4: 0x0  nop
    ctx->pc = 0x340fb4u;
    // NOP
label_340fb8:
    // 0x340fb8: 0x90e30006  lbu         $v1, 0x6($a3)
    ctx->pc = 0x340fb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x340fbc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x340fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x340fc0: 0x10650033  beq         $v1, $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x340FC0u;
    {
        const bool branch_taken_0x340fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x340fc0) {
            ctx->pc = 0x341090u;
            goto label_341090;
        }
    }
    ctx->pc = 0x340FC8u;
    // 0x340fc8: 0x90e30007  lbu         $v1, 0x7($a3)
    ctx->pc = 0x340fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
    // 0x340fcc: 0x14650030  bne         $v1, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x340FCCu;
    {
        const bool branch_taken_0x340fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x340fcc) {
            ctx->pc = 0x341090u;
            goto label_341090;
        }
    }
    ctx->pc = 0x340FD4u;
    // 0x340fd4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x340FD4u;
    {
        const bool branch_taken_0x340fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340FD4u;
        // 0x340fd8: 0xa086001c  sb          $a2, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340fd4) {
            ctx->pc = 0x341090u;
            goto label_341090;
        }
    }
    ctx->pc = 0x340FDCu;
    // 0x340fdc: 0x0  nop
    ctx->pc = 0x340fdcu;
    // NOP
label_340fe0:
    // 0x340fe0: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x340fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
    // 0x340fe4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x340fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340fe8: 0x3c053c88  lui         $a1, 0x3C88
    ctx->pc = 0x340fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15496 << 16));
    // 0x340fec: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x340fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x340ff0: 0x34a58889  ori         $a1, $a1, 0x8889
    ctx->pc = 0x340ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
    // 0x340ff4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x340ff4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340ff8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x340ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x340ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x340ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341000: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x341000u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x341004: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x341004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x341008: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x341008u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34100c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x34100Cu;
    {
        const bool branch_taken_0x34100c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34100c) {
            ctx->pc = 0x341024u;
            goto label_341024;
        }
    }
    ctx->pc = 0x341014u;
    // 0x341014: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x341018: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x341018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x34101c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34101Cu;
    {
        const bool branch_taken_0x34101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34101Cu;
        // 0x341020: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34101c) {
            ctx->pc = 0x341040u;
            goto label_341040;
        }
    }
    ctx->pc = 0x341024u;
label_341024:
    // 0x341024: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x341024u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341028: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x341028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x34102c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34102cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x341030: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x341030u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x341034: 0x0  nop
    ctx->pc = 0x341034u;
    // NOP
    // 0x341038: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x341038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x34103c: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x34103cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
label_341040:
    // 0x341040: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x341040u;
    {
        const bool branch_taken_0x341040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341040) {
            ctx->pc = 0x341090u;
            goto label_341090;
        }
    }
    ctx->pc = 0x341048u;
label_341048:
    // 0x341048: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x341048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x34104c: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x34104cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x341050: 0x28610ff0  slti        $at, $v1, 0xFF0
    ctx->pc = 0x341050u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4080) ? 1 : 0);
    // 0x341054: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x341054u;
    {
        const bool branch_taken_0x341054 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x341054) {
            ctx->pc = 0x341090u;
            goto label_341090;
        }
    }
    ctx->pc = 0x34105Cu;
    // 0x34105c: 0x9086001b  lbu         $a2, 0x1B($a0)
    ctx->pc = 0x34105cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
    // 0x341060: 0x28c10005  slti        $at, $a2, 0x5
    ctx->pc = 0x341060u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x341064: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x341064u;
    {
        const bool branch_taken_0x341064 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x341064) {
            ctx->pc = 0x341090u;
            goto label_341090;
        }
    }
    ctx->pc = 0x34106Cu;
    // 0x34106c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x34106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x341070: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x341070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341074: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x341074u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x341078: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x341078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x34107c: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x34107cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x341080: 0xa080001b  sb          $zero, 0x1B($a0)
    ctx->pc = 0x341080u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x341084: 0xa080001a  sb          $zero, 0x1A($a0)
    ctx->pc = 0x341084u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x341088: 0xa4800018  sh          $zero, 0x18($a0)
    ctx->pc = 0x341088u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x34108c: 0x0  nop
    ctx->pc = 0x34108cu;
    // NOP
label_341090:
    // 0x341090: 0x3e00008  jr          $ra
    ctx->pc = 0x341090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341098u;
}
