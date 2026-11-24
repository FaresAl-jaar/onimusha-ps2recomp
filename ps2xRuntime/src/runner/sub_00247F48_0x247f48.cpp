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

// Function: sub_00247F48
// Address: 0x247f48 - 0x247f5c
void sub_00247F48_0x247f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247F48_0x247f48");
#endif

    ctx->pc = 0x247f48u;

    // 0x247f48: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x247f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x247f4c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x247f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x247f50: 0xac44fe54  sw          $a0, -0x1AC($v0)
    ctx->pc = 0x247f50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4CFE54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CFE54u, _value); } while (0);
    // 0x247f54: 0x3e00008  jr          $ra
    ctx->pc = 0x247F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F54u;
        // 0x247f58: 0xac65fe58  sw          $a1, -0x1A8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966872), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247F5Cu;
}
