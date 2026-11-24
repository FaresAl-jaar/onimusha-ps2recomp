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

// Function: sub_001454E0
// Address: 0x1454e0 - 0x145510
void sub_001454E0_0x1454e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001454E0_0x1454e0");
#endif

    switch (ctx->pc) {
        case 0x1454e8u: goto label_1454e8;
        default: break;
    }

    ctx->pc = 0x1454e0u;

    // 0x1454e0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1454E0u;
    {
        const bool branch_taken_0x1454e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1454E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454E0u;
        // 0x1454e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454e0) {
            ctx->pc = 0x145508u;
            goto label_145508;
        }
    }
    ctx->pc = 0x1454E8u;
label_1454e8:
    // 0x1454e8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1454e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1454ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1454ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1454f0: 0x0  nop
    ctx->pc = 0x1454f0u;
    // NOP
    // 0x1454f4: 0x0  nop
    ctx->pc = 0x1454f4u;
    // NOP
    // 0x1454f8: 0x0  nop
    ctx->pc = 0x1454f8u;
    // NOP
    // 0x1454fc: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1454FCu;
    {
        const bool branch_taken_0x1454fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1454fc) {
            ctx->pc = 0x1454E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1454e8;
        }
    }
    ctx->pc = 0x145504u;
    // 0x145504: 0x0  nop
    ctx->pc = 0x145504u;
    // NOP
label_145508:
    // 0x145508: 0x3e00008  jr          $ra
    ctx->pc = 0x145508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145510u;
}
