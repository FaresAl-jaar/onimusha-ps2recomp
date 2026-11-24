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

// Function: sub_003D2640
// Address: 0x3d2640 - 0x3d2650
void sub_003D2640_0x3d2640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2640_0x3d2640");
#endif

    ctx->pc = 0x3d2640u;

    // 0x3d2640: 0x8c8306cc  lw          $v1, 0x6CC($a0)
    ctx->pc = 0x3d2640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x3d2644: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3d2644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3d2648: 0x3e00008  jr          $ra
    ctx->pc = 0x3D2648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2648u;
        // 0x3d264c: 0xac8306cc  sw          $v1, 0x6CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2650u;
}
