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

// Function: sub_0023A410
// Address: 0x23a410 - 0x23a448
void sub_0023A410_0x23a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A410_0x23a410");
#endif

    switch (ctx->pc) {
        case 0x23a424u: goto label_23a424;
        case 0x23a42cu: goto label_23a42c;
        case 0x23a434u: goto label_23a434;
        default: break;
    }

    ctx->pc = 0x23a410u;

    // 0x23a410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23a418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23a41c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23A41Cu;
    SET_GPR_U32(ctx, 31, 0x23A424u);
    ctx->pc = 0x23A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A41Cu;
    // 0x23a420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23A41Cu, 0x23A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A424u;
label_23a424:
    // 0x23a424: 0xc08e912  jal         func_23A448
    ctx->pc = 0x23A424u;
    SET_GPR_U32(ctx, 31, 0x23A42Cu);
    ctx->pc = 0x23A428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A424u;
    // 0x23a428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A448u, 0x23A424u, 0x23A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A42Cu;
label_23a42c:
    // 0x23a42c: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23A42Cu;
    SET_GPR_U32(ctx, 31, 0x23A434u);
    ctx->pc = 0x23A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A42Cu;
    // 0x23a430: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23A42Cu, 0x23A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A434u;
label_23a434:
    // 0x23a434: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23a434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a438: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23a438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a43c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a440: 0x3e00008  jr          $ra
    ctx->pc = 0x23A440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A440u;
        // 0x23a444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A448u;
}
