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

// Function: sub_002CFB10
// Address: 0x2cfb10 - 0x2cffd4
void sub_002CFB10_0x2cfb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFB10_0x2cfb10");
#endif

    switch (ctx->pc) {
        case 0x2cfb68u: goto label_2cfb68;
        case 0x2cfbccu: goto label_2cfbcc;
        case 0x2cfc60u: goto label_2cfc60;
        case 0x2cff00u: goto label_2cff00;
        case 0x2cff30u: goto label_2cff30;
        default: break;
    }

    ctx->pc = 0x2cfb10u;

    // 0x2cfb10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cfb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cfb14: 0x3c033e38  lui         $v1, 0x3E38
    ctx->pc = 0x2cfb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15928 << 16));
    // 0x2cfb18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cfb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cfb1c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2cfb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2cfb20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cfb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cfb24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cfb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cfb28: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2cfb28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cfb2c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2cfb2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cfb30: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x2cfb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2cfb34: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2cfb34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2cfb38: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2cfb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2cfb3c: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x2cfb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x2cfb40: 0x90820821  lbu         $v0, 0x821($a0)
    ctx->pc = 0x2cfb40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2cfb44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFB44u;
    {
        const bool branch_taken_0x2cfb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB44u;
        // 0x2cfb48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb44) {
            ctx->pc = 0x2CFB58u;
            goto label_2cfb58;
        }
    }
    ctx->pc = 0x2CFB4Cu;
    // 0x2cfb4c: 0x8e2207c0  lw          $v0, 0x7C0($s1)
    ctx->pc = 0x2cfb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x2cfb50: 0xae2207c8  sw          $v0, 0x7C8($s1)
    ctx->pc = 0x2cfb50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1992), GPR_U32(ctx, 2));
    // 0x2cfb54: 0x0  nop
    ctx->pc = 0x2cfb54u;
    // NOP
label_2cfb58:
    // 0x2cfb58: 0x8e2507c8  lw          $a1, 0x7C8($s1)
    ctx->pc = 0x2cfb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1992)));
    // 0x2cfb5c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2cfb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2cfb60: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2CFB60u;
    SET_GPR_U32(ctx, 31, 0x2CFB68u);
    ctx->pc = 0x2CFB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB60u;
    // 0x2cfb64: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2CFB60u, 0x2CFB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB68u;
label_2cfb68:
    // 0x2cfb68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cfb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb6c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CFB6Cu;
    {
        const bool branch_taken_0x2cfb6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb6c) {
            ctx->pc = 0x2CFBB0u;
            goto label_2cfbb0;
        }
    }
    ctx->pc = 0x2CFB74u;
    // 0x2cfb74: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CFB74u;
    {
        const bool branch_taken_0x2cfb74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb74) {
            ctx->pc = 0x2CFBC0u;
            goto label_2cfbc0;
        }
    }
    ctx->pc = 0x2CFB7Cu;
    // 0x2cfb7c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2cfb7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cfb80: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2cfb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2cfb84: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2cfb84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cfb88: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFB88u;
    {
        const bool branch_taken_0x2cfb88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB88u;
        // 0x2cfb8c: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb88) {
            ctx->pc = 0x2CFB98u;
            goto label_2cfb98;
        }
    }
    ctx->pc = 0x2CFB90u;
    // 0x2cfb90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cfb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb94: 0x0  nop
    ctx->pc = 0x2cfb94u;
    // NOP
label_2cfb98:
    // 0x2cfb98: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CFB98u;
    {
        const bool branch_taken_0x2cfb98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb98) {
            ctx->pc = 0x2CFBC0u;
            goto label_2cfbc0;
        }
    }
    ctx->pc = 0x2CFBA0u;
    // 0x2cfba0: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x2cfba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2cfba4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2cfba4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cfba8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFBA8u;
    {
        const bool branch_taken_0x2cfba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfba8) {
            ctx->pc = 0x2CFBC0u;
            goto label_2cfbc0;
        }
    }
    ctx->pc = 0x2CFBB0u;
label_2cfbb0:
    // 0x2cfbb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cfbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cfbb4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2CFBB4u;
    {
        const bool branch_taken_0x2cfbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBB4u;
        // 0x2cfbb8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfbb4) {
            ctx->pc = 0x2CFCD8u;
            goto label_2cfcd8;
        }
    }
    ctx->pc = 0x2CFBBCu;
    // 0x2cfbbc: 0x0  nop
    ctx->pc = 0x2cfbbcu;
    // NOP
label_2cfbc0:
    // 0x2cfbc0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2cfbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2cfbc4: 0xc096988  jal         func_25A620
    ctx->pc = 0x2CFBC4u;
    SET_GPR_U32(ctx, 31, 0x2CFBCCu);
    ctx->pc = 0x2CFBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFBC4u;
    // 0x2cfbc8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x2CFBC4u, 0x2CFBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFBCCu;
label_2cfbcc:
    // 0x2cfbcc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2cfbccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2cfbd0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2cfbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2cfbd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfbd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfbd8: 0x0  nop
    ctx->pc = 0x2cfbd8u;
    // NOP
    // 0x2cfbdc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2cfbdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfbe0: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2CFBE0u;
    {
        const bool branch_taken_0x2cfbe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cfbe0) {
            ctx->pc = 0x2CFC58u;
            goto label_2cfc58;
        }
    }
    ctx->pc = 0x2CFBE8u;
    // 0x2cfbe8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2cfbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfbec: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cfbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cfbf0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2cfbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2cfbf4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2cfbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2cfbf8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2cfbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2cfbfc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2cfbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2cfc00: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2cfc00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2cfc04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cfc04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cfc08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfc0c: 0x0  nop
    ctx->pc = 0x2cfc0cu;
    // NOP
    // 0x2cfc10: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2cfc10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2cfc14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cfc14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfc18: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFC18u;
    {
        const bool branch_taken_0x2cfc18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cfc18) {
            ctx->pc = 0x2CFC30u;
            goto label_2cfc30;
        }
    }
    ctx->pc = 0x2CFC20u;
    // 0x2cfc20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cfc20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cfc24: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2cfc24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cfc28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CFC28u;
    {
        const bool branch_taken_0x2cfc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC28u;
        // 0x2cfc2c: 0xa6230828  sh          $v1, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc28) {
            ctx->pc = 0x2CFC4Cu;
            goto label_2cfc4c;
        }
    }
    ctx->pc = 0x2CFC30u;
label_2cfc30:
    // 0x2cfc30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cfc30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cfc34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2cfc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2cfc38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cfc38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cfc3c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2cfc3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cfc40: 0x0  nop
    ctx->pc = 0x2cfc40u;
    // NOP
    // 0x2cfc44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2cfc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2cfc48: 0xa6230828  sh          $v1, 0x828($s1)
    ctx->pc = 0x2cfc48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
label_2cfc4c:
    // 0x2cfc4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cfc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cfc50: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x2cfc50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cfc54: 0x0  nop
    ctx->pc = 0x2cfc54u;
    // NOP
label_2cfc58:
    // 0x2cfc58: 0xc09e8d0  jal         func_27A340
    ctx->pc = 0x2CFC58u;
    SET_GPR_U32(ctx, 31, 0x2CFC60u);
    ctx->pc = 0x2CFC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFC58u;
    // 0x2cfc5c: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A340u, 0x2CFC58u, 0x2CFC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFC60u;
label_2cfc60:
    // 0x2cfc60: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CFC60u;
    {
        const bool branch_taken_0x2cfc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc60) {
            ctx->pc = 0x2CFCD8u;
            goto label_2cfcd8;
        }
    }
    ctx->pc = 0x2CFC68u;
    // 0x2cfc68: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2cfc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfc6c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2cfc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2cfc70: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2cfc70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2cfc74: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2cfc74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2cfc78: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2cfc78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2cfc7c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2cfc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2cfc80: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2cfc80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2cfc84: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2cfc84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cfc88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cfc88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfc8c: 0x0  nop
    ctx->pc = 0x2cfc8cu;
    // NOP
    // 0x2cfc90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2cfc90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2cfc94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cfc94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfc98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFC98u;
    {
        const bool branch_taken_0x2cfc98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cfc98) {
            ctx->pc = 0x2CFCB0u;
            goto label_2cfcb0;
        }
    }
    ctx->pc = 0x2CFCA0u;
    // 0x2cfca0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cfca0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cfca4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cfca4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cfca8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CFCA8u;
    {
        const bool branch_taken_0x2cfca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFCA8u;
        // 0x2cfcac: 0xa6240828  sh          $a0, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfca8) {
            ctx->pc = 0x2CFCCCu;
            goto label_2cfccc;
        }
    }
    ctx->pc = 0x2CFCB0u;
label_2cfcb0:
    // 0x2cfcb0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cfcb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cfcb4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2cfcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2cfcb8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cfcb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cfcbc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cfcbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cfcc0: 0x0  nop
    ctx->pc = 0x2cfcc0u;
    // NOP
    // 0x2cfcc4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2cfcc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cfcc8: 0xa6240828  sh          $a0, 0x828($s1)
    ctx->pc = 0x2cfcc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 4));
label_2cfccc:
    // 0x2cfccc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cfcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cfcd0: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x2cfcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cfcd4: 0x0  nop
    ctx->pc = 0x2cfcd4u;
    // NOP
label_2cfcd8:
    // 0x2cfcd8: 0x92260821  lbu         $a2, 0x821($s1)
    ctx->pc = 0x2cfcd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x2cfcdc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2cfcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cfce0: 0x10c400b3  beq         $a2, $a0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2CFCE0u;
    {
        const bool branch_taken_0x2cfce0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CFCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFCE0u;
        // 0x2cfce4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfce0) {
            ctx->pc = 0x2CFFB0u;
            goto label_2cffb0;
        }
    }
    ctx->pc = 0x2CFCE8u;
    // 0x2cfce8: 0x10c3009b  beq         $a2, $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x2CFCE8u;
    {
        const bool branch_taken_0x2cfce8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cfce8) {
            ctx->pc = 0x2CFF58u;
            goto label_2cff58;
        }
    }
    ctx->pc = 0x2CFCF0u;
    // 0x2cfcf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cfcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cfcf4: 0x10c3006e  beq         $a2, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x2CFCF4u;
    {
        const bool branch_taken_0x2cfcf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFCF4u;
        // 0x2cfcf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfcf4) {
            ctx->pc = 0x2CFEB0u;
            goto label_2cfeb0;
        }
    }
    ctx->pc = 0x2CFCFCu;
    // 0x2cfcfc: 0x10c5003c  beq         $a2, $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2CFCFCu;
    {
        const bool branch_taken_0x2cfcfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x2cfcfc) {
            ctx->pc = 0x2CFDF0u;
            goto label_2cfdf0;
        }
    }
    ctx->pc = 0x2CFD04u;
    // 0x2cfd04: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFD04u;
    {
        const bool branch_taken_0x2cfd04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd04) {
            ctx->pc = 0x2CFD18u;
            goto label_2cfd18;
        }
    }
    ctx->pc = 0x2CFD0Cu;
    // 0x2cfd0c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2CFD0Cu;
    {
        const bool branch_taken_0x2cfd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd0c) {
            ctx->pc = 0x2CFFB8u;
            goto label_2cffb8;
        }
    }
    ctx->pc = 0x2CFD14u;
    // 0x2cfd14: 0x0  nop
    ctx->pc = 0x2cfd14u;
    // NOP
label_2cfd18:
    // 0x2cfd18: 0x7a2700a0  lq          $a3, 0xA0($s1)
    ctx->pc = 0x2cfd18u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x2cfd1c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2cfd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2cfd20: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cfd20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2cfd24: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2cfd24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cfd28: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x2cfd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2cfd2c: 0x34850040  ori         $a1, $a0, 0x40
    ctx->pc = 0x2cfd2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x2cfd30: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2cfd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2cfd34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cfd34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfd38: 0x7e272b30  sq          $a3, 0x2B30($s1)
    ctx->pc = 0x2cfd38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 11056), GPR_VEC(ctx, 7));
    // 0x2cfd3c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2cfd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfd40: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2cfd40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfd44: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x2cfd44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x2cfd48: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2cfd48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfd4c: 0xae2507ec  sw          $a1, 0x7EC($s1)
    ctx->pc = 0x2cfd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 5));
    // 0x2cfd50: 0xa620082a  sh          $zero, 0x82A($s1)
    ctx->pc = 0x2cfd50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cfd54: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2cfd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfd58: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2cfd58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2cfd5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cfd5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfd60: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFD60u;
    {
        const bool branch_taken_0x2cfd60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cfd60) {
            ctx->pc = 0x2CFD78u;
            goto label_2cfd78;
        }
    }
    ctx->pc = 0x2CFD68u;
    // 0x2cfd68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cfd68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cfd6c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2cfd6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cfd70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CFD70u;
    {
        const bool branch_taken_0x2cfd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD70u;
        // 0x2cfd74: 0xa6230828  sh          $v1, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfd70) {
            ctx->pc = 0x2CFD90u;
            goto label_2cfd90;
        }
    }
    ctx->pc = 0x2CFD78u;
label_2cfd78:
    // 0x2cfd78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cfd78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cfd7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cfd7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cfd80: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2cfd80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cfd84: 0x0  nop
    ctx->pc = 0x2cfd84u;
    // NOP
    // 0x2cfd88: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2cfd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2cfd8c: 0xa6230828  sh          $v1, 0x828($s1)
    ctx->pc = 0x2cfd8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
label_2cfd90:
    // 0x2cfd90: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2cfd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfd94: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2cfd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2cfd98: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2cfd98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cfd9c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2cfd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2cfda0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cfda0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfda4: 0x0  nop
    ctx->pc = 0x2cfda4u;
    // NOP
    // 0x2cfda8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2cfda8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2cfdac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cfdacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfdb0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFDB0u;
    {
        const bool branch_taken_0x2cfdb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cfdb0) {
            ctx->pc = 0x2CFDC8u;
            goto label_2cfdc8;
        }
    }
    ctx->pc = 0x2CFDB8u;
    // 0x2cfdb8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cfdb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cfdbc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cfdbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cfdc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CFDC0u;
    {
        const bool branch_taken_0x2cfdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDC0u;
        // 0x2cfdc4: 0xa624082c  sh          $a0, 0x82C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfdc0) {
            ctx->pc = 0x2CFDE4u;
            goto label_2cfde4;
        }
    }
    ctx->pc = 0x2CFDC8u;
label_2cfdc8:
    // 0x2cfdc8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cfdc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cfdcc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2cfdccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2cfdd0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cfdd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cfdd4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cfdd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cfdd8: 0x0  nop
    ctx->pc = 0x2cfdd8u;
    // NOP
    // 0x2cfddc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2cfddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cfde0: 0xa624082c  sh          $a0, 0x82C($s1)
    ctx->pc = 0x2cfde0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 4));
label_2cfde4:
    // 0x2cfde4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cfde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfde8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2CFDE8u;
    {
        const bool branch_taken_0x2cfde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDE8u;
        // 0x2cfdec: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfde8) {
            ctx->pc = 0x2CFFB8u;
            goto label_2cffb8;
        }
    }
    ctx->pc = 0x2CFDF0u;
label_2cfdf0:
    // 0x2cfdf0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2cfdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2cfdf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cfdf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfdf8: 0x0  nop
    ctx->pc = 0x2cfdf8u;
    // NOP
    // 0x2cfdfc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2cfdfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfe00: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x2CFE00u;
    {
        const bool branch_taken_0x2cfe00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cfe00) {
            ctx->pc = 0x2CFEA0u;
            goto label_2cfea0;
        }
    }
    ctx->pc = 0x2CFE08u;
    // 0x2cfe08: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x2cfe08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x2cfe0c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CFE0Cu;
    {
        const bool branch_taken_0x2cfe0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfe0c) {
            ctx->pc = 0x2CFE40u;
            goto label_2cfe40;
        }
    }
    ctx->pc = 0x2CFE14u;
    // 0x2cfe14: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2cfe14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfe18: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x2cfe18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2cfe1c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2cfe1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfe20: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2cfe20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cfe24: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x2cfe24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cfe28: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2cfe28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2cfe2c: 0xa22407f5  sb          $a0, 0x7F5($s1)
    ctx->pc = 0x2cfe2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cfe30: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2cfe30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2cfe34: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x2cfe34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x2cfe38: 0xa625082a  sh          $a1, 0x82A($s1)
    ctx->pc = 0x2cfe38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cfe3c: 0x0  nop
    ctx->pc = 0x2cfe3cu;
    // NOP
label_2cfe40:
    // 0x2cfe40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cfe40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2cfe44: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2cfe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfe48: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2cfe48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cfe4c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2cfe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2cfe50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cfe50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfe54: 0x0  nop
    ctx->pc = 0x2cfe54u;
    // NOP
    // 0x2cfe58: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2cfe58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2cfe5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cfe5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfe60: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFE60u;
    {
        const bool branch_taken_0x2cfe60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cfe60) {
            ctx->pc = 0x2CFE78u;
            goto label_2cfe78;
        }
    }
    ctx->pc = 0x2CFE68u;
    // 0x2cfe68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cfe68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cfe6c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cfe6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cfe70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CFE70u;
    {
        const bool branch_taken_0x2cfe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE70u;
        // 0x2cfe74: 0xa624082c  sh          $a0, 0x82C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe70) {
            ctx->pc = 0x2CFE94u;
            goto label_2cfe94;
        }
    }
    ctx->pc = 0x2CFE78u;
label_2cfe78:
    // 0x2cfe78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cfe78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cfe7c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2cfe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2cfe80: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cfe80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cfe84: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cfe84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cfe88: 0x0  nop
    ctx->pc = 0x2cfe88u;
    // NOP
    // 0x2cfe8c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2cfe8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cfe90: 0xa624082c  sh          $a0, 0x82C($s1)
    ctx->pc = 0x2cfe90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 4));
label_2cfe94:
    // 0x2cfe94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cfe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cfe98: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x2cfe98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cfe9c: 0x0  nop
    ctx->pc = 0x2cfe9cu;
    // NOP
label_2cfea0:
    // 0x2cfea0: 0x3c033df5  lui         $v1, 0x3DF5
    ctx->pc = 0x2cfea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15861 << 16));
    // 0x2cfea4: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2cfea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2cfea8: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2cfea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2cfeac: 0x0  nop
    ctx->pc = 0x2cfeacu;
    // NOP
label_2cfeb0:
    // 0x2cfeb0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2cfeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2cfeb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cfeb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfeb8: 0x0  nop
    ctx->pc = 0x2cfeb8u;
    // NOP
    // 0x2cfebc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2cfebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfec0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x2CFEC0u;
    {
        const bool branch_taken_0x2cfec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cfec0) {
            ctx->pc = 0x2CFF30u;
            goto label_2cff30;
        }
    }
    ctx->pc = 0x2CFEC8u;
    // 0x2cfec8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2cfec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2cfecc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CFECCu;
    {
        const bool branch_taken_0x2cfecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfecc) {
            ctx->pc = 0x2CFEE8u;
            goto label_2cfee8;
        }
    }
    ctx->pc = 0x2CFED4u;
    // 0x2cfed4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2cfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2cfed8: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x2cfed8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2cfedc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFEDCu;
    {
        const bool branch_taken_0x2cfedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEDCu;
        // 0x2cfee0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfedc) {
            ctx->pc = 0x2CFEF0u;
            goto label_2cfef0;
        }
    }
    ctx->pc = 0x2CFEE4u;
    // 0x2cfee4: 0x0  nop
    ctx->pc = 0x2cfee4u;
    // NOP
label_2cfee8:
    // 0x2cfee8: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x2cfee8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2cfeec: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2cfeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2cfef0:
    // 0x2cfef0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2cfef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cfef4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2cfef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfef8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2CFEF8u;
    SET_GPR_U32(ctx, 31, 0x2CFF00u);
    ctx->pc = 0x2CFEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFEF8u;
    // 0x2cfefc: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2CFEF8u, 0x2CFF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF00u;
label_2cff00:
    // 0x2cff00: 0x92260002  lbu         $a2, 0x2($s1)
    ctx->pc = 0x2cff00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2cff04: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2cff04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2cff08: 0x24420b8c  addiu       $v0, $v0, 0xB8C
    ctx->pc = 0x2cff08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2956));
    // 0x2cff0c: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x2cff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x2cff10: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2cff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cff14: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2cff14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2cff18: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2cff18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cff1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cff20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cff20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cff24: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cff24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cff28: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x2CFF28u;
    SET_GPR_U32(ctx, 31, 0x2CFF30u);
    ctx->pc = 0x2CFF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFF28u;
    // 0x2cff2c: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x2CFF28u, 0x2CFF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF30u;
label_2cff30:
    // 0x2cff30: 0x9623082c  lhu         $v1, 0x82C($s1)
    ctx->pc = 0x2cff30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2092)));
    // 0x2cff34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFF34u;
    {
        const bool branch_taken_0x2cff34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cff34) {
            ctx->pc = 0x2CFF48u;
            goto label_2cff48;
        }
    }
    ctx->pc = 0x2CFF3Cu;
    // 0x2cff3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cff40: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2CFF40u;
    {
        const bool branch_taken_0x2cff40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF40u;
        // 0x2cff44: 0xa623082c  sh          $v1, 0x82C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff40) {
            ctx->pc = 0x2CFFB8u;
            goto label_2cffb8;
        }
    }
    ctx->pc = 0x2CFF48u;
label_2cff48:
    // 0x2cff48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cff48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cff4c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2CFF4Cu;
    {
        const bool branch_taken_0x2cff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF4Cu;
        // 0x2cff50: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff4c) {
            ctx->pc = 0x2CFFB8u;
            goto label_2cffb8;
        }
    }
    ctx->pc = 0x2CFF54u;
    // 0x2cff54: 0x0  nop
    ctx->pc = 0x2cff54u;
    // NOP
label_2cff58:
    // 0x2cff58: 0x96230828  lhu         $v1, 0x828($s1)
    ctx->pc = 0x2cff58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
    // 0x2cff5c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CFF5Cu;
    {
        const bool branch_taken_0x2cff5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cff5c) {
            ctx->pc = 0x2CFFA8u;
            goto label_2cffa8;
        }
    }
    ctx->pc = 0x2CFF64u;
    // 0x2cff64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cff64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cff68: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cff68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cff6c: 0xa6230828  sh          $v1, 0x828($s1)
    ctx->pc = 0x2cff6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cff70: 0x24840b8c  addiu       $a0, $a0, 0xB8C
    ctx->pc = 0x2cff70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2956));
    // 0x2cff74: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x2cff74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2cff78: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2cff78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2cff7c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2cff7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2cff80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cff80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cff84: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2cff84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2cff88: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2cff88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cff8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cff90: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cff90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cff94: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2cff94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cff98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cff98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cff9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CFF9Cu;
    {
        const bool branch_taken_0x2cff9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF9Cu;
        // 0x2cffa0: 0xe62000a4  swc1        $f0, 0xA4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff9c) {
            ctx->pc = 0x2CFFB8u;
            goto label_2cffb8;
        }
    }
    ctx->pc = 0x2CFFA4u;
    // 0x2cffa4: 0x0  nop
    ctx->pc = 0x2cffa4u;
    // NOP
label_2cffa8:
    // 0x2cffa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFFA8u;
    {
        const bool branch_taken_0x2cffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFFA8u;
        // 0x2cffac: 0xa2240821  sb          $a0, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cffa8) {
            ctx->pc = 0x2CFFB8u;
            goto label_2cffb8;
        }
    }
    ctx->pc = 0x2CFFB0u;
label_2cffb0:
    // 0x2cffb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cffb4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x2cffb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2cffb8:
    // 0x2cffb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cffb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cffbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cffbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cffc0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2cffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cffc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cffc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cffc8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cffcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFFCCu;
        // 0x2cffd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFFD4u;
}
