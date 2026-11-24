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

// Function: sub_002ED2E0
// Address: 0x2ed2e0 - 0x2ed300
void sub_002ED2E0_0x2ed2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED2E0_0x2ed2e0");
#endif

    ctx->pc = 0x2ed2e0u;

    // 0x2ed2e0: 0x94860000  lhu         $a2, 0x0($a0)
    ctx->pc = 0x2ed2e0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed2e4: 0x90a307d4  lbu         $v1, 0x7D4($a1)
    ctx->pc = 0x2ed2e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2004)));
    // 0x2ed2e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ed2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed2ec: 0xc42004  sllv        $a0, $a0, $a2
    ctx->pc = 0x2ed2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x2ed2f0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2ed2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ed2f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ed2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ed2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2F8u;
        // 0x2ed2fc: 0xa0a307d4  sb          $v1, 0x7D4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2004), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED300u;
}
