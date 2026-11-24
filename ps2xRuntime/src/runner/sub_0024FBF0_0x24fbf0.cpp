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

// Function: sub_0024FBF0
// Address: 0x24fbf0 - 0x24fc2c
void sub_0024FBF0_0x24fbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FBF0_0x24fbf0");
#endif

    ctx->pc = 0x24fbf0u;

    // 0x24fbf0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24fbf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24fbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fbf8: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24fbfc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24fbfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc00: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FC00u;
    {
        const bool branch_taken_0x24fc00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x24FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC00u;
        // 0x24fc04: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc00) {
            ctx->pc = 0x24FC18u;
            goto label_24fc18;
        }
    }
    ctx->pc = 0x24FC08u;
    // 0x24fc08: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24fc0c: 0x8c8374d0  lw          $v1, 0x74D0($a0)
    ctx->pc = 0x24fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24fc10: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24FC10u;
    {
        const bool branch_taken_0x24fc10 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC10u;
        // 0x24fc14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc10) {
            ctx->pc = 0x24FC24u;
            goto label_24fc24;
        }
    }
    ctx->pc = 0x24FC18u;
label_24fc18:
    // 0x24fc18: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x24fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x24fc1c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x24fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24fc20: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_24fc24:
    // 0x24fc24: 0x3e00008  jr          $ra
    ctx->pc = 0x24FC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FC2Cu;
}
