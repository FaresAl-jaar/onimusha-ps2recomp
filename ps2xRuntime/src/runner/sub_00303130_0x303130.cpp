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

// Function: sub_00303130
// Address: 0x303130 - 0x30314c
void sub_00303130_0x303130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303130_0x303130");
#endif

    ctx->pc = 0x303130u;

    // 0x303130: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x303130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x303134: 0x3c038ff8  lui         $v1, 0x8FF8
    ctx->pc = 0x303134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36856 << 16));
    // 0x303138: 0x8c22ced4  lw          $v0, -0x312C($at)
    ctx->pc = 0x303138u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CED4u));
    // 0x30313c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x303140: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x303140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x303144: 0x3e00008  jr          $ra
    ctx->pc = 0x303144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303144u;
        // 0x303148: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30314Cu;
}
