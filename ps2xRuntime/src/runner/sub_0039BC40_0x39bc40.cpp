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

// Function: sub_0039BC40
// Address: 0x39bc40 - 0x39bcd8
void sub_0039BC40_0x39bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BC40_0x39bc40");
#endif

    ctx->pc = 0x39bc40u;

    // 0x39bc40: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x39bc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x39bc44: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x39bc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x39bc48: 0x90226c1c  lbu         $v0, 0x6C1C($at)
    ctx->pc = 0x39bc48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x39bc4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x39bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39bc50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x39bc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x39bc54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x39bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x39bc58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39bc5c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x39bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x39bc60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39bc64: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x39BC64u;
    {
        const bool branch_taken_0x39bc64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC64u;
        // 0x39bc68: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bc64) {
            ctx->pc = 0x39BC98u;
            goto label_39bc98;
        }
    }
    ctx->pc = 0x39BC6Cu;
    // 0x39bc6c: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x39bc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39bc70: 0x3c024431  lui         $v0, 0x4431
    ctx->pc = 0x39bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17457 << 16));
    // 0x39bc74: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x39bc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x39bc78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39bc78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bc7c: 0x0  nop
    ctx->pc = 0x39bc7cu;
    // NOP
    // 0x39bc80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x39bc80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39bc84: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x39BC84u;
    {
        const bool branch_taken_0x39bc84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39bc84) {
            ctx->pc = 0x39BC98u;
            goto label_39bc98;
        }
    }
    ctx->pc = 0x39BC8Cu;
    // 0x39bc8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x39BC8Cu;
    {
        const bool branch_taken_0x39bc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC8Cu;
        // 0x39bc90: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bc8c) {
            ctx->pc = 0x39BCD0u;
            goto label_39bcd0;
        }
    }
    ctx->pc = 0x39BC94u;
    // 0x39bc94: 0x0  nop
    ctx->pc = 0x39bc94u;
    // NOP
label_39bc98:
    // 0x39bc98: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x39BC98u;
    {
        const bool branch_taken_0x39bc98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bc98) {
            ctx->pc = 0x39BCC8u;
            goto label_39bcc8;
        }
    }
    ctx->pc = 0x39BCA0u;
    // 0x39bca0: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x39bca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39bca4: 0x3c024431  lui         $v0, 0x4431
    ctx->pc = 0x39bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17457 << 16));
    // 0x39bca8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x39bca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x39bcac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39bcacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bcb0: 0x0  nop
    ctx->pc = 0x39bcb0u;
    // NOP
    // 0x39bcb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x39bcb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39bcb8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x39BCB8u;
    {
        const bool branch_taken_0x39bcb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39bcb8) {
            ctx->pc = 0x39BCC8u;
            goto label_39bcc8;
        }
    }
    ctx->pc = 0x39BCC0u;
    // 0x39bcc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39BCC0u;
    {
        const bool branch_taken_0x39bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BCC0u;
        // 0x39bcc4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bcc0) {
            ctx->pc = 0x39BCD0u;
            goto label_39bcd0;
        }
    }
    ctx->pc = 0x39BCC8u;
label_39bcc8:
    // 0x39bcc8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x39bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39bccc: 0x0  nop
    ctx->pc = 0x39bcccu;
    // NOP
label_39bcd0:
    // 0x39bcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x39BCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BCD8u;
}
