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

// Function: sub_002ED130
// Address: 0x2ed130 - 0x2ed15c
void sub_002ED130_0x2ed130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED130_0x2ed130");
#endif

    ctx->pc = 0x2ed130u;

    // 0x2ed130: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2ed130u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed134: 0x94860002  lhu         $a2, 0x2($a0)
    ctx->pc = 0x2ed134u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ed138: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ed138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ed13c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ed13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed140: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ed140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ed144: 0xc43004  sllv        $a2, $a0, $a2
    ctx->pc = 0x2ed144u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x2ed148: 0x8c640858  lw          $a0, 0x858($v1)
    ctx->pc = 0x2ed148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2136)));
    // 0x2ed14c: 0x8c8304cc  lw          $v1, 0x4CC($a0)
    ctx->pc = 0x2ed14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1228)));
    // 0x2ed150: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2ed150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2ed154: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED154u;
        // 0x2ed158: 0xac8304cc  sw          $v1, 0x4CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED15Cu;
}
