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

// Function: sub_00248120
// Address: 0x248120 - 0x248154
void sub_00248120_0x248120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248120_0x248120");
#endif

    switch (ctx->pc) {
        case 0x248130u: goto label_248130;
        default: break;
    }

    ctx->pc = 0x248120u;

    // 0x248120: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x248120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x248124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248128: 0x2443fed0  addiu       $v1, $v0, -0x130
    ctx->pc = 0x248128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966992));
    // 0x24812c: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x24812cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_248130:
    // 0x248130: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x248130u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248134: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x248134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x248138: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x248138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x24813c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x24813cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x248140: 0x0  nop
    ctx->pc = 0x248140u;
    // NOP
    // 0x248144: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x248144u;
    {
        const bool branch_taken_0x248144 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x248148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248144u;
        // 0x248148: 0x24630048  addiu       $v1, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248144) {
            ctx->pc = 0x248130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248130;
        }
    }
    ctx->pc = 0x24814Cu;
    // 0x24814c: 0x3e00008  jr          $ra
    ctx->pc = 0x24814Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24814Cu;
        // 0x248150: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24814Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248154u;
}
