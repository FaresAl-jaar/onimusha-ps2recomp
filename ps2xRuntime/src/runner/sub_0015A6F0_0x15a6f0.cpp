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

// Function: sub_0015A6F0
// Address: 0x15a6f0 - 0x15a730
void sub_0015A6F0_0x15a6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A6F0_0x15a6f0");
#endif

    switch (ctx->pc) {
        case 0x15a6f8u: goto label_15a6f8;
        default: break;
    }

    ctx->pc = 0x15a6f0u;

    // 0x15a6f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a6f4: 0x0  nop
    ctx->pc = 0x15a6f4u;
    // NOP
label_15a6f8:
    // 0x15a6f8: 0xac800420  sw          $zero, 0x420($a0)
    ctx->pc = 0x15a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1056), GPR_U32(ctx, 0));
    // 0x15a6fc: 0xac800424  sw          $zero, 0x424($a0)
    ctx->pc = 0x15a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1060), GPR_U32(ctx, 0));
    // 0x15a700: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x15a700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x15a704: 0xac800428  sw          $zero, 0x428($a0)
    ctx->pc = 0x15a704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1064), GPR_U32(ctx, 0));
    // 0x15a708: 0x28a30080  slti        $v1, $a1, 0x80
    ctx->pc = 0x15a708u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x15a70c: 0xac80042c  sw          $zero, 0x42C($a0)
    ctx->pc = 0x15a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1068), GPR_U32(ctx, 0));
    // 0x15a710: 0xac800430  sw          $zero, 0x430($a0)
    ctx->pc = 0x15a710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1072), GPR_U32(ctx, 0));
    // 0x15a714: 0xac800434  sw          $zero, 0x434($a0)
    ctx->pc = 0x15a714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1076), GPR_U32(ctx, 0));
    // 0x15a718: 0xac800438  sw          $zero, 0x438($a0)
    ctx->pc = 0x15a718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1080), GPR_U32(ctx, 0));
    // 0x15a71c: 0xac80043c  sw          $zero, 0x43C($a0)
    ctx->pc = 0x15a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1084), GPR_U32(ctx, 0));
    // 0x15a720: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15A720u;
    {
        const bool branch_taken_0x15a720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A720u;
        // 0x15a724: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a720) {
            ctx->pc = 0x15A6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a6f8;
        }
    }
    ctx->pc = 0x15A728u;
    // 0x15a728: 0x3e00008  jr          $ra
    ctx->pc = 0x15A728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A730u;
}
