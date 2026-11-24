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

// Function: sub_0037B370
// Address: 0x37b370 - 0x37b3a0
void sub_0037B370_0x37b370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B370_0x37b370");
#endif

    ctx->pc = 0x37b370u;

    // 0x37b370: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x37b370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37b374: 0x460c6102  mul.s       $f4, $f12, $f12
    ctx->pc = 0x37b374u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x37b378: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x37b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37b37c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x37b37cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x37b380: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x37b380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37b384: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x37b384u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x37b388: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x37b388u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x37b38c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x37b38cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
    // 0x37b390: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x37b390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37b394: 0x460c085c  madd.s      $f1, $f1, $f12
    ctx->pc = 0x37b394u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[12]));
    // 0x37b398: 0x3e00008  jr          $ra
    ctx->pc = 0x37B398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B398u;
        // 0x37b39c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B3A0u;
}
