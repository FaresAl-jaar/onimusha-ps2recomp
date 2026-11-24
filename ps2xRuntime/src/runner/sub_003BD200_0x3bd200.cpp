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

// Function: sub_003BD200
// Address: 0x3bd200 - 0x3bd228
void sub_003BD200_0x3bd200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD200_0x3bd200");
#endif

    ctx->pc = 0x3bd200u;

    // 0x3bd200: 0x80822b90  lb          $v0, 0x2B90($a0)
    ctx->pc = 0x3bd200u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 11152)));
    // 0x3bd204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BD204u;
    {
        const bool branch_taken_0x3bd204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD204u;
        // 0x3bd208: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd204) {
            ctx->pc = 0x3BD218u;
            goto label_3bd218;
        }
    }
    ctx->pc = 0x3BD20Cu;
    // 0x3bd20c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bd20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd210: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BD210u;
    {
        const bool branch_taken_0x3bd210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD210u;
        // 0x3bd214: 0xa0832b90  sb          $v1, 0x2B90($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11152), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd210) {
            ctx->pc = 0x3BD220u;
            goto label_3bd220;
        }
    }
    ctx->pc = 0x3BD218u;
label_3bd218:
    // 0x3bd218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bd218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bd21c: 0x0  nop
    ctx->pc = 0x3bd21cu;
    // NOP
label_3bd220:
    // 0x3bd220: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD228u;
}
