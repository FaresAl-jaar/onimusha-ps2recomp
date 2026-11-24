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

// Function: sub_00210478
// Address: 0x210478 - 0x2104ac
void sub_00210478_0x210478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210478_0x210478");
#endif

    ctx->pc = 0x210478u;

    // 0x210478: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x210478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21047c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21047cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x210480: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x210480u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x210484: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x210484u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x210488: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x210488u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x21048c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x21048cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x210490: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x210490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x210494: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x210494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x210498: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x210498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21049c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x21049cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2104a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2104a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2104a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2104A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2104A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104A4u;
        // 0x2104a8: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2104A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2104ACu;
}
