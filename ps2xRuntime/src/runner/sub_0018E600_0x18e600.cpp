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

// Function: sub_0018E600
// Address: 0x18e600 - 0x18e640
void sub_0018E600_0x18e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E600_0x18e600");
#endif

    ctx->pc = 0x18e600u;

    // 0x18e600: 0x8f8386a4  lw          $v1, -0x795C($gp)
    ctx->pc = 0x18e600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936228)));
    // 0x18e604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e608: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E608u;
    {
        const bool branch_taken_0x18e608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E608u;
        // 0x18e60c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e608) {
            ctx->pc = 0x18E628u;
            goto label_18e628;
        }
    }
    ctx->pc = 0x18E610u;
    // 0x18e610: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E610u;
    {
        const bool branch_taken_0x18e610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e610) {
            ctx->pc = 0x18E630u;
            goto label_18e630;
        }
    }
    ctx->pc = 0x18E618u;
    // 0x18e618: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E618u;
    {
        const bool branch_taken_0x18e618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e618) {
            ctx->pc = 0x18E630u;
            goto label_18e630;
        }
    }
    ctx->pc = 0x18E620u;
    // 0x18e620: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18E620u;
    {
        const bool branch_taken_0x18e620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e620) {
            ctx->pc = 0x18E630u;
            goto label_18e630;
        }
    }
    ctx->pc = 0x18E628u;
label_18e628:
    // 0x18e628: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18E628u;
    {
        const bool branch_taken_0x18e628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E628u;
        // 0x18e62c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e628) {
            ctx->pc = 0x18E638u;
            goto label_18e638;
        }
    }
    ctx->pc = 0x18E630u;
label_18e630:
    // 0x18e630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18e630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e634: 0x0  nop
    ctx->pc = 0x18e634u;
    // NOP
label_18e638:
    // 0x18e638: 0x3e00008  jr          $ra
    ctx->pc = 0x18E638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E640u;
}
