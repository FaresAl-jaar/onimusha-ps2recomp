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

// Function: sub_003DFA20
// Address: 0x3dfa20 - 0x3dfc08
void sub_003DFA20_0x3dfa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFA20_0x3dfa20");
#endif

    switch (ctx->pc) {
        case 0x3dfa3cu: goto label_3dfa3c;
        case 0x3dfb8cu: goto label_3dfb8c;
        case 0x3dfbdcu: goto label_3dfbdc;
        default: break;
    }

    ctx->pc = 0x3dfa20u;

    // 0x3dfa20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dfa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dfa24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dfa24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfa28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dfa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dfa2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3dfa2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfa30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dfa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dfa34: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x3DFA34u;
    SET_GPR_U32(ctx, 31, 0x3DFA3Cu);
    ctx->pc = 0x3DFA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFA34u;
    // 0x3dfa38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x3DFA34u, 0x3DFA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFA3Cu;
label_3dfa3c:
    // 0x3dfa3c: 0x92050821  lbu         $a1, 0x821($s0)
    ctx->pc = 0x3dfa3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3dfa40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dfa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3dfa44: 0x10a3006c  beq         $a1, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x3DFA44u;
    {
        const bool branch_taken_0x3dfa44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA44u;
        // 0x3dfa48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfa44) {
            ctx->pc = 0x3DFBF8u;
            goto label_3dfbf8;
        }
    }
    ctx->pc = 0x3DFA4Cu;
    // 0x3dfa4c: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3DFA4Cu;
    {
        const bool branch_taken_0x3dfa4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3dfa4c) {
            ctx->pc = 0x3DFA90u;
            goto label_3dfa90;
        }
    }
    ctx->pc = 0x3DFA54u;
    // 0x3dfa54: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFA54u;
    {
        const bool branch_taken_0x3dfa54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfa54) {
            ctx->pc = 0x3DFA68u;
            goto label_3dfa68;
        }
    }
    ctx->pc = 0x3DFA5Cu;
    // 0x3dfa5c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x3DFA5Cu;
    {
        const bool branch_taken_0x3dfa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfa5c) {
            ctx->pc = 0x3DFBF8u;
            goto label_3dfbf8;
        }
    }
    ctx->pc = 0x3DFA64u;
    // 0x3dfa64: 0x0  nop
    ctx->pc = 0x3dfa64u;
    // NOP
label_3dfa68:
    // 0x3dfa68: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3dfa68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dfa6c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3dfa6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dfa70: 0x24030095  addiu       $v1, $zero, 0x95
    ctx->pc = 0x3dfa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x3dfa74: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3dfa74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3dfa78: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dfa78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3dfa7c: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3dfa7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dfa80: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3dfa80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3dfa84: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3dfa84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3dfa88: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3dfa88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3dfa8c: 0x0  nop
    ctx->pc = 0x3dfa8cu;
    // NOP
label_3dfa90:
    // 0x3dfa90: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3dfa90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3dfa94: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x3DFA94u;
    {
        const bool branch_taken_0x3dfa94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfa94) {
            ctx->pc = 0x3DFBF8u;
            goto label_3dfbf8;
        }
    }
    ctx->pc = 0x3DFA9Cu;
    // 0x3dfa9c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3dfa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3dfaa0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3dfaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3dfaa4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3dfaa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3dfaa8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3dfaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3dfaac: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3dfaacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3dfab0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3dfab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3dfab4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3dfab4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3dfab8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3dfab8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dfabc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dfabcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dfac0: 0x0  nop
    ctx->pc = 0x3dfac0u;
    // NOP
    // 0x3dfac4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3dfac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3dfac8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3dfac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dfacc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DFACCu;
    {
        const bool branch_taken_0x3dfacc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dfacc) {
            ctx->pc = 0x3DFAE4u;
            goto label_3dfae4;
        }
    }
    ctx->pc = 0x3DFAD4u;
    // 0x3dfad4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dfad4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dfad8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3dfad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3dfadc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DFADCu;
    {
        const bool branch_taken_0x3dfadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFADCu;
        // 0x3dfae0: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfadc) {
            ctx->pc = 0x3DFB00u;
            goto label_3dfb00;
        }
    }
    ctx->pc = 0x3DFAE4u;
label_3dfae4:
    // 0x3dfae4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3dfae4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3dfae8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dfae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3dfaec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dfaecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dfaf0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3dfaf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3dfaf4: 0x0  nop
    ctx->pc = 0x3dfaf4u;
    // NOP
    // 0x3dfaf8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3dfaf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3dfafc: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3dfafcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3dfb00:
    // 0x3dfb00: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dfb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3dfb04: 0x2404009b  addiu       $a0, $zero, 0x9B
    ctx->pc = 0x3dfb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x3dfb08: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3dfb08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dfb0c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3dfb0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3dfb10: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3dfb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3dfb14: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x3dfb14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3dfb18: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3dfb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3dfb1c: 0x9203083d  lbu         $v1, 0x83D($s0)
    ctx->pc = 0x3dfb1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2109)));
    // 0x3dfb20: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3DFB20u;
    {
        const bool branch_taken_0x3dfb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB20u;
        // 0x3dfb24: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb20) {
            ctx->pc = 0x3DFBF0u;
            goto label_3dfbf0;
        }
    }
    ctx->pc = 0x3DFB28u;
    // 0x3dfb28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3dfb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3dfb2c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DFB2Cu;
    {
        const bool branch_taken_0x3dfb2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB2Cu;
        // 0x3dfb30: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb2c) {
            ctx->pc = 0x3DFBA0u;
            goto label_3dfba0;
        }
    }
    ctx->pc = 0x3DFB34u;
    // 0x3dfb34: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DFB34u;
    {
        const bool branch_taken_0x3dfb34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dfb34) {
            ctx->pc = 0x3DFB50u;
            goto label_3dfb50;
        }
    }
    ctx->pc = 0x3DFB3Cu;
    // 0x3dfb3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dfb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dfb40: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DFB40u;
    {
        const bool branch_taken_0x3dfb40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dfb40) {
            ctx->pc = 0x3DFB50u;
            goto label_3dfb50;
        }
    }
    ctx->pc = 0x3DFB48u;
    // 0x3dfb48: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3DFB48u;
    {
        const bool branch_taken_0x3dfb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfb48) {
            ctx->pc = 0x3DFBF0u;
            goto label_3dfbf0;
        }
    }
    ctx->pc = 0x3DFB50u;
label_3dfb50:
    // 0x3dfb50: 0x8e0429c0  lw          $a0, 0x29C0($s0)
    ctx->pc = 0x3dfb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3dfb54: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x3dfb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x3dfb58: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x3dfb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x3dfb5c: 0x9084005f  lbu         $a0, 0x5F($a0)
    ctx->pc = 0x3dfb5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 95)));
    // 0x3dfb60: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x3dfb60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x3dfb64: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3dfb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dfb68: 0x24830110  addiu       $v1, $a0, 0x110
    ctx->pc = 0x3dfb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x3dfb6c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DFB6Cu;
    {
        const bool branch_taken_0x3dfb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfb6c) {
            ctx->pc = 0x3DFB90u;
            goto label_3dfb90;
        }
    }
    ctx->pc = 0x3DFB74u;
    // 0x3dfb74: 0x8c6300c4  lw          $v1, 0xC4($v1)
    ctx->pc = 0x3dfb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3dfb78: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x3dfb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x3dfb7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFB7Cu;
    {
        const bool branch_taken_0x3dfb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB7Cu;
        // 0x3dfb80: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb7c) {
            ctx->pc = 0x3DFB90u;
            goto label_3dfb90;
        }
    }
    ctx->pc = 0x3DFB84u;
    // 0x3dfb84: 0xc0e0ab4  jal         func_382AD0
    ctx->pc = 0x3DFB84u;
    SET_GPR_U32(ctx, 31, 0x3DFB8Cu);
    ctx->pc = 0x382AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382AD0u, 0x3DFB84u, 0x3DFB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFB8Cu;
label_3dfb8c:
    // 0x3dfb8c: 0x0  nop
    ctx->pc = 0x3dfb8cu;
    // NOP
label_3dfb90:
    // 0x3dfb90: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x3dfb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x3dfb94: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3DFB94u;
    {
        const bool branch_taken_0x3dfb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB94u;
        // 0x3dfb98: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb94) {
            ctx->pc = 0x3DFBF8u;
            goto label_3dfbf8;
        }
    }
    ctx->pc = 0x3DFB9Cu;
    // 0x3dfb9c: 0x0  nop
    ctx->pc = 0x3dfb9cu;
    // NOP
label_3dfba0:
    // 0x3dfba0: 0x8e0429c0  lw          $a0, 0x29C0($s0)
    ctx->pc = 0x3dfba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3dfba4: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x3dfba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x3dfba8: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x3dfba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x3dfbac: 0x9084005f  lbu         $a0, 0x5F($a0)
    ctx->pc = 0x3dfbacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 95)));
    // 0x3dfbb0: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x3dfbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x3dfbb4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3dfbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dfbb8: 0x24830110  addiu       $v1, $a0, 0x110
    ctx->pc = 0x3dfbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x3dfbbc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DFBBCu;
    {
        const bool branch_taken_0x3dfbbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfbbc) {
            ctx->pc = 0x3DFBE0u;
            goto label_3dfbe0;
        }
    }
    ctx->pc = 0x3DFBC4u;
    // 0x3dfbc4: 0x8c6300c4  lw          $v1, 0xC4($v1)
    ctx->pc = 0x3dfbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3dfbc8: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x3dfbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x3dfbcc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFBCCu;
    {
        const bool branch_taken_0x3dfbcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFBCCu;
        // 0x3dfbd0: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfbcc) {
            ctx->pc = 0x3DFBE0u;
            goto label_3dfbe0;
        }
    }
    ctx->pc = 0x3DFBD4u;
    // 0x3dfbd4: 0xc0e0ab4  jal         func_382AD0
    ctx->pc = 0x3DFBD4u;
    SET_GPR_U32(ctx, 31, 0x3DFBDCu);
    ctx->pc = 0x382AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382AD0u, 0x3DFBD4u, 0x3DFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFBDCu;
label_3dfbdc:
    // 0x3dfbdc: 0x0  nop
    ctx->pc = 0x3dfbdcu;
    // NOP
label_3dfbe0:
    // 0x3dfbe0: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x3dfbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x3dfbe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFBE4u;
    {
        const bool branch_taken_0x3dfbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFBE4u;
        // 0x3dfbe8: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfbe4) {
            ctx->pc = 0x3DFBF8u;
            goto label_3dfbf8;
        }
    }
    ctx->pc = 0x3DFBECu;
    // 0x3dfbec: 0x0  nop
    ctx->pc = 0x3dfbecu;
    // NOP
label_3dfbf0:
    // 0x3dfbf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dfbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3dfbf4: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3dfbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3dfbf8:
    // 0x3dfbf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dfbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dfbfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dfbfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dfc00: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC00u;
        // 0x3dfc04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFC08u;
}
