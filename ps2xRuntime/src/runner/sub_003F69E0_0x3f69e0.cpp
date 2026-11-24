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

// Function: sub_003F69E0
// Address: 0x3f69e0 - 0x3f69fc
void sub_003F69E0_0x3f69e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F69E0_0x3f69e0");
#endif

    ctx->pc = 0x3f69e0u;

    // 0x3f69e0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x3f69e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3f69e4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3f69e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3f69e8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3f69e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3f69ec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3f69ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3f69f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3f69f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f69f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F69F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F69F4u;
        // 0x3f69f8: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F69F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F69FCu;
}
