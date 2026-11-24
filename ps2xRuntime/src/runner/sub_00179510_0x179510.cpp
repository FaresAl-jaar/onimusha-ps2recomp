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

// Function: sub_00179510
// Address: 0x179510 - 0x179550
void sub_00179510_0x179510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179510_0x179510");
#endif

    ctx->pc = 0x179510u;

    // 0x179510: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x179510u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x179514: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x179514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x179518: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x179518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x17951c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x17951cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x179520: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x179520u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x179524: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x179524u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x179528: 0x53238  dsll        $a2, $a1, 8
    ctx->pc = 0x179528u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 8);
    // 0x17952c: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x17952cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x179530: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x179530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x179534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179538: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x179538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x17953c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17953cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x179540: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x179540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x179544: 0xfc832970  sd          $v1, 0x2970($a0)
    ctx->pc = 0x179544u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 10608), GPR_U64(ctx, 3));
    // 0x179548: 0x3e00008  jr          $ra
    ctx->pc = 0x179548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179548u;
        // 0x17954c: 0xfc832a90  sd          $v1, 0x2A90($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 10896), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179550u;
}
