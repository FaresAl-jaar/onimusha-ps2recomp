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

// Function: sub_002BD6A0
// Address: 0x2bd6a0 - 0x2bd6bc
void sub_002BD6A0_0x2bd6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD6A0_0x2bd6a0");
#endif

    ctx->pc = 0x2bd6a0u;

    // 0x2bd6a0: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2bd6a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bd6a4: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2bd6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2bd6a8: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x2bd6a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bd6ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2bd6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2bd6b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6B4u;
        // 0x2bd6b8: 0xa465003e  sh          $a1, 0x3E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 62), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD6BCu;
}
