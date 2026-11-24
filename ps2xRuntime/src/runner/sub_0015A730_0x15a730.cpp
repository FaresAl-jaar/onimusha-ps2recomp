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

// Function: sub_0015A730
// Address: 0x15a730 - 0x15a754
void sub_0015A730_0x15a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A730_0x15a730");
#endif

    ctx->pc = 0x15a730u;

    // 0x15a730: 0x90831a43  lbu         $v1, 0x1A43($a0)
    ctx->pc = 0x15a730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6723)));
    // 0x15a734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a738: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15a738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15a73c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15a740: 0xac651bf0  sw          $a1, 0x1BF0($v1)
    ctx->pc = 0x15a740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7152), GPR_U32(ctx, 5));
    // 0x15a744: 0x90831a43  lbu         $v1, 0x1A43($a0)
    ctx->pc = 0x15a744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6723)));
    // 0x15a748: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15a748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15a74c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A74Cu;
        // 0x15a750: 0xa0831a43  sb          $v1, 0x1A43($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 6723), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A754u;
}
