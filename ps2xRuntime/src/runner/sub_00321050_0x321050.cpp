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

// Function: sub_00321050
// Address: 0x321050 - 0x321100
void sub_00321050_0x321050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321050_0x321050");
#endif

    ctx->pc = 0x321050u;

    // 0x321050: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x321050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x321054: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x321058: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x321058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32105c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x32105cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x321060: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x321060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321064: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x321064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x321068: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x321068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32106c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32106cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321070: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x321070u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x321074: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x321074u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x321078: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x321078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x32107c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x32107cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x321080: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x321080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321084: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x321084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321088: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x321088u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x32108c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x32108cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x321090: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x321090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x321094: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x321094u;
    {
        const bool branch_taken_0x321094 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x321094) {
            ctx->pc = 0x3210F0u;
            goto label_3210f0;
        }
    }
    ctx->pc = 0x32109Cu;
    // 0x32109c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x32109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3210a0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3210a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3210a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3210a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3210a8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x3210A8u;
    {
        const bool branch_taken_0x3210a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3210a8) {
            ctx->pc = 0x3210F0u;
            goto label_3210f0;
        }
    }
    ctx->pc = 0x3210B0u;
    // 0x3210b0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x3210b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3210b4: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x3210b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3210b8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3210b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3210bc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3210BCu;
    {
        const bool branch_taken_0x3210bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3210bc) {
            ctx->pc = 0x3210F0u;
            goto label_3210f0;
        }
    }
    ctx->pc = 0x3210C4u;
    // 0x3210c4: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x3210c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3210c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3210c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3210cc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3210CCu;
    {
        const bool branch_taken_0x3210cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3210cc) {
            ctx->pc = 0x3210F0u;
            goto label_3210f0;
        }
    }
    ctx->pc = 0x3210D4u;
    // 0x3210d4: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x3210d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3210d8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3210d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3210dc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3210DCu;
    {
        const bool branch_taken_0x3210dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3210E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210DCu;
        // 0x3210e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3210dc) {
            ctx->pc = 0x3210F0u;
            goto label_3210f0;
        }
    }
    ctx->pc = 0x3210E4u;
    // 0x3210e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3210E4u;
    {
        const bool branch_taken_0x3210e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3210e4) {
            ctx->pc = 0x3210F8u;
            goto label_3210f8;
        }
    }
    ctx->pc = 0x3210ECu;
    // 0x3210ec: 0x0  nop
    ctx->pc = 0x3210ecu;
    // NOP
label_3210f0:
    // 0x3210f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3210f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3210f4: 0x0  nop
    ctx->pc = 0x3210f4u;
    // NOP
label_3210f8:
    // 0x3210f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3210F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3210FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210F8u;
        // 0x3210fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3210F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321100u;
}
