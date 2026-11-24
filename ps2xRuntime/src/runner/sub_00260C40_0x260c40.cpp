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

// Function: sub_00260C40
// Address: 0x260c40 - 0x261564
void sub_00260C40_0x260c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260C40_0x260c40");
#endif

    switch (ctx->pc) {
        case 0x260ea8u: goto label_260ea8;
        case 0x260eb0u: goto label_260eb0;
        case 0x260ed4u: goto label_260ed4;
        case 0x260f28u: goto label_260f28;
        case 0x260f3cu: goto label_260f3c;
        case 0x260f5cu: goto label_260f5c;
        case 0x2610c8u: goto label_2610c8;
        case 0x2610f0u: goto label_2610f0;
        case 0x261140u: goto label_261140;
        case 0x261194u: goto label_261194;
        case 0x2611a0u: goto label_2611a0;
        case 0x261254u: goto label_261254;
        case 0x2612e4u: goto label_2612e4;
        case 0x261368u: goto label_261368;
        case 0x2613d4u: goto label_2613d4;
        case 0x261474u: goto label_261474;
        default: break;
    }

    ctx->pc = 0x260c40u;

    // 0x260c40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x260c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x260c44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x260c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x260c48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x260c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x260c4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x260c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x260c50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x260c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x260c54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x260c54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x260c58: 0x97838858  lhu         $v1, -0x77A8($gp)
    ctx->pc = 0x260c58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936664)));
    // 0x260c5c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x260C5Cu;
    {
        const bool branch_taken_0x260c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x260C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C5Cu;
        // 0x260c60: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c5c) {
            ctx->pc = 0x260C88u;
            goto label_260c88;
        }
    }
    ctx->pc = 0x260C64u;
    // 0x260c64: 0x8e440148  lw          $a0, 0x148($s2)
    ctx->pc = 0x260c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x260c68: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x260c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x260c6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x260c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x260c70: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x260C70u;
    {
        const bool branch_taken_0x260c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260c70) {
            ctx->pc = 0x260C88u;
            goto label_260c88;
        }
    }
    ctx->pc = 0x260C78u;
    // 0x260c78: 0x924304f4  lbu         $v1, 0x4F4($s2)
    ctx->pc = 0x260c78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1268)));
    // 0x260c7c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260C7Cu;
    {
        const bool branch_taken_0x260c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260c7c) {
            ctx->pc = 0x260C90u;
            goto label_260c90;
        }
    }
    ctx->pc = 0x260C84u;
    // 0x260c84: 0x0  nop
    ctx->pc = 0x260c84u;
    // NOP
label_260c88:
    // 0x260c88: 0x1000022f  b           . + 4 + (0x22F << 2)
    ctx->pc = 0x260C88u;
    {
        const bool branch_taken_0x260c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260c88) {
            ctx->pc = 0x261548u;
            goto label_261548;
        }
    }
    ctx->pc = 0x260C90u;
label_260c90:
    // 0x260c90: 0x964329de  lhu         $v1, 0x29DE($s2)
    ctx->pc = 0x260c90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10718)));
    // 0x260c94: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x260c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x260c98: 0x1460022b  bnez        $v1, . + 4 + (0x22B << 2)
    ctx->pc = 0x260C98u;
    {
        const bool branch_taken_0x260c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260c98) {
            ctx->pc = 0x261548u;
            goto label_261548;
        }
    }
    ctx->pc = 0x260CA0u;
    // 0x260ca0: 0x924307b0  lbu         $v1, 0x7B0($s2)
    ctx->pc = 0x260ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1968)));
    // 0x260ca4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x260CA4u;
    {
        const bool branch_taken_0x260ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260ca4) {
            ctx->pc = 0x260CD0u;
            goto label_260cd0;
        }
    }
    ctx->pc = 0x260CACu;
    // 0x260cac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x260cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x260cb0: 0xa24307b0  sb          $v1, 0x7B0($s2)
    ctx->pc = 0x260cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1968), (uint8_t)GPR_U32(ctx, 3));
    // 0x260cb4: 0x924307b1  lbu         $v1, 0x7B1($s2)
    ctx->pc = 0x260cb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1969)));
    // 0x260cb8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x260CB8u;
    {
        const bool branch_taken_0x260cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260cb8) {
            ctx->pc = 0x260CD8u;
            goto label_260cd8;
        }
    }
    ctx->pc = 0x260CC0u;
    // 0x260cc0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x260cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x260cc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x260CC4u;
    {
        const bool branch_taken_0x260cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CC4u;
        // 0x260cc8: 0xa24307b1  sb          $v1, 0x7B1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1969), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260cc4) {
            ctx->pc = 0x260CD8u;
            goto label_260cd8;
        }
    }
    ctx->pc = 0x260CCCu;
    // 0x260ccc: 0x0  nop
    ctx->pc = 0x260cccu;
    // NOP
label_260cd0:
    // 0x260cd0: 0xa24007b1  sb          $zero, 0x7B1($s2)
    ctx->pc = 0x260cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1969), (uint8_t)GPR_U32(ctx, 0));
    // 0x260cd4: 0x0  nop
    ctx->pc = 0x260cd4u;
    // NOP
label_260cd8:
    // 0x260cd8: 0x8e4304e4  lw          $v1, 0x4E4($s2)
    ctx->pc = 0x260cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1252)));
    // 0x260cdc: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x260cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x260ce0: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x260CE0u;
    {
        const bool branch_taken_0x260ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260ce0) {
            ctx->pc = 0x260DD0u;
            goto label_260dd0;
        }
    }
    ctx->pc = 0x260CE8u;
    // 0x260ce8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x260ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x260cec: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x260cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x260cf0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x260cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x260cf4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x260cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x260cf8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x260cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x260cfc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x260cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x260d00: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x260d00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x260d04: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x260d04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260d08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260d0c: 0x0  nop
    ctx->pc = 0x260d0cu;
    // NOP
    // 0x260d10: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x260d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x260d14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x260d14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260d18: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x260D18u;
    {
        const bool branch_taken_0x260d18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x260d18) {
            ctx->pc = 0x260D30u;
            goto label_260d30;
        }
    }
    ctx->pc = 0x260D20u;
    // 0x260d20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x260d20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x260d24: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x260d24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x260d28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x260D28u;
    {
        const bool branch_taken_0x260d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D28u;
        // 0x260d2c: 0xa24407b0  sb          $a0, 0x7B0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1968), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d28) {
            ctx->pc = 0x260D4Cu;
            goto label_260d4c;
        }
    }
    ctx->pc = 0x260D30u;
label_260d30:
    // 0x260d30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x260d30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x260d34: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x260d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x260d38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x260d38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x260d3c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x260d3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x260d40: 0x0  nop
    ctx->pc = 0x260d40u;
    // NOP
    // 0x260d44: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x260d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x260d48: 0xa24407b0  sb          $a0, 0x7B0($s2)
    ctx->pc = 0x260d48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1968), (uint8_t)GPR_U32(ctx, 4));
label_260d4c:
    // 0x260d4c: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x260d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x260d50: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x260d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x260d54: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x260d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x260d58: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x260d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x260d5c: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x260d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x260d60: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x260d60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260d64: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x260d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x260d68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260d6c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x260d6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x260d70: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x260d70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x260d74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x260d74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260d78: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x260D78u;
    {
        const bool branch_taken_0x260d78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x260d78) {
            ctx->pc = 0x260D90u;
            goto label_260d90;
        }
    }
    ctx->pc = 0x260D80u;
    // 0x260d80: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x260d80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x260d84: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x260d84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x260d88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x260D88u;
    {
        const bool branch_taken_0x260d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D88u;
        // 0x260d8c: 0x924307b1  lbu         $v1, 0x7B1($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1969)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d88) {
            ctx->pc = 0x260DACu;
            goto label_260dac;
        }
    }
    ctx->pc = 0x260D90u;
label_260d90:
    // 0x260d90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x260d90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x260d94: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x260d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x260d98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x260d98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x260d9c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x260d9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x260da0: 0x0  nop
    ctx->pc = 0x260da0u;
    // NOP
    // 0x260da4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x260da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x260da8: 0x924307b1  lbu         $v1, 0x7B1($s2)
    ctx->pc = 0x260da8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1969)));
label_260dac:
    // 0x260dac: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x260dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x260db0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x260db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x260db4: 0xa24307b1  sb          $v1, 0x7B1($s2)
    ctx->pc = 0x260db4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1969), (uint8_t)GPR_U32(ctx, 3));
    // 0x260db8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x260db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x260dbc: 0x286100c9  slti        $at, $v1, 0xC9
    ctx->pc = 0x260dbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x260dc0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x260DC0u;
    {
        const bool branch_taken_0x260dc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x260DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DC0u;
        // 0x260dc4: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260dc0) {
            ctx->pc = 0x260DD0u;
            goto label_260dd0;
        }
    }
    ctx->pc = 0x260DC8u;
    // 0x260dc8: 0xa24307b1  sb          $v1, 0x7B1($s2)
    ctx->pc = 0x260dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1969), (uint8_t)GPR_U32(ctx, 3));
    // 0x260dcc: 0x0  nop
    ctx->pc = 0x260dccu;
    // NOP
label_260dd0:
    // 0x260dd0: 0x924307b0  lbu         $v1, 0x7B0($s2)
    ctx->pc = 0x260dd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1968)));
    // 0x260dd4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x260DD4u;
    {
        const bool branch_taken_0x260dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DD4u;
        // 0x260dd8: 0x2403feff  addiu       $v1, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260dd4) {
            ctx->pc = 0x260E10u;
            goto label_260e10;
        }
    }
    ctx->pc = 0x260DDCu;
    // 0x260ddc: 0xde450500  ld          $a1, 0x500($s2)
    ctx->pc = 0x260ddcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x260de0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x260de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x260de4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x260de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x260de8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x260de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x260dec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x260decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x260df0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x260df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x260df4: 0x34a40004  ori         $a0, $a1, 0x4
    ctx->pc = 0x260df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x260df8: 0xfe440500  sd          $a0, 0x500($s2)
    ctx->pc = 0x260df8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 4));
    // 0x260dfc: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x260dfcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x260e00: 0xde440500  ld          $a0, 0x500($s2)
    ctx->pc = 0x260e00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x260e04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x260e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x260e08: 0xfe430500  sd          $v1, 0x500($s2)
    ctx->pc = 0x260e08u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 3));
    // 0x260e0c: 0x0  nop
    ctx->pc = 0x260e0cu;
    // NOP
label_260e10:
    // 0x260e10: 0x8e452ab0  lw          $a1, 0x2AB0($s2)
    ctx->pc = 0x260e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x260e14: 0x10a00054  beqz        $a1, . + 4 + (0x54 << 2)
    ctx->pc = 0x260E14u;
    {
        const bool branch_taken_0x260e14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E14u;
        // 0x260e18: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e14) {
            ctx->pc = 0x260F68u;
            goto label_260f68;
        }
    }
    ctx->pc = 0x260E1Cu;
    // 0x260e1c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x260e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x260e20: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x260e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x260e24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x260e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x260e28: 0x1460004f  bnez        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x260E28u;
    {
        const bool branch_taken_0x260e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260e28) {
            ctx->pc = 0x260F68u;
            goto label_260f68;
        }
    }
    ctx->pc = 0x260E30u;
    // 0x260e30: 0xde430500  ld          $v1, 0x500($s2)
    ctx->pc = 0x260e30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x260e34: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x260e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x260e38: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x260E38u;
    {
        const bool branch_taken_0x260e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260e38) {
            ctx->pc = 0x260F68u;
            goto label_260f68;
        }
    }
    ctx->pc = 0x260E40u;
    // 0x260e40: 0x8e4308cc  lw          $v1, 0x8CC($s2)
    ctx->pc = 0x260e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2252)));
    // 0x260e44: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x260E44u;
    {
        const bool branch_taken_0x260e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260e44) {
            ctx->pc = 0x260F68u;
            goto label_260f68;
        }
    }
    ctx->pc = 0x260E4Cu;
    // 0x260e4c: 0x9244065c  lbu         $a0, 0x65C($s2)
    ctx->pc = 0x260e4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1628)));
    // 0x260e50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x260e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260e54: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260E54u;
    {
        const bool branch_taken_0x260e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x260E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E54u;
        // 0x260e58: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e54) {
            ctx->pc = 0x260E68u;
            goto label_260e68;
        }
    }
    ctx->pc = 0x260E5Cu;
    // 0x260e5c: 0x14830042  bne         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x260E5Cu;
    {
        const bool branch_taken_0x260e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x260e5c) {
            ctx->pc = 0x260F68u;
            goto label_260f68;
        }
    }
    ctx->pc = 0x260E64u;
    // 0x260e64: 0x0  nop
    ctx->pc = 0x260e64u;
    // NOP
label_260e68:
    // 0x260e68: 0x90a4065c  lbu         $a0, 0x65C($a1)
    ctx->pc = 0x260e68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1628)));
    // 0x260e6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x260e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260e70: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x260E70u;
    {
        const bool branch_taken_0x260e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x260E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E70u;
        // 0x260e74: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e70) {
            ctx->pc = 0x260E98u;
            goto label_260e98;
        }
    }
    ctx->pc = 0x260E78u;
    // 0x260e78: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x260E78u;
    {
        const bool branch_taken_0x260e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x260e78) {
            ctx->pc = 0x260E98u;
            goto label_260e98;
        }
    }
    ctx->pc = 0x260E80u;
    // 0x260e80: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x260e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x260e84: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260E84u;
    {
        const bool branch_taken_0x260e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x260E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E84u;
        // 0x260e88: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e84) {
            ctx->pc = 0x260E98u;
            goto label_260e98;
        }
    }
    ctx->pc = 0x260E8Cu;
    // 0x260e8c: 0x14830036  bne         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x260E8Cu;
    {
        const bool branch_taken_0x260e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x260e8c) {
            ctx->pc = 0x260F68u;
            goto label_260f68;
        }
    }
    ctx->pc = 0x260E94u;
    // 0x260e94: 0x0  nop
    ctx->pc = 0x260e94u;
    // NOP
label_260e98:
    // 0x260e98: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x260e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x260e9c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x260e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x260ea0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x260EA0u;
    SET_GPR_U32(ctx, 31, 0x260EA8u);
    ctx->pc = 0x260EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260EA0u;
    // 0x260ea4: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x260EA0u, 0x260EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260EA8u;
label_260ea8:
    // 0x260ea8: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x260EA8u;
    SET_GPR_U32(ctx, 31, 0x260EB0u);
    ctx->pc = 0x260EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260EA8u;
    // 0x260eac: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x260EA8u, 0x260EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260EB0u;
label_260eb0:
    // 0x260eb0: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x260eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x260eb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x260eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260eb8: 0x0  nop
    ctx->pc = 0x260eb8u;
    // NOP
    // 0x260ebc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x260ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260ec0: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x260EC0u;
    {
        const bool branch_taken_0x260ec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x260ec0) {
            ctx->pc = 0x260F68u;
            goto label_260f68;
        }
    }
    ctx->pc = 0x260EC8u;
    // 0x260ec8: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x260ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x260ecc: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x260ECCu;
    SET_GPR_U32(ctx, 31, 0x260ED4u);
    ctx->pc = 0x260ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260ECCu;
    // 0x260ed0: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x260ECCu, 0x260ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260ED4u;
label_260ed4:
    // 0x260ed4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x260ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x260ed8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x260ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x260edc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x260edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x260ee0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x260ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x260ee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x260ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260ee8: 0x0  nop
    ctx->pc = 0x260ee8u;
    // NOP
    // 0x260eec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x260eecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x260ef0: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x260ef0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x260ef4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x260ef4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x260ef8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x260ef8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x260efc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x260efcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x260f00: 0x0  nop
    ctx->pc = 0x260f00u;
    // NOP
    // 0x260f04: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x260f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x260f08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x260f08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x260f0c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x260f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x260f10: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x260f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x260f14: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x260f14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x260f18: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x260f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x260f1c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x260f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x260f20: 0xc096a00  jal         func_25A800
    ctx->pc = 0x260F20u;
    SET_GPR_U32(ctx, 31, 0x260F28u);
    ctx->pc = 0x260F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F20u;
    // 0x260f24: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A800u, 0x260F20u, 0x260F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F28u;
label_260f28:
    // 0x260f28: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x260F28u;
    {
        const bool branch_taken_0x260f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260f28) {
            ctx->pc = 0x260F68u;
            goto label_260f68;
        }
    }
    ctx->pc = 0x260F30u;
    // 0x260f30: 0x8e442ab0  lw          $a0, 0x2AB0($s2)
    ctx->pc = 0x260f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x260f34: 0xc0b2c48  jal         func_2CB120
    ctx->pc = 0x260F34u;
    SET_GPR_U32(ctx, 31, 0x260F3Cu);
    ctx->pc = 0x260F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F34u;
    // 0x260f38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB120u, 0x260F34u, 0x260F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F3Cu;
label_260f3c:
    // 0x260f3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260f40: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x260f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x260f44: 0xfe420500  sd          $v0, 0x500($s2)
    ctx->pc = 0x260f44u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 2));
    // 0x260f48: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x260f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x260f4c: 0x8e422ab0  lw          $v0, 0x2AB0($s2)
    ctx->pc = 0x260f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x260f50: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x260f50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x260f54: 0xc0ce8e0  jal         func_33A380
    ctx->pc = 0x260F54u;
    SET_GPR_U32(ctx, 31, 0x260F5Cu);
    ctx->pc = 0x260F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F54u;
    // 0x260f58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A380u, 0x260F54u, 0x260F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F5Cu;
label_260f5c:
    // 0x260f5c: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x260F5Cu;
    {
        const bool branch_taken_0x260f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260f5c) {
            ctx->pc = 0x261548u;
            goto label_261548;
        }
    }
    ctx->pc = 0x260F64u;
    // 0x260f64: 0x0  nop
    ctx->pc = 0x260f64u;
    // NOP
label_260f68:
    // 0x260f68: 0x8e4304e4  lw          $v1, 0x4E4($s2)
    ctx->pc = 0x260f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1252)));
    // 0x260f6c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x260f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x260f70: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x260F70u;
    {
        const bool branch_taken_0x260f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260f70) {
            ctx->pc = 0x260FD8u;
            goto label_260fd8;
        }
    }
    ctx->pc = 0x260F78u;
    // 0x260f78: 0x96432ad0  lhu         $v1, 0x2AD0($s2)
    ctx->pc = 0x260f78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10960)));
    // 0x260f7c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x260F7Cu;
    {
        const bool branch_taken_0x260f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260f7c) {
            ctx->pc = 0x260FD8u;
            goto label_260fd8;
        }
    }
    ctx->pc = 0x260F84u;
    // 0x260f84: 0xde440500  ld          $a0, 0x500($s2)
    ctx->pc = 0x260f84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x260f88: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x260f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x260f8c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x260F8Cu;
    {
        const bool branch_taken_0x260f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F8Cu;
        // 0x260f90: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f8c) {
            ctx->pc = 0x260FA8u;
            goto label_260fa8;
        }
    }
    ctx->pc = 0x260F94u;
    // 0x260f94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x260f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x260f98: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x260f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x260f9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x260F9Cu;
    {
        const bool branch_taken_0x260f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F9Cu;
        // 0x260fa0: 0xfe430500  sd          $v1, 0x500($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f9c) {
            ctx->pc = 0x260FD8u;
            goto label_260fd8;
        }
    }
    ctx->pc = 0x260FA4u;
    // 0x260fa4: 0x0  nop
    ctx->pc = 0x260fa4u;
    // NOP
label_260fa8:
    // 0x260fa8: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x260fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x260fac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x260FACu;
    {
        const bool branch_taken_0x260fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FACu;
        // 0x260fb0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fac) {
            ctx->pc = 0x260FC8u;
            goto label_260fc8;
        }
    }
    ctx->pc = 0x260FB4u;
    // 0x260fb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x260fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x260fb8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x260fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x260fbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x260FBCu;
    {
        const bool branch_taken_0x260fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FBCu;
        // 0x260fc0: 0xfe430500  sd          $v1, 0x500($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fbc) {
            ctx->pc = 0x260FD8u;
            goto label_260fd8;
        }
    }
    ctx->pc = 0x260FC4u;
    // 0x260fc4: 0x0  nop
    ctx->pc = 0x260fc4u;
    // NOP
label_260fc8:
    // 0x260fc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x260fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260fcc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x260fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x260fd0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x260fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x260fd4: 0xfe430500  sd          $v1, 0x500($s2)
    ctx->pc = 0x260fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 3));
label_260fd8:
    // 0x260fd8: 0x8e4306c8  lw          $v1, 0x6C8($s2)
    ctx->pc = 0x260fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1736)));
    // 0x260fdc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x260fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x260fe0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x260fe0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x260fe4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260FE4u;
    {
        const bool branch_taken_0x260fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260fe4) {
            ctx->pc = 0x260FF8u;
            goto label_260ff8;
        }
    }
    ctx->pc = 0x260FECu;
    // 0x260fec: 0x9243065c  lbu         $v1, 0x65C($s2)
    ctx->pc = 0x260fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1628)));
    // 0x260ff0: 0x386300fb  xori        $v1, $v1, 0xFB
    ctx->pc = 0x260ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)251);
    // 0x260ff4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x260ff4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_260ff8:
    // 0x260ff8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x260FF8u;
    {
        const bool branch_taken_0x260ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260ff8) {
            ctx->pc = 0x261028u;
            goto label_261028;
        }
    }
    ctx->pc = 0x261000u;
    // 0x261000: 0x8e4304e4  lw          $v1, 0x4E4($s2)
    ctx->pc = 0x261000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1252)));
    // 0x261004: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x261004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x261008: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x261008u;
    {
        const bool branch_taken_0x261008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261008) {
            ctx->pc = 0x261028u;
            goto label_261028;
        }
    }
    ctx->pc = 0x261010u;
    // 0x261010: 0xde440500  ld          $a0, 0x500($s2)
    ctx->pc = 0x261010u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x261014: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x261014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x261018: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x261018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26101c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x26101cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x261020: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x261020u;
    {
        const bool branch_taken_0x261020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261020u;
        // 0x261024: 0xfe430500  sd          $v1, 0x500($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261020) {
            ctx->pc = 0x261070u;
            goto label_261070;
        }
    }
    ctx->pc = 0x261028u;
label_261028:
    // 0x261028: 0x8e4329cc  lw          $v1, 0x29CC($s2)
    ctx->pc = 0x261028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10700)));
    // 0x26102c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26102Cu;
    {
        const bool branch_taken_0x26102c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26102c) {
            ctx->pc = 0x26103Cu;
            goto label_26103c;
        }
    }
    ctx->pc = 0x261034u;
    // 0x261034: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x261034u;
    {
        const bool branch_taken_0x261034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261034u;
        // 0x261038: 0x90630010  lbu         $v1, 0x10($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261034) {
            ctx->pc = 0x261040u;
            goto label_261040;
        }
    }
    ctx->pc = 0x26103Cu;
label_26103c:
    // 0x26103c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x26103cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261040:
    // 0x261040: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x261040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x261044: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x261044u;
    {
        const bool branch_taken_0x261044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261044) {
            ctx->pc = 0x261070u;
            goto label_261070;
        }
    }
    ctx->pc = 0x26104Cu;
    // 0x26104c: 0x8e4304e4  lw          $v1, 0x4E4($s2)
    ctx->pc = 0x26104cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1252)));
    // 0x261050: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x261050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x261054: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x261054u;
    {
        const bool branch_taken_0x261054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261054) {
            ctx->pc = 0x261070u;
            goto label_261070;
        }
    }
    ctx->pc = 0x26105Cu;
    // 0x26105c: 0xde440500  ld          $a0, 0x500($s2)
    ctx->pc = 0x26105cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x261060: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x261060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x261064: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x261064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x261068: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x261068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26106c: 0xfe430500  sd          $v1, 0x500($s2)
    ctx->pc = 0x26106cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 3));
label_261070:
    // 0x261070: 0x9244065c  lbu         $a0, 0x65C($s2)
    ctx->pc = 0x261070u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1628)));
    // 0x261074: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x261074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x261078: 0x10830111  beq         $a0, $v1, . + 4 + (0x111 << 2)
    ctx->pc = 0x261078u;
    {
        const bool branch_taken_0x261078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x261078) {
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x261080u;
    // 0x261080: 0xde430500  ld          $v1, 0x500($s2)
    ctx->pc = 0x261080u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x261084: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x261084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x261088: 0x1060010d  beqz        $v1, . + 4 + (0x10D << 2)
    ctx->pc = 0x261088u;
    {
        const bool branch_taken_0x261088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261088) {
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x261090u;
    // 0x261090: 0x8e4306c8  lw          $v1, 0x6C8($s2)
    ctx->pc = 0x261090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1736)));
    // 0x261094: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x261094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x261098: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x261098u;
    {
        const bool branch_taken_0x261098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261098u;
        // 0x26109c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261098) {
            ctx->pc = 0x2610B8u;
            goto label_2610b8;
        }
    }
    ctx->pc = 0x2610A0u;
    // 0x2610a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2610a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2610a4: 0x8c23ceec  lw          $v1, -0x3114($at)
    ctx->pc = 0x2610a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEECu));
    // 0x2610a8: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x2610a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2610ac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2610ACu;
    {
        const bool branch_taken_0x2610ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2610ac) {
            ctx->pc = 0x2610D0u;
            goto label_2610d0;
        }
    }
    ctx->pc = 0x2610B4u;
    // 0x2610b4: 0x0  nop
    ctx->pc = 0x2610b4u;
    // NOP
label_2610b8:
    // 0x2610b8: 0x8e4507c0  lw          $a1, 0x7C0($s2)
    ctx->pc = 0x2610b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1984)));
    // 0x2610bc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2610bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2610c0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2610C0u;
    SET_GPR_U32(ctx, 31, 0x2610C8u);
    ctx->pc = 0x2610C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2610C0u;
    // 0x2610c4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2610C0u, 0x2610C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2610C8u;
label_2610c8:
    // 0x2610c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2610c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2610cc: 0x0  nop
    ctx->pc = 0x2610ccu;
    // NOP
label_2610d0:
    // 0x2610d0: 0x16200049  bnez        $s1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2610D0u;
    {
        const bool branch_taken_0x2610d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2610D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610D0u;
        // 0x2610d4: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610d0) {
            ctx->pc = 0x2611F8u;
            goto label_2611f8;
        }
    }
    ctx->pc = 0x2610D8u;
    // 0x2610d8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2610d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2610dc: 0x8c302410  lw          $s0, 0x2410($at)
    ctx->pc = 0x2610dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
    // 0x2610e0: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2610e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2610e4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2610e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2610e8: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2610E8u;
    {
        const bool branch_taken_0x2610e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2610e8) {
            ctx->pc = 0x2611F8u;
            goto label_2611f8;
        }
    }
    ctx->pc = 0x2610F0u;
label_2610f0:
    // 0x2610f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2610f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2610f4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2610f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2610f8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2610f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2610fc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2610FCu;
    {
        const bool branch_taken_0x2610fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2610fc) {
            ctx->pc = 0x261118u;
            goto label_261118;
        }
    }
    ctx->pc = 0x261104u;
    // 0x261104: 0x9204000a  lbu         $a0, 0xA($s0)
    ctx->pc = 0x261104u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x261108: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x261108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26110c: 0x14830036  bne         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x26110Cu;
    {
        const bool branch_taken_0x26110c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26110c) {
            ctx->pc = 0x2611E8u;
            goto label_2611e8;
        }
    }
    ctx->pc = 0x261114u;
    // 0x261114: 0x0  nop
    ctx->pc = 0x261114u;
    // NOP
label_261118:
    // 0x261118: 0x8e0306c8  lw          $v1, 0x6C8($s0)
    ctx->pc = 0x261118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x26111c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x26111cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x261120: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x261120u;
    {
        const bool branch_taken_0x261120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261120) {
            ctx->pc = 0x2611E8u;
            goto label_2611e8;
        }
    }
    ctx->pc = 0x261128u;
    // 0x261128: 0x92032ab0  lbu         $v1, 0x2AB0($s0)
    ctx->pc = 0x261128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x26112c: 0x306300e0  andi        $v1, $v1, 0xE0
    ctx->pc = 0x26112cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)224);
    // 0x261130: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x261130u;
    {
        const bool branch_taken_0x261130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261130u;
        // 0x261134: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261130) {
            ctx->pc = 0x2611E8u;
            goto label_2611e8;
        }
    }
    ctx->pc = 0x261138u;
    // 0x261138: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x261138u;
    SET_GPR_U32(ctx, 31, 0x261140u);
    ctx->pc = 0x26113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261138u;
    // 0x26113c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x261138u, 0x261140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261140u;
label_261140:
    // 0x261140: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x261140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x261144: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x261144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x261148: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x261148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26114c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26114cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x261150: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x261150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261154: 0x0  nop
    ctx->pc = 0x261154u;
    // NOP
    // 0x261158: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x261158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26115c: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x26115cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x261160: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x261160u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x261164: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x261164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x261168: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x261168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26116c: 0x0  nop
    ctx->pc = 0x26116cu;
    // NOP
    // 0x261170: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x261170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x261174: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x261174u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x261178: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x261178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x26117c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x26117cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x261180: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x261180u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x261184: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x261184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261188: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x261188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26118c: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x26118Cu;
    SET_GPR_U32(ctx, 31, 0x261194u);
    ctx->pc = 0x261190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26118Cu;
    // 0x261190: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x26118Cu, 0x261194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261194u;
label_261194:
    // 0x261194: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x261194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x261198: 0xc096988  jal         func_25A620
    ctx->pc = 0x261198u;
    SET_GPR_U32(ctx, 31, 0x2611A0u);
    ctx->pc = 0x26119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261198u;
    // 0x26119c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x261198u, 0x2611A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611A0u;
label_2611a0:
    // 0x2611a0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2611a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2611a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2611a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2611a8: 0x0  nop
    ctx->pc = 0x2611a8u;
    // NOP
    // 0x2611ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2611acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2611b0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2611B0u;
    {
        const bool branch_taken_0x2611b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2611b0) {
            ctx->pc = 0x2611E8u;
            goto label_2611e8;
        }
    }
    ctx->pc = 0x2611B8u;
    // 0x2611b8: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x2611b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x2611bc: 0x24030098  addiu       $v1, $zero, 0x98
    ctx->pc = 0x2611bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x2611c0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2611C0u;
    {
        const bool branch_taken_0x2611c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2611c0) {
            ctx->pc = 0x2611D0u;
            goto label_2611d0;
        }
    }
    ctx->pc = 0x2611C8u;
    // 0x2611c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2611C8u;
    {
        const bool branch_taken_0x2611c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2611CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611C8u;
        // 0x2611cc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611c8) {
            ctx->pc = 0x2611F8u;
            goto label_2611f8;
        }
    }
    ctx->pc = 0x2611D0u;
label_2611d0:
    // 0x2611d0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2611d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2611d4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2611D4u;
    {
        const bool branch_taken_0x2611d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2611d4) {
            ctx->pc = 0x2611E8u;
            goto label_2611e8;
        }
    }
    ctx->pc = 0x2611DCu;
    // 0x2611dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2611dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2611e0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2611e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2611e4: 0x0  nop
    ctx->pc = 0x2611e4u;
    // NOP
label_2611e8:
    // 0x2611e8: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x2611e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2611ec: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2611ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2611f0: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x2611F0u;
    {
        const bool branch_taken_0x2611f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2611f0) {
            ctx->pc = 0x2610F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2610f0;
        }
    }
    ctx->pc = 0x2611F8u;
label_2611f8:
    // 0x2611f8: 0x1220006f  beqz        $s1, . + 4 + (0x6F << 2)
    ctx->pc = 0x2611F8u;
    {
        const bool branch_taken_0x2611f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2611f8) {
            ctx->pc = 0x2613B8u;
            goto label_2613b8;
        }
    }
    ctx->pc = 0x261200u;
    // 0x261200: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x261200u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x261204: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x261204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x261208: 0x1483006b  bne         $a0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x261208u;
    {
        const bool branch_taken_0x261208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x261208) {
            ctx->pc = 0x2613B8u;
            goto label_2613b8;
        }
    }
    ctx->pc = 0x261210u;
    // 0x261210: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x261210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x261214: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x261214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x261218: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x261218u;
    {
        const bool branch_taken_0x261218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261218) {
            ctx->pc = 0x261230u;
            goto label_261230;
        }
    }
    ctx->pc = 0x261220u;
    // 0x261220: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x261220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
    // 0x261224: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x261224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x261228: 0x106000a5  beqz        $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x261228u;
    {
        const bool branch_taken_0x261228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261228) {
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x261230u;
label_261230:
    // 0x261230: 0x92432ad9  lbu         $v1, 0x2AD9($s2)
    ctx->pc = 0x261230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10969)));
    // 0x261234: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x261234u;
    {
        const bool branch_taken_0x261234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261234) {
            ctx->pc = 0x2612A0u;
            goto label_2612a0;
        }
    }
    ctx->pc = 0x26123Cu;
    // 0x26123c: 0x92232ab0  lbu         $v1, 0x2AB0($s1)
    ctx->pc = 0x26123cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10928)));
    // 0x261240: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x261240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x261244: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x261244u;
    {
        const bool branch_taken_0x261244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261244u;
        // 0x261248: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261244) {
            ctx->pc = 0x2612A0u;
            goto label_2612a0;
        }
    }
    ctx->pc = 0x26124Cu;
    // 0x26124c: 0xc096988  jal         func_25A620
    ctx->pc = 0x26124Cu;
    SET_GPR_U32(ctx, 31, 0x261254u);
    ctx->pc = 0x261250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26124Cu;
    // 0x261250: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x26124Cu, 0x261254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261254u;
label_261254:
    // 0x261254: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x261254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x261258: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x261258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26125c: 0x0  nop
    ctx->pc = 0x26125cu;
    // NOP
    // 0x261260: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x261260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261264: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x261264u;
    {
        const bool branch_taken_0x261264 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x261264) {
            ctx->pc = 0x2612A0u;
            goto label_2612a0;
        }
    }
    ctx->pc = 0x26126Cu;
    // 0x26126c: 0xde440500  ld          $a0, 0x500($s2)
    ctx->pc = 0x26126cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x261270: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x261270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x261274: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x261274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x261278: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x261278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26127c: 0xfe430500  sd          $v1, 0x500($s2)
    ctx->pc = 0x26127cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 3));
    // 0x261280: 0xa2402abf  sb          $zero, 0x2ABF($s2)
    ctx->pc = 0x261280u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10943), (uint8_t)GPR_U32(ctx, 0));
    // 0x261284: 0xa2402abe  sb          $zero, 0x2ABE($s2)
    ctx->pc = 0x261284u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10942), (uint8_t)GPR_U32(ctx, 0));
    // 0x261288: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x261288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26128c: 0xae4307c8  sw          $v1, 0x7C8($s2)
    ctx->pc = 0x26128cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1992), GPR_U32(ctx, 3));
    // 0x261290: 0x8e4306cc  lw          $v1, 0x6CC($s2)
    ctx->pc = 0x261290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1740)));
    // 0x261294: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x261294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x261298: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x261298u;
    {
        const bool branch_taken_0x261298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261298u;
        // 0x26129c: 0xae4306cc  sw          $v1, 0x6CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261298) {
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x2612A0u;
label_2612a0:
    // 0x2612a0: 0x92262ab0  lbu         $a2, 0x2AB0($s1)
    ctx->pc = 0x2612a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10928)));
    // 0x2612a4: 0x30c30040  andi        $v1, $a2, 0x40
    ctx->pc = 0x2612a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x2612a8: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2612A8u;
    {
        const bool branch_taken_0x2612a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2612a8) {
            ctx->pc = 0x261350u;
            goto label_261350;
        }
    }
    ctx->pc = 0x2612B0u;
    // 0x2612b0: 0x878480f8  lh          $a0, -0x7F08($gp)
    ctx->pc = 0x2612b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934776)));
    // 0x2612b4: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x2612b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2612b8: 0x938380fa  lbu         $v1, -0x7F06($gp)
    ctx->pc = 0x2612b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934778)));
    // 0x2612bc: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x2612bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2612c0: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x2612c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2612c4: 0x924308e8  lbu         $v1, 0x8E8($s2)
    ctx->pc = 0x2612c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x2612c8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2612c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2612cc: 0x9063006c  lbu         $v1, 0x6C($v1)
    ctx->pc = 0x2612ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x2612d0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2612d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2612d4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2612D4u;
    {
        const bool branch_taken_0x2612d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2612D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612D4u;
        // 0x2612d8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2612d4) {
            ctx->pc = 0x261350u;
            goto label_261350;
        }
    }
    ctx->pc = 0x2612DCu;
    // 0x2612dc: 0xc096988  jal         func_25A620
    ctx->pc = 0x2612DCu;
    SET_GPR_U32(ctx, 31, 0x2612E4u);
    ctx->pc = 0x2612E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2612DCu;
    // 0x2612e0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x2612DCu, 0x2612E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2612E4u;
label_2612e4:
    // 0x2612e4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2612e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2612e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2612e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2612ec: 0x0  nop
    ctx->pc = 0x2612ecu;
    // NOP
    // 0x2612f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2612f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2612f4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x2612F4u;
    {
        const bool branch_taken_0x2612f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2612f4) {
            ctx->pc = 0x261350u;
            goto label_261350;
        }
    }
    ctx->pc = 0x2612FCu;
    // 0x2612fc: 0xde450500  ld          $a1, 0x500($s2)
    ctx->pc = 0x2612fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x261300: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x261300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x261304: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x261304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x261308: 0x24030098  addiu       $v1, $zero, 0x98
    ctx->pc = 0x261308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x26130c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x26130cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x261310: 0xfe440500  sd          $a0, 0x500($s2)
    ctx->pc = 0x261310u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 4));
    // 0x261314: 0xa2402abf  sb          $zero, 0x2ABF($s2)
    ctx->pc = 0x261314u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10943), (uint8_t)GPR_U32(ctx, 0));
    // 0x261318: 0x9224065c  lbu         $a0, 0x65C($s1)
    ctx->pc = 0x261318u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x26131c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26131Cu;
    {
        const bool branch_taken_0x26131c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x261320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26131Cu;
        // 0x261320: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26131c) {
            ctx->pc = 0x261330u;
            goto label_261330;
        }
    }
    ctx->pc = 0x261324u;
    // 0x261324: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x261324u;
    {
        const bool branch_taken_0x261324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261324u;
        // 0x261328: 0xa2432abe  sb          $v1, 0x2ABE($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 10942), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261324) {
            ctx->pc = 0x261338u;
            goto label_261338;
        }
    }
    ctx->pc = 0x26132Cu;
    // 0x26132c: 0x0  nop
    ctx->pc = 0x26132cu;
    // NOP
label_261330:
    // 0x261330: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x261330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x261334: 0xa2432abe  sb          $v1, 0x2ABE($s2)
    ctx->pc = 0x261334u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10942), (uint8_t)GPR_U32(ctx, 3));
label_261338:
    // 0x261338: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x261338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26133c: 0xae4307c8  sw          $v1, 0x7C8($s2)
    ctx->pc = 0x26133cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1992), GPR_U32(ctx, 3));
    // 0x261340: 0x8e4306cc  lw          $v1, 0x6CC($s2)
    ctx->pc = 0x261340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1740)));
    // 0x261344: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x261344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x261348: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x261348u;
    {
        const bool branch_taken_0x261348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261348u;
        // 0x26134c: 0xae4306cc  sw          $v1, 0x6CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261348) {
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x261350u;
label_261350:
    // 0x261350: 0x92232ab0  lbu         $v1, 0x2AB0($s1)
    ctx->pc = 0x261350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10928)));
    // 0x261354: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x261354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x261358: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x261358u;
    {
        const bool branch_taken_0x261358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261358u;
        // 0x26135c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261358) {
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x261360u;
    // 0x261360: 0xc096988  jal         func_25A620
    ctx->pc = 0x261360u;
    SET_GPR_U32(ctx, 31, 0x261368u);
    ctx->pc = 0x261364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261360u;
    // 0x261364: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x261360u, 0x261368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261368u;
label_261368:
    // 0x261368: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x261368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x26136c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x26136cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261370: 0x0  nop
    ctx->pc = 0x261370u;
    // NOP
    // 0x261374: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x261374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261378: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x261378u;
    {
        const bool branch_taken_0x261378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x261378) {
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x261380u;
    // 0x261380: 0xde450500  ld          $a1, 0x500($s2)
    ctx->pc = 0x261380u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x261384: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x261384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x261388: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x261388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26138c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26138cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x261390: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x261390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x261394: 0xfe440500  sd          $a0, 0x500($s2)
    ctx->pc = 0x261394u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 4));
    // 0x261398: 0xa2402abf  sb          $zero, 0x2ABF($s2)
    ctx->pc = 0x261398u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10943), (uint8_t)GPR_U32(ctx, 0));
    // 0x26139c: 0xa2432abe  sb          $v1, 0x2ABE($s2)
    ctx->pc = 0x26139cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10942), (uint8_t)GPR_U32(ctx, 3));
    // 0x2613a0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2613a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2613a4: 0xae4307c8  sw          $v1, 0x7C8($s2)
    ctx->pc = 0x2613a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1992), GPR_U32(ctx, 3));
    // 0x2613a8: 0x8e4306cc  lw          $v1, 0x6CC($s2)
    ctx->pc = 0x2613a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1740)));
    // 0x2613ac: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2613acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2613b0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2613B0u;
    {
        const bool branch_taken_0x2613b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2613B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613B0u;
        // 0x2613b4: 0xae4306cc  sw          $v1, 0x6CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2613b0) {
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x2613B8u;
label_2613b8:
    // 0x2613b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2613b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2613bc: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2613bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2613c0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2613c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2613c4: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2613C4u;
    {
        const bool branch_taken_0x2613c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2613C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613C4u;
        // 0x2613c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2613c4) {
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x2613CCu;
    // 0x2613cc: 0xc0a7330  jal         func_29CCC0
    ctx->pc = 0x2613CCu;
    SET_GPR_U32(ctx, 31, 0x2613D4u);
    ctx->pc = 0x29CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CCC0u, 0x2613CCu, 0x2613D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2613D4u;
label_2613d4:
    // 0x2613d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2613d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613d8: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2613D8u;
    {
        const bool branch_taken_0x2613d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2613d8) {
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x2613E0u;
    // 0x2613e0: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x2613e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2613e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2613e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2613e8: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2613E8u;
    {
        const bool branch_taken_0x2613e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2613e8) {
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x2613F0u;
    // 0x2613f0: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x2613f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x2613f4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2613f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2613f8: 0x14830031  bne         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2613F8u;
    {
        const bool branch_taken_0x2613f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2613f8) {
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x261400u;
    // 0x261400: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x261400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x261404: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x261404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x261408: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x261408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26140c: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x26140cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x261410: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x261410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x261414: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x261414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x261418: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x261418u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26141c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26141cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261420: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x261420u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x261424: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x261424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x261428: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x261428u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26142c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x26142Cu;
    {
        const bool branch_taken_0x26142c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x261430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26142Cu;
        // 0x261430: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26142c) {
            ctx->pc = 0x261444u;
            goto label_261444;
        }
    }
    ctx->pc = 0x261434u;
    // 0x261434: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x261434u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x261438: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x261438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x26143c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26143Cu;
    {
        const bool branch_taken_0x26143c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26143Cu;
        // 0x261440: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26143c) {
            ctx->pc = 0x261460u;
            goto label_261460;
        }
    }
    ctx->pc = 0x261444u;
label_261444:
    // 0x261444: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x261444u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x261448: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x261448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x26144c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26144cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x261450: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x261450u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x261454: 0x0  nop
    ctx->pc = 0x261454u;
    // NOP
    // 0x261458: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x261458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26145c: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x26145cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_261460:
    // 0x261460: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x261460u;
    {
        const bool branch_taken_0x261460 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x261460) {
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x261468u;
    // 0x261468: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x261468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x26146c: 0xc096988  jal         func_25A620
    ctx->pc = 0x26146Cu;
    SET_GPR_U32(ctx, 31, 0x261474u);
    ctx->pc = 0x261470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26146Cu;
    // 0x261470: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x26146Cu, 0x261474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261474u;
label_261474:
    // 0x261474: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x261474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x261478: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x261478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26147c: 0x0  nop
    ctx->pc = 0x26147cu;
    // NOP
    // 0x261480: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x261480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261484: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x261484u;
    {
        const bool branch_taken_0x261484 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x261484) {
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x26148Cu;
    // 0x26148c: 0xde440500  ld          $a0, 0x500($s2)
    ctx->pc = 0x26148cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x261490: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x261490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x261494: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x261494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x261498: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x261498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26149c: 0xfe430500  sd          $v1, 0x500($s2)
    ctx->pc = 0x26149cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 3));
    // 0x2614a0: 0xa2402abf  sb          $zero, 0x2ABF($s2)
    ctx->pc = 0x2614a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10943), (uint8_t)GPR_U32(ctx, 0));
    // 0x2614a4: 0xa2402abe  sb          $zero, 0x2ABE($s2)
    ctx->pc = 0x2614a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10942), (uint8_t)GPR_U32(ctx, 0));
    // 0x2614a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2614a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2614ac: 0xae4307c8  sw          $v1, 0x7C8($s2)
    ctx->pc = 0x2614acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1992), GPR_U32(ctx, 3));
    // 0x2614b0: 0x8e4306cc  lw          $v1, 0x6CC($s2)
    ctx->pc = 0x2614b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1740)));
    // 0x2614b4: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2614b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2614b8: 0xae4306cc  sw          $v1, 0x6CC($s2)
    ctx->pc = 0x2614b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1740), GPR_U32(ctx, 3));
    // 0x2614bc: 0x0  nop
    ctx->pc = 0x2614bcu;
    // NOP
label_2614c0:
    // 0x2614c0: 0xde430500  ld          $v1, 0x500($s2)
    ctx->pc = 0x2614c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x2614c4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2614c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2614c8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2614C8u;
    {
        const bool branch_taken_0x2614c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2614c8) {
            ctx->pc = 0x261548u;
            goto label_261548;
        }
    }
    ctx->pc = 0x2614D0u;
    // 0x2614d0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2614d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2614d4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2614d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2614d8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2614d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2614dc: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2614dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2614e0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2614e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2614e4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2614e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2614e8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2614e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2614ec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2614ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2614f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2614f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2614f4: 0x0  nop
    ctx->pc = 0x2614f4u;
    // NOP
    // 0x2614f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2614f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2614fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2614fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261500: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x261500u;
    {
        const bool branch_taken_0x261500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261500) {
            ctx->pc = 0x261518u;
            goto label_261518;
        }
    }
    ctx->pc = 0x261508u;
    // 0x261508: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x261508u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x26150c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x26150cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x261510: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x261510u;
    {
        const bool branch_taken_0x261510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261510u;
        // 0x261514: 0x92432ad9  lbu         $v1, 0x2AD9($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10969)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261510) {
            ctx->pc = 0x261534u;
            goto label_261534;
        }
    }
    ctx->pc = 0x261518u;
label_261518:
    // 0x261518: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x261518u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26151c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x26151cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x261520: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x261520u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x261524: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x261524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x261528: 0x0  nop
    ctx->pc = 0x261528u;
    // NOP
    // 0x26152c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26152cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x261530: 0x92432ad9  lbu         $v1, 0x2AD9($s2)
    ctx->pc = 0x261530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10969)));
label_261534:
    // 0x261534: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x261534u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x261538: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x261538u;
    {
        const bool branch_taken_0x261538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x261538) {
            ctx->pc = 0x261548u;
            goto label_261548;
        }
    }
    ctx->pc = 0x261540u;
    // 0x261540: 0xa2442ad9  sb          $a0, 0x2AD9($s2)
    ctx->pc = 0x261540u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10969), (uint8_t)GPR_U32(ctx, 4));
    // 0x261544: 0x0  nop
    ctx->pc = 0x261544u;
    // NOP
label_261548:
    // 0x261548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x261548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26154c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26154cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261550: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x261550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x261554: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x261554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261558: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x261558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26155c: 0x3e00008  jr          $ra
    ctx->pc = 0x26155Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26155Cu;
        // 0x261560: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26155Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261564u;
}
