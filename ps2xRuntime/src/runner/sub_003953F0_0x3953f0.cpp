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

// Function: sub_003953F0
// Address: 0x3953f0 - 0x395418
void sub_003953F0_0x3953f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003953F0_0x3953f0");
#endif

    ctx->pc = 0x3953f0u;

    // 0x3953f0: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3953f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3953f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3953f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3953f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3953f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3953fc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3953fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x395400: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x395400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x395404: 0xa4652b26  sh          $a1, 0x2B26($v1)
    ctx->pc = 0x395404u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 11046), (uint16_t)GPR_U32(ctx, 5));
    // 0x395408: 0x84832b30  lh          $v1, 0x2B30($a0)
    ctx->pc = 0x395408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11056)));
    // 0x39540c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39540cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x395410: 0x3e00008  jr          $ra
    ctx->pc = 0x395410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395410u;
        // 0x395414: 0xa4832b30  sh          $v1, 0x2B30($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395418u;
}
