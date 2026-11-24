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

// Function: sub_001F3430
// Address: 0x1f3430 - 0x1f3488
void sub_001F3430_0x1f3430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3430_0x1f3430");
#endif

    ctx->pc = 0x1f3430u;

    // 0x1f3430: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x1f3430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f3434: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x1f3434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f3438: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1f3438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f343c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1f343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3440: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x1f3440u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1f3444: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x1f3444u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1f3448: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1f3448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1f344c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x1f344cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f3450: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1f3450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f3454: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1f3454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3458: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1f3458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f345c: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x1f345cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1f3460: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x1f3460u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1f3464: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1f3464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1f3468: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1f3468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f346c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1f346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f3470: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1f3470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3474: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1f3474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3478: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x1f3478u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1f347c: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x1f347cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1f3480: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3480u;
        // 0x1f3484: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3488u;
}
