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

// Function: sub_00221BC8
// Address: 0x221bc8 - 0x221be4
void sub_00221BC8_0x221bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221BC8_0x221bc8");
#endif

    ctx->pc = 0x221bc8u;

    // 0x221bc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x221bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221bcc: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x221bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x221bd0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x221bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x221bd4: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x221bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x221bd8: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x221bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x221bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x221BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BDCu;
        // 0x221be0: 0xfc800010  sd          $zero, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221BE4u;
}
