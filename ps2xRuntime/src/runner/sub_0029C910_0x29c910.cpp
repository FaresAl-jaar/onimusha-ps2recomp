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

// Function: sub_0029C910
// Address: 0x29c910 - 0x29c94c
void sub_0029C910_0x29c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C910_0x29c910");
#endif

    switch (ctx->pc) {
        case 0x29c93cu: goto label_29c93c;
        default: break;
    }

    ctx->pc = 0x29c910u;

    // 0x29c910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c914: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x29C914u;
    {
        const bool branch_taken_0x29c914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C914u;
        // 0x29c918: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c914) {
            ctx->pc = 0x29C940u;
            goto label_29c940;
        }
    }
    ctx->pc = 0x29C91Cu;
    // 0x29c91c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x29c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x29c920: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x29c920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x29c924: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x29c924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x29c928: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x29c928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x29c92c: 0xac8304d4  sw          $v1, 0x4D4($a0)
    ctx->pc = 0x29c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1236), GPR_U32(ctx, 3));
    // 0x29c930: 0xac8204d4  sw          $v0, 0x4D4($a0)
    ctx->pc = 0x29c930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1236), GPR_U32(ctx, 2));
    // 0x29c934: 0xc09d694  jal         func_275A50
    ctx->pc = 0x29C934u;
    SET_GPR_U32(ctx, 31, 0x29C93Cu);
    ctx->pc = 0x29C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C934u;
    // 0x29c938: 0x248404e0  addiu       $a0, $a0, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x29C934u, 0x29C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C93Cu;
label_29c93c:
    // 0x29c93c: 0x0  nop
    ctx->pc = 0x29c93cu;
    // NOP
label_29c940:
    // 0x29c940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c944: 0x3e00008  jr          $ra
    ctx->pc = 0x29C944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C944u;
        // 0x29c948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C94Cu;
}
