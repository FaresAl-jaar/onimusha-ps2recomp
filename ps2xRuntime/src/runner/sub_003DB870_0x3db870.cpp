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

// Function: sub_003DB870
// Address: 0x3db870 - 0x3db908
void sub_003DB870_0x3db870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB870_0x3db870");
#endif

    ctx->pc = 0x3db870u;

    // 0x3db870: 0xc4822bc8  lwc1        $f2, 0x2BC8($a0)
    ctx->pc = 0x3db870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3db874: 0xc4832bc0  lwc1        $f3, 0x2BC0($a0)
    ctx->pc = 0x3db874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3db878: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x3db878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3db87c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x3DB87Cu;
    {
        const bool branch_taken_0x3db87c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3db87c) {
            ctx->pc = 0x3DB8B8u;
            goto label_3db8b8;
        }
    }
    ctx->pc = 0x3DB884u;
    // 0x3db884: 0xc4802bc4  lwc1        $f0, 0x2BC4($a0)
    ctx->pc = 0x3db884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db888: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3db888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3db88c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3db88cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3db890: 0x0  nop
    ctx->pc = 0x3db890u;
    // NOP
    // 0x3db894: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3db894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3db898: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x3db898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3db89c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x3db89cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3db8a0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3DB8A0u;
    {
        const bool branch_taken_0x3db8a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8A0u;
        // 0x3db8a4: 0x46011801  sub.s       $f0, $f3, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db8a0) {
            ctx->pc = 0x3DB8B0u;
            goto label_3db8b0;
        }
    }
    ctx->pc = 0x3DB8A8u;
    // 0x3db8a8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3DB8A8u;
    {
        const bool branch_taken_0x3db8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8A8u;
        // 0x3db8ac: 0xe4802bc0  swc1        $f0, 0x2BC0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db8a8) {
            ctx->pc = 0x3DB900u;
            goto label_3db900;
        }
    }
    ctx->pc = 0x3DB8B0u;
label_3db8b0:
    // 0x3db8b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3DB8B0u;
    {
        const bool branch_taken_0x3db8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8B0u;
        // 0x3db8b4: 0xe4822bc0  swc1        $f2, 0x2BC0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db8b0) {
            ctx->pc = 0x3DB900u;
            goto label_3db900;
        }
    }
    ctx->pc = 0x3DB8B8u;
label_3db8b8:
    // 0x3db8b8: 0xc4822bcc  lwc1        $f2, 0x2BCC($a0)
    ctx->pc = 0x3db8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3db8bc: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x3db8bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3db8c0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x3DB8C0u;
    {
        const bool branch_taken_0x3db8c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3db8c0) {
            ctx->pc = 0x3DB900u;
            goto label_3db900;
        }
    }
    ctx->pc = 0x3DB8C8u;
    // 0x3db8c8: 0xc4802bc4  lwc1        $f0, 0x2BC4($a0)
    ctx->pc = 0x3db8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db8cc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3db8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3db8d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3db8d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3db8d4: 0x0  nop
    ctx->pc = 0x3db8d4u;
    // NOP
    // 0x3db8d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3db8d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3db8dc: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x3db8dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3db8e0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3db8e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3db8e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3DB8E4u;
    {
        const bool branch_taken_0x3db8e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8E4u;
        // 0x3db8e8: 0x46011800  add.s       $f0, $f3, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db8e4) {
            ctx->pc = 0x3DB8F8u;
            goto label_3db8f8;
        }
    }
    ctx->pc = 0x3DB8ECu;
    // 0x3db8ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DB8ECu;
    {
        const bool branch_taken_0x3db8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8ECu;
        // 0x3db8f0: 0xe4802bc0  swc1        $f0, 0x2BC0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db8ec) {
            ctx->pc = 0x3DB900u;
            goto label_3db900;
        }
    }
    ctx->pc = 0x3DB8F4u;
    // 0x3db8f4: 0x0  nop
    ctx->pc = 0x3db8f4u;
    // NOP
label_3db8f8:
    // 0x3db8f8: 0xe4822bc0  swc1        $f2, 0x2BC0($a0)
    ctx->pc = 0x3db8f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11200), bits); }
    // 0x3db8fc: 0x0  nop
    ctx->pc = 0x3db8fcu;
    // NOP
label_3db900:
    // 0x3db900: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB908u;
}
