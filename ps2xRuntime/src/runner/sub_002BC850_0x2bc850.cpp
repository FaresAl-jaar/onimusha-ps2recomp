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

// Function: sub_002BC850
// Address: 0x2bc850 - 0x2bc878
void sub_002BC850_0x2bc850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC850_0x2bc850");
#endif

    ctx->pc = 0x2bc850u;

    // 0x2bc850: 0x938289d4  lbu         $v0, -0x762C($gp)
    ctx->pc = 0x2bc850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937044)));
    // 0x2bc854: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC854u;
    {
        const bool branch_taken_0x2bc854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC854u;
        // 0x2bc858: 0x24c30002  addiu       $v1, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc854) {
            ctx->pc = 0x2BC868u;
            goto label_2bc868;
        }
    }
    ctx->pc = 0x2BC85Cu;
    // 0x2bc85c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bc85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc860: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC860u;
    {
        const bool branch_taken_0x2bc860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC860u;
        // 0x2bc864: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc860) {
            ctx->pc = 0x2BC870u;
            goto label_2bc870;
        }
    }
    ctx->pc = 0x2BC868u;
label_2bc868:
    // 0x2bc868: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x2bc868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2bc86c: 0x0  nop
    ctx->pc = 0x2bc86cu;
    // NOP
label_2bc870:
    // 0x2bc870: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC878u;
}
