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

// Function: sub_0020E650
// Address: 0x20e650 - 0x20e680
void sub_0020E650_0x20e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E650_0x20e650");
#endif

    ctx->pc = 0x20e650u;

    // 0x20e650: 0x8c8336b0  lw          $v1, 0x36B0($a0)
    ctx->pc = 0x20e650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14000)));
    // 0x20e654: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e658: 0x8c842004  lw          $a0, 0x2004($a0)
    ctx->pc = 0x20e658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x20e65c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E65Cu;
    {
        const bool branch_taken_0x20e65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E65Cu;
        // 0x20e660: 0x24650d0c  addiu       $a1, $v1, 0xD0C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e65c) {
            ctx->pc = 0x20E678u;
            goto label_20e678;
        }
    }
    ctx->pc = 0x20E664u;
    // 0x20e664: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x20e664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x20e668: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20e668u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e66c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x20e66cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20e670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e674: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x20e674u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_20e678:
    // 0x20e678: 0x3e00008  jr          $ra
    ctx->pc = 0x20E678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E680u;
}
