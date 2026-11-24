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

// Function: sub_0038E9A0
// Address: 0x38e9a0 - 0x38eb68
void sub_0038E9A0_0x38e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E9A0_0x38e9a0");
#endif

    switch (ctx->pc) {
        case 0x38ea00u: goto label_38ea00;
        case 0x38ea8cu: goto label_38ea8c;
        case 0x38ea94u: goto label_38ea94;
        case 0x38eaa8u: goto label_38eaa8;
        case 0x38eb24u: goto label_38eb24;
        case 0x38eb44u: goto label_38eb44;
        default: break;
    }

    ctx->pc = 0x38e9a0u;

    // 0x38e9a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38e9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38e9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e9a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38e9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38e9ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38e9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38e9b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38e9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e9b4: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x38e9b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x38e9b8: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x38E9B8u;
    {
        const bool branch_taken_0x38e9b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38e9b8) {
            ctx->pc = 0x38E9F8u;
            goto label_38e9f8;
        }
    }
    ctx->pc = 0x38E9C0u;
    // 0x38e9c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38E9C0u;
    {
        const bool branch_taken_0x38e9c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e9c0) {
            ctx->pc = 0x38E9D0u;
            goto label_38e9d0;
        }
    }
    ctx->pc = 0x38E9C8u;
    // 0x38e9c8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x38E9C8u;
    {
        const bool branch_taken_0x38e9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e9c8) {
            ctx->pc = 0x38EB58u;
            goto label_38eb58;
        }
    }
    ctx->pc = 0x38E9D0u;
label_38e9d0:
    // 0x38e9d0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x38e9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e9d4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38e9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e9d8: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x38e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x38e9dc: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x38e9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x38e9e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38e9e4: 0xa20207f5  sb          $v0, 0x7F5($s0)
    ctx->pc = 0x38e9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x38e9e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38e9ec: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x38e9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x38e9f0: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x38e9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x38e9f4: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x38e9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_38e9f8:
    // 0x38e9f8: 0xc0e3744  jal         func_38DD10
    ctx->pc = 0x38E9F8u;
    SET_GPR_U32(ctx, 31, 0x38EA00u);
    ctx->pc = 0x38E9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E9F8u;
    // 0x38e9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DD10u, 0x38E9F8u, 0x38EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EA00u;
label_38ea00:
    // 0x38ea00: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38ea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38ea04: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x38ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x38ea08: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x38ea08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x38ea0c: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x38ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x38ea10: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x38ea10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x38ea14: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x38ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x38ea18: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x38ea18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38ea1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38ea1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38ea20: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38ea20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x38ea24: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38ea24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38ea28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38ea28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38ea2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38EA2Cu;
    {
        const bool branch_taken_0x38ea2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA2Cu;
        // 0x38ea30: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea2c) {
            ctx->pc = 0x38EA44u;
            goto label_38ea44;
        }
    }
    ctx->pc = 0x38EA34u;
    // 0x38ea34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38ea34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38ea38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38ea38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38ea3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38EA3Cu;
    {
        const bool branch_taken_0x38ea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA3Cu;
        // 0x38ea40: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea3c) {
            ctx->pc = 0x38EA60u;
            goto label_38ea60;
        }
    }
    ctx->pc = 0x38EA44u;
label_38ea44:
    // 0x38ea44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38ea44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38ea48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38ea4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38ea4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38ea50: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38ea50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38ea54: 0x0  nop
    ctx->pc = 0x38ea54u;
    // NOP
    // 0x38ea58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38ea58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x38ea5c: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x38ea5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_38ea60:
    // 0x38ea60: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x38EA60u;
    {
        const bool branch_taken_0x38ea60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ea60) {
            ctx->pc = 0x38EAB0u;
            goto label_38eab0;
        }
    }
    ctx->pc = 0x38EA68u;
    // 0x38ea68: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x38EA68u;
    {
        const bool branch_taken_0x38ea68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ea68) {
            ctx->pc = 0x38EAB0u;
            goto label_38eab0;
        }
    }
    ctx->pc = 0x38EA70u;
    // 0x38ea70: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x38ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x38ea74: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x38ea74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38ea78: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x38EA78u;
    {
        const bool branch_taken_0x38ea78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA78u;
        // 0x38ea7c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea78) {
            ctx->pc = 0x38EAB0u;
            goto label_38eab0;
        }
    }
    ctx->pc = 0x38EA80u;
    // 0x38ea80: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x38ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38ea84: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x38EA84u;
    SET_GPR_U32(ctx, 31, 0x38EA8Cu);
    ctx->pc = 0x38EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA84u;
    // 0x38ea88: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x38EA84u, 0x38EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EA8Cu;
label_38ea8c:
    // 0x38ea8c: 0xc096e44  jal         func_25B910
    ctx->pc = 0x38EA8Cu;
    SET_GPR_U32(ctx, 31, 0x38EA94u);
    ctx->pc = 0x38EA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA8Cu;
    // 0x38ea90: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x38EA8Cu, 0x38EA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EA94u;
label_38ea94:
    // 0x38ea94: 0x860400c2  lh          $a0, 0xC2($s0)
    ctx->pc = 0x38ea94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x38ea98: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x38ea98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x38ea9c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x38ea9cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x38eaa0: 0xc097498  jal         func_25D260
    ctx->pc = 0x38EAA0u;
    SET_GPR_U32(ctx, 31, 0x38EAA8u);
    ctx->pc = 0x38EAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EAA0u;
    // 0x38eaa4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x38EAA0u, 0x38EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EAA8u;
label_38eaa8:
    // 0x38eaa8: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x38eaa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x38eaac: 0x0  nop
    ctx->pc = 0x38eaacu;
    // NOP
label_38eab0:
    // 0x38eab0: 0x3c0341e8  lui         $v1, 0x41E8
    ctx->pc = 0x38eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16872 << 16));
    // 0x38eab4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38eab8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x38eab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x38eabc: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x38eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x38eac0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x38eac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x38eac4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x38eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x38eac8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38eac8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x38eacc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x38eaccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38ead0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38ead0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38ead4: 0x0  nop
    ctx->pc = 0x38ead4u;
    // NOP
    // 0x38ead8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38ead8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38eadc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38eadcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38eae0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38EAE0u;
    {
        const bool branch_taken_0x38eae0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAE0u;
        // 0x38eae4: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eae0) {
            ctx->pc = 0x38EAF8u;
            goto label_38eaf8;
        }
    }
    ctx->pc = 0x38EAE8u;
    // 0x38eae8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38eae8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38eaec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38eaecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38eaf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38EAF0u;
    {
        const bool branch_taken_0x38eaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38eaf0) {
            ctx->pc = 0x38EB10u;
            goto label_38eb10;
        }
    }
    ctx->pc = 0x38EAF8u;
label_38eaf8:
    // 0x38eaf8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38eaf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38eafc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38eb00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38eb00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38eb04: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38eb04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38eb08: 0x0  nop
    ctx->pc = 0x38eb08u;
    // NOP
    // 0x38eb0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38eb0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_38eb10:
    // 0x38eb10: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x38EB10u;
    {
        const bool branch_taken_0x38eb10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x38eb10) {
            ctx->pc = 0x38EB48u;
            goto label_38eb48;
        }
    }
    ctx->pc = 0x38EB18u;
    // 0x38eb18: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x38eb18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x38eb1c: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x38EB1Cu;
    SET_GPR_U32(ctx, 31, 0x38EB24u);
    ctx->pc = 0x38EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EB1Cu;
    // 0x38eb20: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x38EB1Cu, 0x38EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EB24u;
label_38eb24:
    // 0x38eb24: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x38eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38eb28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38eb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eb2c: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x38eb2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x38eb30: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x38eb30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38eb34: 0x92082b3c  lbu         $t0, 0x2B3C($s0)
    ctx->pc = 0x38eb34u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11068)));
    // 0x38eb38: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x38eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x38eb3c: 0xc0bc75c  jal         func_2F1D70
    ctx->pc = 0x38EB3Cu;
    SET_GPR_U32(ctx, 31, 0x38EB44u);
    ctx->pc = 0x38EB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EB3Cu;
    // 0x38eb40: 0x24460870  addiu       $a2, $v0, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1D70u, 0x38EB3Cu, 0x38EB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EB44u;
label_38eb44:
    // 0x38eb44: 0x0  nop
    ctx->pc = 0x38eb44u;
    // NOP
label_38eb48:
    // 0x38eb48: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x38eb48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x38eb4c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38EB4Cu;
    {
        const bool branch_taken_0x38eb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB4Cu;
        // 0x38eb50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eb4c) {
            ctx->pc = 0x38EB58u;
            goto label_38eb58;
        }
    }
    ctx->pc = 0x38EB54u;
    // 0x38eb54: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x38eb54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_38eb58:
    // 0x38eb58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38eb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38eb5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38eb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38eb60: 0x3e00008  jr          $ra
    ctx->pc = 0x38EB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB60u;
        // 0x38eb64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EB68u;
}
