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

// Function: sub_00375B30
// Address: 0x375b30 - 0x375c60
void sub_00375B30_0x375b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375B30_0x375b30");
#endif

    switch (ctx->pc) {
        case 0x375bd8u: goto label_375bd8;
        case 0x375c00u: goto label_375c00;
        default: break;
    }

    ctx->pc = 0x375b30u;

    // 0x375b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375b34: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x375b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x375b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x375b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x375b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x375b40: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x375b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x375b44: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x375B44u;
    {
        const bool branch_taken_0x375b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x375B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B44u;
        // 0x375b48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375b44) {
            ctx->pc = 0x375BD8u;
            goto label_375bd8;
        }
    }
    ctx->pc = 0x375B4Cu;
    // 0x375b4c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x375b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x375b50: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x375b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x375b54: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x375b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x375b58: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x375b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x375b5c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x375b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x375b60: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x375b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x375b64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x375b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x375b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375b6c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x375b6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x375b70: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x375b70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x375b74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x375b74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375b78: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x375B78u;
    {
        const bool branch_taken_0x375b78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x375B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B78u;
        // 0x375b7c: 0x96040824  lhu         $a0, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375b78) {
            ctx->pc = 0x375B90u;
            goto label_375b90;
        }
    }
    ctx->pc = 0x375B80u;
    // 0x375b80: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x375b80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x375b84: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x375b84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x375b88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x375B88u;
    {
        const bool branch_taken_0x375b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B88u;
        // 0x375b8c: 0x83082b  sltu        $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375b88) {
            ctx->pc = 0x375BACu;
            goto label_375bac;
        }
    }
    ctx->pc = 0x375B90u;
label_375b90:
    // 0x375b90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x375b90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375b94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x375b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x375b98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x375b98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x375b9c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x375b9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x375ba0: 0x0  nop
    ctx->pc = 0x375ba0u;
    // NOP
    // 0x375ba4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x375ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x375ba8: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x375ba8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_375bac:
    // 0x375bac: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x375BACu;
    {
        const bool branch_taken_0x375bac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x375bac) {
            ctx->pc = 0x375BC0u;
            goto label_375bc0;
        }
    }
    ctx->pc = 0x375BB4u;
    // 0x375bb4: 0x92022ab0  lbu         $v0, 0x2AB0($s0)
    ctx->pc = 0x375bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x375bb8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x375bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x375bbc: 0xa2022ab0  sb          $v0, 0x2AB0($s0)
    ctx->pc = 0x375bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10928), (uint8_t)GPR_U32(ctx, 2));
label_375bc0:
    // 0x375bc0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x375bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x375bc4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x375bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x375bc8: 0x260407a0  addiu       $a0, $s0, 0x7A0
    ctx->pc = 0x375bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
    // 0x375bcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x375bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x375bd0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x375BD0u;
    SET_GPR_U32(ctx, 31, 0x375BD8u);
    ctx->pc = 0x375BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375BD0u;
    // 0x375bd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x375BD0u, 0x375BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375BD8u;
label_375bd8:
    // 0x375bd8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x375bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x375bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375be0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x375be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375be4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x375be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375be8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x375be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x375bec: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x375becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x375bf0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x375bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x375bf4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x375bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x375bf8: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x375BF8u;
    SET_GPR_U32(ctx, 31, 0x375C00u);
    ctx->pc = 0x375BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375BF8u;
    // 0x375bfc: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x375BF8u, 0x375C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C00u;
label_375c00:
    // 0x375c00: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x375c00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x375c04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x375c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375c08: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x375C08u;
    {
        const bool branch_taken_0x375c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x375c08) {
            ctx->pc = 0x375C40u;
            goto label_375c40;
        }
    }
    ctx->pc = 0x375C10u;
    // 0x375c10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x375C10u;
    {
        const bool branch_taken_0x375c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x375c10) {
            ctx->pc = 0x375C20u;
            goto label_375c20;
        }
    }
    ctx->pc = 0x375C18u;
    // 0x375c18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x375C18u;
    {
        const bool branch_taken_0x375c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375c18) {
            ctx->pc = 0x375C50u;
            goto label_375c50;
        }
    }
    ctx->pc = 0x375C20u;
label_375c20:
    // 0x375c20: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x375c20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x375c24: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x375c24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x375c28: 0x24030098  addiu       $v1, $zero, 0x98
    ctx->pc = 0x375c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x375c2c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x375c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x375c30: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x375c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x375c34: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x375c34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x375c38: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x375c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x375c3c: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x375c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
label_375c40:
    // 0x375c40: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x375c40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x375c44: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x375C44u;
    {
        const bool branch_taken_0x375c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x375C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375C44u;
        // 0x375c48: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375c44) {
            ctx->pc = 0x375C50u;
            goto label_375c50;
        }
    }
    ctx->pc = 0x375C4Cu;
    // 0x375c4c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x375c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_375c50:
    // 0x375c50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x375c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375c58: 0x3e00008  jr          $ra
    ctx->pc = 0x375C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375C58u;
        // 0x375c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375C60u;
}
