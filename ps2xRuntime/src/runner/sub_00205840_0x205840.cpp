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

// Function: sub_00205840
// Address: 0x205840 - 0x205868
void sub_00205840_0x205840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205840_0x205840");
#endif

    switch (ctx->pc) {
        case 0x205854u: goto label_205854;
        default: break;
    }

    ctx->pc = 0x205840u;

    // 0x205840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205848: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20584c: 0xc081544  jal         func_205510
    ctx->pc = 0x20584Cu;
    SET_GPR_U32(ctx, 31, 0x205854u);
    ctx->pc = 0x205850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20584Cu;
    // 0x205850: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x20584Cu, 0x205854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205854u;
label_205854:
    // 0x205854: 0xac50003c  sw          $s0, 0x3C($v0)
    ctx->pc = 0x205854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 16));
    // 0x205858: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x205858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20585c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20585cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205860: 0x3e00008  jr          $ra
    ctx->pc = 0x205860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205860u;
        // 0x205864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205868u;
}
