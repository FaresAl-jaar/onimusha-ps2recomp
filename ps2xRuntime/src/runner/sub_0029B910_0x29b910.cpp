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

// Function: sub_0029B910
// Address: 0x29b910 - 0x29b93c
void sub_0029B910_0x29b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B910_0x29b910");
#endif

    switch (ctx->pc) {
        case 0x29b92cu: goto label_29b92c;
        default: break;
    }

    ctx->pc = 0x29b910u;

    // 0x29b910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29b914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b918: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x29b918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x29b91c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B91Cu;
    {
        const bool branch_taken_0x29b91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b91c) {
            ctx->pc = 0x29B930u;
            goto label_29b930;
        }
    }
    ctx->pc = 0x29B924u;
    // 0x29b924: 0xc041494  jal         func_105250
    ctx->pc = 0x29B924u;
    SET_GPR_U32(ctx, 31, 0x29B92Cu);
    ctx->pc = 0x29B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B924u;
    // 0x29b928: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x29B924u, 0x29B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B92Cu;
label_29b92c:
    // 0x29b92c: 0x0  nop
    ctx->pc = 0x29b92cu;
    // NOP
label_29b930:
    // 0x29b930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b934: 0x3e00008  jr          $ra
    ctx->pc = 0x29B934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B934u;
        // 0x29b938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B93Cu;
}
