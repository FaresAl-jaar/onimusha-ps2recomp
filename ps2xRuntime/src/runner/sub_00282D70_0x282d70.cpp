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

// Function: sub_00282D70
// Address: 0x282d70 - 0x2830e4
void sub_00282D70_0x282d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282D70_0x282d70");
#endif

    switch (ctx->pc) {
        case 0x282e80u: goto label_282e80;
        case 0x282f10u: goto label_282f10;
        case 0x282f80u: goto label_282f80;
        default: break;
    }

    ctx->pc = 0x282d70u;

    // 0x282d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282d74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x282d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282d78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x282d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x282d7c: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x282d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x282d80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282d84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282d88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x282d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x282d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d90: 0x8785819c  lh          $a1, -0x7E64($gp)
    ctx->pc = 0x282d90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934940)));
    // 0x282d94: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x282d94u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x282d98: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x282d98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x282d9c: 0x10830094  beq         $a0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x282D9Cu;
    {
        const bool branch_taken_0x282d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x282DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282D9Cu;
        // 0x282da0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d9c) {
            ctx->pc = 0x282FF0u;
            goto label_282ff0;
        }
    }
    ctx->pc = 0x282DA4u;
    // 0x282da4: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x282DA4u;
    {
        const bool branch_taken_0x282da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x282da4) {
            ctx->pc = 0x282E80u;
            goto label_282e80;
        }
    }
    ctx->pc = 0x282DACu;
    // 0x282dac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x282DACu;
    {
        const bool branch_taken_0x282dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x282dac) {
            ctx->pc = 0x282DC0u;
            goto label_282dc0;
        }
    }
    ctx->pc = 0x282DB4u;
    // 0x282db4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x282DB4u;
    {
        const bool branch_taken_0x282db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282db4) {
            ctx->pc = 0x282FF8u;
            goto label_282ff8;
        }
    }
    ctx->pc = 0x282DBCu;
    // 0x282dbc: 0x0  nop
    ctx->pc = 0x282dbcu;
    // NOP
label_282dc0:
    // 0x282dc0: 0x262207a0  addiu       $v0, $s1, 0x7A0
    ctx->pc = 0x282dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
    // 0x282dc4: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x282dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x282dc8: 0x3006ffff  andi        $a2, $zero, 0xFFFF
    ctx->pc = 0x282dc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x282dcc: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x282dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x282dd0: 0x92280839  lbu         $t0, 0x839($s1)
    ctx->pc = 0x282dd0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x282dd4: 0x34470040  ori         $a3, $v0, 0x40
    ctx->pc = 0x282dd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x282dd8: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x282dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x282ddc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x282ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x282de0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x282de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282de4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x282de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x282de8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x282de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x282dec: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x282decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x282df0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x282df0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282df4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x282df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x282df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282dfc: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x282dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x282e00: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x282e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x282e04: 0x9063003c  lbu         $v1, 0x3C($v1)
    ctx->pc = 0x282e04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x282e08: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x282e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x282e0c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x282e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x282e10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x282e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x282e14: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x282e14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x282e18: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x282e18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x282e1c: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x282e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x282e20: 0xae2707ec  sw          $a3, 0x7EC($s1)
    ctx->pc = 0x282e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 7));
    // 0x282e24: 0xa620082c  sh          $zero, 0x82C($s1)
    ctx->pc = 0x282e24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x282e28: 0xa6260826  sh          $a2, 0x826($s1)
    ctx->pc = 0x282e28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 6));
    // 0x282e2c: 0xa625082a  sh          $a1, 0x82A($s1)
    ctx->pc = 0x282e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 5));
    // 0x282e30: 0xa2240821  sb          $a0, 0x821($s1)
    ctx->pc = 0x282e30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x282e34: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x282e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282e38: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x282e38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x282e3c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x282e3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x282e40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x282e40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282e44: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x282E44u;
    {
        const bool branch_taken_0x282e44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282e44) {
            ctx->pc = 0x282E5Cu;
            goto label_282e5c;
        }
    }
    ctx->pc = 0x282E4Cu;
    // 0x282e4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282e50: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x282e54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282E54u;
    {
        const bool branch_taken_0x282e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E54u;
        // 0x282e58: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e54) {
            ctx->pc = 0x282E78u;
            goto label_282e78;
        }
    }
    ctx->pc = 0x282E5Cu;
label_282e5c:
    // 0x282e5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x282e5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282e60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x282e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x282e64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282e64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282e68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282e68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x282e6c: 0x0  nop
    ctx->pc = 0x282e6cu;
    // NOP
    // 0x282e70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x282e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x282e74: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x282e74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_282e78:
    // 0x282e78: 0xc0a6b14  jal         func_29AC50
    ctx->pc = 0x282E78u;
    SET_GPR_U32(ctx, 31, 0x282E80u);
    ctx->pc = 0x282E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282E78u;
    // 0x282e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC50u, 0x282E78u, 0x282E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E80u;
label_282e80:
    // 0x282e80: 0x922307d6  lbu         $v1, 0x7D6($s1)
    ctx->pc = 0x282e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2006)));
    // 0x282e84: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x282E84u;
    {
        const bool branch_taken_0x282e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x282e84) {
            ctx->pc = 0x282F90u;
            goto label_282f90;
        }
    }
    ctx->pc = 0x282E8Cu;
    // 0x282e8c: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x282e8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x282e90: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x282E90u;
    {
        const bool branch_taken_0x282e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x282e90) {
            ctx->pc = 0x282F80u;
            goto label_282f80;
        }
    }
    ctx->pc = 0x282E98u;
    // 0x282e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282e9c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x282E9Cu;
    {
        const bool branch_taken_0x282e9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x282EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E9Cu;
        // 0x282ea0: 0xa622082a  sh          $v0, 0x82A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e9c) {
            ctx->pc = 0x282F18u;
            goto label_282f18;
        }
    }
    ctx->pc = 0x282EA4u;
    // 0x282ea4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x282ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282ea8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x282ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x282eac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x282eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x282eb0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x282eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x282eb4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x282eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x282eb8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x282eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x282ebc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x282ebcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x282ec0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x282ec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282ec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282ec8: 0x0  nop
    ctx->pc = 0x282ec8u;
    // NOP
    // 0x282ecc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x282eccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x282ed0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x282ed0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282ed4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x282ED4u;
    {
        const bool branch_taken_0x282ed4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282ed4) {
            ctx->pc = 0x282EECu;
            goto label_282eec;
        }
    }
    ctx->pc = 0x282EDCu;
    // 0x282edc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282edcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282ee0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x282ee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x282ee4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282EE4u;
    {
        const bool branch_taken_0x282ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282EE4u;
        // 0x282ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ee4) {
            ctx->pc = 0x282F08u;
            goto label_282f08;
        }
    }
    ctx->pc = 0x282EECu;
label_282eec:
    // 0x282eec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x282eecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282ef0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x282ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x282ef4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282ef4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282ef8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x282ef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x282efc: 0x0  nop
    ctx->pc = 0x282efcu;
    // NOP
    // 0x282f00: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x282f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x282f04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x282f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_282f08:
    // 0x282f08: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x282F08u;
    SET_GPR_U32(ctx, 31, 0x282F10u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x282F08u, 0x282F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F10u;
label_282f10:
    // 0x282f10: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x282F10u;
    {
        const bool branch_taken_0x282f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282f10) {
            ctx->pc = 0x282F80u;
            goto label_282f80;
        }
    }
    ctx->pc = 0x282F18u;
label_282f18:
    // 0x282f18: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x282f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x282f1c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x282f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282f20: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x282f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x282f24: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x282f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x282f28: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x282f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x282f2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x282f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282f30: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x282f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x282f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282f38: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x282f38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x282f3c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x282f3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x282f40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x282f40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282f44: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x282F44u;
    {
        const bool branch_taken_0x282f44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282f44) {
            ctx->pc = 0x282F5Cu;
            goto label_282f5c;
        }
    }
    ctx->pc = 0x282F4Cu;
    // 0x282f4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282f4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282f50: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x282f50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x282f54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282F54u;
    {
        const bool branch_taken_0x282f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F54u;
        // 0x282f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f54) {
            ctx->pc = 0x282F78u;
            goto label_282f78;
        }
    }
    ctx->pc = 0x282F5Cu;
label_282f5c:
    // 0x282f5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x282f5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282f60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x282f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x282f64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282f64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282f68: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x282f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x282f6c: 0x0  nop
    ctx->pc = 0x282f6cu;
    // NOP
    // 0x282f70: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x282f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x282f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x282f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_282f78:
    // 0x282f78: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x282F78u;
    SET_GPR_U32(ctx, 31, 0x282F80u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x282F78u, 0x282F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F80u;
label_282f80:
    // 0x282f80: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x282f80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x282f84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x282f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x282f88: 0xa6230826  sh          $v1, 0x826($s1)
    ctx->pc = 0x282f88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
    // 0x282f8c: 0x0  nop
    ctx->pc = 0x282f8cu;
    // NOP
label_282f90:
    // 0x282f90: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x282F90u;
    {
        const bool branch_taken_0x282f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x282f90) {
            ctx->pc = 0x282FB8u;
            goto label_282fb8;
        }
    }
    ctx->pc = 0x282F98u;
    // 0x282f98: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x282f98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x282f9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x282f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282fa0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x282FA0u;
    {
        const bool branch_taken_0x282fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x282fa0) {
            ctx->pc = 0x282FB8u;
            goto label_282fb8;
        }
    }
    ctx->pc = 0x282FA8u;
    // 0x282fa8: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x282fa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
    // 0x282fac: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x282facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x282fb0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x282FB0u;
    {
        const bool branch_taken_0x282fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x282fb0) {
            ctx->pc = 0x282FF8u;
            goto label_282ff8;
        }
    }
    ctx->pc = 0x282FB8u;
label_282fb8:
    // 0x282fb8: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x282fb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x282fbc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x282FBCu;
    {
        const bool branch_taken_0x282fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x282fbc) {
            ctx->pc = 0x282FF8u;
            goto label_282ff8;
        }
    }
    ctx->pc = 0x282FC4u;
    // 0x282fc4: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x282fc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x282fc8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x282fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x282fcc: 0x24635124  addiu       $v1, $v1, 0x5124
    ctx->pc = 0x282fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20772));
    // 0x282fd0: 0x92240839  lbu         $a0, 0x839($s1)
    ctx->pc = 0x282fd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x282fd4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x282fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x282fd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x282fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x282fdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x282fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282fe0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x282fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x282fe4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x282fe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282fe8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x282FE8u;
    {
        const bool branch_taken_0x282fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282FE8u;
        // 0x282fec: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282fe8) {
            ctx->pc = 0x282FF8u;
            goto label_282ff8;
        }
    }
    ctx->pc = 0x282FF0u;
label_282ff0:
    // 0x282ff0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x282FF0u;
    {
        const bool branch_taken_0x282ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282ff0) {
            ctx->pc = 0x2830D0u;
            goto label_2830d0;
        }
    }
    ctx->pc = 0x282FF8u;
label_282ff8:
    // 0x282ff8: 0x922307d6  lbu         $v1, 0x7D6($s1)
    ctx->pc = 0x282ff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2006)));
    // 0x282ffc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x282FFCu;
    {
        const bool branch_taken_0x282ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282FFCu;
        // 0x283000: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ffc) {
            ctx->pc = 0x283010u;
            goto label_283010;
        }
    }
    ctx->pc = 0x283004u;
    // 0x283004: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x283004u;
    {
        const bool branch_taken_0x283004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283004u;
        // 0x283008: 0xa62307f0  sh          $v1, 0x7F0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283004) {
            ctx->pc = 0x283018u;
            goto label_283018;
        }
    }
    ctx->pc = 0x28300Cu;
    // 0x28300c: 0x0  nop
    ctx->pc = 0x28300cu;
    // NOP
label_283010:
    // 0x283010: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x283010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x283014: 0xa62307f0  sh          $v1, 0x7F0($s1)
    ctx->pc = 0x283014u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 3));
label_283018:
    // 0x283018: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x283018u;
    {
        const bool branch_taken_0x283018 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x283018) {
            ctx->pc = 0x2830D0u;
            goto label_2830d0;
        }
    }
    ctx->pc = 0x283020u;
    // 0x283020: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x283020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283024: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x283024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x283028: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x283028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28302c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x28302cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x283030: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x283030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x283034: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x283034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x283038: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x283038u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x28303c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28303cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x283040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283044: 0x0  nop
    ctx->pc = 0x283044u;
    // NOP
    // 0x283048: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x283048u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28304c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28304cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283050: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x283050u;
    {
        const bool branch_taken_0x283050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283050) {
            ctx->pc = 0x283068u;
            goto label_283068;
        }
    }
    ctx->pc = 0x283058u;
    // 0x283058: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x283058u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28305c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x28305cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x283060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283060u;
    {
        const bool branch_taken_0x283060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283060u;
        // 0x283064: 0x96230826  lhu         $v1, 0x826($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283060) {
            ctx->pc = 0x283084u;
            goto label_283084;
        }
    }
    ctx->pc = 0x283068u;
label_283068:
    // 0x283068: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x283068u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28306c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28306cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x283070: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x283070u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x283074: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x283074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x283078: 0x0  nop
    ctx->pc = 0x283078u;
    // NOP
    // 0x28307c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x28307cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x283080: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x283080u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
label_283084:
    // 0x283084: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x283084u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x283088: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x283088u;
    {
        const bool branch_taken_0x283088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x283088) {
            ctx->pc = 0x2830D0u;
            goto label_2830d0;
        }
    }
    ctx->pc = 0x283090u;
    // 0x283090: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x283090u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x283094: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x283094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x283098: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x283098u;
    {
        const bool branch_taken_0x283098 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x283098) {
            ctx->pc = 0x2830D0u;
            goto label_2830d0;
        }
    }
    ctx->pc = 0x2830A0u;
    // 0x2830a0: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x2830a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
    // 0x2830a4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x2830a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x2830a8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2830A8u;
    {
        const bool branch_taken_0x2830a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2830a8) {
            ctx->pc = 0x2830D0u;
            goto label_2830d0;
        }
    }
    ctx->pc = 0x2830B0u;
    // 0x2830b0: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x2830b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x2830b4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x2830b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x2830b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2830B8u;
    {
        const bool branch_taken_0x2830b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2830BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2830B8u;
        // 0x2830bc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2830b8) {
            ctx->pc = 0x2830C8u;
            goto label_2830c8;
        }
    }
    ctx->pc = 0x2830C0u;
    // 0x2830c0: 0xa6230786  sh          $v1, 0x786($s1)
    ctx->pc = 0x2830c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1926), (uint16_t)GPR_U32(ctx, 3));
    // 0x2830c4: 0x0  nop
    ctx->pc = 0x2830c4u;
    // NOP
label_2830c8:
    // 0x2830c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2830c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2830cc: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x2830ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2830d0:
    // 0x2830d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2830d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2830d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2830d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2830d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2830d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2830dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2830DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2830E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2830DCu;
        // 0x2830e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2830DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2830E4u;
}
