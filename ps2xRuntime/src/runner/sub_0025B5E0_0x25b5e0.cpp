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

// Function: sub_0025B5E0
// Address: 0x25b5e0 - 0x25b5f4
void sub_0025B5E0_0x25b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B5E0_0x25b5e0");
#endif

    ctx->pc = 0x25b5e0u;

    // 0x25b5e0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x25b5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x25b5e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25b5e8: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x25b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x25b5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x25B5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5ECu;
        // 0x25b5f0: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B5F4u;
}
