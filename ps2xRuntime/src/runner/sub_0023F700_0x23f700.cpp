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

// Function: sub_0023F700
// Address: 0x23f700 - 0x23f718
void sub_0023F700_0x23f700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F700_0x23f700");
#endif

    ctx->pc = 0x23f700u;

    // 0x23f700: 0x808301a5  lb          $v1, 0x1A5($a0)
    ctx->pc = 0x23f700u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 421)));
    // 0x23f704: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F704u;
    {
        const bool branch_taken_0x23f704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F704u;
        // 0x23f708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f704) {
            ctx->pc = 0x23F710u;
            goto label_23f710;
        }
    }
    ctx->pc = 0x23F70Cu;
    // 0x23f70c: 0x8c8201ec  lw          $v0, 0x1EC($a0)
    ctx->pc = 0x23f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 492)));
label_23f710:
    // 0x23f710: 0x3e00008  jr          $ra
    ctx->pc = 0x23F710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F718u;
}
