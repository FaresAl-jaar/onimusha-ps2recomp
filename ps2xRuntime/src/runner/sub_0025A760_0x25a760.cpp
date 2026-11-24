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

// Function: sub_0025A760
// Address: 0x25a760 - 0x25a788
void sub_0025A760_0x25a760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A760_0x25a760");
#endif

    ctx->pc = 0x25a760u;

    // 0x25a760: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x25a760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x25a764: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x25a764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x25a768: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x25a768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a76c: 0x8c22ceb4  lw          $v0, -0x314C($at)
    ctx->pc = 0x25a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB4u));
    // 0x25a770: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x25a770u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x25a774: 0x0  nop
    ctx->pc = 0x25a774u;
    // NOP
    // 0x25a778: 0x0  nop
    ctx->pc = 0x25a778u;
    // NOP
    // 0x25a77c: 0x1010  mfhi        $v0
    ctx->pc = 0x25a77cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x25a780: 0x3e00008  jr          $ra
    ctx->pc = 0x25A780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A780u;
        // 0x25a784: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A788u;
}
