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

// Function: sub_0020B8A8
// Address: 0x20b8a8 - 0x20b8c8
void sub_0020B8A8_0x20b8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B8A8_0x20b8a8");
#endif

    switch (ctx->pc) {
        case 0x20b8b8u: goto label_20b8b8;
        default: break;
    }

    ctx->pc = 0x20b8a8u;

    // 0x20b8a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b8ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b8b0: 0xc094bc6  jal         func_252F18
    ctx->pc = 0x20B8B0u;
    SET_GPR_U32(ctx, 31, 0x20B8B8u);
    ctx->pc = 0x252F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252F18u, 0x20B8B0u, 0x20B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B8B8u;
label_20b8b8:
    // 0x20b8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b8bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x20B8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8C0u;
        // 0x20b8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B8C8u;
}
