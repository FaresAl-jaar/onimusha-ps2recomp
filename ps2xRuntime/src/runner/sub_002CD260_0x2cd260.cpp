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

// Function: sub_002CD260
// Address: 0x2cd260 - 0x2cd27c
void sub_002CD260_0x2cd260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD260_0x2cd260");
#endif

    ctx->pc = 0x2cd260u;

    // 0x2cd260: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2cd260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2cd264: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cd264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cd268: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2cd268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2cd26c: 0x244277d0  addiu       $v0, $v0, 0x77D0
    ctx->pc = 0x2cd26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30672));
    // 0x2cd270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cd270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cd274: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD274u;
        // 0x2cd278: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD27Cu;
}
