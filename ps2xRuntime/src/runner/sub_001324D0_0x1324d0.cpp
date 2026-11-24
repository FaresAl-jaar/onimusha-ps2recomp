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

// Function: sub_001324D0
// Address: 0x1324d0 - 0x1324e8
void sub_001324D0_0x1324d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001324D0_0x1324d0");
#endif

    ctx->pc = 0x1324d0u;

    // 0x1324d0: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x1324d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1324d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1324d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1324d8: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x1324d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1324dc: 0x306300bf  andi        $v1, $v1, 0xBF
    ctx->pc = 0x1324dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
    // 0x1324e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1324E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1324E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1324E0u;
        // 0x1324e4: 0xa0830004  sb          $v1, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1324E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1324E8u;
}
