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

// Function: sub_00228E60
// Address: 0x228e60 - 0x228ea0
void sub_00228E60_0x228e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228E60_0x228e60");
#endif

    ctx->pc = 0x228e60u;

    // 0x228e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228e64: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228E64u;
    {
        const bool branch_taken_0x228e64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x228E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E64u;
        // 0x228e68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e64) {
            ctx->pc = 0x228E7Cu;
            goto label_228e7c;
        }
    }
    ctx->pc = 0x228E6Cu;
    // 0x228e6c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x228E6Cu;
    {
        const bool branch_taken_0x228e6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x228e6c) {
            ctx->pc = 0x228E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228E6Cu;
            // 0x228e70: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228E80u;
            goto label_228e80;
        }
    }
    ctx->pc = 0x228E74u;
    // 0x228e74: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x228E74u;
    {
        const bool branch_taken_0x228e74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x228E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E74u;
        // 0x228e78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e74) {
            ctx->pc = 0x228E90u;
            goto label_228e90;
        }
    }
    ctx->pc = 0x228E7Cu;
label_228e7c:
    // 0x228e7c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x228e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_228e80:
    // 0x228e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228e84: 0x248498a8  addiu       $a0, $a0, -0x6758
    ctx->pc = 0x228e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940840));
    // 0x228e88: 0x808a0d4  j           func_228350
    ctx->pc = 0x228E88u;
    ctx->pc = 0x228E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228E88u;
    // 0x228e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228350u;
    sub_00228350_0x228350(rdram, ctx, runtime); return;
    ctx->pc = 0x228E90u;
label_228e90:
    // 0x228e90: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x228e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x228e94: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x228e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x228e98: 0x3e00008  jr          $ra
    ctx->pc = 0x228E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E98u;
        // 0x228e9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228EA0u;
}
