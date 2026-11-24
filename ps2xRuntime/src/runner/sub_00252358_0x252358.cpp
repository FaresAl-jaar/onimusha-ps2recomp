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

// Function: sub_00252358
// Address: 0x252358 - 0x25238c
void sub_00252358_0x252358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252358_0x252358");
#endif

    switch (ctx->pc) {
        case 0x252378u: goto label_252378;
        default: break;
    }

    ctx->pc = 0x252358u;

    // 0x252358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25235c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x25235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x252360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252364: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x252364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252368: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x252368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25236c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25236cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x252370: 0xc094892  jal         func_252248
    ctx->pc = 0x252370u;
    SET_GPR_U32(ctx, 31, 0x252378u);
    ctx->pc = 0x252374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252370u;
    // 0x252374: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252248u, 0x252370u, 0x252378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252378u;
label_252378:
    // 0x252378: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x252378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x25237c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25237cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x252380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252384: 0x3e00008  jr          $ra
    ctx->pc = 0x252384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252384u;
        // 0x252388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25238Cu;
}
