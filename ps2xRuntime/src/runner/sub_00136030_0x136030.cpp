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

// Function: sub_00136030
// Address: 0x136030 - 0x136064
void sub_00136030_0x136030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136030_0x136030");
#endif

    ctx->pc = 0x136030u;

    // 0x136030: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x136030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136034: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x136034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136038: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x136038u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x13603c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x13603cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136040: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x136040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x136044: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x136044u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x136048: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x136048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13604c: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x13604cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x136050: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x136050u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x136054: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x136054u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x136058: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x136058u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x13605c: 0x3e00008  jr          $ra
    ctx->pc = 0x13605Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13605Cu;
        // 0x136060: 0x4603181c  madd.s      $f0, $f3, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13605Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136064u;
}
