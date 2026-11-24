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

// Function: sub_003E9040
// Address: 0x3e9040 - 0x3e90b8
void sub_003E9040_0x3e9040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9040_0x3e9040");
#endif

    ctx->pc = 0x3e9040u;

    // 0x3e9040: 0xc4802b48  lwc1        $f0, 0x2B48($a0)
    ctx->pc = 0x3e9040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e9044: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3e9044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e9048: 0x0  nop
    ctx->pc = 0x3e9048u;
    // NOP
    // 0x3e904c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x3e904cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e9050: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x3E9050u;
    {
        const bool branch_taken_0x3e9050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e9050) {
            ctx->pc = 0x3E90A8u;
            goto label_3e90a8;
        }
    }
    ctx->pc = 0x3E9058u;
    // 0x3e9058: 0xc4822b44  lwc1        $f2, 0x2B44($a0)
    ctx->pc = 0x3e9058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e905c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e905cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3e9060: 0xc4812b40  lwc1        $f1, 0x2B40($a0)
    ctx->pc = 0x3e9060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e9064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e9064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e9068: 0x0  nop
    ctx->pc = 0x3e9068u;
    // NOP
    // 0x3e906c: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x3e906cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3e9070: 0xe4822b40  swc1        $f2, 0x2B40($a0)
    ctx->pc = 0x3e9070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11072), bits); }
    // 0x3e9074: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3e9074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e9078: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3e9078u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3e907c: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x3e907cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3e9080: 0xc4812b48  lwc1        $f1, 0x2B48($a0)
    ctx->pc = 0x3e9080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e9084: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3e9084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e9088: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3e9088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e908c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3E908Cu;
    {
        const bool branch_taken_0x3e908c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E908Cu;
        // 0x3e9090: 0xe4802b48  swc1        $f0, 0x2B48($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11080), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e908c) {
            ctx->pc = 0x3E90A0u;
            goto label_3e90a0;
        }
    }
    ctx->pc = 0x3E9094u;
    // 0x3e9094: 0xe4832b48  swc1        $f3, 0x2B48($a0)
    ctx->pc = 0x3e9094u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11080), bits); }
    // 0x3e9098: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9098u;
    {
        const bool branch_taken_0x3e9098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9098u;
        // 0x3e909c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9098) {
            ctx->pc = 0x3E90B0u;
            goto label_3e90b0;
        }
    }
    ctx->pc = 0x3E90A0u;
label_3e90a0:
    // 0x3e90a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E90A0u;
    {
        const bool branch_taken_0x3e90a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E90A0u;
        // 0x3e90a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e90a0) {
            ctx->pc = 0x3E90B0u;
            goto label_3e90b0;
        }
    }
    ctx->pc = 0x3E90A8u;
label_3e90a8:
    // 0x3e90a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e90ac: 0x0  nop
    ctx->pc = 0x3e90acu;
    // NOP
label_3e90b0:
    // 0x3e90b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E90B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E90B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E90B8u;
}
