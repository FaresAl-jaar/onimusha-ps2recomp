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

// Function: sub_002D97D0
// Address: 0x2d97d0 - 0x2d97fc
void sub_002D97D0_0x2d97d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D97D0_0x2d97d0");
#endif

    switch (ctx->pc) {
        case 0x2d97e4u: goto label_2d97e4;
        case 0x2d97ecu: goto label_2d97ec;
        default: break;
    }

    ctx->pc = 0x2d97d0u;

    // 0x2d97d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d97d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d97d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d97d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d97d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d97d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d97dc: 0xc0b6600  jal         func_2D9800
    ctx->pc = 0x2D97DCu;
    SET_GPR_U32(ctx, 31, 0x2D97E4u);
    ctx->pc = 0x2D97E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D97DCu;
    // 0x2d97e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9800u, 0x2D97DCu, 0x2D97E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D97E4u;
label_2d97e4:
    // 0x2d97e4: 0xc0b67ec  jal         func_2D9FB0
    ctx->pc = 0x2D97E4u;
    SET_GPR_U32(ctx, 31, 0x2D97ECu);
    ctx->pc = 0x2D97E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D97E4u;
    // 0x2d97e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9FB0u, 0x2D97E4u, 0x2D97ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D97ECu;
label_2d97ec:
    // 0x2d97ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d97ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d97f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d97f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d97f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D97F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97F4u;
        // 0x2d97f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D97F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D97FCu;
}
