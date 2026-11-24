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

// Function: sub_0024C7D8
// Address: 0x24c7d8 - 0x24c7ec
void sub_0024C7D8_0x24c7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C7D8_0x24c7d8");
#endif

    ctx->pc = 0x24c7d8u;

    // 0x24c7d8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24c7dc: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24c7e0: 0xac445a84  sw          $a0, 0x5A84($v0)
    ctx->pc = 0x24c7e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4D5A84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D5A84u, _value); } while (0);
    // 0x24c7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x24C7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7E4u;
        // 0x24c7e8: 0xac655a88  sw          $a1, 0x5A88($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 23176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C7ECu;
}
