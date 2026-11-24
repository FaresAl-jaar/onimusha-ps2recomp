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

// Function: sub_001D9710
// Address: 0x1d9710 - 0x1d9750
void sub_001D9710_0x1d9710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9710_0x1d9710");
#endif

    ctx->pc = 0x1d9710u;

    // 0x1d9710: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1d9710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1d9714: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x1d9714u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C20u));
    // 0x1d9718: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1d9718u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1d971c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1d971cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1d9720: 0x78235c30  lq          $v1, 0x5C30($at)
    ctx->pc = 0x1d9720u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C30u));
    // 0x1d9724: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x1d9724u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x1d9728: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1d9728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1d972c: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x1d972cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x1d9730: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x1d9730u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x1d9734: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1d9734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1d9738: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1d9738u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1d973c: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x1d973cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x1d9740: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x1d9740u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d9744: 0xe48d0014  swc1        $f13, 0x14($a0)
    ctx->pc = 0x1d9744u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1d9748: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9748u;
        // 0x1d974c: 0xe48e0028  swc1        $f14, 0x28($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9750u;
}
