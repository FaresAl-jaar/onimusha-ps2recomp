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

// Function: sub_0037F3F0
// Address: 0x37f3f0 - 0x37f488
void sub_0037F3F0_0x37f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F3F0_0x37f3f0");
#endif

    ctx->pc = 0x37f3f0u;

    // 0x37f3f0: 0xc4822b64  lwc1        $f2, 0x2B64($a0)
    ctx->pc = 0x37f3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37f3f4: 0xc4832b60  lwc1        $f3, 0x2B60($a0)
    ctx->pc = 0x37f3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37f3f8: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x37f3f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f3fc: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x37F3FCu;
    {
        const bool branch_taken_0x37f3fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37f3fc) {
            ctx->pc = 0x37F438u;
            goto label_37f438;
        }
    }
    ctx->pc = 0x37F404u;
    // 0x37f404: 0xc4802b6c  lwc1        $f0, 0x2B6C($a0)
    ctx->pc = 0x37f404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f408: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x37f408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x37f40c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37f40cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37f410: 0x0  nop
    ctx->pc = 0x37f410u;
    // NOP
    // 0x37f414: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x37f414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37f418: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x37f418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x37f41c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x37f41cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f420: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x37F420u;
    {
        const bool branch_taken_0x37f420 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F420u;
        // 0x37f424: 0x46011801  sub.s       $f0, $f3, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f420) {
            ctx->pc = 0x37F430u;
            goto label_37f430;
        }
    }
    ctx->pc = 0x37F428u;
    // 0x37f428: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x37F428u;
    {
        const bool branch_taken_0x37f428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F428u;
        // 0x37f42c: 0xe4802b60  swc1        $f0, 0x2B60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f428) {
            ctx->pc = 0x37F480u;
            goto label_37f480;
        }
    }
    ctx->pc = 0x37F430u;
label_37f430:
    // 0x37f430: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x37F430u;
    {
        const bool branch_taken_0x37f430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F430u;
        // 0x37f434: 0xe4822b60  swc1        $f2, 0x2B60($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f430) {
            ctx->pc = 0x37F480u;
            goto label_37f480;
        }
    }
    ctx->pc = 0x37F438u;
label_37f438:
    // 0x37f438: 0xc4822b68  lwc1        $f2, 0x2B68($a0)
    ctx->pc = 0x37f438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37f43c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x37f43cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f440: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x37F440u;
    {
        const bool branch_taken_0x37f440 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37f440) {
            ctx->pc = 0x37F480u;
            goto label_37f480;
        }
    }
    ctx->pc = 0x37F448u;
    // 0x37f448: 0xc4802b6c  lwc1        $f0, 0x2B6C($a0)
    ctx->pc = 0x37f448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f44c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x37f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x37f450: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37f450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37f454: 0x0  nop
    ctx->pc = 0x37f454u;
    // NOP
    // 0x37f458: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x37f458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37f45c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x37f45cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x37f460: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x37f460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f464: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x37F464u;
    {
        const bool branch_taken_0x37f464 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F464u;
        // 0x37f468: 0x46011800  add.s       $f0, $f3, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f464) {
            ctx->pc = 0x37F478u;
            goto label_37f478;
        }
    }
    ctx->pc = 0x37F46Cu;
    // 0x37f46c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37F46Cu;
    {
        const bool branch_taken_0x37f46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F46Cu;
        // 0x37f470: 0xe4802b60  swc1        $f0, 0x2B60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f46c) {
            ctx->pc = 0x37F480u;
            goto label_37f480;
        }
    }
    ctx->pc = 0x37F474u;
    // 0x37f474: 0x0  nop
    ctx->pc = 0x37f474u;
    // NOP
label_37f478:
    // 0x37f478: 0xe4822b60  swc1        $f2, 0x2B60($a0)
    ctx->pc = 0x37f478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11104), bits); }
    // 0x37f47c: 0x0  nop
    ctx->pc = 0x37f47cu;
    // NOP
label_37f480:
    // 0x37f480: 0x3e00008  jr          $ra
    ctx->pc = 0x37F480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F488u;
}
