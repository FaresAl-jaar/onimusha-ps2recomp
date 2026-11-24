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

// Function: sub_003EBC40
// Address: 0x3ebc40 - 0x3ebe18
void sub_003EBC40_0x3ebc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBC40_0x3ebc40");
#endif

    switch (ctx->pc) {
        case 0x3ebdd8u: goto label_3ebdd8;
        default: break;
    }

    ctx->pc = 0x3ebc40u;

    // 0x3ebc40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ebc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ebc44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ebc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ebc48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ebc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ebc4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ebc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ebc50: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3ebc50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ebc54: 0x10650030  beq         $v1, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3EBC54u;
    {
        const bool branch_taken_0x3ebc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3EBC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC54u;
        // 0x3ebc58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebc54) {
            ctx->pc = 0x3EBD18u;
            goto label_3ebd18;
        }
    }
    ctx->pc = 0x3EBC5Cu;
    // 0x3ebc5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EBC5Cu;
    {
        const bool branch_taken_0x3ebc5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebc5c) {
            ctx->pc = 0x3EBC70u;
            goto label_3ebc70;
        }
    }
    ctx->pc = 0x3EBC64u;
    // 0x3ebc64: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x3EBC64u;
    {
        const bool branch_taken_0x3ebc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebc64) {
            ctx->pc = 0x3EBE08u;
            goto label_3ebe08;
        }
    }
    ctx->pc = 0x3EBC6Cu;
    // 0x3ebc6c: 0x0  nop
    ctx->pc = 0x3ebc6cu;
    // NOP
label_3ebc70:
    // 0x3ebc70: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ebc70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebc74: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ebc74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebc78: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x3ebc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3ebc7c: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x3ebc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ebc80: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3ebc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3ebc84: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3ebc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ebc88: 0x34830040  ori         $v1, $a0, 0x40
    ctx->pc = 0x3ebc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x3ebc8c: 0xa20207f5  sb          $v0, 0x7F5($s0)
    ctx->pc = 0x3ebc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ebc90: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3ebc90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3ebc94: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x3ebc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x3ebc98: 0xa2050821  sb          $a1, 0x821($s0)
    ctx->pc = 0x3ebc98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ebc9c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ebc9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ebca0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ebca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ebca4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ebca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ebca8: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3ebca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3ebcac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ebcacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ebcb0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ebcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ebcb4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ebcb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ebcb8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ebcb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ebcbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ebcbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ebcc0: 0x0  nop
    ctx->pc = 0x3ebcc0u;
    // NOP
    // 0x3ebcc4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ebcc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ebcc8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBCC8u;
    {
        const bool branch_taken_0x3ebcc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EBCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCC8u;
        // 0x3ebccc: 0x86032b24  lh          $v1, 0x2B24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebcc8) {
            ctx->pc = 0x3EBCE0u;
            goto label_3ebce0;
        }
    }
    ctx->pc = 0x3EBCD0u;
    // 0x3ebcd0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ebcd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ebcd4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3ebcd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3ebcd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EBCD8u;
    {
        const bool branch_taken_0x3ebcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCD8u;
        // 0x3ebcdc: 0x62102b  sltu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebcd8) {
            ctx->pc = 0x3EBCF8u;
            goto label_3ebcf8;
        }
    }
    ctx->pc = 0x3EBCE0u;
label_3ebce0:
    // 0x3ebce0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ebce0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ebce4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ebce4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ebce8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3ebce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3ebcec: 0x0  nop
    ctx->pc = 0x3ebcecu;
    // NOP
    // 0x3ebcf0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3ebcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3ebcf4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3ebcf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ebcf8:
    // 0x3ebcf8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBCF8u;
    {
        const bool branch_taken_0x3ebcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebcf8) {
            ctx->pc = 0x3EBD10u;
            goto label_3ebd10;
        }
    }
    ctx->pc = 0x3EBD00u;
    // 0x3ebd00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ebd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ebd04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EBD04u;
    {
        const bool branch_taken_0x3ebd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD04u;
        // 0x3ebd08: 0xa2022b4c  sb          $v0, 0x2B4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebd04) {
            ctx->pc = 0x3EBD18u;
            goto label_3ebd18;
        }
    }
    ctx->pc = 0x3EBD0Cu;
    // 0x3ebd0c: 0x0  nop
    ctx->pc = 0x3ebd0cu;
    // NOP
label_3ebd10:
    // 0x3ebd10: 0xa2002b4c  sb          $zero, 0x2B4C($s0)
    ctx->pc = 0x3ebd10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebd14: 0x0  nop
    ctx->pc = 0x3ebd14u;
    // NOP
label_3ebd18:
    // 0x3ebd18: 0x920207f6  lbu         $v0, 0x7F6($s0)
    ctx->pc = 0x3ebd18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3ebd1c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3EBD1Cu;
    {
        const bool branch_taken_0x3ebd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebd1c) {
            ctx->pc = 0x3EBD48u;
            goto label_3ebd48;
        }
    }
    ctx->pc = 0x3EBD24u;
    // 0x3ebd24: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ebd24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebd28: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x3ebd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3ebd2c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ebd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebd30: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ebd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ebd34: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x3ebd34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ebd38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ebd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ebd3c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3ebd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebd40: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3ebd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3ebd44: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3ebd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
label_3ebd48:
    // 0x3ebd48: 0x86022b24  lh          $v0, 0x2B24($s0)
    ctx->pc = 0x3ebd48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3ebd4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EBD4Cu;
    {
        const bool branch_taken_0x3ebd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebd4c) {
            ctx->pc = 0x3EBD60u;
            goto label_3ebd60;
        }
    }
    ctx->pc = 0x3EBD54u;
    // 0x3ebd54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ebd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ebd58: 0xa6022b24  sh          $v0, 0x2B24($s0)
    ctx->pc = 0x3ebd58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ebd5c: 0x0  nop
    ctx->pc = 0x3ebd5cu;
    // NOP
label_3ebd60:
    // 0x3ebd60: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x3ebd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x3ebd64: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ebd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ebd68: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ebd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ebd6c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ebd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ebd70: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3ebd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3ebd74: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ebd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ebd78: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ebd78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ebd7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ebd7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ebd80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ebd80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ebd84: 0x0  nop
    ctx->pc = 0x3ebd84u;
    // NOP
    // 0x3ebd88: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ebd88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ebd8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ebd8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ebd90: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBD90u;
    {
        const bool branch_taken_0x3ebd90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD90u;
        // 0x3ebd94: 0x86042b24  lh          $a0, 0x2B24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebd90) {
            ctx->pc = 0x3EBDA8u;
            goto label_3ebda8;
        }
    }
    ctx->pc = 0x3EBD98u;
    // 0x3ebd98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ebd98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ebd9c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ebd9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ebda0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EBDA0u;
    {
        const bool branch_taken_0x3ebda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBDA0u;
        // 0x3ebda4: 0x64082b  sltu        $at, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebda0) {
            ctx->pc = 0x3EBDC4u;
            goto label_3ebdc4;
        }
    }
    ctx->pc = 0x3EBDA8u;
label_3ebda8:
    // 0x3ebda8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ebda8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ebdac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ebdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ebdb0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ebdb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ebdb4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ebdb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ebdb8: 0x0  nop
    ctx->pc = 0x3ebdb8u;
    // NOP
    // 0x3ebdbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ebdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ebdc0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3ebdc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3ebdc4:
    // 0x3ebdc4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EBDC4u;
    {
        const bool branch_taken_0x3ebdc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebdc4) {
            ctx->pc = 0x3EBDD0u;
            goto label_3ebdd0;
        }
    }
    ctx->pc = 0x3EBDCCu;
    // 0x3ebdcc: 0xa2002b4c  sb          $zero, 0x2B4C($s0)
    ctx->pc = 0x3ebdccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 0));
label_3ebdd0:
    // 0x3ebdd0: 0xc0fb6b0  jal         func_3EDAC0
    ctx->pc = 0x3EBDD0u;
    SET_GPR_U32(ctx, 31, 0x3EBDD8u);
    ctx->pc = 0x3EDAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDAC0u, 0x3EBDD0u, 0x3EBDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBDD8u;
label_3ebdd8:
    // 0x3ebdd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBDD8u;
    {
        const bool branch_taken_0x3ebdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebdd8) {
            ctx->pc = 0x3EBDF0u;
            goto label_3ebdf0;
        }
    }
    ctx->pc = 0x3EBDE0u;
    // 0x3ebde0: 0xa2002b4c  sb          $zero, 0x2B4C($s0)
    ctx->pc = 0x3ebde0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebde4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ebde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ebde8: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ebde8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebdec: 0x0  nop
    ctx->pc = 0x3ebdecu;
    // NOP
label_3ebdf0:
    // 0x3ebdf0: 0x86032b24  lh          $v1, 0x2B24($s0)
    ctx->pc = 0x3ebdf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3ebdf4: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EBDF4u;
    {
        const bool branch_taken_0x3ebdf4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3ebdf4) {
            ctx->pc = 0x3EBE08u;
            goto label_3ebe08;
        }
    }
    ctx->pc = 0x3EBDFCu;
    // 0x3ebdfc: 0xa2002b4c  sb          $zero, 0x2B4C($s0)
    ctx->pc = 0x3ebdfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebe00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ebe00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ebe04: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ebe04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ebe08:
    // 0x3ebe08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ebe08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ebe0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ebe0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ebe10: 0x3e00008  jr          $ra
    ctx->pc = 0x3EBE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE10u;
        // 0x3ebe14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EBE18u;
}
