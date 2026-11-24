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

// Function: sub_00275330
// Address: 0x275330 - 0x275350
void sub_00275330_0x275330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275330_0x275330");
#endif

    switch (ctx->pc) {
        case 0x275340u: goto label_275340;
        default: break;
    }

    ctx->pc = 0x275330u;

    // 0x275330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275338: 0xc09d2b8  jal         func_274AE0
    ctx->pc = 0x275338u;
    SET_GPR_U32(ctx, 31, 0x275340u);
    ctx->pc = 0x27533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275338u;
    // 0x27533c: 0x9085000c  lbu         $a1, 0xC($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274AE0u, 0x275338u, 0x275340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275340u;
label_275340:
    // 0x275340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275344: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x275344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x275348: 0x3e00008  jr          $ra
    ctx->pc = 0x275348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275348u;
        // 0x27534c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275350u;
}
