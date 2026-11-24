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

// Function: sub_001C2270
// Address: 0x1c2270 - 0x1c2298
void sub_001C2270_0x1c2270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2270_0x1c2270");
#endif

    ctx->pc = 0x1c2270u;

    // 0x1c2270: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c2274: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x1c2274u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c2278: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c227c: 0xe46d0004  swc1        $f13, 0x4($v1)
    ctx->pc = 0x1c227cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c2280: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c2284: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x1c2284u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x1c2288: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c228c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1c228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c2290: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2290u;
        // 0x1c2294: 0xac83783c  sw          $v1, 0x783C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 30780), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2298u;
}
