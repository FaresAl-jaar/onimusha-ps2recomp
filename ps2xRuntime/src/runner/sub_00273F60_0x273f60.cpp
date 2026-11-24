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

// Function: sub_00273F60
// Address: 0x273f60 - 0x273f8c
void sub_00273F60_0x273f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273F60_0x273f60");
#endif

    switch (ctx->pc) {
        case 0x273f80u: goto label_273f80;
        default: break;
    }

    ctx->pc = 0x273f60u;

    // 0x273f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273f68: 0x8f8588f4  lw          $a1, -0x770C($gp)
    ctx->pc = 0x273f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936820)));
    // 0x273f6c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x273F6Cu;
    {
        const bool branch_taken_0x273f6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F6Cu;
        // 0x273f70: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f6c) {
            ctx->pc = 0x273F80u;
            goto label_273f80;
        }
    }
    ctx->pc = 0x273F74u;
    // 0x273f74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f78: 0xc0ce590  jal         func_339640
    ctx->pc = 0x273F78u;
    SET_GPR_U32(ctx, 31, 0x273F80u);
    ctx->pc = 0x273F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F78u;
    // 0x273f7c: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339640u, 0x273F78u, 0x273F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F80u;
label_273f80:
    // 0x273f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273f84: 0x3e00008  jr          $ra
    ctx->pc = 0x273F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F84u;
        // 0x273f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273F8Cu;
}
