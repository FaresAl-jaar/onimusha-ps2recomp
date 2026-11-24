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

// Function: sub_003C0640
// Address: 0x3c0640 - 0x3c065c
void sub_003C0640_0x3c0640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0640_0x3c0640");
#endif

    ctx->pc = 0x3c0640u;

    // 0x3c0640: 0x460e6001  sub.s       $f0, $f12, $f14
    ctx->pc = 0x3c0640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    // 0x3c0644: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x3c0644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x3c0648: 0xe78f8ca4  swc1        $f15, -0x735C($gp)
    ctx->pc = 0x3c0648u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937764), bits); }
    // 0x3c064c: 0xe7908ca8  swc1        $f16, -0x7358($gp)
    ctx->pc = 0x3c064cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937768), bits); }
    // 0x3c0650: 0xe78c8c9c  swc1        $f12, -0x7364($gp)
    ctx->pc = 0x3c0650u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), bits); }
    // 0x3c0654: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0654u;
        // 0x3c0658: 0xe7808ca0  swc1        $f0, -0x7360($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C065Cu;
}
