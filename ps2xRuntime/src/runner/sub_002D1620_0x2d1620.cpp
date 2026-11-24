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

// Function: sub_002D1620
// Address: 0x2d1620 - 0x2d1650
void sub_002D1620_0x2d1620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1620_0x2d1620");
#endif

    ctx->pc = 0x2d1620u;

    // 0x2d1620: 0x90830018  lbu         $v1, 0x18($a0)
    ctx->pc = 0x2d1620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d1624: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1624u;
    {
        const bool branch_taken_0x2d1624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1624) {
            ctx->pc = 0x2D1638u;
            goto label_2d1638;
        }
    }
    ctx->pc = 0x2D162Cu;
    // 0x2d162c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D162Cu;
    {
        const bool branch_taken_0x2d162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D162Cu;
        // 0x2d1630: 0xa480006c  sh          $zero, 0x6C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d162c) {
            ctx->pc = 0x2D1648u;
            goto label_2d1648;
        }
    }
    ctx->pc = 0x2D1634u;
    // 0x2d1634: 0x0  nop
    ctx->pc = 0x2d1634u;
    // NOP
label_2d1638:
    // 0x2d1638: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d1638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d163c: 0x84235b32  lh          $v1, 0x5B32($at)
    ctx->pc = 0x2d163cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5B32u));
    // 0x2d1640: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2d1640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2d1644: 0xa483006c  sh          $v1, 0x6C($a0)
    ctx->pc = 0x2d1644u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 3));
label_2d1648:
    // 0x2d1648: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1650u;
}
