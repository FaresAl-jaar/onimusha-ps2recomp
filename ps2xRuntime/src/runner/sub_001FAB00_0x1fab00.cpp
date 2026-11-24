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

// Function: sub_001FAB00
// Address: 0x1fab00 - 0x1fab50
void sub_001FAB00_0x1fab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAB00_0x1fab00");
#endif

    switch (ctx->pc) {
        case 0x1fab20u: goto label_1fab20;
        default: break;
    }

    ctx->pc = 0x1fab00u;

    // 0x1fab00: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x1fab00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x1fab04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fab04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab08: 0x24423ee0  addiu       $v0, $v0, 0x3EE0
    ctx->pc = 0x1fab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16096));
    // 0x1fab0c: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x1fab0cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x873F20u));
    // 0x1fab10: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FAB10u;
    {
        const bool branch_taken_0x1fab10 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x1FAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB10u;
        // 0x1fab14: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab10) {
            ctx->pc = 0x1FAB44u;
            goto label_1fab44;
        }
    }
    ctx->pc = 0x1FAB18u;
    // 0x1fab18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fab18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fab1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fab20:
    // 0x1fab20: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fab20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab24: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAB24u;
    {
        const bool branch_taken_0x1fab24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1FAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB24u;
        // 0x1fab28: 0x24840640  addiu       $a0, $a0, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab24) {
            ctx->pc = 0x1FAB48u;
            goto label_1fab48;
        }
    }
    ctx->pc = 0x1FAB2Cu;
    // 0x1fab2c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fab2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fab30: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1fab30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fab34: 0x0  nop
    ctx->pc = 0x1fab34u;
    // NOP
    // 0x1fab38: 0x0  nop
    ctx->pc = 0x1fab38u;
    // NOP
    // 0x1fab3c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FAB3Cu;
    {
        const bool branch_taken_0x1fab3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fab3c) {
            ctx->pc = 0x1FAB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAB3Cu;
            // 0x1fab40: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fab20;
        }
    }
    ctx->pc = 0x1FAB44u;
label_1fab44:
    // 0x1fab44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fab44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fab48:
    // 0x1fab48: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAB50u;
}
