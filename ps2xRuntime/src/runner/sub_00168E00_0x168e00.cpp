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

// Function: sub_00168E00
// Address: 0x168e00 - 0x168e20
void sub_00168E00_0x168e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168E00_0x168e00");
#endif

    ctx->pc = 0x168e00u;

    // 0x168e00: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168E00u;
    {
        const bool branch_taken_0x168e00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x168e00) {
            ctx->pc = 0x168E10u;
            goto label_168e10;
        }
    }
    ctx->pc = 0x168E08u;
    // 0x168e08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x168E08u;
    {
        const bool branch_taken_0x168e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E08u;
        // 0x168e0c: 0xaf808620  sw          $zero, -0x79E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e08) {
            ctx->pc = 0x168E18u;
            goto label_168e18;
        }
    }
    ctx->pc = 0x168E10u;
label_168e10:
    // 0x168e10: 0xaf848620  sw          $a0, -0x79E0($gp)
    ctx->pc = 0x168e10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936096), GPR_U32(ctx, 4));
    // 0x168e14: 0x0  nop
    ctx->pc = 0x168e14u;
    // NOP
label_168e18:
    // 0x168e18: 0x3e00008  jr          $ra
    ctx->pc = 0x168E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168E20u;
}
