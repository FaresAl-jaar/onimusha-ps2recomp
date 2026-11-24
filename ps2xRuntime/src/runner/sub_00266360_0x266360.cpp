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

// Function: sub_00266360
// Address: 0x266360 - 0x26638c
void sub_00266360_0x266360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266360_0x266360");
#endif

    ctx->pc = 0x266360u;

    // 0x266360: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x266360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x266364: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x266364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x266368: 0xa4800036  sh          $zero, 0x36($a0)
    ctx->pc = 0x266368u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x26636c: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x26636cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x266370: 0xa0830034  sb          $v1, 0x34($a0)
    ctx->pc = 0x266370u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 52), (uint8_t)GPR_U32(ctx, 3));
    // 0x266374: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x266374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x266378: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x266378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x26637c: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x26637cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x266380: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x266380u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x266384: 0x3e00008  jr          $ra
    ctx->pc = 0x266384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266384u;
        // 0x266388: 0xa4830048  sh          $v1, 0x48($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26638Cu;
}
