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

// Function: sub_0015B810
// Address: 0x15b810 - 0x15b838
void sub_0015B810_0x15b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B810_0x15b810");
#endif

    ctx->pc = 0x15b810u;

    // 0x15b810: 0x51942  srl         $v1, $a1, 5
    ctx->pc = 0x15b810u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x15b814: 0x30a6001f  andi        $a2, $a1, 0x1F
    ctx->pc = 0x15b814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x15b818: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15b818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15b81c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x15b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x15b820: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x15b820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15b824: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x15b824u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15b828: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15b828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b82c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15b82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15b830: 0x3e00008  jr          $ra
    ctx->pc = 0x15B830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B830u;
        // 0x15b834: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B838u;
}
