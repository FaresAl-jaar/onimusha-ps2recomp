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

// Function: sub_003DFC10
// Address: 0x3dfc10 - 0x3dfd40
void sub_003DFC10_0x3dfc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFC10_0x3dfc10");
#endif

    switch (ctx->pc) {
        case 0x3dfc2cu: goto label_3dfc2c;
        case 0x3dfc84u: goto label_3dfc84;
        default: break;
    }

    ctx->pc = 0x3dfc10u;

    // 0x3dfc10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dfc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dfc14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dfc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfc18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dfc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dfc1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3dfc1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfc20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dfc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dfc24: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x3DFC24u;
    SET_GPR_U32(ctx, 31, 0x3DFC2Cu);
    ctx->pc = 0x3DFC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFC24u;
    // 0x3dfc28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x3DFC24u, 0x3DFC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFC2Cu;
label_3dfc2c:
    // 0x3dfc2c: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x3dfc2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3dfc30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dfc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3dfc34: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3DFC34u;
    {
        const bool branch_taken_0x3dfc34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC34u;
        // 0x3dfc38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfc34) {
            ctx->pc = 0x3DFD20u;
            goto label_3dfd20;
        }
    }
    ctx->pc = 0x3DFC3Cu;
    // 0x3dfc3c: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3DFC3Cu;
    {
        const bool branch_taken_0x3dfc3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dfc3c) {
            ctx->pc = 0x3DFC88u;
            goto label_3dfc88;
        }
    }
    ctx->pc = 0x3DFC44u;
    // 0x3dfc44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFC44u;
    {
        const bool branch_taken_0x3dfc44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfc44) {
            ctx->pc = 0x3DFC58u;
            goto label_3dfc58;
        }
    }
    ctx->pc = 0x3DFC4Cu;
    // 0x3dfc4c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3DFC4Cu;
    {
        const bool branch_taken_0x3dfc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfc4c) {
            ctx->pc = 0x3DFD30u;
            goto label_3dfd30;
        }
    }
    ctx->pc = 0x3DFC54u;
    // 0x3dfc54: 0x0  nop
    ctx->pc = 0x3dfc54u;
    // NOP
label_3dfc58:
    // 0x3dfc58: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3dfc58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dfc5c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3dfc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dfc60: 0x24020095  addiu       $v0, $zero, 0x95
    ctx->pc = 0x3dfc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x3dfc64: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x3dfc64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dfc68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dfc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfc6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3dfc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3dfc70: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3dfc70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dfc74: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3dfc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3dfc78: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3dfc78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x3dfc7c: 0xc0f8554  jal         func_3E1550
    ctx->pc = 0x3DFC7Cu;
    SET_GPR_U32(ctx, 31, 0x3DFC84u);
    ctx->pc = 0x3DFC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFC7Cu;
    // 0x3dfc80: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1550u, 0x3DFC7Cu, 0x3DFC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFC84u;
label_3dfc84:
    // 0x3dfc84: 0x0  nop
    ctx->pc = 0x3dfc84u;
    // NOP
label_3dfc88:
    // 0x3dfc88: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3dfc88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3dfc8c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3DFC8Cu;
    {
        const bool branch_taken_0x3dfc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfc8c) {
            ctx->pc = 0x3DFD30u;
            goto label_3dfd30;
        }
    }
    ctx->pc = 0x3DFC94u;
    // 0x3dfc94: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3dfc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3dfc98: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3dfc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3dfc9c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3dfc9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3dfca0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3dfca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3dfca4: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3dfca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3dfca8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3dfca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3dfcac: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3dfcacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3dfcb0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3dfcb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dfcb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dfcb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dfcb8: 0x0  nop
    ctx->pc = 0x3dfcb8u;
    // NOP
    // 0x3dfcbc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3dfcbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3dfcc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3dfcc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dfcc4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DFCC4u;
    {
        const bool branch_taken_0x3dfcc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dfcc4) {
            ctx->pc = 0x3DFCDCu;
            goto label_3dfcdc;
        }
    }
    ctx->pc = 0x3DFCCCu;
    // 0x3dfccc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dfcccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dfcd0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3dfcd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3dfcd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DFCD4u;
    {
        const bool branch_taken_0x3dfcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFCD4u;
        // 0x3dfcd8: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfcd4) {
            ctx->pc = 0x3DFCF8u;
            goto label_3dfcf8;
        }
    }
    ctx->pc = 0x3DFCDCu;
label_3dfcdc:
    // 0x3dfcdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3dfcdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3dfce0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dfce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3dfce4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dfce4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dfce8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3dfce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3dfcec: 0x0  nop
    ctx->pc = 0x3dfcecu;
    // NOP
    // 0x3dfcf0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3dfcf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3dfcf4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3dfcf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3dfcf8:
    // 0x3dfcf8: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x3dfcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x3dfcfc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3dfcfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dfd00: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dfd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3dfd04: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3dfd04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3dfd08: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3dfd08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3dfd0c: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x3dfd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3dfd10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dfd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3dfd14: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3dfd14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3dfd18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3DFD18u;
    {
        const bool branch_taken_0x3dfd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD18u;
        // 0x3dfd1c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfd18) {
            ctx->pc = 0x3DFD30u;
            goto label_3dfd30;
        }
    }
    ctx->pc = 0x3DFD20u;
label_3dfd20:
    // 0x3dfd20: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3dfd20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3dfd24: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DFD24u;
    {
        const bool branch_taken_0x3dfd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD24u;
        // 0x3dfd28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfd24) {
            ctx->pc = 0x3DFD30u;
            goto label_3dfd30;
        }
    }
    ctx->pc = 0x3DFD2Cu;
    // 0x3dfd2c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3dfd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3dfd30:
    // 0x3dfd30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dfd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dfd34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dfd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dfd38: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD38u;
        // 0x3dfd3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFD40u;
}
