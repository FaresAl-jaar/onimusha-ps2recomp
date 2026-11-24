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

// Function: sub_001D9400
// Address: 0x1d9400 - 0x1d94e0
void sub_001D9400_0x1d9400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9400_0x1d9400");
#endif

    switch (ctx->pc) {
        case 0x1d94a8u: goto label_1d94a8;
        default: break;
    }

    ctx->pc = 0x1d9400u;

    // 0x1d9400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9404: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1d9404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d9408: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d940c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d9410: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d9410u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d9414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9418: 0x460c1032  c.eq.s      $f2, $f12
    ctx->pc = 0x1d9418u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d941c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D941Cu;
    {
        const bool branch_taken_0x1d941c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D941Cu;
        // 0x1d9420: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d941c) {
            ctx->pc = 0x1D9430u;
            goto label_1d9430;
        }
    }
    ctx->pc = 0x1D9424u;
    // 0x1d9424: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1D9424u;
    {
        const bool branch_taken_0x1d9424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9424u;
        // 0x1d9428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9424) {
            ctx->pc = 0x1D94C8u;
            goto label_1d94c8;
        }
    }
    ctx->pc = 0x1D942Cu;
    // 0x1d942c: 0x0  nop
    ctx->pc = 0x1d942cu;
    // NOP
label_1d9430:
    // 0x1d9430: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d9430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1d9434: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d9434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9438: 0x460d681a  mula.s      $f13, $f13
    ctx->pc = 0x1d9438u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x1d943c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d943cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d9440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9444: 0x0  nop
    ctx->pc = 0x1d9444u;
    // NOP
    // 0x1d9448: 0x460c0d02  mul.s       $f20, $f1, $f12
    ctx->pc = 0x1d9448u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1d944c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1d944cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1d9450: 0x460e031d  msub.s      $f12, $f0, $f14
    ctx->pc = 0x1d9450u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[14]));
    // 0x1d9454: 0x46006807  neg.s       $f0, $f13
    ctx->pc = 0x1d9454u;
    ctx->f[0] = FPU_NEG_S(ctx->f[13]);
    // 0x1d9458: 0x46140543  div.s       $f21, $f0, $f20
    ctx->pc = 0x1d9458u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x1d945c: 0x0  nop
    ctx->pc = 0x1d945cu;
    // NOP
    // 0x1d9460: 0x0  nop
    ctx->pc = 0x1d9460u;
    // NOP
    // 0x1d9464: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x1d9464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9468: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9468u;
    {
        const bool branch_taken_0x1d9468 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9468) {
            ctx->pc = 0x1D9480u;
            goto label_1d9480;
        }
    }
    ctx->pc = 0x1D9470u;
    // 0x1d9470: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1d9470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d9474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9478: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D9478u;
    {
        const bool branch_taken_0x1d9478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9478u;
        // 0x1d947c: 0xe6020004  swc1        $f2, 0x4($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9478) {
            ctx->pc = 0x1D94C8u;
            goto label_1d94c8;
        }
    }
    ctx->pc = 0x1D9480u;
label_1d9480:
    // 0x1d9480: 0x460c1032  c.eq.s      $f2, $f12
    ctx->pc = 0x1d9480u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9484: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9484u;
    {
        const bool branch_taken_0x1d9484 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9484) {
            ctx->pc = 0x1D94A0u;
            goto label_1d94a0;
        }
    }
    ctx->pc = 0x1D948Cu;
    // 0x1d948c: 0xe6150000  swc1        $f21, 0x0($s0)
    ctx->pc = 0x1d948cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d9490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9494: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D9494u;
    {
        const bool branch_taken_0x1d9494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9494u;
        // 0x1d9498: 0xe6020004  swc1        $f2, 0x4($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9494) {
            ctx->pc = 0x1D94C8u;
            goto label_1d94c8;
        }
    }
    ctx->pc = 0x1D949Cu;
    // 0x1d949c: 0x0  nop
    ctx->pc = 0x1d949cu;
    // NOP
label_1d94a0:
    // 0x1d94a0: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x1D94A0u;
    SET_GPR_U32(ctx, 31, 0x1D94A8u);
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1D94A0u, 0x1D94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94A8u;
label_1d94a8:
    // 0x1d94a8: 0x0  nop
    ctx->pc = 0x1d94a8u;
    // NOP
    // 0x1d94ac: 0x0  nop
    ctx->pc = 0x1d94acu;
    // NOP
    // 0x1d94b0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1d94b0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x1d94b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d94b8: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x1d94b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1d94bc: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1d94bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x1d94c0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1d94c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d94c4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1d94c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1d94c8:
    // 0x1d94c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d94c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d94cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d94ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d94d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d94d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d94d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d94d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d94d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94D8u;
        // 0x1d94dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94E0u;
}
