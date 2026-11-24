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

// Function: sub_003ED8E0
// Address: 0x3ed8e0 - 0x3ed930
void sub_003ED8E0_0x3ed8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED8E0_0x3ed8e0");
#endif

    switch (ctx->pc) {
        case 0x3ed8f8u: goto label_3ed8f8;
        default: break;
    }

    ctx->pc = 0x3ed8e0u;

    // 0x3ed8e0: 0x87858d28  lh          $a1, -0x72D8($gp)
    ctx->pc = 0x3ed8e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937896)));
    // 0x3ed8e4: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x3ed8e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3ed8e8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x3ED8E8u;
    {
        const bool branch_taken_0x3ed8e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED8E8u;
        // 0x3ed8ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed8e8) {
            ctx->pc = 0x3ED920u;
            goto label_3ed920;
        }
    }
    ctx->pc = 0x3ED8F0u;
    // 0x3ed8f0: 0x27868d20  addiu       $a2, $gp, -0x72E0
    ctx->pc = 0x3ed8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937888));
    // 0x3ed8f4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3ed8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ed8f8:
    // 0x3ed8f8: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x3ed8f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ed8fc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ED8FCu;
    {
        const bool branch_taken_0x3ed8fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ed8fc) {
            ctx->pc = 0x3ED910u;
            goto label_3ed910;
        }
    }
    ctx->pc = 0x3ED904u;
    // 0x3ed904: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3ED904u;
    {
        const bool branch_taken_0x3ed904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed904) {
            ctx->pc = 0x3ED928u;
            goto label_3ed928;
        }
    }
    ctx->pc = 0x3ED90Cu;
    // 0x3ed90c: 0x0  nop
    ctx->pc = 0x3ed90cu;
    // NOP
label_3ed910:
    // 0x3ed910: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ed910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ed914: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x3ed914u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3ed918: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3ED918u;
    {
        const bool branch_taken_0x3ed918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED918u;
        // 0x3ed91c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed918) {
            ctx->pc = 0x3ED8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ed8f8;
        }
    }
    ctx->pc = 0x3ED920u;
label_3ed920:
    // 0x3ed920: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ed920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ed924: 0x0  nop
    ctx->pc = 0x3ed924u;
    // NOP
label_3ed928:
    // 0x3ed928: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED930u;
}
