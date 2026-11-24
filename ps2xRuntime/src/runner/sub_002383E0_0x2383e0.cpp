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

// Function: sub_002383E0
// Address: 0x2383e0 - 0x238418
void sub_002383E0_0x2383e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002383E0_0x2383e0");
#endif

    switch (ctx->pc) {
        case 0x2383f4u: goto label_2383f4;
        case 0x2383fcu: goto label_2383fc;
        case 0x238404u: goto label_238404;
        default: break;
    }

    ctx->pc = 0x2383e0u;

    // 0x2383e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2383e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2383e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2383e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2383e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2383e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2383ec: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x2383ECu;
    SET_GPR_U32(ctx, 31, 0x2383F4u);
    ctx->pc = 0x2383F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383ECu;
    // 0x2383f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x2383ECu, 0x2383F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383F4u;
label_2383f4:
    // 0x2383f4: 0xc08e106  jal         func_238418
    ctx->pc = 0x2383F4u;
    SET_GPR_U32(ctx, 31, 0x2383FCu);
    ctx->pc = 0x2383F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383F4u;
    // 0x2383f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238418u, 0x2383F4u, 0x2383FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383FCu;
label_2383fc:
    // 0x2383fc: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x2383FCu;
    SET_GPR_U32(ctx, 31, 0x238404u);
    ctx->pc = 0x238400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383FCu;
    // 0x238400: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x2383FCu, 0x238404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238404u;
label_238404:
    // 0x238404: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x238404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x238408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23840c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23840cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238410: 0x3e00008  jr          $ra
    ctx->pc = 0x238410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238410u;
        // 0x238414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238418u;
}
