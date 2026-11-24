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

// Function: sub_0026FB70
// Address: 0x26fb70 - 0x26fb84
void sub_0026FB70_0x26fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FB70_0x26fb70");
#endif

    ctx->pc = 0x26fb70u;

    // 0x26fb70: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26fb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26fb74: 0xa780888c  sh          $zero, -0x7774($gp)
    ctx->pc = 0x26fb74u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936716), (uint16_t)GPR_U32(ctx, 0));
    // 0x26fb78: 0xac200e7c  sw          $zero, 0xE7C($at)
    ctx->pc = 0x26fb78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B0E7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E7Cu, _value); } while (0);
    // 0x26fb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x26FB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB7Cu;
        // 0x26fb80: 0xa7808890  sh          $zero, -0x7770($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936720), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FB84u;
}
