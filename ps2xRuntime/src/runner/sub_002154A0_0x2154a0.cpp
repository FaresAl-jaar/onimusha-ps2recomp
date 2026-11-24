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

// Function: sub_002154A0
// Address: 0x2154a0 - 0x2154c4
void sub_002154A0_0x2154a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002154A0_0x2154a0");
#endif

    ctx->pc = 0x2154a0u;

    // 0x2154a0: 0x24840e48  addiu       $a0, $a0, 0xE48
    ctx->pc = 0x2154a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3656));
    // 0x2154a4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2154a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2154a8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2154a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2154ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2154acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2154b0: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2154B0u;
    {
        const bool branch_taken_0x2154b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2154B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154B0u;
        // 0x2154b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154b0) {
            ctx->pc = 0x2154BCu;
            goto label_2154bc;
        }
    }
    ctx->pc = 0x2154B8u;
    // 0x2154b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2154b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2154bc:
    // 0x2154bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2154BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2154BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2154C4u;
}
