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

// Function: sub_00253BE0
// Address: 0x253be0 - 0x253bf4
void sub_00253BE0_0x253be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253BE0_0x253be0");
#endif

    ctx->pc = 0x253be0u;

    // 0x253be0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x253be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x253be4: 0x24428980  addiu       $v0, $v0, -0x7680
    ctx->pc = 0x253be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936960));
    // 0x253be8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x253be8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x888984u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x888984u, _value); } while (0);
    // 0x253bec: 0x3e00008  jr          $ra
    ctx->pc = 0x253BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BECu;
        // 0x253bf0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253BF4u;
}
