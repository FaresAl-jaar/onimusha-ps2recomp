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

// Function: sub_00135FC0
// Address: 0x135fc0 - 0x135fe4
void sub_00135FC0_0x135fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135FC0_0x135fc0");
#endif

    ctx->pc = 0x135fc0u;

    // 0x135fc0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x135fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135fc4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x135fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135fc8: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x135fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135fcc: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x135fccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x135fd0: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x135fd0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x135fd4: 0x4603191c  madd.s      $f4, $f3, $f3
    ctx->pc = 0x135fd4u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x135fd8: 0x46040004  c1          0x40004
    ctx->pc = 0x135fd8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[4]);
    // 0x135fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x135FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135FE4u;
}
