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

// Function: sub_001A2EB0
// Address: 0x1a2eb0 - 0x1a2ef0
void sub_001A2EB0_0x1a2eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2EB0_0x1a2eb0");
#endif

    switch (ctx->pc) {
        case 0x1a2eb8u: goto label_1a2eb8;
        default: break;
    }

    ctx->pc = 0x1a2eb0u;

    // 0x1a2eb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2eb4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a2eb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2eb8:
    // 0x1a2eb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a2eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2ebc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2EBCu;
    {
        const bool branch_taken_0x1a2ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EBCu;
        // 0x1a2ec0: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ebc) {
            ctx->pc = 0x1A2ED0u;
            goto label_1a2ed0;
        }
    }
    ctx->pc = 0x1A2EC4u;
    // 0x1a2ec4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2EC4u;
    {
        const bool branch_taken_0x1a2ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EC4u;
        // 0x1a2ec8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ec4) {
            ctx->pc = 0x1A2EE8u;
            goto label_1a2ee8;
        }
    }
    ctx->pc = 0x1A2ECCu;
    // 0x1a2ecc: 0x0  nop
    ctx->pc = 0x1a2eccu;
    // NOP
label_1a2ed0:
    // 0x1a2ed0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a2ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a2ed4: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x1a2ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a2ed8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A2ED8u;
    {
        const bool branch_taken_0x1a2ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2ED8u;
        // 0x1a2edc: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ed8) {
            ctx->pc = 0x1A2EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2eb8;
        }
    }
    ctx->pc = 0x1A2EE0u;
    // 0x1a2ee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ee4: 0x0  nop
    ctx->pc = 0x1a2ee4u;
    // NOP
label_1a2ee8:
    // 0x1a2ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2EF0u;
}
