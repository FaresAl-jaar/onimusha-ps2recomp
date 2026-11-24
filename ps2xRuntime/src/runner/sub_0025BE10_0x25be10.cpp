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

// Function: sub_0025BE10
// Address: 0x25be10 - 0x25bedc
void sub_0025BE10_0x25be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BE10_0x25be10");
#endif

    switch (ctx->pc) {
        case 0x25be70u: goto label_25be70;
        case 0x25be84u: goto label_25be84;
        default: break;
    }

    ctx->pc = 0x25be10u;

    // 0x25be10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25be10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25be14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x25be14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x25be18: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x25be18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x25be1c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25be1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x25be20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25be20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25be24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25be24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25be28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25be28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25be2c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25be2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25be30: 0x8c92004c  lw          $s2, 0x4C($a0)
    ctx->pc = 0x25be30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x25be34: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BE34u;
    {
        const bool branch_taken_0x25be34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE34u;
        // 0x25be38: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be34) {
            ctx->pc = 0x25BE48u;
            goto label_25be48;
        }
    }
    ctx->pc = 0x25BE3Cu;
    // 0x25be3c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25BE3Cu;
    {
        const bool branch_taken_0x25be3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE3Cu;
        // 0x25be40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be3c) {
            ctx->pc = 0x25BEB8u;
            goto label_25beb8;
        }
    }
    ctx->pc = 0x25BE44u;
    // 0x25be44: 0x0  nop
    ctx->pc = 0x25be44u;
    // NOP
label_25be48:
    // 0x25be48: 0x3c02561c  lui         $v0, 0x561C
    ctx->pc = 0x25be48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22044 << 16));
    // 0x25be4c: 0x34423ec8  ori         $v0, $v0, 0x3EC8
    ctx->pc = 0x25be4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16072);
    // 0x25be50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25be50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25be54: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x25be54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25be58: 0x9642006a  lhu         $v0, 0x6A($s2)
    ctx->pc = 0x25be58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
    // 0x25be5c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x25be5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25be60: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x25BE60u;
    {
        const bool branch_taken_0x25be60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE60u;
        // 0x25be64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be60) {
            ctx->pc = 0x25BEB0u;
            goto label_25beb0;
        }
    }
    ctx->pc = 0x25BE68u;
    // 0x25be68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25be68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25be6c: 0x0  nop
    ctx->pc = 0x25be6cu;
    // NOP
label_25be70:
    // 0x25be70: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x25be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x25be74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25be74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25be78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25be78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25be7c: 0xc076664  jal         func_1D9990
    ctx->pc = 0x25BE7Cu;
    SET_GPR_U32(ctx, 31, 0x25BE84u);
    ctx->pc = 0x25BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BE7Cu;
    // 0x25be80: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x25BE7Cu, 0x25BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BE84u;
label_25be84:
    // 0x25be84: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25be84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25be88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25BE88u;
    {
        const bool branch_taken_0x25be88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25be88) {
            ctx->pc = 0x25BE98u;
            goto label_25be98;
        }
    }
    ctx->pc = 0x25BE90u;
    // 0x25be90: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25be90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25be94: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x25be94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25be98:
    // 0x25be98: 0x9642006a  lhu         $v0, 0x6A($s2)
    ctx->pc = 0x25be98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
    // 0x25be9c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x25be9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25bea0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x25bea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25bea4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x25BEA4u;
    {
        const bool branch_taken_0x25bea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEA4u;
        // 0x25bea8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bea4) {
            ctx->pc = 0x25BE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25be70;
        }
    }
    ctx->pc = 0x25BEACu;
    // 0x25beac: 0x0  nop
    ctx->pc = 0x25beacu;
    // NOP
label_25beb0:
    // 0x25beb0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25beb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25beb4: 0x0  nop
    ctx->pc = 0x25beb4u;
    // NOP
label_25beb8:
    // 0x25beb8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x25beb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25bebc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x25bebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25bec0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25bec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25bec4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25bec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25bec8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25bec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25becc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25beccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25bed0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25bed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bed4: 0x3e00008  jr          $ra
    ctx->pc = 0x25BED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BED4u;
        // 0x25bed8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BEDCu;
}
