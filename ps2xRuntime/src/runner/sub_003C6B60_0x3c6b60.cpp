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

// Function: sub_003C6B60
// Address: 0x3c6b60 - 0x3c6b70
void sub_003C6B60_0x3c6b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6B60_0x3c6b60");
#endif

    ctx->pc = 0x3c6b60u;

    // 0x3c6b60: 0x9083057c  lbu         $v1, 0x57C($a0)
    ctx->pc = 0x3c6b60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1404)));
    // 0x3c6b64: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x3c6b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x3c6b68: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B68u;
        // 0x3c6b6c: 0xa083057c  sb          $v1, 0x57C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1404), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6B70u;
}
