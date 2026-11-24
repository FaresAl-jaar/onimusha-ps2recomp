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

// Function: sub_0023AD38
// Address: 0x23ad38 - 0x23ad4c
void sub_0023AD38_0x23ad38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AD38_0x23ad38");
#endif

    ctx->pc = 0x23ad38u;

    // 0x23ad38: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x23ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x23ad3c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x23ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x23ad40: 0xac448f8c  sw          $a0, -0x7074($v0)
    ctx->pc = 0x23ad40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4C8F8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C8F8Cu, _value); } while (0);
    // 0x23ad44: 0x3e00008  jr          $ra
    ctx->pc = 0x23AD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD44u;
        // 0x23ad48: 0xac648f90  sw          $a0, -0x7070($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294938512), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AD4Cu;
}
