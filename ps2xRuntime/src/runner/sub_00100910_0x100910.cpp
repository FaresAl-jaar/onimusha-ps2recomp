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

// Function: sub_00100910
// Address: 0x100910 - 0x100934
void sub_00100910_0x100910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100910_0x100910");
#endif

    ctx->pc = 0x100910u;

    // 0x100910: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x100910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x100914: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x100914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100918: 0x8c23c248  lw          $v1, -0x3DB8($at)
    ctx->pc = 0x100918u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x68C248u));
    // 0x10091c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x10091cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x100920: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x100920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x100924: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x100924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x100928: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x100928u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x10092c: 0x3e00008  jr          $ra
    ctx->pc = 0x10092Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10092Cu;
        // 0x100930: 0xac26c248  sw          $a2, -0x3DB8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294951496), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10092Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100934u;
}
