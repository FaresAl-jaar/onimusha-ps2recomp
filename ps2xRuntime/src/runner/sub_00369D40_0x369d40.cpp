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

// Function: sub_00369D40
// Address: 0x369d40 - 0x369d70
void sub_00369D40_0x369d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369D40_0x369d40");
#endif

    ctx->pc = 0x369d40u;

    // 0x369d40: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x369d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x369d44: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x369d44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x369d48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369D48u;
    {
        const bool branch_taken_0x369d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369D48u;
        // 0x369d4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369d48) {
            ctx->pc = 0x369D58u;
            goto label_369d58;
        }
    }
    ctx->pc = 0x369D50u;
    // 0x369d50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x369D50u;
    {
        const bool branch_taken_0x369d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369d50) {
            ctx->pc = 0x369D68u;
            goto label_369d68;
        }
    }
    ctx->pc = 0x369D58u;
label_369d58:
    // 0x369d58: 0x90832b29  lbu         $v1, 0x2B29($a0)
    ctx->pc = 0x369d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11049)));
    // 0x369d5c: 0x90822b28  lbu         $v0, 0x2B28($a0)
    ctx->pc = 0x369d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11048)));
    // 0x369d60: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x369d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x369d64: 0x0  nop
    ctx->pc = 0x369d64u;
    // NOP
label_369d68:
    // 0x369d68: 0x3e00008  jr          $ra
    ctx->pc = 0x369D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369D70u;
}
