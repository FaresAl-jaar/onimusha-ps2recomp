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

// Function: sub_0013EC40
// Address: 0x13ec40 - 0x13ec5c
void sub_0013EC40_0x13ec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EC40_0x13ec40");
#endif

    ctx->pc = 0x13ec40u;

    // 0x13ec40: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x13ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13ec44: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x13ec44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x13ec48: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x13ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13ec4c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x13ec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x13ec50: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x13ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x13ec54: 0x3e00008  jr          $ra
    ctx->pc = 0x13EC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC54u;
        // 0x13ec58: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EC5Cu;
}
