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

// Function: sub_00381270
// Address: 0x381270 - 0x381280
void sub_00381270_0x381270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381270_0x381270");
#endif

    ctx->pc = 0x381270u;

    // 0x381270: 0x90832b40  lbu         $v1, 0x2B40($a0)
    ctx->pc = 0x381270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11072)));
    // 0x381274: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x381274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x381278: 0x3e00008  jr          $ra
    ctx->pc = 0x381278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381278u;
        // 0x38127c: 0xa0832b40  sb          $v1, 0x2B40($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11072), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381280u;
}
