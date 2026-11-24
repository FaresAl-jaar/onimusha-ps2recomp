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

// Function: sub_002CB7F0
// Address: 0x2cb7f0 - 0x2cb808
void sub_002CB7F0_0x2cb7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB7F0_0x2cb7f0");
#endif

    ctx->pc = 0x2cb7f0u;

    // 0x2cb7f0: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2cb7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2cb7f4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2cb7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2cb7f8: 0x24426ad0  addiu       $v0, $v0, 0x6AD0
    ctx->pc = 0x2cb7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27344));
    // 0x2cb7fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cb7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb800: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB800u;
        // 0x2cb804: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB808u;
}
