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

// Function: sub_00246910
// Address: 0x246910 - 0x246930
void sub_00246910_0x246910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246910_0x246910");
#endif

    ctx->pc = 0x246910u;

    // 0x246910: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x246910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x246914: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x246914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x246918: 0x2463e9ec  addiu       $v1, $v1, -0x1614
    ctx->pc = 0x246918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961644));
    // 0x24691c: 0x2442e9e8  addiu       $v0, $v0, -0x1618
    ctx->pc = 0x24691cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961640));
    // 0x246920: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x246920u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4CE9ECu));
    // 0x246924: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x246924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4CE9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CE9E8u, _value); } while (0);
    // 0x246928: 0x3e00008  jr          $ra
    ctx->pc = 0x246928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246928u;
        // 0x24692c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246930u;
}
