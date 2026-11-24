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

// Function: sub_0020B838
// Address: 0x20b838 - 0x20b858
void sub_0020B838_0x20b838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B838_0x20b838");
#endif

    switch (ctx->pc) {
        case 0x20b848u: goto label_20b848;
        default: break;
    }

    ctx->pc = 0x20b838u;

    // 0x20b838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b83c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b840: 0xc094bba  jal         func_252EE8
    ctx->pc = 0x20B840u;
    SET_GPR_U32(ctx, 31, 0x20B848u);
    ctx->pc = 0x252EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EE8u, 0x20B840u, 0x20B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B848u;
label_20b848:
    // 0x20b848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b850: 0x3e00008  jr          $ra
    ctx->pc = 0x20B850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B850u;
        // 0x20b854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B858u;
}
