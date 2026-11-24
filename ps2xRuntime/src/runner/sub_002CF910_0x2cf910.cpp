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

// Function: sub_002CF910
// Address: 0x2cf910 - 0x2cfb08
void sub_002CF910_0x2cf910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF910_0x2cf910");
#endif

    switch (ctx->pc) {
        case 0x2cfa58u: goto label_2cfa58;
        case 0x2cfab0u: goto label_2cfab0;
        case 0x2cfac4u: goto label_2cfac4;
        case 0x2cfadcu: goto label_2cfadc;
        case 0x2cfaecu: goto label_2cfaec;
        default: break;
    }

    ctx->pc = 0x2cf910u;

    // 0x2cf910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf914: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x2cf914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
    // 0x2cf918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf91c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cf91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cf924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf928: 0xac8507b8  sw          $a1, 0x7B8($a0)
    ctx->pc = 0x2cf928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1976), GPR_U32(ctx, 5));
    // 0x2cf92c: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x2cf92cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2cf930: 0x10830071  beq         $a0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2CF930u;
    {
        const bool branch_taken_0x2cf930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF930u;
        // 0x2cf934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf930) {
            ctx->pc = 0x2CFAF8u;
            goto label_2cfaf8;
        }
    }
    ctx->pc = 0x2CF938u;
    // 0x2cf938: 0x1085003f  beq         $a0, $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2CF938u;
    {
        const bool branch_taken_0x2cf938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x2cf938) {
            ctx->pc = 0x2CFA38u;
            goto label_2cfa38;
        }
    }
    ctx->pc = 0x2CF940u;
    // 0x2cf940: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF940u;
    {
        const bool branch_taken_0x2cf940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf940) {
            ctx->pc = 0x2CF950u;
            goto label_2cf950;
        }
    }
    ctx->pc = 0x2CF948u;
    // 0x2cf948: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2CF948u;
    {
        const bool branch_taken_0x2cf948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf948) {
            ctx->pc = 0x2CFAF8u;
            goto label_2cfaf8;
        }
    }
    ctx->pc = 0x2CF950u;
label_2cf950:
    // 0x2cf950: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2cf950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf954: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2cf954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf958: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2cf958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2cf95c: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x2cf95cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cf960: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2cf960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2cf964: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2cf964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cf968: 0x34830040  ori         $v1, $a0, 0x40
    ctx->pc = 0x2cf968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x2cf96c: 0xa20207f5  sb          $v0, 0x7F5($s0)
    ctx->pc = 0x2cf96cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cf970: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2cf970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2cf974: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x2cf974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2cf978: 0xa2052b59  sb          $a1, 0x2B59($s0)
    ctx->pc = 0x2cf978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cf97c: 0xa600082a  sh          $zero, 0x82A($s0)
    ctx->pc = 0x2cf97cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cf980: 0xa2050821  sb          $a1, 0x821($s0)
    ctx->pc = 0x2cf980u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cf984: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2cf984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2cf988: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CF988u;
    {
        const bool branch_taken_0x2cf988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cf988) {
            ctx->pc = 0x2CF9E8u;
            goto label_2cf9e8;
        }
    }
    ctx->pc = 0x2CF990u;
    // 0x2cf990: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2cf990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf994: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2cf994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2cf998: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cf998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cf99c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2cf99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2cf9a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cf9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf9a4: 0x0  nop
    ctx->pc = 0x2cf9a4u;
    // NOP
    // 0x2cf9a8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2cf9a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2cf9ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cf9acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf9b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CF9B0u;
    {
        const bool branch_taken_0x2cf9b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cf9b0) {
            ctx->pc = 0x2CF9C8u;
            goto label_2cf9c8;
        }
    }
    ctx->pc = 0x2CF9B8u;
    // 0x2cf9b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cf9b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cf9bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2cf9bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2cf9c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF9C0u;
    {
        const bool branch_taken_0x2cf9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF9C0u;
        // 0x2cf9c4: 0xa6020828  sh          $v0, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf9c0) {
            ctx->pc = 0x2CF9E0u;
            goto label_2cf9e0;
        }
    }
    ctx->pc = 0x2CF9C8u;
label_2cf9c8:
    // 0x2cf9c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cf9c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cf9cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cf9ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cf9d0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2cf9d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2cf9d4: 0x0  nop
    ctx->pc = 0x2cf9d4u;
    // NOP
    // 0x2cf9d8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2cf9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2cf9dc: 0xa6020828  sh          $v0, 0x828($s0)
    ctx->pc = 0x2cf9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 2));
label_2cf9e0:
    // 0x2cf9e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2CF9E0u;
    {
        const bool branch_taken_0x2cf9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf9e0) {
            ctx->pc = 0x2CFA38u;
            goto label_2cfa38;
        }
    }
    ctx->pc = 0x2CF9E8u;
label_2cf9e8:
    // 0x2cf9e8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2cf9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2cf9ec: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2cf9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf9f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cf9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cf9f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2cf9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2cf9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cf9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf9fc: 0x0  nop
    ctx->pc = 0x2cf9fcu;
    // NOP
    // 0x2cfa00: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2cfa00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2cfa04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cfa04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfa08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFA08u;
    {
        const bool branch_taken_0x2cfa08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cfa08) {
            ctx->pc = 0x2CFA20u;
            goto label_2cfa20;
        }
    }
    ctx->pc = 0x2CFA10u;
    // 0x2cfa10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cfa10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cfa14: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2cfa14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2cfa18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CFA18u;
    {
        const bool branch_taken_0x2cfa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA18u;
        // 0x2cfa1c: 0xa6020828  sh          $v0, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa18) {
            ctx->pc = 0x2CFA38u;
            goto label_2cfa38;
        }
    }
    ctx->pc = 0x2CFA20u;
label_2cfa20:
    // 0x2cfa20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cfa20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cfa24: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cfa24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cfa28: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2cfa28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2cfa2c: 0x0  nop
    ctx->pc = 0x2cfa2cu;
    // NOP
    // 0x2cfa30: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2cfa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2cfa34: 0xa6020828  sh          $v0, 0x828($s0)
    ctx->pc = 0x2cfa34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 2));
label_2cfa38:
    // 0x2cfa38: 0x96020828  lhu         $v0, 0x828($s0)
    ctx->pc = 0x2cfa38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x2cfa3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFA3Cu;
    {
        const bool branch_taken_0x2cfa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfa3c) {
            ctx->pc = 0x2CFA50u;
            goto label_2cfa50;
        }
    }
    ctx->pc = 0x2CFA44u;
    // 0x2cfa44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2cfa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2cfa48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CFA48u;
    {
        const bool branch_taken_0x2cfa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA48u;
        // 0x2cfa4c: 0xa6020828  sh          $v0, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa48) {
            ctx->pc = 0x2CFA68u;
            goto label_2cfa68;
        }
    }
    ctx->pc = 0x2CFA50u;
label_2cfa50:
    // 0x2cfa50: 0xc0a4cc4  jal         func_293310
    ctx->pc = 0x2CFA50u;
    SET_GPR_U32(ctx, 31, 0x2CFA58u);
    ctx->pc = 0x2CFA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFA50u;
    // 0x2cfa54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293310u, 0x2CFA50u, 0x2CFA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFA58u;
label_2cfa58:
    // 0x2cfa58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cfa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cfa5c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2CFA5Cu;
    {
        const bool branch_taken_0x2cfa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA5Cu;
        // 0x2cfa60: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa5c) {
            ctx->pc = 0x2CFAF8u;
            goto label_2cfaf8;
        }
    }
    ctx->pc = 0x2CFA64u;
    // 0x2cfa64: 0x0  nop
    ctx->pc = 0x2cfa64u;
    // NOP
label_2cfa68:
    // 0x2cfa68: 0x9602082a  lhu         $v0, 0x82A($s0)
    ctx->pc = 0x2cfa68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2090)));
    // 0x2cfa6c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CFA6Cu;
    {
        const bool branch_taken_0x2cfa6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfa6c) {
            ctx->pc = 0x2CFAA8u;
            goto label_2cfaa8;
        }
    }
    ctx->pc = 0x2CFA74u;
    // 0x2cfa74: 0x920207f6  lbu         $v0, 0x7F6($s0)
    ctx->pc = 0x2cfa74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2cfa78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CFA78u;
    {
        const bool branch_taken_0x2cfa78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfa78) {
            ctx->pc = 0x2CFAA8u;
            goto label_2cfaa8;
        }
    }
    ctx->pc = 0x2CFA80u;
    // 0x2cfa80: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2cfa80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfa84: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2cfa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2cfa88: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2cfa88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfa8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2cfa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2cfa90: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2cfa90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cfa94: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x2cfa94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2cfa98: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2cfa98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfa9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfaa0: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2cfaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2cfaa4: 0xa602082a  sh          $v0, 0x82A($s0)
    ctx->pc = 0x2cfaa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 2));
label_2cfaa8:
    // 0x2cfaa8: 0xc0b3cc8  jal         func_2CF320
    ctx->pc = 0x2CFAA8u;
    SET_GPR_U32(ctx, 31, 0x2CFAB0u);
    ctx->pc = 0x2CF320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF320u, 0x2CFAA8u, 0x2CFAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFAB0u;
label_2cfab0:
    // 0x2cfab0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CFAB0u;
    {
        const bool branch_taken_0x2cfab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFAB0u;
        // 0x2cfab4: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfab0) {
            ctx->pc = 0x2CFAF8u;
            goto label_2cfaf8;
        }
    }
    ctx->pc = 0x2CFAB8u;
    // 0x2cfab8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2cfab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cfabc: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2CFABCu;
    SET_GPR_U32(ctx, 31, 0x2CFAC4u);
    ctx->pc = 0x2CFAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFABCu;
    // 0x2cfac0: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2CFABCu, 0x2CFAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFAC4u;
label_2cfac4:
    // 0x2cfac4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2cfac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2cfac8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2cfac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cfacc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2cfaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2cfad0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cfad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cfad4: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x2CFAD4u;
    SET_GPR_U32(ctx, 31, 0x2CFADCu);
    ctx->pc = 0x2CFAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFAD4u;
    // 0x2cfad8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x2CFAD4u, 0x2CFADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFADCu;
label_2cfadc:
    // 0x2cfadc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x2cfadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2cfae0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2cfae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cfae4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2CFAE4u;
    SET_GPR_U32(ctx, 31, 0x2CFAECu);
    ctx->pc = 0x2CFAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFAE4u;
    // 0x2cfae8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2CFAE4u, 0x2CFAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFAECu;
label_2cfaec:
    // 0x2cfaec: 0x96030828  lhu         $v1, 0x828($s0)
    ctx->pc = 0x2cfaecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x2cfaf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cfaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cfaf4: 0xa6030828  sh          $v1, 0x828($s0)
    ctx->pc = 0x2cfaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
label_2cfaf8:
    // 0x2cfaf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cfaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfafc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cfafcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfb00: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB00u;
        // 0x2cfb04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFB08u;
}
