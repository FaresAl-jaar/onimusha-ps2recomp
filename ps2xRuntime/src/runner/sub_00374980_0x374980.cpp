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

// Function: sub_00374980
// Address: 0x374980 - 0x3749d4
void sub_00374980_0x374980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374980_0x374980");
#endif

    ctx->pc = 0x374980u;

    // 0x374980: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x374980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x374984: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x374984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x374988: 0x460d681a  mula.s      $f13, $f13
    ctx->pc = 0x374988u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x37498c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x37498cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x374990: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x374990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x374994: 0x46016883  div.s       $f2, $f13, $f1
    ctx->pc = 0x374994u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[13], ctx->f[1]); }
    // 0x374998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x374998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37499c: 0x0  nop
    ctx->pc = 0x37499cu;
    // NOP
    // 0x3749a0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3749a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3749a4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3749a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3749a8: 0x460e001d  msub.s      $f0, $f0, $f14
    ctx->pc = 0x3749a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[14]));
    // 0x3749ac: 0x46000044  c1          0x44
    ctx->pc = 0x3749acu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x3749b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3749b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3749b4: 0x0  nop
    ctx->pc = 0x3749b4u;
    // NOP
    // 0x3749b8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3749b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3749bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3749bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3749c0: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x3749c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3749c4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3749c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3749c8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x3749c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3749cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3749CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3749D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3749CCu;
        // 0x3749d0: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3749CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3749D4u;
}
