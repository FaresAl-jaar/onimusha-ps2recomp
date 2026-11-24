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

// Function: sub_00275750
// Address: 0x275750 - 0x27576c
void sub_00275750_0x275750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275750_0x275750");
#endif

    ctx->pc = 0x275750u;

    // 0x275750: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x275750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x275754: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x275754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x275758: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x275758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x27575c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x27575cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x275760: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x275760u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x275764: 0x3e00008  jr          $ra
    ctx->pc = 0x275764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275764u;
        // 0x275768: 0xa087000d  sb          $a3, 0xD($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27576Cu;
}
