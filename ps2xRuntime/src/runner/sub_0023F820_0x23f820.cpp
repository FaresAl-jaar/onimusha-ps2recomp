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

// Function: sub_0023F820
// Address: 0x23f820 - 0x23f840
void sub_0023F820_0x23f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F820_0x23f820");
#endif

    ctx->pc = 0x23f820u;

    // 0x23f820: 0x808301a5  lb          $v1, 0x1A5($a0)
    ctx->pc = 0x23f820u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 421)));
    // 0x23f824: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F824u;
    {
        const bool branch_taken_0x23f824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F824u;
        // 0x23f828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f824) {
            ctx->pc = 0x23F838u;
            goto label_23f838;
        }
    }
    ctx->pc = 0x23F82Cu;
    // 0x23f82c: 0x80830204  lb          $v1, 0x204($a0)
    ctx->pc = 0x23f82cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x23f830: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23F830u;
    {
        const bool branch_taken_0x23f830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f830) {
            ctx->pc = 0x23F834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F830u;
            // 0x23f834: 0x80820205  lb          $v0, 0x205($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 517)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F838u;
            goto label_23f838;
        }
    }
    ctx->pc = 0x23F838u;
label_23f838:
    // 0x23f838: 0x3e00008  jr          $ra
    ctx->pc = 0x23F838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F840u;
}
