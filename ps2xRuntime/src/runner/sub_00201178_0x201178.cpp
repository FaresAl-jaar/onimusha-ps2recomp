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

// Function: sub_00201178
// Address: 0x201178 - 0x2011c4
void sub_00201178_0x201178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201178_0x201178");
#endif

    switch (ctx->pc) {
        case 0x201198u: goto label_201198;
        default: break;
    }

    ctx->pc = 0x201178u;

    // 0x201178: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x201178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x20117c: 0x24423f40  addiu       $v0, $v0, 0x3F40
    ctx->pc = 0x20117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16192));
    // 0x201180: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x201180u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x873F94u));
    // 0x201184: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x201184u;
    {
        const bool branch_taken_0x201184 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x201188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201184u;
        // 0x201188: 0x8c430058  lw          $v1, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201184) {
            ctx->pc = 0x2011BCu;
            goto label_2011bc;
        }
    }
    ctx->pc = 0x20118Cu;
    // 0x20118c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x20118cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x201190: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x201190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x201194: 0x24440190  addiu       $a0, $v0, 0x190
    ctx->pc = 0x201194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
label_201198:
    // 0x201198: 0x8c620188  lw          $v0, 0x188($v1)
    ctx->pc = 0x201198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 392)));
    // 0x20119c: 0x14470003  bne         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x20119Cu;
    {
        const bool branch_taken_0x20119c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2011A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20119Cu;
        // 0x2011a0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20119c) {
            ctx->pc = 0x2011ACu;
            goto label_2011ac;
        }
    }
    ctx->pc = 0x2011A4u;
    // 0x2011a4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2011a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2011a8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2011a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_2011ac:
    // 0x2011ac: 0x0  nop
    ctx->pc = 0x2011acu;
    // NOP
    // 0x2011b0: 0x0  nop
    ctx->pc = 0x2011b0u;
    // NOP
    // 0x2011b4: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2011B4u;
    {
        const bool branch_taken_0x2011b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2011B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011B4u;
        // 0x2011b8: 0x24630440  addiu       $v1, $v1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011b4) {
            ctx->pc = 0x201198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201198;
        }
    }
    ctx->pc = 0x2011BCu;
label_2011bc:
    // 0x2011bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2011BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2011BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2011C4u;
}
