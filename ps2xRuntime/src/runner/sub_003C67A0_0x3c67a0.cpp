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

// Function: sub_003C67A0
// Address: 0x3c67a0 - 0x3c6858
void sub_003C67A0_0x3c67a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C67A0_0x3c67a0");
#endif

    ctx->pc = 0x3c67a0u;

    // 0x3c67a0: 0xc48105a4  lwc1        $f1, 0x5A4($a0)
    ctx->pc = 0x3c67a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c67a4: 0xc48005a0  lwc1        $f0, 0x5A0($a0)
    ctx->pc = 0x3c67a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c67a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c67a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c67ac: 0x80f19f0  j           func_3C67C0
    ctx->pc = 0x3C67ACu;
    ctx->pc = 0x3C67B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C67ACu;
    // 0x3c67b0: 0xe48005a0  swc1        $f0, 0x5A0($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1440), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C67C0u;
    goto label_3c67c0;
    ctx->pc = 0x3C67B4u;
    // 0x3c67b4: 0x0  nop
    ctx->pc = 0x3c67b4u;
    // NOP
    // 0x3c67b8: 0x0  nop
    ctx->pc = 0x3c67b8u;
    // NOP
    // 0x3c67bc: 0x0  nop
    ctx->pc = 0x3c67bcu;
    // NOP
label_3c67c0:
    // 0x3c67c0: 0xc48205a8  lwc1        $f2, 0x5A8($a0)
    ctx->pc = 0x3c67c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c67c4: 0xc48305a0  lwc1        $f3, 0x5A0($a0)
    ctx->pc = 0x3c67c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c67c8: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x3c67c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c67cc: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x3C67CCu;
    {
        const bool branch_taken_0x3c67cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c67cc) {
            ctx->pc = 0x3C6808u;
            goto label_3c6808;
        }
    }
    ctx->pc = 0x3C67D4u;
    // 0x3c67d4: 0xc48005a4  lwc1        $f0, 0x5A4($a0)
    ctx->pc = 0x3c67d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c67d8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3c67d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3c67dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c67dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c67e0: 0x0  nop
    ctx->pc = 0x3c67e0u;
    // NOP
    // 0x3c67e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c67e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c67e8: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x3c67e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3c67ec: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x3c67ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c67f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3C67F0u;
    {
        const bool branch_taken_0x3c67f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C67F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C67F0u;
        // 0x3c67f4: 0x46011801  sub.s       $f0, $f3, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c67f0) {
            ctx->pc = 0x3C6800u;
            goto label_3c6800;
        }
    }
    ctx->pc = 0x3C67F8u;
    // 0x3c67f8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3C67F8u;
    {
        const bool branch_taken_0x3c67f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C67F8u;
        // 0x3c67fc: 0xe48005a0  swc1        $f0, 0x5A0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1440), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c67f8) {
            ctx->pc = 0x3C6850u;
            goto label_3c6850;
        }
    }
    ctx->pc = 0x3C6800u;
label_3c6800:
    // 0x3c6800: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C6800u;
    {
        const bool branch_taken_0x3c6800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6800u;
        // 0x3c6804: 0xe48205a0  swc1        $f2, 0x5A0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1440), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6800) {
            ctx->pc = 0x3C6850u;
            goto label_3c6850;
        }
    }
    ctx->pc = 0x3C6808u;
label_3c6808:
    // 0x3c6808: 0xc48205ac  lwc1        $f2, 0x5AC($a0)
    ctx->pc = 0x3c6808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c680c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x3c680cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6810: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x3C6810u;
    {
        const bool branch_taken_0x3c6810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6810) {
            ctx->pc = 0x3C6850u;
            goto label_3c6850;
        }
    }
    ctx->pc = 0x3C6818u;
    // 0x3c6818: 0xc48005a4  lwc1        $f0, 0x5A4($a0)
    ctx->pc = 0x3c6818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c681c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3c681cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3c6820: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c6820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c6824: 0x0  nop
    ctx->pc = 0x3c6824u;
    // NOP
    // 0x3c6828: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c6828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c682c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x3c682cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3c6830: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3c6830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6834: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3C6834u;
    {
        const bool branch_taken_0x3c6834 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6834u;
        // 0x3c6838: 0x46011800  add.s       $f0, $f3, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6834) {
            ctx->pc = 0x3C6848u;
            goto label_3c6848;
        }
    }
    ctx->pc = 0x3C683Cu;
    // 0x3c683c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C683Cu;
    {
        const bool branch_taken_0x3c683c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C683Cu;
        // 0x3c6840: 0xe48005a0  swc1        $f0, 0x5A0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1440), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c683c) {
            ctx->pc = 0x3C6850u;
            goto label_3c6850;
        }
    }
    ctx->pc = 0x3C6844u;
    // 0x3c6844: 0x0  nop
    ctx->pc = 0x3c6844u;
    // NOP
label_3c6848:
    // 0x3c6848: 0xe48205a0  swc1        $f2, 0x5A0($a0)
    ctx->pc = 0x3c6848u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1440), bits); }
    // 0x3c684c: 0x0  nop
    ctx->pc = 0x3c684cu;
    // NOP
label_3c6850:
    // 0x3c6850: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6858u;
}
