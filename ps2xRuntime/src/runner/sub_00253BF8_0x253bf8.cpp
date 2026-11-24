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

// Function: sub_00253BF8
// Address: 0x253bf8 - 0x253c0c
void sub_00253BF8_0x253bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253BF8_0x253bf8");
#endif

    ctx->pc = 0x253bf8u;

    // 0x253bf8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x253bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x253bfc: 0x24428988  addiu       $v0, $v0, -0x7678
    ctx->pc = 0x253bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936968));
    // 0x253c00: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x253c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x88898Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x88898Cu, _value); } while (0);
    // 0x253c04: 0x3e00008  jr          $ra
    ctx->pc = 0x253C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C04u;
        // 0x253c08: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253C0Cu;
}
