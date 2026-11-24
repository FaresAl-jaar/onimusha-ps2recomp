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

// Function: sub_001D1920
// Address: 0x1d1920 - 0x1d194c
void sub_001D1920_0x1d1920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1920_0x1d1920");
#endif

    ctx->pc = 0x1d1920u;

    // 0x1d1920: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d1920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d1924: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d1924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d192c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d192cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d1930: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1d1930u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1d1934: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1d1934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d1938: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1d1938u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1d193c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1940: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1d1940u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1d1944: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1944u;
        // 0x1d1948: 0xfc850018  sd          $a1, 0x18($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D194Cu;
}
