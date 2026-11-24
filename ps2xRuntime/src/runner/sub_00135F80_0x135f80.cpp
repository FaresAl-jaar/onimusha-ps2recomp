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

// Function: sub_00135F80
// Address: 0x135f80 - 0x135fb8
void sub_00135F80_0x135f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135F80_0x135f80");
#endif

    ctx->pc = 0x135f80u;

    // 0x135f80: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x135f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135f84: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x135f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135f88: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x135f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135f8c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x135f8cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x135f90: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x135f90u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x135f94: 0x4603191c  madd.s      $f4, $f3, $f3
    ctx->pc = 0x135f94u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x135f98: 0x46040004  c1          0x40004
    ctx->pc = 0x135f98u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[4]);
    // 0x135f9c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x135f9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x135fa0: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x135fa0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x135fa4: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x135fa4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x135fa8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x135fa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x135fac: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x135facu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x135fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x135FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FB0u;
        // 0x135fb4: 0xe4830008  swc1        $f3, 0x8($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135FB8u;
}
