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

// Function: sub_00275D10
// Address: 0x275d10 - 0x275e5c
void sub_00275D10_0x275d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275D10_0x275d10");
#endif

    switch (ctx->pc) {
        case 0x275db4u: goto label_275db4;
        default: break;
    }

    ctx->pc = 0x275d10u;

    // 0x275d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275d18: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x275d18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x275d1c: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x275d1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x275d20: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x275D20u;
    {
        const bool branch_taken_0x275d20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x275d20) {
            ctx->pc = 0x275D38u;
            goto label_275d38;
        }
    }
    ctx->pc = 0x275D28u;
    // 0x275d28: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x275d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x275d2c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x275d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x275d30: 0x904207fa  lbu         $v0, 0x7FA($v0)
    ctx->pc = 0x275d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2042)));
    // 0x275d34: 0x0  nop
    ctx->pc = 0x275d34u;
    // NOP
label_275d38:
    // 0x275d38: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x275d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x275d3c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x275d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x275d40: 0x14a2001f  bne         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x275D40u;
    {
        const bool branch_taken_0x275d40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x275d40) {
            ctx->pc = 0x275DC0u;
            goto label_275dc0;
        }
    }
    ctx->pc = 0x275D48u;
    // 0x275d48: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x275d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275d4c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x275d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x275d50: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x275d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x275d54: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x275d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x275d58: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x275d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x275d5c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x275d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x275d60: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x275d60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x275d64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x275d64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275d68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x275d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275d6c: 0x0  nop
    ctx->pc = 0x275d6cu;
    // NOP
    // 0x275d70: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x275d70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x275d74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x275d74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275d78: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x275D78u;
    {
        const bool branch_taken_0x275d78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275d78) {
            ctx->pc = 0x275D90u;
            goto label_275d90;
        }
    }
    ctx->pc = 0x275D80u;
    // 0x275d80: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x275d80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x275d84: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x275d84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x275d88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x275D88u;
    {
        const bool branch_taken_0x275d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D88u;
        // 0x275d8c: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d88) {
            ctx->pc = 0x275DACu;
            goto label_275dac;
        }
    }
    ctx->pc = 0x275D90u;
label_275d90:
    // 0x275d90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x275d90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x275d94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x275d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x275d98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x275d98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x275d9c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x275d9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x275da0: 0x0  nop
    ctx->pc = 0x275da0u;
    // NOP
    // 0x275da4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x275da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x275da8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x275da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_275dac:
    // 0x275dac: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x275DACu;
    SET_GPR_U32(ctx, 31, 0x275DB4u);
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x275DACu, 0x275DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275DB4u;
label_275db4:
    // 0x275db4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x275DB4u;
    {
        const bool branch_taken_0x275db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DB4u;
        // 0x275db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275db4) {
            ctx->pc = 0x275E50u;
            goto label_275e50;
        }
    }
    ctx->pc = 0x275DBCu;
    // 0x275dbc: 0x0  nop
    ctx->pc = 0x275dbcu;
    // NOP
label_275dc0:
    // 0x275dc0: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x275dc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x275dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275dc8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x275DC8u;
    {
        const bool branch_taken_0x275dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x275DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DC8u;
        // 0x275dcc: 0x24a2ffd7  addiu       $v0, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275dc8) {
            ctx->pc = 0x275E20u;
            goto label_275e20;
        }
    }
    ctx->pc = 0x275DD0u;
    // 0x275dd0: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x275dd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x275dd4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x275DD4u;
    {
        const bool branch_taken_0x275dd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x275dd4) {
            ctx->pc = 0x275DF8u;
            goto label_275df8;
        }
    }
    ctx->pc = 0x275DDCu;
    // 0x275ddc: 0x24a2ffde  addiu       $v0, $a1, -0x22
    ctx->pc = 0x275ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967262));
    // 0x275de0: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x275de0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x275de4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x275DE4u;
    {
        const bool branch_taken_0x275de4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x275DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DE4u;
        // 0x275de8: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275de4) {
            ctx->pc = 0x275DF8u;
            goto label_275df8;
        }
    }
    ctx->pc = 0x275DECu;
    // 0x275dec: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x275DECu;
    {
        const bool branch_taken_0x275dec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x275dec) {
            ctx->pc = 0x275E20u;
            goto label_275e20;
        }
    }
    ctx->pc = 0x275DF4u;
    // 0x275df4: 0x0  nop
    ctx->pc = 0x275df4u;
    // NOP
label_275df8:
    // 0x275df8: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x275df8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x275dfc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x275dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x275e00: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x275e00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x275e04: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x275e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x275e08: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x275e08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x275e0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x275e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x275e10: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x275e10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x275e14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275E14u;
    {
        const bool branch_taken_0x275e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E14u;
        // 0x275e18: 0xac8207ec  sw          $v0, 0x7EC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e14) {
            ctx->pc = 0x275E48u;
            goto label_275e48;
        }
    }
    ctx->pc = 0x275E1Cu;
    // 0x275e1c: 0x0  nop
    ctx->pc = 0x275e1cu;
    // NOP
label_275e20:
    // 0x275e20: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x275e20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x275e24: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x275e24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x275e28: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x275e28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x275e2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x275e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x275e30: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x275e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x275e34: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x275e34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x275e38: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x275e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x275e3c: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x275e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x275e40: 0xac8207ec  sw          $v0, 0x7EC($a0)
    ctx->pc = 0x275e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 2));
    // 0x275e44: 0x0  nop
    ctx->pc = 0x275e44u;
    // NOP
label_275e48:
    // 0x275e48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e4c: 0x0  nop
    ctx->pc = 0x275e4cu;
    // NOP
label_275e50:
    // 0x275e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275e54: 0x3e00008  jr          $ra
    ctx->pc = 0x275E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E54u;
        // 0x275e58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275E5Cu;
}
