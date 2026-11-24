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

// Function: sub_003C8E20
// Address: 0x3c8e20 - 0x3c9200
void sub_003C8E20_0x3c8e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8E20_0x3c8e20");
#endif

    switch (ctx->pc) {
        case 0x3c9004u: goto label_3c9004;
        case 0x3c907cu: goto label_3c907c;
        case 0x3c90f4u: goto label_3c90f4;
        case 0x3c916cu: goto label_3c916c;
        default: break;
    }

    ctx->pc = 0x3c8e20u;

    // 0x3c8e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c8e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c8e24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c8e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c8e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c8e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c8e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c8e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c8e30: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x3c8e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x3c8e34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c8e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8e38: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x3c8e38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x3c8e3c: 0xac8506cc  sw          $a1, 0x6CC($a0)
    ctx->pc = 0x3c8e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 5));
    // 0x3c8e40: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x3c8e40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3c8e44: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3C8E44u;
    {
        const bool branch_taken_0x3c8e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c8e44) {
            ctx->pc = 0x3C8F00u;
            goto label_3c8f00;
        }
    }
    ctx->pc = 0x3C8E4Cu;
    // 0x3c8e4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C8E4Cu;
    {
        const bool branch_taken_0x3c8e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8e4c) {
            ctx->pc = 0x3C8E60u;
            goto label_3c8e60;
        }
    }
    ctx->pc = 0x3C8E54u;
    // 0x3c8e54: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x3C8E54u;
    {
        const bool branch_taken_0x3c8e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8e54) {
            ctx->pc = 0x3C91F0u;
            goto label_3c91f0;
        }
    }
    ctx->pc = 0x3C8E5Cu;
    // 0x3c8e5c: 0x0  nop
    ctx->pc = 0x3c8e5cu;
    // NOP
label_3c8e60:
    // 0x3c8e60: 0x34038040  ori         $v1, $zero, 0x8040
    ctx->pc = 0x3c8e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x3c8e64: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3c8e64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c8e68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c8e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c8e6c: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x3c8e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x3c8e70: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3c8e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3c8e74: 0xa2040237  sb          $a0, 0x237($s0)
    ctx->pc = 0x3c8e74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 567), (uint8_t)GPR_U32(ctx, 4));
    // 0x3c8e78: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3c8e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c8e7c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3c8e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c8e80: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3c8e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3c8e84: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3c8e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3c8e88: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3c8e8c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3c8e8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c8e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c8e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c8e94: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c8e94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c8e98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c8e98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c8e9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c8e9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c8ea0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C8EA0u;
    {
        const bool branch_taken_0x3c8ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c8ea0) {
            ctx->pc = 0x3C8EB8u;
            goto label_3c8eb8;
        }
    }
    ctx->pc = 0x3C8EA8u;
    // 0x3c8ea8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8ea8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c8eac: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3c8eacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3c8eb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C8EB0u;
    {
        const bool branch_taken_0x3c8eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8EB0u;
        // 0x3c8eb4: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8eb0) {
            ctx->pc = 0x3C8ED4u;
            goto label_3c8ed4;
        }
    }
    ctx->pc = 0x3C8EB8u;
label_3c8eb8:
    // 0x3c8eb8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c8eb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c8ebc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c8ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3c8ec0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8ec0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c8ec4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3c8ec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3c8ec8: 0x0  nop
    ctx->pc = 0x3c8ec8u;
    // NOP
    // 0x3c8ecc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3c8eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3c8ed0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3c8ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3c8ed4:
    // 0x3c8ed4: 0x240400c7  addiu       $a0, $zero, 0xC7
    ctx->pc = 0x3c8ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x3c8ed8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3c8ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8edc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c8edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3c8ee0: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3c8ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c8ee4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3c8ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3c8ee8: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x3c8ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3c8eec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c8eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c8ef0: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3c8ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3c8ef4: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x3C8EF4u;
    {
        const bool branch_taken_0x3c8ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8EF4u;
        // 0x3c8ef8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ef4) {
            ctx->pc = 0x3C91F0u;
            goto label_3c91f0;
        }
    }
    ctx->pc = 0x3C8EFCu;
    // 0x3c8efc: 0x0  nop
    ctx->pc = 0x3c8efcu;
    // NOP
label_3c8f00:
    // 0x3c8f00: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x3c8f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x3c8f04: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3c8f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c8f08: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3c8f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c8f0c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3c8f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3c8f10: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3c8f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3c8f14: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c8f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3c8f18: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c8f18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c8f1c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3c8f1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c8f20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c8f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c8f24: 0x0  nop
    ctx->pc = 0x3c8f24u;
    // NOP
    // 0x3c8f28: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c8f28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c8f2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c8f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c8f30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C8F30u;
    {
        const bool branch_taken_0x3c8f30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F30u;
        // 0x3c8f34: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f30) {
            ctx->pc = 0x3C8F48u;
            goto label_3c8f48;
        }
    }
    ctx->pc = 0x3C8F38u;
    // 0x3c8f38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8f38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c8f3c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3c8f3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c8f40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C8F40u;
    {
        const bool branch_taken_0x3c8f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8f40) {
            ctx->pc = 0x3C8F60u;
            goto label_3c8f60;
        }
    }
    ctx->pc = 0x3C8F48u;
label_3c8f48:
    // 0x3c8f48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c8f48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c8f4c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c8f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3c8f50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8f50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c8f54: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3c8f54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c8f58: 0x0  nop
    ctx->pc = 0x3c8f58u;
    // NOP
    // 0x3c8f5c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c8f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c8f60:
    // 0x3c8f60: 0x14a4000b  bne         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C8F60u;
    {
        const bool branch_taken_0x3c8f60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c8f60) {
            ctx->pc = 0x3C8F90u;
            goto label_3c8f90;
        }
    }
    ctx->pc = 0x3C8F68u;
    // 0x3c8f68: 0x8e0504cc  lw          $a1, 0x4CC($s0)
    ctx->pc = 0x3c8f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1228)));
    // 0x3c8f6c: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x3c8f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x3c8f70: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3c8f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x3c8f74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3c8f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3c8f78: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x3c8f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3c8f7c: 0xae0404cc  sw          $a0, 0x4CC($s0)
    ctx->pc = 0x3c8f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 4));
    // 0x3c8f80: 0x8e0404cc  lw          $a0, 0x4CC($s0)
    ctx->pc = 0x3c8f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1228)));
    // 0x3c8f84: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3c8f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3c8f88: 0xae0304cc  sw          $v1, 0x4CC($s0)
    ctx->pc = 0x3c8f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 3));
    // 0x3c8f8c: 0x0  nop
    ctx->pc = 0x3c8f8cu;
    // NOP
label_3c8f90:
    // 0x3c8f90: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x3c8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x3c8f94: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3c8f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c8f98: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3c8f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c8f9c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3c8f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3c8fa0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3c8fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3c8fa4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c8fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3c8fa8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c8fa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c8fac: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3c8facu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c8fb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c8fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c8fb4: 0x0  nop
    ctx->pc = 0x3c8fb4u;
    // NOP
    // 0x3c8fb8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c8fb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c8fbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c8fbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c8fc0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C8FC0u;
    {
        const bool branch_taken_0x3c8fc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8FC0u;
        // 0x3c8fc4: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8fc0) {
            ctx->pc = 0x3C8FD8u;
            goto label_3c8fd8;
        }
    }
    ctx->pc = 0x3C8FC8u;
    // 0x3c8fc8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8fc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c8fcc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3c8fccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c8fd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C8FD0u;
    {
        const bool branch_taken_0x3c8fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8fd0) {
            ctx->pc = 0x3C8FF0u;
            goto label_3c8ff0;
        }
    }
    ctx->pc = 0x3C8FD8u;
label_3c8fd8:
    // 0x3c8fd8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c8fd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c8fdc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c8fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3c8fe0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8fe0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c8fe4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3c8fe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c8fe8: 0x0  nop
    ctx->pc = 0x3c8fe8u;
    // NOP
    // 0x3c8fec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c8fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c8ff0:
    // 0x3c8ff0: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C8FF0u;
    {
        const bool branch_taken_0x3c8ff0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c8ff0) {
            ctx->pc = 0x3C9008u;
            goto label_3c9008;
        }
    }
    ctx->pc = 0x3C8FF8u;
    // 0x3c8ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8ffc: 0xc0bfaa8  jal         func_2FEAA0
    ctx->pc = 0x3C8FFCu;
    SET_GPR_U32(ctx, 31, 0x3C9004u);
    ctx->pc = 0x3C9000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8FFCu;
    // 0x3c9000: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x3C8FFCu, 0x3C9004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9004u;
label_3c9004:
    // 0x3c9004: 0x0  nop
    ctx->pc = 0x3c9004u;
    // NOP
label_3c9008:
    // 0x3c9008: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x3c9008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x3c900c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3c900cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c9010: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3c9010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c9014: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3c9014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3c9018: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3c9018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3c901c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c901cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3c9020: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c9020u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c9024: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3c9024u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c9028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c9028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c902c: 0x0  nop
    ctx->pc = 0x3c902cu;
    // NOP
    // 0x3c9030: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c9030u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c9034: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c9034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c9038: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9038u;
    {
        const bool branch_taken_0x3c9038 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9038u;
        // 0x3c903c: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9038) {
            ctx->pc = 0x3C9050u;
            goto label_3c9050;
        }
    }
    ctx->pc = 0x3C9040u;
    // 0x3c9040: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c9040u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c9044: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3c9044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c9048: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C9048u;
    {
        const bool branch_taken_0x3c9048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9048) {
            ctx->pc = 0x3C9068u;
            goto label_3c9068;
        }
    }
    ctx->pc = 0x3C9050u;
label_3c9050:
    // 0x3c9050: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c9050u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c9054: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c9054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3c9058: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c9058u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c905c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3c905cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c9060: 0x0  nop
    ctx->pc = 0x3c9060u;
    // NOP
    // 0x3c9064: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c9064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c9068:
    // 0x3c9068: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9068u;
    {
        const bool branch_taken_0x3c9068 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c9068) {
            ctx->pc = 0x3C9080u;
            goto label_3c9080;
        }
    }
    ctx->pc = 0x3C9070u;
    // 0x3c9070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9074: 0xc0bfaa8  jal         func_2FEAA0
    ctx->pc = 0x3C9074u;
    SET_GPR_U32(ctx, 31, 0x3C907Cu);
    ctx->pc = 0x3C9078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9074u;
    // 0x3c9078: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x3C9074u, 0x3C907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C907Cu;
label_3c907c:
    // 0x3c907c: 0x0  nop
    ctx->pc = 0x3c907cu;
    // NOP
label_3c9080:
    // 0x3c9080: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x3c9080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x3c9084: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3c9084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c9088: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3c9088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c908c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3c908cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3c9090: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3c9090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3c9094: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c9094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3c9098: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c9098u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c909c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3c909cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c90a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c90a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c90a4: 0x0  nop
    ctx->pc = 0x3c90a4u;
    // NOP
    // 0x3c90a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c90a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c90ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c90acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c90b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C90B0u;
    {
        const bool branch_taken_0x3c90b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C90B0u;
        // 0x3c90b4: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c90b0) {
            ctx->pc = 0x3C90C8u;
            goto label_3c90c8;
        }
    }
    ctx->pc = 0x3C90B8u;
    // 0x3c90b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c90b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c90bc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3c90bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c90c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C90C0u;
    {
        const bool branch_taken_0x3c90c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c90c0) {
            ctx->pc = 0x3C90E0u;
            goto label_3c90e0;
        }
    }
    ctx->pc = 0x3C90C8u;
label_3c90c8:
    // 0x3c90c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c90c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c90cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c90ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3c90d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c90d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c90d4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3c90d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c90d8: 0x0  nop
    ctx->pc = 0x3c90d8u;
    // NOP
    // 0x3c90dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c90dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c90e0:
    // 0x3c90e0: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C90E0u;
    {
        const bool branch_taken_0x3c90e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c90e0) {
            ctx->pc = 0x3C90F8u;
            goto label_3c90f8;
        }
    }
    ctx->pc = 0x3C90E8u;
    // 0x3c90e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c90e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c90ec: 0xc0bfaa8  jal         func_2FEAA0
    ctx->pc = 0x3C90ECu;
    SET_GPR_U32(ctx, 31, 0x3C90F4u);
    ctx->pc = 0x3C90F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C90ECu;
    // 0x3c90f0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x3C90ECu, 0x3C90F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C90F4u;
label_3c90f4:
    // 0x3c90f4: 0x0  nop
    ctx->pc = 0x3c90f4u;
    // NOP
label_3c90f8:
    // 0x3c90f8: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x3c90f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x3c90fc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3c90fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c9100: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3c9100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c9104: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3c9104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3c9108: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3c9108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3c910c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c910cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3c9110: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c9110u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c9114: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3c9114u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c9118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c9118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c911c: 0x0  nop
    ctx->pc = 0x3c911cu;
    // NOP
    // 0x3c9120: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c9120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c9124: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c9124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c9128: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9128u;
    {
        const bool branch_taken_0x3c9128 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9128u;
        // 0x3c912c: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9128) {
            ctx->pc = 0x3C9140u;
            goto label_3c9140;
        }
    }
    ctx->pc = 0x3C9130u;
    // 0x3c9130: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c9130u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c9134: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3c9134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c9138: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C9138u;
    {
        const bool branch_taken_0x3c9138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9138) {
            ctx->pc = 0x3C9158u;
            goto label_3c9158;
        }
    }
    ctx->pc = 0x3C9140u;
label_3c9140:
    // 0x3c9140: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c9140u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c9144: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c9144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3c9148: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c9148u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c914c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3c914cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c9150: 0x0  nop
    ctx->pc = 0x3c9150u;
    // NOP
    // 0x3c9154: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c9154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c9158:
    // 0x3c9158: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9158u;
    {
        const bool branch_taken_0x3c9158 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c9158) {
            ctx->pc = 0x3C9170u;
            goto label_3c9170;
        }
    }
    ctx->pc = 0x3C9160u;
    // 0x3c9160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9164: 0xc0bfaa8  jal         func_2FEAA0
    ctx->pc = 0x3C9164u;
    SET_GPR_U32(ctx, 31, 0x3C916Cu);
    ctx->pc = 0x3C9168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9164u;
    // 0x3c9168: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x3C9164u, 0x3C916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C916Cu;
label_3c916c:
    // 0x3c916c: 0x0  nop
    ctx->pc = 0x3c916cu;
    // NOP
label_3c9170:
    // 0x3c9170: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3c9170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3c9174: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C9174u;
    {
        const bool branch_taken_0x3c9174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9174) {
            ctx->pc = 0x3C91F0u;
            goto label_3c91f0;
        }
    }
    ctx->pc = 0x3C917Cu;
    // 0x3c917c: 0x9608078c  lhu         $t0, 0x78C($s0)
    ctx->pc = 0x3c917cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3c9180: 0x3c04ffef  lui         $a0, 0xFFEF
    ctx->pc = 0x3c9180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65519 << 16));
    // 0x3c9184: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x3c9184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x3c9188: 0x2407dfff  addiu       $a3, $zero, -0x2001
    ctx->pc = 0x3c9188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x3c918c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x3c918cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x3c9190: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3c9190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3c9194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c9194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c9198: 0x31087f00  andi        $t0, $t0, 0x7F00
    ctx->pc = 0x3c9198u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32512);
    // 0x3c919c: 0xa608078c  sh          $t0, 0x78C($s0)
    ctx->pc = 0x3c919cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 8));
    // 0x3c91a0: 0xae0607b8  sw          $a2, 0x7B8($s0)
    ctx->pc = 0x3c91a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 6));
    // 0x3c91a4: 0x8e0606c8  lw          $a2, 0x6C8($s0)
    ctx->pc = 0x3c91a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3c91a8: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x3c91a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x3c91ac: 0xae0606c8  sw          $a2, 0x6C8($s0)
    ctx->pc = 0x3c91acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 6));
    // 0x3c91b0: 0x8e0606cc  lw          $a2, 0x6CC($s0)
    ctx->pc = 0x3c91b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3c91b4: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x3c91b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x3c91b8: 0xae0606cc  sw          $a2, 0x6CC($s0)
    ctx->pc = 0x3c91b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 6));
    // 0x3c91bc: 0xa2000790  sb          $zero, 0x790($s0)
    ctx->pc = 0x3c91bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1936), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c91c0: 0x8e0604cc  lw          $a2, 0x4CC($s0)
    ctx->pc = 0x3c91c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1228)));
    // 0x3c91c4: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x3c91c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3c91c8: 0xae0504cc  sw          $a1, 0x4CC($s0)
    ctx->pc = 0x3c91c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 5));
    // 0x3c91cc: 0x8e0504cc  lw          $a1, 0x4CC($s0)
    ctx->pc = 0x3c91ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1228)));
    // 0x3c91d0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x3c91d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x3c91d4: 0xae0404cc  sw          $a0, 0x4CC($s0)
    ctx->pc = 0x3c91d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 4));
    // 0x3c91d8: 0xa2002b25  sb          $zero, 0x2B25($s0)
    ctx->pc = 0x3c91d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11045), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c91dc: 0xa20029d1  sb          $zero, 0x29D1($s0)
    ctx->pc = 0x3c91dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c91e0: 0xa6032b2c  sh          $v1, 0x2B2C($s0)
    ctx->pc = 0x3c91e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11052), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c91e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C91E4u;
    {
        const bool branch_taken_0x3c91e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C91E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C91E4u;
        // 0x3c91e8: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c91e4) {
            ctx->pc = 0x3C91F0u;
            goto label_3c91f0;
        }
    }
    ctx->pc = 0x3C91ECu;
    // 0x3c91ec: 0x0  nop
    ctx->pc = 0x3c91ecu;
    // NOP
label_3c91f0:
    // 0x3c91f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c91f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c91f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c91f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c91f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C91F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C91F8u;
        // 0x3c91fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C91F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9200u;
}
