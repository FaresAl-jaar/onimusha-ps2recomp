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

// Function: sub_0024EB28
// Address: 0x24eb28 - 0x24eb3c
void sub_0024EB28_0x24eb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EB28_0x24eb28");
#endif

    ctx->pc = 0x24eb28u;

    // 0x24eb28: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24eb2c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24eb30: 0xa444752c  sh          $a0, 0x752C($v0)
    ctx->pc = 0x24eb30u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4D752Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x4D752Cu, _value); } while (0);
    // 0x24eb34: 0x3e00008  jr          $ra
    ctx->pc = 0x24EB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB34u;
        // 0x24eb38: 0xa465752e  sh          $a1, 0x752E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 29998), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EB3Cu;
}
