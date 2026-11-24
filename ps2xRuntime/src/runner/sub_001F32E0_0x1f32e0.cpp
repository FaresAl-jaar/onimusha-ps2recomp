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

// Function: sub_001F32E0
// Address: 0x1f32e0 - 0x1f3320
void sub_001F32E0_0x1f32e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F32E0_0x1f32e0");
#endif

    ctx->pc = 0x1f32e0u;

    // 0x1f32e0: 0x908308ff  lbu         $v1, 0x8FF($a0)
    ctx->pc = 0x1f32e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2303)));
    // 0x1f32e4: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x1f32e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1f32e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F32E8u;
    {
        const bool branch_taken_0x1f32e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32E8u;
        // 0x1f32ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f32e8) {
            ctx->pc = 0x1F32F8u;
            goto label_1f32f8;
        }
    }
    ctx->pc = 0x1F32F0u;
    // 0x1f32f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F32F0u;
    {
        const bool branch_taken_0x1f32f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f32f0) {
            ctx->pc = 0x1F3318u;
            goto label_1f3318;
        }
    }
    ctx->pc = 0x1F32F8u;
label_1f32f8:
    // 0x1f32f8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f32f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f32fc: 0xa08208ff  sb          $v0, 0x8FF($a0)
    ctx->pc = 0x1f32fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2303), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f3300: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1f3300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f3304: 0x90420800  lbu         $v0, 0x800($v0)
    ctx->pc = 0x1f3304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2048)));
    // 0x1f3308: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f3308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f330c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f3310: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1f3310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1f3314: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1f3314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f3318:
    // 0x1f3318: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3320u;
}
