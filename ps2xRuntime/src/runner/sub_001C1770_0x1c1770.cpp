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

// Function: sub_001C1770
// Address: 0x1c1770 - 0x1c1798
void sub_001C1770_0x1c1770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1770_0x1c1770");
#endif

    switch (ctx->pc) {
        case 0x1c1780u: goto label_1c1780;
        default: break;
    }

    ctx->pc = 0x1c1770u;

    // 0x1c1770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1778: 0xc0705d8  jal         func_1C1760
    ctx->pc = 0x1C1778u;
    SET_GPR_U32(ctx, 31, 0x1C1780u);
    ctx->pc = 0x1C1760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1760u, 0x1C1778u, 0x1C1780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1780u;
label_1c1780:
    // 0x1c1780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1784: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1c1784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c1788: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1c1788u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1c178c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c178cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1790: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1790u;
        // 0x1c1794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1798u;
}
