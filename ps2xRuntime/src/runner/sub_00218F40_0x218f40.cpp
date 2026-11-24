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

// Function: sub_00218F40
// Address: 0x218f40 - 0x218f60
void sub_00218F40_0x218f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218F40_0x218f40");
#endif

    switch (ctx->pc) {
        case 0x218f54u: goto label_218f54;
        default: break;
    }

    ctx->pc = 0x218f40u;

    // 0x218f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218f44: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x218f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218f4c: 0xc083d78  jal         func_20F5E0
    ctx->pc = 0x218F4Cu;
    SET_GPR_U32(ctx, 31, 0x218F54u);
    ctx->pc = 0x218F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F4Cu;
    // 0x218f50: 0x8c851fc8  lw          $a1, 0x1FC8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F5E0u, 0x218F4Cu, 0x218F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F54u;
label_218f54:
    // 0x218f54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218f58: 0x3e00008  jr          $ra
    ctx->pc = 0x218F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F58u;
        // 0x218f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218F60u;
}
