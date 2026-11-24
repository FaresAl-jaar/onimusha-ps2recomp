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

// Function: sub_0038B320
// Address: 0x38b320 - 0x38b350
void sub_0038B320_0x38b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B320_0x38b320");
#endif

    ctx->pc = 0x38b320u;

    // 0x38b320: 0x28a11000  slti        $at, $a1, 0x1000
    ctx->pc = 0x38b320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x38b324: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x38B324u;
    {
        const bool branch_taken_0x38b324 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b324) {
            ctx->pc = 0x38B338u;
            goto label_38b338;
        }
    }
    ctx->pc = 0x38B32Cu;
    // 0x38b32c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38B32Cu;
    {
        const bool branch_taken_0x38b32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B32Cu;
        // 0x38b330: 0x24a5f000  addiu       $a1, $a1, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b32c) {
            ctx->pc = 0x38B348u;
            goto label_38b348;
        }
    }
    ctx->pc = 0x38B334u;
    // 0x38b334: 0x0  nop
    ctx->pc = 0x38b334u;
    // NOP
label_38b338:
    // 0x38b338: 0x28a1f001  slti        $at, $a1, -0xFFF
    ctx->pc = 0x38b338u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294963201) ? 1 : 0);
    // 0x38b33c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x38B33Cu;
    {
        const bool branch_taken_0x38b33c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b33c) {
            ctx->pc = 0x38B348u;
            goto label_38b348;
        }
    }
    ctx->pc = 0x38B344u;
    // 0x38b344: 0x24a51000  addiu       $a1, $a1, 0x1000
    ctx->pc = 0x38b344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4096));
label_38b348:
    // 0x38b348: 0x3e00008  jr          $ra
    ctx->pc = 0x38B348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B348u;
        // 0x38b34c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B350u;
}
