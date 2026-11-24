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

// Function: sub_001D9390
// Address: 0x1d9390 - 0x1d93f4
void sub_001D9390_0x1d9390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9390_0x1d9390");
#endif

    ctx->pc = 0x1d9390u;

    // 0x1d9390: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d9390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1d9394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9398: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x1d9398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1d939c: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1d939cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1d93a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d93a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d93a4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d93a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d93a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d93a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d93ac: 0x0  nop
    ctx->pc = 0x1d93acu;
    // NOP
    // 0x1d93b0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1d93b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d93b4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D93B4u;
    {
        const bool branch_taken_0x1d93b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d93b4) {
            ctx->pc = 0x1D93D8u;
            goto label_1d93d8;
        }
    }
    ctx->pc = 0x1D93BCu;
    // 0x1d93bc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d93bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d93c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1d93c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d93c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d93c8: 0x0  nop
    ctx->pc = 0x1d93c8u;
    // NOP
    // 0x1d93cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d93ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d93d0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d93d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d93d4: 0x0  nop
    ctx->pc = 0x1d93d4u;
    // NOP
label_1d93d8:
    // 0x1d93d8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d93d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d93dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d93dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d93e0: 0x46006003  div.s       $f0, $f12, $f0
    ctx->pc = 0x1d93e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x1d93e4: 0x0  nop
    ctx->pc = 0x1d93e4u;
    // NOP
    // 0x1d93e8: 0x0  nop
    ctx->pc = 0x1d93e8u;
    // NOP
    // 0x1d93ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D93ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D93ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D93F4u;
}
