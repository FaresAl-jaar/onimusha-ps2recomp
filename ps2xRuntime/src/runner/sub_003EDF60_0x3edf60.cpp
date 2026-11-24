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

// Function: sub_003EDF60
// Address: 0x3edf60 - 0x3ee08c
void sub_003EDF60_0x3edf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDF60_0x3edf60");
#endif

    switch (ctx->pc) {
        case 0x3edfdcu: goto label_3edfdc;
        case 0x3edfecu: goto label_3edfec;
        case 0x3edff8u: goto label_3edff8;
        case 0x3ee030u: goto label_3ee030;
        case 0x3ee04cu: goto label_3ee04c;
        case 0x3ee070u: goto label_3ee070;
        default: break;
    }

    ctx->pc = 0x3edf60u;

    // 0x3edf60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3edf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3edf64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3edf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3edf68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3edf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3edf6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3edf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3edf70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3edf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3edf74: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3edf74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3edf78: 0x1065002d  beq         $v1, $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3EDF78u;
    {
        const bool branch_taken_0x3edf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3EDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDF78u;
        // 0x3edf7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edf78) {
            ctx->pc = 0x3EE030u;
            goto label_3ee030;
        }
    }
    ctx->pc = 0x3EDF80u;
    // 0x3edf80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EDF80u;
    {
        const bool branch_taken_0x3edf80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3edf80) {
            ctx->pc = 0x3EDF90u;
            goto label_3edf90;
        }
    }
    ctx->pc = 0x3EDF88u;
    // 0x3edf88: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3EDF88u;
    {
        const bool branch_taken_0x3edf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3edf88) {
            ctx->pc = 0x3EE078u;
            goto label_3ee078;
        }
    }
    ctx->pc = 0x3EDF90u;
label_3edf90:
    // 0x3edf90: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3edf90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3edf94: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3edf94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3edf98: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3edf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3edf9c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3edf9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3edfa0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3edfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3edfa4: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3edfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3edfa8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3edfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3edfac: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3edfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x3edfb0: 0xa2050821  sb          $a1, 0x821($s0)
    ctx->pc = 0x3edfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x3edfb4: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x3edfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x3edfb8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3edfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3edfbc: 0x344354f6  ori         $v1, $v0, 0x54F6
    ctx->pc = 0x3edfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21750);
    // 0x3edfc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3edfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3edfc4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3edfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3edfc8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x3edfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x3edfcc: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x3edfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3edfd0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3edfd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3edfd4: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3EDFD4u;
    SET_GPR_U32(ctx, 31, 0x3EDFDCu);
    ctx->pc = 0x3EDFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDFD4u;
    // 0x3edfd8: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3EDFD4u, 0x3EDFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDFDCu;
label_3edfdc:
    // 0x3edfdc: 0x86052b2c  lh          $a1, 0x2B2C($s0)
    ctx->pc = 0x3edfdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3edfe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3edfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edfe4: 0xc0aac8c  jal         func_2AB230
    ctx->pc = 0x3EDFE4u;
    SET_GPR_U32(ctx, 31, 0x3EDFECu);
    ctx->pc = 0x3EDFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDFE4u;
    // 0x3edfe8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB230u, 0x3EDFE4u, 0x3EDFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDFECu;
label_3edfec:
    // 0x3edfec: 0x8e042950  lw          $a0, 0x2950($s0)
    ctx->pc = 0x3edfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10576)));
    // 0x3edff0: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3EDFF0u;
    SET_GPR_U32(ctx, 31, 0x3EDFF8u);
    ctx->pc = 0x3EDFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDFF0u;
    // 0x3edff4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3EDFF0u, 0x3EDFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDFF8u;
label_3edff8:
    // 0x3edff8: 0xae112950  sw          $s1, 0x2950($s0)
    ctx->pc = 0x3edff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10576), GPR_U32(ctx, 17));
    // 0x3edffc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3edffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3ee000: 0x86032b2c  lh          $v1, 0x2B2C($s0)
    ctx->pc = 0x3ee000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3ee004: 0x3c021900  lui         $v0, 0x1900
    ctx->pc = 0x3ee004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6400 << 16));
    // 0x3ee008: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3ee008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3ee00c: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3ee00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3ee010: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ee010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee014: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3ee014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3ee018: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ee018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee01c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ee01cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee020: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ee020u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee024: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ee024u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee028: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3EE028u;
    SET_GPR_U32(ctx, 31, 0x3EE030u);
    ctx->pc = 0x3EE02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE028u;
    // 0x3ee02c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3EE028u, 0x3EE030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE030u;
label_3ee030:
    // 0x3ee030: 0x3c02451b  lui         $v0, 0x451B
    ctx->pc = 0x3ee030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17691 << 16));
    // 0x3ee034: 0x3443f4f6  ori         $v1, $v0, 0xF4F6
    ctx->pc = 0x3ee034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62710);
    // 0x3ee038: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ee038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ee03c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3ee03cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3ee040: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3ee040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3ee044: 0xc097480  jal         func_25D200
    ctx->pc = 0x3EE044u;
    SET_GPR_U32(ctx, 31, 0x3EE04Cu);
    ctx->pc = 0x3EE048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE044u;
    // 0x3ee048: 0xc60c0024  lwc1        $f12, 0x24($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D200u, 0x3EE044u, 0x3EE04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE04Cu;
label_3ee04c:
    // 0x3ee04c: 0x3c03451b  lui         $v1, 0x451B
    ctx->pc = 0x3ee04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17691 << 16));
    // 0x3ee050: 0x3463f4f6  ori         $v1, $v1, 0xF4F6
    ctx->pc = 0x3ee050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62710);
    // 0x3ee054: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ee054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ee058: 0x0  nop
    ctx->pc = 0x3ee058u;
    // NOP
    // 0x3ee05c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3ee05cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ee060: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EE060u;
    {
        const bool branch_taken_0x3ee060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE060u;
        // 0x3ee064: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee060) {
            ctx->pc = 0x3EE078u;
            goto label_3ee078;
        }
    }
    ctx->pc = 0x3EE068u;
    // 0x3ee068: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3EE068u;
    SET_GPR_U32(ctx, 31, 0x3EE070u);
    ctx->pc = 0x3EE06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE068u;
    // 0x3ee06c: 0x8e042950  lw          $a0, 0x2950($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3EE068u, 0x3EE070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE070u;
label_3ee070:
    // 0x3ee070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ee070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee074: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ee074u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ee078:
    // 0x3ee078: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ee078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ee07c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ee07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ee080: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ee080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ee084: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE084u;
        // 0x3ee088: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE08Cu;
}
