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

// Function: sub_002DE160
// Address: 0x2de160 - 0x2de1e4
void sub_002DE160_0x2de160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE160_0x2de160");
#endif

    switch (ctx->pc) {
        case 0x2de1d8u: goto label_2de1d8;
        default: break;
    }

    ctx->pc = 0x2de160u;

    // 0x2de160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de168: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2de168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de16c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2de16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de170: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2de170u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de174: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x2DE174u;
    {
        const bool branch_taken_0x2de174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de174) {
            ctx->pc = 0x2DE1D8u;
            goto label_2de1d8;
        }
    }
    ctx->pc = 0x2DE17Cu;
    // 0x2de17c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de17cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de180: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2DE180u;
    {
        const bool branch_taken_0x2de180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de180) {
            ctx->pc = 0x2DE1B0u;
            goto label_2de1b0;
        }
    }
    ctx->pc = 0x2DE188u;
    // 0x2de188: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2de188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de18c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2de18cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2de190: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2de190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2de194: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2de194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de19c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2DE19Cu;
    {
        const bool branch_taken_0x2de19c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de19c) {
            ctx->pc = 0x2DE1D0u;
            goto label_2de1d0;
        }
    }
    ctx->pc = 0x2DE1A4u;
    // 0x2de1a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DE1A4u;
    {
        const bool branch_taken_0x2de1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de1a4) {
            ctx->pc = 0x2DE1D8u;
            goto label_2de1d8;
        }
    }
    ctx->pc = 0x2DE1ACu;
    // 0x2de1ac: 0x0  nop
    ctx->pc = 0x2de1acu;
    // NOP
label_2de1b0:
    // 0x2de1b0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2de1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de1b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2de1b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2de1b8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2de1b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2de1bc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2de1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de1c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2de1c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de1c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE1C4u;
    {
        const bool branch_taken_0x2de1c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de1c4) {
            ctx->pc = 0x2DE1D8u;
            goto label_2de1d8;
        }
    }
    ctx->pc = 0x2DE1CCu;
    // 0x2de1cc: 0x0  nop
    ctx->pc = 0x2de1ccu;
    // NOP
label_2de1d0:
    // 0x2de1d0: 0xc0b7854  jal         func_2DE150
    ctx->pc = 0x2DE1D0u;
    SET_GPR_U32(ctx, 31, 0x2DE1D8u);
    ctx->pc = 0x2DE150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE150u, 0x2DE1D0u, 0x2DE1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1D8u;
label_2de1d8:
    // 0x2de1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1DCu;
        // 0x2de1e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE1E4u;
}
