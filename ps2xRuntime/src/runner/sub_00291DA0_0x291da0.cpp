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

// Function: sub_00291DA0
// Address: 0x291da0 - 0x291dc8
void sub_00291DA0_0x291da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291DA0_0x291da0");
#endif

    ctx->pc = 0x291da0u;

    // 0x291da0: 0x948329de  lhu         $v1, 0x29DE($a0)
    ctx->pc = 0x291da0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10718)));
    // 0x291da4: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x291da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x291da8: 0xa48329de  sh          $v1, 0x29DE($a0)
    ctx->pc = 0x291da8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x291dac: 0x948329de  lhu         $v1, 0x29DE($a0)
    ctx->pc = 0x291dacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10718)));
    // 0x291db0: 0x3063ff7f  andi        $v1, $v1, 0xFF7F
    ctx->pc = 0x291db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65407);
    // 0x291db4: 0xa48329de  sh          $v1, 0x29DE($a0)
    ctx->pc = 0x291db4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x291db8: 0x948329de  lhu         $v1, 0x29DE($a0)
    ctx->pc = 0x291db8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10718)));
    // 0x291dbc: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x291dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x291dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x291DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DC0u;
        // 0x291dc4: 0xa48329de  sh          $v1, 0x29DE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291DC8u;
}
