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

// Function: sub_003EDD30
// Address: 0x3edd30 - 0x3edda8
void sub_003EDD30_0x3edd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDD30_0x3edd30");
#endif

    ctx->pc = 0x3edd30u;

    // 0x3edd30: 0xc4802bc4  lwc1        $f0, 0x2BC4($a0)
    ctx->pc = 0x3edd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3edd34: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3edd34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3edd38: 0x0  nop
    ctx->pc = 0x3edd38u;
    // NOP
    // 0x3edd3c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x3edd3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3edd40: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x3EDD40u;
    {
        const bool branch_taken_0x3edd40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3edd40) {
            ctx->pc = 0x3EDD98u;
            goto label_3edd98;
        }
    }
    ctx->pc = 0x3EDD48u;
    // 0x3edd48: 0xc4822bc0  lwc1        $f2, 0x2BC0($a0)
    ctx->pc = 0x3edd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3edd4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3edd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3edd50: 0xc4812bbc  lwc1        $f1, 0x2BBC($a0)
    ctx->pc = 0x3edd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3edd54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3edd54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3edd58: 0x0  nop
    ctx->pc = 0x3edd58u;
    // NOP
    // 0x3edd5c: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x3edd5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3edd60: 0xe4822bbc  swc1        $f2, 0x2BBC($a0)
    ctx->pc = 0x3edd60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11196), bits); }
    // 0x3edd64: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3edd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3edd68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3edd68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3edd6c: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x3edd6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3edd70: 0xc4812bc4  lwc1        $f1, 0x2BC4($a0)
    ctx->pc = 0x3edd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3edd74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3edd74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3edd78: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3edd78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3edd7c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3EDD7Cu;
    {
        const bool branch_taken_0x3edd7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDD7Cu;
        // 0x3edd80: 0xe4802bc4  swc1        $f0, 0x2BC4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edd7c) {
            ctx->pc = 0x3EDD90u;
            goto label_3edd90;
        }
    }
    ctx->pc = 0x3EDD84u;
    // 0x3edd84: 0xe4832bc4  swc1        $f3, 0x2BC4($a0)
    ctx->pc = 0x3edd84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11204), bits); }
    // 0x3edd88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3EDD88u;
    {
        const bool branch_taken_0x3edd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDD88u;
        // 0x3edd8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edd88) {
            ctx->pc = 0x3EDDA0u;
            goto label_3edda0;
        }
    }
    ctx->pc = 0x3EDD90u;
label_3edd90:
    // 0x3edd90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EDD90u;
    {
        const bool branch_taken_0x3edd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDD90u;
        // 0x3edd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edd90) {
            ctx->pc = 0x3EDDA0u;
            goto label_3edda0;
        }
    }
    ctx->pc = 0x3EDD98u;
label_3edd98:
    // 0x3edd98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3edd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3edd9c: 0x0  nop
    ctx->pc = 0x3edd9cu;
    // NOP
label_3edda0:
    // 0x3edda0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDDA8u;
}
