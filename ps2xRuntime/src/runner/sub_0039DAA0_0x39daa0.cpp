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

// Function: sub_0039DAA0
// Address: 0x39daa0 - 0x39dcd8
void sub_0039DAA0_0x39daa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039DAA0_0x39daa0");
#endif

    switch (ctx->pc) {
        case 0x39dbc4u: goto label_39dbc4;
        case 0x39dc2cu: goto label_39dc2c;
        default: break;
    }

    ctx->pc = 0x39daa0u;

    // 0x39daa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39daa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39daa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39daa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39daa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39daa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39daac: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x39daacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x39dab0: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x39dab0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x39dab4: 0x10200084  beqz        $at, . + 4 + (0x84 << 2)
    ctx->pc = 0x39DAB4u;
    {
        const bool branch_taken_0x39dab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAB4u;
        // 0x39dab8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dab4) {
            ctx->pc = 0x39DCC8u;
            goto label_39dcc8;
        }
    }
    ctx->pc = 0x39DABCu;
    // 0x39dabc: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x39dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x39dac0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39dac4: 0x24842580  addiu       $a0, $a0, 0x2580
    ctx->pc = 0x39dac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9600));
    // 0x39dac8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39dacc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39daccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39dad0: 0x600008  jr          $v1
    ctx->pc = 0x39DAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39DAD8u: goto label_39dad8;
            case 0x39DB08u: goto label_39db08;
            case 0x39DB40u: goto label_39db40;
            case 0x39DB50u: goto label_39db50;
            case 0x39DCB0u: goto label_39dcb0;
            case 0x39DCB8u: goto label_39dcb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DAD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39DAD8u;
label_39dad8:
    // 0x39dad8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39dad8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39dadc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39dadcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39dae0: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x39dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x39dae4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x39dae4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x39dae8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x39dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39daec: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x39daecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x39daf0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39daf4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x39daf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x39daf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39dafc: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x39dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x39db00: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39db00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x39db04: 0x0  nop
    ctx->pc = 0x39db04u;
    // NOP
label_39db08:
    // 0x39db08: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x39db08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x39db0c: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x39DB0Cu;
    {
        const bool branch_taken_0x39db0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39db0c) {
            ctx->pc = 0x39DCC8u;
            goto label_39dcc8;
        }
    }
    ctx->pc = 0x39DB14u;
    // 0x39db14: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39db14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39db18: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x39db18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x39db1c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39db1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39db20: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x39db20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39db24: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x39db24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x39db28: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x39db28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x39db2c: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x39db2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x39db30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39db30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39db34: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x39db34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x39db38: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x39DB38u;
    {
        const bool branch_taken_0x39db38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB38u;
        // 0x39db3c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39db38) {
            ctx->pc = 0x39DCC8u;
            goto label_39dcc8;
        }
    }
    ctx->pc = 0x39DB40u;
label_39db40:
    // 0x39db40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39db40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39db44: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39db44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x39db48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39db48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39db4c: 0xa6032bde  sh          $v1, 0x2BDE($s0)
    ctx->pc = 0x39db4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11230), (uint16_t)GPR_U32(ctx, 3));
label_39db50:
    // 0x39db50: 0x3c03429e  lui         $v1, 0x429E
    ctx->pc = 0x39db50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17054 << 16));
    // 0x39db54: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39db54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39db58: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x39db58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39db5c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x39db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x39db60: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x39db60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x39db64: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x39db64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x39db68: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39db68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39db6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x39db6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39db70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39db70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39db74: 0x0  nop
    ctx->pc = 0x39db74u;
    // NOP
    // 0x39db78: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39db78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39db7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39db7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39db80: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39DB80u;
    {
        const bool branch_taken_0x39db80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB80u;
        // 0x39db84: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39db80) {
            ctx->pc = 0x39DB98u;
            goto label_39db98;
        }
    }
    ctx->pc = 0x39DB88u;
    // 0x39db88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39db88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39db8c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39db8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39db90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39DB90u;
    {
        const bool branch_taken_0x39db90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39db90) {
            ctx->pc = 0x39DBB0u;
            goto label_39dbb0;
        }
    }
    ctx->pc = 0x39DB98u;
label_39db98:
    // 0x39db98: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39db98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39db9c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39dba0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39dba0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39dba4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39dba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39dba8: 0x0  nop
    ctx->pc = 0x39dba8u;
    // NOP
    // 0x39dbac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39dbacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_39dbb0:
    // 0x39dbb0: 0x14a4001f  bne         $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x39DBB0u;
    {
        const bool branch_taken_0x39dbb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x39dbb0) {
            ctx->pc = 0x39DC30u;
            goto label_39dc30;
        }
    }
    ctx->pc = 0x39DBB8u;
    // 0x39dbb8: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x39dbb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x39dbbc: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x39DBBCu;
    SET_GPR_U32(ctx, 31, 0x39DBC4u);
    ctx->pc = 0x39DBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DBBCu;
    // 0x39dbc0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x39DBBCu, 0x39DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DBC4u;
label_39dbc4:
    // 0x39dbc4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x39dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x39dbc8: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x39dbc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x39dbcc: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x39dbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x39dbd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39dbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39dbd4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x39dbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39dbd8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x39dbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39dbdc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x39dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x39dbe0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x39dbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x39dbe4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x39dbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39dbe8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x39dbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x39dbec: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x39dbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39dbf0: 0x460120c2  mul.s       $f3, $f4, $f1
    ctx->pc = 0x39dbf0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x39dbf4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x39dbf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x39dbf8: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x39dbf8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x39dbfc: 0xc7a60030  lwc1        $f6, 0x30($sp)
    ctx->pc = 0x39dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x39dc00: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x39dc00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x39dc04: 0x460330c0  add.s       $f3, $f6, $f3
    ctx->pc = 0x39dc04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x39dc08: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x39dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39dc0c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x39dc0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x39dc10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x39dc10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x39dc14: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x39dc14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x39dc18: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x39dc18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x39dc1c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x39dc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x39dc20: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x39dc20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x39dc24: 0xc0bc784  jal         func_2F1E10
    ctx->pc = 0x39DC24u;
    SET_GPR_U32(ctx, 31, 0x39DC2Cu);
    ctx->pc = 0x39DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DC24u;
    // 0x39dc28: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E10u, 0x39DC24u, 0x39DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DC2Cu;
label_39dc2c:
    // 0x39dc2c: 0x0  nop
    ctx->pc = 0x39dc2cu;
    // NOP
label_39dc30:
    // 0x39dc30: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x39dc30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x39dc34: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x39DC34u;
    {
        const bool branch_taken_0x39dc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dc34) {
            ctx->pc = 0x39DCC8u;
            goto label_39dcc8;
        }
    }
    ctx->pc = 0x39DC3Cu;
    // 0x39dc3c: 0x86032bde  lh          $v1, 0x2BDE($s0)
    ctx->pc = 0x39dc3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11230)));
    // 0x39dc40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x39dc44: 0xa6032bde  sh          $v1, 0x2BDE($s0)
    ctx->pc = 0x39dc44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11230), (uint16_t)GPR_U32(ctx, 3));
    // 0x39dc48: 0x86032bde  lh          $v1, 0x2BDE($s0)
    ctx->pc = 0x39dc48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11230)));
    // 0x39dc4c: 0x1c60000e  bgtz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x39DC4Cu;
    {
        const bool branch_taken_0x39dc4c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x39dc4c) {
            ctx->pc = 0x39DC88u;
            goto label_39dc88;
        }
    }
    ctx->pc = 0x39DC54u;
    // 0x39dc54: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39dc54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39dc58: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x39dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x39dc5c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39dc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39dc60: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x39dc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39dc64: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x39dc64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x39dc68: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39dc6c: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x39dc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x39dc70: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x39dc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x39dc74: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x39dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x39dc78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39dc7c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x39DC7Cu;
    {
        const bool branch_taken_0x39dc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC7Cu;
        // 0x39dc80: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc7c) {
            ctx->pc = 0x39DCC8u;
            goto label_39dcc8;
        }
    }
    ctx->pc = 0x39DC84u;
    // 0x39dc84: 0x0  nop
    ctx->pc = 0x39dc84u;
    // NOP
label_39dc88:
    // 0x39dc88: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39dc88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39dc8c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39dc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39dc90: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x39dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x39dc94: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x39dc94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x39dc98: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x39dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39dc9c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x39dc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x39dca0: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x39dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x39dca4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39DCA4u;
    {
        const bool branch_taken_0x39dca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCA4u;
        // 0x39dca8: 0xae0307ec  sw          $v1, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dca4) {
            ctx->pc = 0x39DCC8u;
            goto label_39dcc8;
        }
    }
    ctx->pc = 0x39DCACu;
    // 0x39dcac: 0x0  nop
    ctx->pc = 0x39dcacu;
    // NOP
label_39dcb0:
    // 0x39dcb0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x39dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x39dcb4: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39dcb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_39dcb8:
    // 0x39dcb8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x39dcb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x39dcbc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39DCBCu;
    {
        const bool branch_taken_0x39dcbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCBCu;
        // 0x39dcc0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dcbc) {
            ctx->pc = 0x39DCC8u;
            goto label_39dcc8;
        }
    }
    ctx->pc = 0x39DCC4u;
    // 0x39dcc4: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x39dcc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_39dcc8:
    // 0x39dcc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39dcc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39dccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39dcccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39dcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x39DCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCD0u;
        // 0x39dcd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39DCD8u;
}
