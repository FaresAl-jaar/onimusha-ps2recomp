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

// Function: sub_00326960
// Address: 0x326960 - 0x326984
void sub_00326960_0x326960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326960_0x326960");
#endif

    ctx->pc = 0x326960u;

    // 0x326960: 0x3c030091  lui         $v1, 0x91
    ctx->pc = 0x326960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)145 << 16));
    // 0x326964: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x326964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x326968: 0x24630d30  addiu       $v1, $v1, 0xD30
    ctx->pc = 0x326968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x32696c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32696cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326970: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x326970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x326974: 0x8f838b60  lw          $v1, -0x74A0($gp)
    ctx->pc = 0x326974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937440)));
    // 0x326978: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x326978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32697c: 0x3e00008  jr          $ra
    ctx->pc = 0x32697Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32697Cu;
        // 0x326980: 0xaf838b60  sw          $v1, -0x74A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32697Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326984u;
}
