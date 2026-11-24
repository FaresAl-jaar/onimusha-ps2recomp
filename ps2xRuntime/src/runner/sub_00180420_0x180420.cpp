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

// Function: sub_00180420
// Address: 0x180420 - 0x180470
void sub_00180420_0x180420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180420_0x180420");
#endif

    ctx->pc = 0x180420u;

    // 0x180420: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x180420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x180424: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x180424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180428: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x180428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18042c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18042cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180430: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x180430u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x180434: 0x460d1082  mul.s       $f2, $f2, $f13
    ctx->pc = 0x180434u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x180438: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x180438u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
    // 0x18043c: 0x460e085c  madd.s      $f1, $f1, $f14
    ctx->pc = 0x18043cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[14]));
    // 0x180440: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x180440u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x180444: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x180444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x180448: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x180448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18044c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x18044cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180450: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x180450u;
    {
        const bool branch_taken_0x180450 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180450u;
        // 0x180454: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180450) {
            ctx->pc = 0x180468u;
            goto label_180468;
        }
    }
    ctx->pc = 0x180458u;
    // 0x180458: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x180458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18045c: 0x0  nop
    ctx->pc = 0x18045cu;
    // NOP
    // 0x180460: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x180460u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x180464: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x180464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_180468:
    // 0x180468: 0x3e00008  jr          $ra
    ctx->pc = 0x180468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180470u;
}
