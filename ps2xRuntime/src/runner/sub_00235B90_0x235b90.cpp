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

// Function: sub_00235B90
// Address: 0x235b90 - 0x235bbc
void sub_00235B90_0x235b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235B90_0x235b90");
#endif

    switch (ctx->pc) {
        case 0x235ba4u: goto label_235ba4;
        default: break;
    }

    ctx->pc = 0x235b90u;

    // 0x235b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x235b94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235b98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x235b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x235b9c: 0xc08d62e  jal         func_2358B8
    ctx->pc = 0x235B9Cu;
    SET_GPR_U32(ctx, 31, 0x235BA4u);
    ctx->pc = 0x235BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B9Cu;
    // 0x235ba0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2358B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2358B8u, 0x235B9Cu, 0x235BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BA4u;
label_235ba4:
    // 0x235ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235ba8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x235ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235bac: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x235bacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x235bb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x235BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BB4u;
        // 0x235bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235BBCu;
}
