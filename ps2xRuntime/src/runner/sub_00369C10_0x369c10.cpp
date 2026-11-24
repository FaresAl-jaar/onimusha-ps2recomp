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

// Function: sub_00369C10
// Address: 0x369c10 - 0x369ce0
void sub_00369C10_0x369c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369C10_0x369c10");
#endif

    switch (ctx->pc) {
        case 0x369c58u: goto label_369c58;
        case 0x369c74u: goto label_369c74;
        case 0x369c94u: goto label_369c94;
        default: break;
    }

    ctx->pc = 0x369c10u;

    // 0x369c10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x369c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x369c14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x369c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x369c18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x369c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x369c1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x369c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x369c20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x369c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x369c24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x369c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x369c28: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x369c28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x369c2c: 0x8f828bec  lw          $v0, -0x7414($gp)
    ctx->pc = 0x369c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937580)));
    // 0x369c30: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369C30u;
    {
        const bool branch_taken_0x369c30 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x369C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C30u;
        // 0x369c34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369c30) {
            ctx->pc = 0x369C40u;
            goto label_369c40;
        }
    }
    ctx->pc = 0x369C38u;
    // 0x369c38: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x369C38u;
    {
        const bool branch_taken_0x369c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C38u;
        // 0x369c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369c38) {
            ctx->pc = 0x369CC0u;
            goto label_369cc0;
        }
    }
    ctx->pc = 0x369C40u;
label_369c40:
    // 0x369c40: 0x8f928be4  lw          $s2, -0x741C($gp)
    ctx->pc = 0x369c40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x369c44: 0x3c02561c  lui         $v0, 0x561C
    ctx->pc = 0x369c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22044 << 16));
    // 0x369c48: 0x34423ec8  ori         $v0, $v0, 0x3EC8
    ctx->pc = 0x369c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16072);
    // 0x369c4c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x369c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x369c50: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x369C50u;
    {
        const bool branch_taken_0x369c50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x369C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C50u;
        // 0x369c54: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369c50) {
            ctx->pc = 0x369CB8u;
            goto label_369cb8;
        }
    }
    ctx->pc = 0x369C58u;
label_369c58:
    // 0x369c58: 0x16500003  bne         $s2, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369C58u;
    {
        const bool branch_taken_0x369c58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x369C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C58u;
        // 0x369c5c: 0x8e512b24  lw          $s1, 0x2B24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369c58) {
            ctx->pc = 0x369C68u;
            goto label_369c68;
        }
    }
    ctx->pc = 0x369C60u;
    // 0x369c60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x369C60u;
    {
        const bool branch_taken_0x369c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C60u;
        // 0x369c64: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369c60) {
            ctx->pc = 0x369CB0u;
            goto label_369cb0;
        }
    }
    ctx->pc = 0x369C68u;
label_369c68:
    // 0x369c68: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x369c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x369c6c: 0xc0da7b8  jal         func_369EE0
    ctx->pc = 0x369C6Cu;
    SET_GPR_U32(ctx, 31, 0x369C74u);
    ctx->pc = 0x369C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369C6Cu;
    // 0x369c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369EE0u, 0x369C6Cu, 0x369C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C74u;
label_369c74:
    // 0x369c74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x369C74u;
    {
        const bool branch_taken_0x369c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369c74) {
            ctx->pc = 0x369C88u;
            goto label_369c88;
        }
    }
    ctx->pc = 0x369C7Cu;
    // 0x369c7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x369C7Cu;
    {
        const bool branch_taken_0x369c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C7Cu;
        // 0x369c80: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369c7c) {
            ctx->pc = 0x369CB0u;
            goto label_369cb0;
        }
    }
    ctx->pc = 0x369C84u;
    // 0x369c84: 0x0  nop
    ctx->pc = 0x369c84u;
    // NOP
label_369c88:
    // 0x369c88: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x369c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x369c8c: 0xc076664  jal         func_1D9990
    ctx->pc = 0x369C8Cu;
    SET_GPR_U32(ctx, 31, 0x369C94u);
    ctx->pc = 0x369C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369C8Cu;
    // 0x369c90: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x369C8Cu, 0x369C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C94u;
label_369c94:
    // 0x369c94: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x369c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369c98: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x369C98u;
    {
        const bool branch_taken_0x369c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369c98) {
            ctx->pc = 0x369CA8u;
            goto label_369ca8;
        }
    }
    ctx->pc = 0x369CA0u;
    // 0x369ca0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x369ca0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x369ca4: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x369ca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_369ca8:
    // 0x369ca8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x369ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369cac: 0x0  nop
    ctx->pc = 0x369cacu;
    // NOP
label_369cb0:
    // 0x369cb0: 0x1640ffe9  bnez        $s2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x369CB0u;
    {
        const bool branch_taken_0x369cb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x369cb0) {
            ctx->pc = 0x369C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369c58;
        }
    }
    ctx->pc = 0x369CB8u;
label_369cb8:
    // 0x369cb8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x369cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369cbc: 0x0  nop
    ctx->pc = 0x369cbcu;
    // NOP
label_369cc0:
    // 0x369cc0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x369cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x369cc4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x369cc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x369cc8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x369cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x369ccc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x369cccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369cd0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x369cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369cd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x369cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x369CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369CD8u;
        // 0x369cdc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369CE0u;
}
