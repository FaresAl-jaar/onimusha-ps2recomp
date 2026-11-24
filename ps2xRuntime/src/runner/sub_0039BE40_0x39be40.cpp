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

// Function: sub_0039BE40
// Address: 0x39be40 - 0x39bf58
void sub_0039BE40_0x39be40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BE40_0x39be40");
#endif

    switch (ctx->pc) {
        case 0x39be90u: goto label_39be90;
        case 0x39bea8u: goto label_39bea8;
        case 0x39bec4u: goto label_39bec4;
        case 0x39bee0u: goto label_39bee0;
        case 0x39bf04u: goto label_39bf04;
        default: break;
    }

    ctx->pc = 0x39be40u;

    // 0x39be40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x39be40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x39be44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39be44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39be48: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x39be48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x39be4c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x39be4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x39be50: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x39be50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x39be54: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x39be54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39be58: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x39be58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x39be5c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x39be5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x39be60: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39be60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x39be64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39be64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x39be68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39be68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39be6c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x39be6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x39be70: 0x1203000b  beq         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x39BE70u;
    {
        const bool branch_taken_0x39be70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x39BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BE70u;
        // 0x39be74: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39be70) {
            ctx->pc = 0x39BEA0u;
            goto label_39bea0;
        }
    }
    ctx->pc = 0x39BE78u;
    // 0x39be78: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39BE78u;
    {
        const bool branch_taken_0x39be78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39be78) {
            ctx->pc = 0x39BE88u;
            goto label_39be88;
        }
    }
    ctx->pc = 0x39BE80u;
    // 0x39be80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x39BE80u;
    {
        const bool branch_taken_0x39be80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39be80) {
            ctx->pc = 0x39BEB8u;
            goto label_39beb8;
        }
    }
    ctx->pc = 0x39BE88u;
label_39be88:
    // 0x39be88: 0xc0e6f10  jal         func_39BC40
    ctx->pc = 0x39BE88u;
    SET_GPR_U32(ctx, 31, 0x39BE90u);
    ctx->pc = 0x39BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC40u, 0x39BE88u, 0x39BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BE90u;
label_39be90:
    // 0x39be90: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x39be90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
    // 0x39be94: 0x24130006  addiu       $s3, $zero, 0x6
    ctx->pc = 0x39be94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x39be98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39BE98u;
    {
        const bool branch_taken_0x39be98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BE98u;
        // 0x39be9c: 0x2652c9a0  addiu       $s2, $s2, -0x3660 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39be98) {
            ctx->pc = 0x39BEB8u;
            goto label_39beb8;
        }
    }
    ctx->pc = 0x39BEA0u;
label_39bea0:
    // 0x39bea0: 0xc0e6f38  jal         func_39BCE0
    ctx->pc = 0x39BEA0u;
    SET_GPR_U32(ctx, 31, 0x39BEA8u);
    ctx->pc = 0x39BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BCE0u, 0x39BEA0u, 0x39BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BEA8u;
label_39bea8:
    // 0x39bea8: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x39bea8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
    // 0x39beac: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x39beacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39beb0: 0x2652ca00  addiu       $s2, $s2, -0x3600
    ctx->pc = 0x39beb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953472));
    // 0x39beb4: 0x0  nop
    ctx->pc = 0x39beb4u;
    // NOP
label_39beb8:
    // 0x39beb8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x39beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bebc: 0xc0e6f78  jal         func_39BDE0
    ctx->pc = 0x39BEBCu;
    SET_GPR_U32(ctx, 31, 0x39BEC4u);
    ctx->pc = 0x39BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BEBCu;
    // 0x39bec0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BDE0u, 0x39BEBCu, 0x39BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BEC4u;
label_39bec4:
    // 0x39bec4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x39bec4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bec8: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x39bec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x39becc: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x39beccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x39bed0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39bed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bed4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x39bed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x39bed8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x39BED8u;
    {
        const bool branch_taken_0x39bed8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BED8u;
        // 0x39bedc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bed8) {
            ctx->pc = 0x39BF28u;
            goto label_39bf28;
        }
    }
    ctx->pc = 0x39BEE0u;
label_39bee0:
    // 0x39bee0: 0x92c22bd7  lbu         $v0, 0x2BD7($s6)
    ctx->pc = 0x39bee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 11223)));
    // 0x39bee4: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39BEE4u;
    {
        const bool branch_taken_0x39bee4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x39bee4) {
            ctx->pc = 0x39BEF8u;
            goto label_39bef8;
        }
    }
    ctx->pc = 0x39BEECu;
    // 0x39beec: 0x92c22bd8  lbu         $v0, 0x2BD8($s6)
    ctx->pc = 0x39beecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 11224)));
    // 0x39bef0: 0x12820009  beq         $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39BEF0u;
    {
        const bool branch_taken_0x39bef0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x39bef0) {
            ctx->pc = 0x39BF18u;
            goto label_39bf18;
        }
    }
    ctx->pc = 0x39BEF8u;
label_39bef8:
    // 0x39bef8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39bef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39befc: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x39BEFCu;
    SET_GPR_U32(ctx, 31, 0x39BF04u);
    ctx->pc = 0x39BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BEFCu;
    // 0x39bf00: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x39BEFCu, 0x39BF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BF04u;
label_39bf04:
    // 0x39bf04: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x39bf04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39bf08: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x39BF08u;
    {
        const bool branch_taken_0x39bf08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39bf08) {
            ctx->pc = 0x39BF18u;
            goto label_39bf18;
        }
    }
    ctx->pc = 0x39BF10u;
    // 0x39bf10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x39bf10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x39bf14: 0x329100ff  andi        $s1, $s4, 0xFF
    ctx->pc = 0x39bf14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_39bf18:
    // 0x39bf18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39bf18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x39bf1c: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x39bf1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x39bf20: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x39BF20u;
    {
        const bool branch_taken_0x39bf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF20u;
        // 0x39bf24: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bf20) {
            ctx->pc = 0x39BEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39bee0;
        }
    }
    ctx->pc = 0x39BF28u;
label_39bf28:
    // 0x39bf28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39bf28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bf2c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x39bf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39bf30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x39bf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x39bf34: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x39bf34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39bf38: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x39bf38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39bf3c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x39bf3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39bf40: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x39bf40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39bf44: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39bf44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39bf48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39bf48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39bf4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39bf4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bf50: 0x3e00008  jr          $ra
    ctx->pc = 0x39BF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF50u;
        // 0x39bf54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BF58u;
}
