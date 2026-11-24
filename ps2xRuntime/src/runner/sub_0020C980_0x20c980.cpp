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

// Function: sub_0020C980
// Address: 0x20c980 - 0x20c9a8
void sub_0020C980_0x20c980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C980_0x20c980");
#endif

    switch (ctx->pc) {
        case 0x20c994u: goto label_20c994;
        default: break;
    }

    ctx->pc = 0x20c980u;

    // 0x20c980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c988: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20c988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20c98c: 0xc08e0f8  jal         func_2383E0
    ctx->pc = 0x20C98Cu;
    SET_GPR_U32(ctx, 31, 0x20C994u);
    ctx->pc = 0x20C990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C98Cu;
    // 0x20c990: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E0u, 0x20C98Cu, 0x20C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C994u;
label_20c994:
    // 0x20c994: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20c994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20c998: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20c998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c99c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c99cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x20C9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9A0u;
        // 0x20c9a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C9A8u;
}
