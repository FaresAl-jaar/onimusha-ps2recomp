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

// Function: sub_0024BFF8
// Address: 0x24bff8 - 0x24c020
void sub_0024BFF8_0x24bff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BFF8_0x24bff8");
#endif

    ctx->pc = 0x24bff8u;

    // 0x24bff8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BFF8u;
    {
        const bool branch_taken_0x24bff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFF8u;
        // 0x24bffc: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bff8) {
            ctx->pc = 0x24C010u;
            goto label_24c010;
        }
    }
    ctx->pc = 0x24C000u;
    // 0x24c000: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24c000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24c004: 0xac401258  sw          $zero, 0x1258($v0)
    ctx->pc = 0x24c004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4696), GPR_U32(ctx, 0));
    // 0x24c008: 0x3e00008  jr          $ra
    ctx->pc = 0x24C008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C008u;
        // 0x24c00c: 0xac60125c  sw          $zero, 0x125C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C010u;
label_24c010:
    // 0x24c010: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24c010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24c014: 0xac441258  sw          $a0, 0x1258($v0)
    ctx->pc = 0x24c014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4696), GPR_U32(ctx, 4));
    // 0x24c018: 0x3e00008  jr          $ra
    ctx->pc = 0x24C018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C018u;
        // 0x24c01c: 0xac65125c  sw          $a1, 0x125C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4700), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C020u;
}
