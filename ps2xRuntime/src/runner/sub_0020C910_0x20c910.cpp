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

// Function: sub_0020C910
// Address: 0x20c910 - 0x20c934
void sub_0020C910_0x20c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C910_0x20c910");
#endif

    switch (ctx->pc) {
        case 0x20c920u: goto label_20c920;
        default: break;
    }

    ctx->pc = 0x20c910u;

    // 0x20c910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c918: 0xc08dd84  jal         func_237610
    ctx->pc = 0x20C918u;
    SET_GPR_U32(ctx, 31, 0x20C920u);
    ctx->pc = 0x237610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237610u, 0x20C918u, 0x20C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C920u;
label_20c920:
    // 0x20c920: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x20c920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x20c924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c928: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x20c928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x20c92c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C92Cu;
        // 0x20c930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C934u;
}
