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

// Function: sub_003EBEF0
// Address: 0x3ebef0 - 0x3ec2d0
void sub_003EBEF0_0x3ebef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBEF0_0x3ebef0");
#endif

    switch (ctx->pc) {
        case 0x3ec180u: goto label_3ec180;
        case 0x3ec1f8u: goto label_3ec1f8;
        case 0x3ec208u: goto label_3ec208;
        case 0x3ec21cu: goto label_3ec21c;
        default: break;
    }

    ctx->pc = 0x3ebef0u;

    // 0x3ebef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ebef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ebef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ebef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ebef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ebef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ebefc: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3ebefcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ebf00: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3ebf00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3ebf04: 0x102000ee  beqz        $at, . + 4 + (0xEE << 2)
    ctx->pc = 0x3EBF04u;
    {
        const bool branch_taken_0x3ebf04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF04u;
        // 0x3ebf08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebf04) {
            ctx->pc = 0x3EC2C0u;
            goto label_3ec2c0;
        }
    }
    ctx->pc = 0x3EBF0Cu;
    // 0x3ebf0c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3ebf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3ebf10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ebf10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ebf14: 0x24844e90  addiu       $a0, $a0, 0x4E90
    ctx->pc = 0x3ebf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20112));
    // 0x3ebf18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ebf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ebf1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3ebf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ebf20: 0x600008  jr          $v1
    ctx->pc = 0x3EBF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3EBF28u: goto label_3ebf28;
            case 0x3EBF60u: goto label_3ebf60;
            case 0x3EC0D8u: goto label_3ec0d8;
            case 0x3EC220u: goto label_3ec220;
            case 0x3EC2A8u: goto label_3ec2a8;
            case 0x3EC2B0u: goto label_3ec2b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBF20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3EBF28u;
label_3ebf28:
    // 0x3ebf28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ebf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ebf2c: 0xa2032b3f  sb          $v1, 0x2B3F($s0)
    ctx->pc = 0x3ebf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11071), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebf30: 0x24040059  addiu       $a0, $zero, 0x59
    ctx->pc = 0x3ebf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x3ebf34: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ebf34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebf38: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3ebf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ebf3c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ebf3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebf40: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ebf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ebf44: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3ebf44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ebf48: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3ebf48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ebf4c: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x3ebf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ebf50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ebf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ebf54: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3ebf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3ebf58: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3ebf58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebf5c: 0x0  nop
    ctx->pc = 0x3ebf5cu;
    // NOP
label_3ebf60:
    // 0x3ebf60: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3ebf60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3ebf64: 0x106000d6  beqz        $v1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x3EBF64u;
    {
        const bool branch_taken_0x3ebf64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF64u;
        // 0x3ebf68: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebf64) {
            ctx->pc = 0x3EC2C0u;
            goto label_3ec2c0;
        }
    }
    ctx->pc = 0x3EBF6Cu;
    // 0x3ebf6c: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x3ebf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x3ebf70: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3ebf70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebf74: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3ebf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ebf78: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ebf78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebf7c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ebf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ebf80: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ebf80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebf84: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3ebf84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ebf88: 0xa60607f2  sh          $a2, 0x7F2($s0)
    ctx->pc = 0x3ebf88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x3ebf8c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3ebf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3ebf90: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x3ebf90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ebf94: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x3ebf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x3ebf98: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3ebf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3ebf9c: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x3ebf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ebfa0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3ebfa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ebfa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ebfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ebfa8: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x3ebfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x3ebfac: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3ebfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ebfb0: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x3ebfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x3ebfb4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EBFB4u;
    {
        const bool branch_taken_0x3ebfb4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3EBFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBFB4u;
        // 0x3ebfb8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebfb4) {
            ctx->pc = 0x3EBFC8u;
            goto label_3ebfc8;
        }
    }
    ctx->pc = 0x3EBFBCu;
    // 0x3ebfbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ebfbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ebfc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EBFC0u;
    {
        const bool branch_taken_0x3ebfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBFC0u;
        // 0x3ebfc4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebfc0) {
            ctx->pc = 0x3EBFE0u;
            goto label_3ebfe0;
        }
    }
    ctx->pc = 0x3EBFC8u;
label_3ebfc8:
    // 0x3ebfc8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3ebfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3ebfcc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ebfccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ebfd0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ebfd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ebfd4: 0x0  nop
    ctx->pc = 0x3ebfd4u;
    // NOP
    // 0x3ebfd8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3ebfd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3ebfdc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3ebfdcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3ebfe0:
    // 0x3ebfe0: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x3ebfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x3ebfe4: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x3ebfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
    // 0x3ebfe8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3ebfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3ebfec: 0x3c0443f0  lui         $a0, 0x43F0
    ctx->pc = 0x3ebfecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17392 << 16));
    // 0x3ebff0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ebff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ebff4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ebff4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ebff8: 0x0  nop
    ctx->pc = 0x3ebff8u;
    // NOP
    // 0x3ebffc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ebffcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ec000: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ec000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ec004: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x3ec004u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3ec008: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ec008u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ec00c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ec00cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec010: 0x0  nop
    ctx->pc = 0x3ec010u;
    // NOP
    // 0x3ec014: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3ec014u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3ec018: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ec018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ec01c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EC01Cu;
    {
        const bool branch_taken_0x3ec01c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ec01c) {
            ctx->pc = 0x3EC034u;
            goto label_3ec034;
        }
    }
    ctx->pc = 0x3EC024u;
    // 0x3ec024: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ec024u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ec028: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3ec028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3ec02c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC02Cu;
    {
        const bool branch_taken_0x3ec02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec02c) {
            ctx->pc = 0x3EC04Cu;
            goto label_3ec04c;
        }
    }
    ctx->pc = 0x3EC034u;
label_3ec034:
    // 0x3ec034: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ec034u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ec038: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ec038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ec03c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ec03cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ec040: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3ec040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3ec044: 0x0  nop
    ctx->pc = 0x3ec044u;
    // NOP
    // 0x3ec048: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3ec048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3ec04c:
    // 0x3ec04c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC04Cu;
    {
        const bool branch_taken_0x3ec04c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3EC050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC04Cu;
        // 0x3ec050: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec04c) {
            ctx->pc = 0x3EC060u;
            goto label_3ec060;
        }
    }
    ctx->pc = 0x3EC054u;
    // 0x3ec054: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ec054u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec058: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC058u;
    {
        const bool branch_taken_0x3ec058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC058u;
        // 0x3ec05c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec058) {
            ctx->pc = 0x3EC078u;
            goto label_3ec078;
        }
    }
    ctx->pc = 0x3EC060u;
label_3ec060:
    // 0x3ec060: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3ec060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3ec064: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ec064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ec068: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ec068u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec06c: 0x0  nop
    ctx->pc = 0x3ec06cu;
    // NOP
    // 0x3ec070: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3ec070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3ec074: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3ec074u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3ec078:
    // 0x3ec078: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ec078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ec07c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ec07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ec080: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3ec080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ec084: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ec084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ec088: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ec088u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ec08c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ec08cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec090: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ec090u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ec094: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ec094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ec098: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ec098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ec09c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EC09Cu;
    {
        const bool branch_taken_0x3ec09c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ec09c) {
            ctx->pc = 0x3EC0B4u;
            goto label_3ec0b4;
        }
    }
    ctx->pc = 0x3EC0A4u;
    // 0x3ec0a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ec0a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ec0a8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ec0a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ec0ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC0ACu;
    {
        const bool branch_taken_0x3ec0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC0ACu;
        // 0x3ec0b0: 0xa6042b20  sh          $a0, 0x2B20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11040), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec0ac) {
            ctx->pc = 0x3EC0D0u;
            goto label_3ec0d0;
        }
    }
    ctx->pc = 0x3EC0B4u;
label_3ec0b4:
    // 0x3ec0b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ec0b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ec0b8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ec0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ec0bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ec0bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ec0c0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ec0c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ec0c4: 0x0  nop
    ctx->pc = 0x3ec0c4u;
    // NOP
    // 0x3ec0c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ec0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ec0cc: 0xa6042b20  sh          $a0, 0x2B20($s0)
    ctx->pc = 0x3ec0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11040), (uint16_t)GPR_U32(ctx, 4));
label_3ec0d0:
    // 0x3ec0d0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x3EC0D0u;
    {
        const bool branch_taken_0x3ec0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec0d0) {
            ctx->pc = 0x3EC2C0u;
            goto label_3ec2c0;
        }
    }
    ctx->pc = 0x3EC0D8u;
label_3ec0d8:
    // 0x3ec0d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ec0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ec0dc: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3ec0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec0e0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ec0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ec0e4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ec0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ec0e8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3ec0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3ec0ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ec0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ec0f0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3ec0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ec0f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ec0f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ec0f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ec0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ec0fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ec0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec100: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ec100u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ec104: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ec104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ec108: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ec108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ec10c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EC10Cu;
    {
        const bool branch_taken_0x3ec10c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ec10c) {
            ctx->pc = 0x3EC124u;
            goto label_3ec124;
        }
    }
    ctx->pc = 0x3EC114u;
    // 0x3ec114: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ec114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ec118: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ec118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ec11c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC11Cu;
    {
        const bool branch_taken_0x3ec11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC11Cu;
        // 0x3ec120: 0xa6032b22  sh          $v1, 0x2B22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec11c) {
            ctx->pc = 0x3EC140u;
            goto label_3ec140;
        }
    }
    ctx->pc = 0x3EC124u;
label_3ec124:
    // 0x3ec124: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ec124u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ec128: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ec128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ec12c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ec12cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ec130: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ec130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ec134: 0x0  nop
    ctx->pc = 0x3ec134u;
    // NOP
    // 0x3ec138: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec13c: 0xa6032b22  sh          $v1, 0x2B22($s0)
    ctx->pc = 0x3ec13cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
label_3ec140:
    // 0x3ec140: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ec140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ec144: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3ec144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ec148: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3ec148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3ec14c: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3ec14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3ec150: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ec150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ec154: 0x782549e0  lq          $a1, 0x49E0($at)
    ctx->pc = 0x3ec154u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x6849E0u));
    // 0x3ec158: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3ec158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ec15c: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x3ec15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x3ec160: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ec160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ec164: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3ec164u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3ec168: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3ec168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ec16c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3ec16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3ec170: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3ec170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3ec174: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3ec174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3ec178: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3EC178u;
    SET_GPR_U32(ctx, 31, 0x3EC180u);
    ctx->pc = 0x3EC17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC178u;
    // 0x3ec17c: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3EC178u, 0x3EC180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC180u;
label_3ec180:
    // 0x3ec180: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3ec180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ec184: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ec184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ec188: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3ec188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3ec18c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3ec18cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ec190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ec190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ec194: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3ec194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3ec198: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3ec198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ec19c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3ec19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3ec1a0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC1A0u;
    {
        const bool branch_taken_0x3ec1a0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3EC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC1A0u;
        // 0x3ec1a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec1a0) {
            ctx->pc = 0x3EC1B4u;
            goto label_3ec1b4;
        }
    }
    ctx->pc = 0x3EC1A8u;
    // 0x3ec1a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ec1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec1ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC1ACu;
    {
        const bool branch_taken_0x3ec1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC1ACu;
        // 0x3ec1b0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec1ac) {
            ctx->pc = 0x3EC1CCu;
            goto label_3ec1cc;
        }
    }
    ctx->pc = 0x3EC1B4u;
label_3ec1b4:
    // 0x3ec1b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ec1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ec1b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec1bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ec1bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec1c0: 0x0  nop
    ctx->pc = 0x3ec1c0u;
    // NOP
    // 0x3ec1c4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3ec1c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3ec1c8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3ec1c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3ec1cc:
    // 0x3ec1cc: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x3ec1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x3ec1d0: 0x3c024402  lui         $v0, 0x4402
    ctx->pc = 0x3ec1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17410 << 16));
    // 0x3ec1d4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3ec1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3ec1d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ec1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ec1dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ec1dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ec1e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ec1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ec1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec1e8: 0x0  nop
    ctx->pc = 0x3ec1e8u;
    // NOP
    // 0x3ec1ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ec1ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ec1f0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3EC1F0u;
    SET_GPR_U32(ctx, 31, 0x3EC1F8u);
    ctx->pc = 0x3EC1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC1F0u;
    // 0x3ec1f4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3EC1F0u, 0x3EC1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC1F8u;
label_3ec1f8:
    // 0x3ec1f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ec1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3ec1fc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3ec1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ec200: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3EC200u;
    SET_GPR_U32(ctx, 31, 0x3EC208u);
    ctx->pc = 0x3EC204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC200u;
    // 0x3ec204: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3EC200u, 0x3EC208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC208u;
label_3ec208:
    // 0x3ec208: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x3ec208u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3ec20c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ec20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec210: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3ec210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3ec214: 0xc0bc7b0  jal         func_2F1EC0
    ctx->pc = 0x3EC214u;
    SET_GPR_U32(ctx, 31, 0x3EC21Cu);
    ctx->pc = 0x3EC218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC214u;
    // 0x3ec218: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1EC0u, 0x3EC214u, 0x3EC21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC21Cu;
label_3ec21c:
    // 0x3ec21c: 0x0  nop
    ctx->pc = 0x3ec21cu;
    // NOP
label_3ec220:
    // 0x3ec220: 0x86032b20  lh          $v1, 0x2B20($s0)
    ctx->pc = 0x3ec220u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3ec224: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC224u;
    {
        const bool branch_taken_0x3ec224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec224) {
            ctx->pc = 0x3EC238u;
            goto label_3ec238;
        }
    }
    ctx->pc = 0x3EC22Cu;
    // 0x3ec22c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ec22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ec230: 0xa6032b20  sh          $v1, 0x2B20($s0)
    ctx->pc = 0x3ec230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11040), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ec234: 0x0  nop
    ctx->pc = 0x3ec234u;
    // NOP
label_3ec238:
    // 0x3ec238: 0x86032b22  lh          $v1, 0x2B22($s0)
    ctx->pc = 0x3ec238u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3ec23c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC23Cu;
    {
        const bool branch_taken_0x3ec23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec23c) {
            ctx->pc = 0x3EC250u;
            goto label_3ec250;
        }
    }
    ctx->pc = 0x3EC244u;
    // 0x3ec244: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ec244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ec248: 0xa6032b22  sh          $v1, 0x2B22($s0)
    ctx->pc = 0x3ec248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ec24c: 0x0  nop
    ctx->pc = 0x3ec24cu;
    // NOP
label_3ec250:
    // 0x3ec250: 0x86032b22  lh          $v1, 0x2B22($s0)
    ctx->pc = 0x3ec250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3ec254: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3EC254u;
    {
        const bool branch_taken_0x3ec254 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3ec254) {
            ctx->pc = 0x3EC2C0u;
            goto label_3ec2c0;
        }
    }
    ctx->pc = 0x3EC25Cu;
    // 0x3ec25c: 0x86032b20  lh          $v1, 0x2B20($s0)
    ctx->pc = 0x3ec25cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3ec260: 0x1c60000d  bgtz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3EC260u;
    {
        const bool branch_taken_0x3ec260 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3ec260) {
            ctx->pc = 0x3EC298u;
            goto label_3ec298;
        }
    }
    ctx->pc = 0x3EC268u;
    // 0x3ec268: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ec268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ec26c: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x3ec26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x3ec270: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ec270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ec274: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3ec274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ec278: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3ec278u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ec27c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ec27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ec280: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3ec280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ec284: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ec284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ec288: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3ec288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3ec28c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ec28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ec290: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3EC290u;
    {
        const bool branch_taken_0x3ec290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC290u;
        // 0x3ec294: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec290) {
            ctx->pc = 0x3EC2C0u;
            goto label_3ec2c0;
        }
    }
    ctx->pc = 0x3EC298u;
label_3ec298:
    // 0x3ec298: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ec298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ec29c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC29Cu;
    {
        const bool branch_taken_0x3ec29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC29Cu;
        // 0x3ec2a0: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec29c) {
            ctx->pc = 0x3EC2C0u;
            goto label_3ec2c0;
        }
    }
    ctx->pc = 0x3EC2A4u;
    // 0x3ec2a4: 0x0  nop
    ctx->pc = 0x3ec2a4u;
    // NOP
label_3ec2a8:
    // 0x3ec2a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ec2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ec2ac: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3ec2acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3ec2b0:
    // 0x3ec2b0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3ec2b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3ec2b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EC2B4u;
    {
        const bool branch_taken_0x3ec2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC2B4u;
        // 0x3ec2b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec2b4) {
            ctx->pc = 0x3EC2C0u;
            goto label_3ec2c0;
        }
    }
    ctx->pc = 0x3EC2BCu;
    // 0x3ec2bc: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ec2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ec2c0:
    // 0x3ec2c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ec2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ec2c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ec2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC2C8u;
        // 0x3ec2cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC2D0u;
}
