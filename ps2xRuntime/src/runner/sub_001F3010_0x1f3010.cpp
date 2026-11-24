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

// Function: sub_001F3010
// Address: 0x1f3010 - 0x1f3050
void sub_001F3010_0x1f3010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3010_0x1f3010");
#endif

    ctx->pc = 0x1f3010u;

    // 0x1f3010: 0x9083008f  lbu         $v1, 0x8F($a0)
    ctx->pc = 0x1f3010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 143)));
    // 0x1f3014: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x1f3014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1f3018: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3018u;
    {
        const bool branch_taken_0x1f3018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3018u;
        // 0x1f301c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3018) {
            ctx->pc = 0x1F3028u;
            goto label_1f3028;
        }
    }
    ctx->pc = 0x1F3020u;
    // 0x1f3020: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3020u;
    {
        const bool branch_taken_0x1f3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3020) {
            ctx->pc = 0x1F3048u;
            goto label_1f3048;
        }
    }
    ctx->pc = 0x1F3028u;
label_1f3028:
    // 0x1f3028: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f3028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f302c: 0xa082008f  sb          $v0, 0x8F($a0)
    ctx->pc = 0x1f302cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 143), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f3030: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1f3030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f3034: 0x90420080  lbu         $v0, 0x80($v0)
    ctx->pc = 0x1f3034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1f3038: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f3038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f303c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f3040: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1f3040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1f3044: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1f3044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f3048:
    // 0x1f3048: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3050u;
}
