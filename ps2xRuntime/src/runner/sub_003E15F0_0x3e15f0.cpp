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

// Function: sub_003E15F0
// Address: 0x3e15f0 - 0x3e1630
void sub_003E15F0_0x3e15f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E15F0_0x3e15f0");
#endif

    ctx->pc = 0x3e15f0u;

    // 0x3e15f0: 0x8f848cf8  lw          $a0, -0x7308($gp)
    ctx->pc = 0x3e15f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e15f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e15f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e15f8: 0x24850290  addiu       $a1, $a0, 0x290
    ctx->pc = 0x3e15f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    // 0x3e15fc: 0x90840290  lbu         $a0, 0x290($a0)
    ctx->pc = 0x3e15fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 656)));
    // 0x3e1600: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E1600u;
    {
        const bool branch_taken_0x3e1600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e1600) {
            ctx->pc = 0x3E1628u;
            goto label_3e1628;
        }
    }
    ctx->pc = 0x3E1608u;
    // 0x3e1608: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3e1608u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e160c: 0x2404fff6  addiu       $a0, $zero, -0xA
    ctx->pc = 0x3e160cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x3e1610: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x3e1610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1614: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x3e1614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3e1618: 0xac650230  sw          $a1, 0x230($v1)
    ctx->pc = 0x3e1618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 560), GPR_U32(ctx, 5));
    // 0x3e161c: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x3e161cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1620: 0xac640228  sw          $a0, 0x228($v1)
    ctx->pc = 0x3e1620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 4));
    // 0x3e1624: 0x0  nop
    ctx->pc = 0x3e1624u;
    // NOP
label_3e1628:
    // 0x3e1628: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1630u;
}
