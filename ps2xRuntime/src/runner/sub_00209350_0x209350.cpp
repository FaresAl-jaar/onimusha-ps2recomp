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

// Function: sub_00209350
// Address: 0x209350 - 0x209374
void sub_00209350_0x209350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209350_0x209350");
#endif

    ctx->pc = 0x209350u;

    // 0x209350: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x209350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x209354: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x209354u;
    {
        const bool branch_taken_0x209354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209354u;
        // 0x209358: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209354) {
            ctx->pc = 0x20936Cu;
            goto label_20936c;
        }
    }
    ctx->pc = 0x20935Cu;
    // 0x20935c: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x20935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x209360: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x209360u;
    {
        const bool branch_taken_0x209360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x209364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209360u;
        // 0x209364: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209360) {
            ctx->pc = 0x20936Cu;
            goto label_20936c;
        }
    }
    ctx->pc = 0x209368u;
    // 0x209368: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20936c:
    // 0x20936c: 0x3e00008  jr          $ra
    ctx->pc = 0x20936Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20936Cu;
        // 0x209370: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20936Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209374u;
}
