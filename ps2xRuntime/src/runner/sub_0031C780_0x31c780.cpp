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

// Function: sub_0031C780
// Address: 0x31c780 - 0x31c7a4
void sub_0031C780_0x31c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C780_0x31c780");
#endif

    ctx->pc = 0x31c780u;

    // 0x31c780: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x31c780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x31c784: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x31c784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x31c788: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x31c788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x31c78c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x31c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31c790: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x31c790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x31c794: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x31c794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x31c798: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31c798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31c79c: 0x3e00008  jr          $ra
    ctx->pc = 0x31C79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C79Cu;
        // 0x31c7a0: 0xac640010  sw          $a0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C7A4u;
}
