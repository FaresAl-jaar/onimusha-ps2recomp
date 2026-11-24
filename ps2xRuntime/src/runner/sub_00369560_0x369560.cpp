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

// Function: sub_00369560
// Address: 0x369560 - 0x3695a0
void sub_00369560_0x369560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369560_0x369560");
#endif

    switch (ctx->pc) {
        case 0x369578u: goto label_369578;
        case 0x369584u: goto label_369584;
        case 0x369590u: goto label_369590;
        default: break;
    }

    ctx->pc = 0x369560u;

    // 0x369560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x369560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x369564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x369564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x369568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36956c: 0x8c850550  lw          $a1, 0x550($a0)
    ctx->pc = 0x36956cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x369570: 0xc0c0844  jal         func_302110
    ctx->pc = 0x369570u;
    SET_GPR_U32(ctx, 31, 0x369578u);
    ctx->pc = 0x369574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369570u;
    // 0x369574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x369570u, 0x369578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369578u;
label_369578:
    // 0x369578: 0x8e050554  lw          $a1, 0x554($s0)
    ctx->pc = 0x369578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x36957c: 0xc0c0844  jal         func_302110
    ctx->pc = 0x36957Cu;
    SET_GPR_U32(ctx, 31, 0x369584u);
    ctx->pc = 0x369580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36957Cu;
    // 0x369580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x36957Cu, 0x369584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369584u;
label_369584:
    // 0x369584: 0x8e050558  lw          $a1, 0x558($s0)
    ctx->pc = 0x369584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x369588: 0xc0c0844  jal         func_302110
    ctx->pc = 0x369588u;
    SET_GPR_U32(ctx, 31, 0x369590u);
    ctx->pc = 0x36958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369588u;
    // 0x36958c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x369588u, 0x369590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369590u;
label_369590:
    // 0x369590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x369590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x369594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369598: 0x3e00008  jr          $ra
    ctx->pc = 0x369598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369598u;
        // 0x36959c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3695A0u;
}
