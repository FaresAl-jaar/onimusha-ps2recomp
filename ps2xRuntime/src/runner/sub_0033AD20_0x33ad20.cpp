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

// Function: sub_0033AD20
// Address: 0x33ad20 - 0x33ad34
void sub_0033AD20_0x33ad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AD20_0x33ad20");
#endif

    ctx->pc = 0x33ad20u;

    // 0x33ad20: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x33ad20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x33ad24: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ad24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ad28: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x33ad28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x33ad2c: 0x3e00008  jr          $ra
    ctx->pc = 0x33AD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD2Cu;
        // 0x33ad30: 0xa023f82e  sb          $v1, -0x7D2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294965294), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AD34u;
}
