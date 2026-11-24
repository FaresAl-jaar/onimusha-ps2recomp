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

// Function: sub_002E0FB0
// Address: 0x2e0fb0 - 0x2e0fd8
void sub_002E0FB0_0x2e0fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0FB0_0x2e0fb0");
#endif

    ctx->pc = 0x2e0fb0u;

    // 0x2e0fb0: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x2e0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2e0fb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0FB4u;
    {
        const bool branch_taken_0x2e0fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0fb4) {
            ctx->pc = 0x2E0FCCu;
            goto label_2e0fcc;
        }
    }
    ctx->pc = 0x2E0FBCu;
    // 0x2e0fbc: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x2e0fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x2e0fc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e0fc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0FC4u;
    {
        const bool branch_taken_0x2e0fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FC4u;
        // 0x2e0fc8: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fc4) {
            ctx->pc = 0x2E0FD0u;
            goto label_2e0fd0;
        }
    }
    ctx->pc = 0x2E0FCCu;
label_2e0fcc:
    // 0x2e0fcc: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x2e0fccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
label_2e0fd0:
    // 0x2e0fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0FD8u;
}
