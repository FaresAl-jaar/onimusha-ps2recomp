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

// Function: sub_00201D28
// Address: 0x201d28 - 0x201d48
void sub_00201D28_0x201d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201D28_0x201d28");
#endif

    ctx->pc = 0x201d28u;

    // 0x201d28: 0x2ca5008c  sltiu       $a1, $a1, 0x8C
    ctx->pc = 0x201d28u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)140) ? 1 : 0);
    // 0x201d2c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x201D2Cu;
    {
        const bool branch_taken_0x201d2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x201D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D2Cu;
        // 0x201d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d2c) {
            ctx->pc = 0x201D40u;
            goto label_201d40;
        }
    }
    ctx->pc = 0x201D34u;
    // 0x201d34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201d38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x201d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d3c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x201d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_201d40:
    // 0x201d40: 0x3e00008  jr          $ra
    ctx->pc = 0x201D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201D48u;
}
