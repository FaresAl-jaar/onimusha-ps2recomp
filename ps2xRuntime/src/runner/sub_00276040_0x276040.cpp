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

// Function: sub_00276040
// Address: 0x276040 - 0x276060
void sub_00276040_0x276040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276040_0x276040");
#endif

    switch (ctx->pc) {
        case 0x276050u: goto label_276050;
        default: break;
    }

    ctx->pc = 0x276040u;

    // 0x276040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276048: 0xc0a254c  jal         func_289530
    ctx->pc = 0x276048u;
    SET_GPR_U32(ctx, 31, 0x276050u);
    ctx->pc = 0x27604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276048u;
    // 0x27604c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289530u, 0x276048u, 0x276050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276050u;
label_276050:
    // 0x276050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276054: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276058: 0x3e00008  jr          $ra
    ctx->pc = 0x276058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276058u;
        // 0x27605c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276060u;
}
