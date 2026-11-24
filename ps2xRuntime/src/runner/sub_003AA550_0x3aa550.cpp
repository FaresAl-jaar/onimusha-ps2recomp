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

// Function: sub_003AA550
// Address: 0x3aa550 - 0x3aa580
void sub_003AA550_0x3aa550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA550_0x3aa550");
#endif

    ctx->pc = 0x3aa550u;

    // 0x3aa550: 0x90830046  lbu         $v1, 0x46($a0)
    ctx->pc = 0x3aa550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x3aa554: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3aa554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3aa558: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3aa558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3aa55c: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x3aa55cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x3aa560: 0x90830046  lbu         $v1, 0x46($a0)
    ctx->pc = 0x3aa560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x3aa564: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3aa564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3aa568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3aa568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3aa56c: 0xac660038  sw          $a2, 0x38($v1)
    ctx->pc = 0x3aa56cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 6));
    // 0x3aa570: 0x90830046  lbu         $v1, 0x46($a0)
    ctx->pc = 0x3aa570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x3aa574: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3aa574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3aa578: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA578u;
        // 0x3aa57c: 0xa0830046  sb          $v1, 0x46($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 70), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA580u;
}
