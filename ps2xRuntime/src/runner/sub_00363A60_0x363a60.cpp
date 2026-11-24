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

// Function: sub_00363A60
// Address: 0x363a60 - 0x363a80
void sub_00363A60_0x363a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363A60_0x363a60");
#endif

    ctx->pc = 0x363a60u;

    // 0x363a60: 0x2c812401  sltiu       $at, $a0, 0x2401
    ctx->pc = 0x363a60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9217) ? 1 : 0);
    // 0x363a64: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x363A64u;
    {
        const bool branch_taken_0x363a64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x363A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A64u;
        // 0x363a68: 0x3c020092  lui         $v0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363a64) {
            ctx->pc = 0x363A74u;
            goto label_363a74;
        }
    }
    ctx->pc = 0x363A6Cu;
    // 0x363a6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x363A6Cu;
    {
        const bool branch_taken_0x363a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A6Cu;
        // 0x363a70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363a6c) {
            ctx->pc = 0x363A78u;
            goto label_363a78;
        }
    }
    ctx->pc = 0x363A74u;
label_363a74:
    // 0x363a74: 0x2442c2b0  addiu       $v0, $v0, -0x3D50
    ctx->pc = 0x363a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951600));
label_363a78:
    // 0x363a78: 0x3e00008  jr          $ra
    ctx->pc = 0x363A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363A80u;
}
