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

// Function: sub_00239D58
// Address: 0x239d58 - 0x239d90
void sub_00239D58_0x239d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239D58_0x239d58");
#endif

    ctx->pc = 0x239d58u;

    // 0x239d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239d5c: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239D5Cu;
    {
        const bool branch_taken_0x239d5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x239d5c) {
            ctx->pc = 0x239D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239D5Cu;
            // 0x239d60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239D70u;
            goto label_239d70;
        }
    }
    ctx->pc = 0x239D64u;
    // 0x239d64: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x239d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x239d68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x239D68u;
    {
        const bool branch_taken_0x239d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D68u;
        // 0x239d6c: 0x2402176a  addiu       $v0, $zero, 0x176A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5994));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d68) {
            ctx->pc = 0x239D80u;
            goto label_239d80;
        }
    }
    ctx->pc = 0x239D70u;
label_239d70:
    // 0x239d70: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239D70u;
    {
        const bool branch_taken_0x239d70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x239d70) {
            ctx->pc = 0x239D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239D70u;
            // 0x239d74: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239D88u;
            goto label_239d88;
        }
    }
    ctx->pc = 0x239D78u;
    // 0x239d78: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x239d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x239d7c: 0x24021388  addiu       $v0, $zero, 0x1388
    ctx->pc = 0x239d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_239d80:
    // 0x239d80: 0xac628fd0  sw          $v0, -0x7030($v1)
    ctx->pc = 0x239d80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294938576), GPR_U32(ctx, 2));
    // 0x239d84: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x239d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_239d88:
    // 0x239d88: 0x3e00008  jr          $ra
    ctx->pc = 0x239D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D88u;
        // 0x239d8c: 0xac448f84  sw          $a0, -0x707C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294938500), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239D90u;
}
