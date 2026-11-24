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

// Function: sub_003E1630
// Address: 0x3e1630 - 0x3e1670
void sub_003E1630_0x3e1630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1630_0x3e1630");
#endif

    ctx->pc = 0x3e1630u;

    // 0x3e1630: 0x8f848cf8  lw          $a0, -0x7308($gp)
    ctx->pc = 0x3e1630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1634: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e1634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e1638: 0x24850290  addiu       $a1, $a0, 0x290
    ctx->pc = 0x3e1638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    // 0x3e163c: 0x90840290  lbu         $a0, 0x290($a0)
    ctx->pc = 0x3e163cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 656)));
    // 0x3e1640: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E1640u;
    {
        const bool branch_taken_0x3e1640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e1640) {
            ctx->pc = 0x3E1668u;
            goto label_3e1668;
        }
    }
    ctx->pc = 0x3E1648u;
    // 0x3e1648: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3e1648u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e164c: 0x2404fff6  addiu       $a0, $zero, -0xA
    ctx->pc = 0x3e164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x3e1650: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x3e1650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1654: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x3e1654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3e1658: 0xac650230  sw          $a1, 0x230($v1)
    ctx->pc = 0x3e1658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 560), GPR_U32(ctx, 5));
    // 0x3e165c: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x3e165cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1660: 0xac640228  sw          $a0, 0x228($v1)
    ctx->pc = 0x3e1660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 4));
    // 0x3e1664: 0x0  nop
    ctx->pc = 0x3e1664u;
    // NOP
label_3e1668:
    // 0x3e1668: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1670u;
}
