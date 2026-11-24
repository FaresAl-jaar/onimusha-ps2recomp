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

// Function: sub_002F38C0
// Address: 0x2f38c0 - 0x2f38f0
void sub_002F38C0_0x2f38c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F38C0_0x2f38c0");
#endif

    switch (ctx->pc) {
        case 0x2f38d4u: goto label_2f38d4;
        case 0x2f38e0u: goto label_2f38e0;
        default: break;
    }

    ctx->pc = 0x2f38c0u;

    // 0x2f38c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f38c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f38c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f38c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f38c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f38c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f38cc: 0xc0bce00  jal         func_2F3800
    ctx->pc = 0x2F38CCu;
    SET_GPR_U32(ctx, 31, 0x2F38D4u);
    ctx->pc = 0x2F38D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F38CCu;
    // 0x2f38d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3800u, 0x2F38CCu, 0x2F38D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F38D4u;
label_2f38d4:
    // 0x2f38d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f38d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f38d8: 0xc0bce48  jal         func_2F3920
    ctx->pc = 0x2F38D8u;
    SET_GPR_U32(ctx, 31, 0x2F38E0u);
    ctx->pc = 0x2F38DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F38D8u;
    // 0x2f38dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3920u, 0x2F38D8u, 0x2F38E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F38E0u;
label_2f38e0:
    // 0x2f38e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f38e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f38e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f38e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f38e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F38E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38E8u;
        // 0x2f38ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F38E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F38F0u;
}
