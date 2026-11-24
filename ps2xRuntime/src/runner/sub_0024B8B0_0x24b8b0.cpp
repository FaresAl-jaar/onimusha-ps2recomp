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

// Function: sub_0024B8B0
// Address: 0x24b8b0 - 0x24b8ec
void sub_0024B8B0_0x24b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B8B0_0x24b8b0");
#endif

    ctx->pc = 0x24b8b0u;

    // 0x24b8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b8b4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B8B4u;
    {
        const bool branch_taken_0x24b8b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8B4u;
        // 0x24b8b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8b4) {
            ctx->pc = 0x24B8D0u;
            goto label_24b8d0;
        }
    }
    ctx->pc = 0x24B8BCu;
    // 0x24b8bc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24b8c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b8c4: 0x2484d888  addiu       $a0, $a0, -0x2778
    ctx->pc = 0x24b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957192));
    // 0x24b8c8: 0x8093008  j           func_24C020
    ctx->pc = 0x24B8C8u;
    ctx->pc = 0x24B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B8C8u;
    // 0x24b8cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    sub_0024C020_0x24c020(rdram, ctx, runtime); return;
    ctx->pc = 0x24B8D0u;
label_24b8d0:
    // 0x24b8d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b8d4: 0x54a20002  bnel        $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24B8D4u;
    {
        const bool branch_taken_0x24b8d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b8d4) {
            ctx->pc = 0x24B8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B8D4u;
            // 0x24b8d8: 0xa0800004  sb          $zero, 0x4($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B8E0u;
            goto label_24b8e0;
        }
    }
    ctx->pc = 0x24B8DCu;
    // 0x24b8dc: 0xa0850004  sb          $a1, 0x4($a0)
    ctx->pc = 0x24b8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
label_24b8e0:
    // 0x24b8e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x24B8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8E4u;
        // 0x24b8e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B8ECu;
}
