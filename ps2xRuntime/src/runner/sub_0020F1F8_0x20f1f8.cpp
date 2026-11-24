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

// Function: sub_0020F1F8
// Address: 0x20f1f8 - 0x20f224
void sub_0020F1F8_0x20f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F1F8_0x20f1f8");
#endif

    switch (ctx->pc) {
        case 0x20f200u: goto label_20f200;
        default: break;
    }

    ctx->pc = 0x20f1f8u;

    // 0x20f1f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f1fc: 0x0  nop
    ctx->pc = 0x20f1fcu;
    // NOP
label_20f200:
    // 0x20f200: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20f200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20f204: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x20f204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x20f208: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20f208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x20f20c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x20f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x20f210: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20f210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x20f214: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20F214u;
    {
        const bool branch_taken_0x20f214 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x20F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F214u;
        // 0x20f218: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f214) {
            ctx->pc = 0x20F200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f200;
        }
    }
    ctx->pc = 0x20F21Cu;
    // 0x20f21c: 0x3e00008  jr          $ra
    ctx->pc = 0x20F21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F224u;
}
