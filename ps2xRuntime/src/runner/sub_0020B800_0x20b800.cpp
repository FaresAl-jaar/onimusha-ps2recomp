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

// Function: sub_0020B800
// Address: 0x20b800 - 0x20b820
void sub_0020B800_0x20b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B800_0x20b800");
#endif

    switch (ctx->pc) {
        case 0x20b810u: goto label_20b810;
        default: break;
    }

    ctx->pc = 0x20b800u;

    // 0x20b800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b808: 0xc094bb4  jal         func_252ED0
    ctx->pc = 0x20B808u;
    SET_GPR_U32(ctx, 31, 0x20B810u);
    ctx->pc = 0x252ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252ED0u, 0x20B808u, 0x20B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B810u;
label_20b810:
    // 0x20b810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b818: 0x3e00008  jr          $ra
    ctx->pc = 0x20B818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B818u;
        // 0x20b81c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B820u;
}
