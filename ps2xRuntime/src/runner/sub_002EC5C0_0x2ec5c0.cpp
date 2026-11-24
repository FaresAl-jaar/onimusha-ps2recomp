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

// Function: sub_002EC5C0
// Address: 0x2ec5c0 - 0x2ec610
void sub_002EC5C0_0x2ec5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC5C0_0x2ec5c0");
#endif

    switch (ctx->pc) {
        case 0x2ec5d0u: goto label_2ec5d0;
        default: break;
    }

    ctx->pc = 0x2ec5c0u;

    // 0x2ec5c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec5c4: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x2ec5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2ec5c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ec5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ec5cc: 0x0  nop
    ctx->pc = 0x2ec5ccu;
    // NOP
label_2ec5d0:
    // 0x2ec5d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ec5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ec5d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC5D4u;
    {
        const bool branch_taken_0x2ec5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec5d4) {
            ctx->pc = 0x2EC5F0u;
            goto label_2ec5f0;
        }
    }
    ctx->pc = 0x2EC5DCu;
    // 0x2ec5dc: 0x9042065c  lbu         $v0, 0x65C($v0)
    ctx->pc = 0x2ec5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1628)));
    // 0x2ec5e0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC5E0u;
    {
        const bool branch_taken_0x2ec5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ec5e0) {
            ctx->pc = 0x2EC5F0u;
            goto label_2ec5f0;
        }
    }
    ctx->pc = 0x2EC5E8u;
    // 0x2ec5e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC5E8u;
    {
        const bool branch_taken_0x2ec5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5E8u;
        // 0x2ec5ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5e8) {
            ctx->pc = 0x2EC608u;
            goto label_2ec608;
        }
    }
    ctx->pc = 0x2EC5F0u;
label_2ec5f0:
    // 0x2ec5f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ec5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ec5f4: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2ec5f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ec5f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2EC5F8u;
    {
        const bool branch_taken_0x2ec5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5F8u;
        // 0x2ec5fc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5f8) {
            ctx->pc = 0x2EC5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec5d0;
        }
    }
    ctx->pc = 0x2EC600u;
    // 0x2ec600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ec600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec604: 0x0  nop
    ctx->pc = 0x2ec604u;
    // NOP
label_2ec608:
    // 0x2ec608: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC610u;
}
