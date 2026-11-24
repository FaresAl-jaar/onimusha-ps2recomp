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

// Function: sub_00257620
// Address: 0x257620 - 0x257668
void sub_00257620_0x257620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257620_0x257620");
#endif

    ctx->pc = 0x257620u;

    // 0x257620: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x257620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x257624: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x257624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x257628: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x257628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x25762c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x25762cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x257630: 0xa0a3009e  sb          $v1, 0x9E($a1)
    ctx->pc = 0x257630u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 158), (uint8_t)GPR_U32(ctx, 3));
    // 0x257634: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x257634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x257638: 0x2465009e  addiu       $a1, $v1, 0x9E
    ctx->pc = 0x257638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 158));
    // 0x25763c: 0x9063009e  lbu         $v1, 0x9E($v1)
    ctx->pc = 0x25763cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 158)));
    // 0x257640: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257640u;
    {
        const bool branch_taken_0x257640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x257644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257640u;
        // 0x257644: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257640) {
            ctx->pc = 0x257650u;
            goto label_257650;
        }
    }
    ctx->pc = 0x257648u;
    // 0x257648: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x257648u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x25764c: 0x0  nop
    ctx->pc = 0x25764cu;
    // NOP
label_257650:
    // 0x257650: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x257650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x257654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257658: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x257658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25765c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x25765cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x257660: 0x3e00008  jr          $ra
    ctx->pc = 0x257660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257660u;
        // 0x257664: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257668u;
}
