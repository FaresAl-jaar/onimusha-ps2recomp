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

// Function: sub_00346380
// Address: 0x346380 - 0x3463b0
void sub_00346380_0x346380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346380_0x346380");
#endif

    ctx->pc = 0x346380u;

    // 0x346380: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x346380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x346384: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x346384u;
    {
        const bool branch_taken_0x346384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x346384) {
            ctx->pc = 0x346398u;
            goto label_346398;
        }
    }
    ctx->pc = 0x34638Cu;
    // 0x34638c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34638Cu;
    {
        const bool branch_taken_0x34638c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34638c) {
            ctx->pc = 0x3463A0u;
            goto label_3463a0;
        }
    }
    ctx->pc = 0x346394u;
    // 0x346394: 0x0  nop
    ctx->pc = 0x346394u;
    // NOP
label_346398:
    // 0x346398: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x346398u;
    {
        const bool branch_taken_0x346398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346398u;
        // 0x34639c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346398) {
            ctx->pc = 0x3463A8u;
            goto label_3463a8;
        }
    }
    ctx->pc = 0x3463A0u;
label_3463a0:
    // 0x3463a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3463a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3463a4: 0x0  nop
    ctx->pc = 0x3463a4u;
    // NOP
label_3463a8:
    // 0x3463a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3463A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3463A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3463B0u;
}
