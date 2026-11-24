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

// Function: sub_0027E4F0
// Address: 0x27e4f0 - 0x27e51c
void sub_0027E4F0_0x27e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E4F0_0x27e4f0");
#endif

    ctx->pc = 0x27e4f0u;

    // 0x27e4f0: 0x90830048  lbu         $v1, 0x48($a0)
    ctx->pc = 0x27e4f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x27e4f4: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x27e4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x27e4f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27e4fc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x27e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x27e500: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x27e500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x27e504: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x27e504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x27e508: 0x90830048  lbu         $v1, 0x48($a0)
    ctx->pc = 0x27e508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x27e50c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27e510: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27e510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27e514: 0x3e00008  jr          $ra
    ctx->pc = 0x27E514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E514u;
        // 0x27e518: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E51Cu;
}
