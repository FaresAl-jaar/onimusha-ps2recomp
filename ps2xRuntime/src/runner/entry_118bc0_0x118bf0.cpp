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

// Function: entry_118bc0
// Address: 0x118bc0 - 0x118bf0
void entry_118bc0_0x118bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_118bc0_0x118bf0");
#endif

    ctx->pc = 0x118bc0u;

    // 0x118bc0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x118bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x118bc4: 0x8c434150  lw          $v1, 0x4150($v0)
    ctx->pc = 0x118bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x404150u));
    // 0x118bc8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x118BC8u;
    {
        const bool branch_taken_0x118bc8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x118BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BC8u;
        // 0x118bcc: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118bc8) {
            ctx->pc = 0x118BDCu;
            goto label_118bdc;
        }
    }
    ctx->pc = 0x118BD0u;
    // 0x118bd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x118BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BD4u;
        // 0x118bd8: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118BDCu;
label_118bdc:
    // 0x118bdc: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x118bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x118be0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118be4: 0x3e00008  jr          $ra
    ctx->pc = 0x118BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BE4u;
        // 0x118be8: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118BECu;
    // 0x118bec: 0x0  nop
    ctx->pc = 0x118becu;
    // NOP
    ctx->pc = 0x118bf0u;
}
