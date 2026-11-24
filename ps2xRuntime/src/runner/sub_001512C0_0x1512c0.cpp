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

// Function: sub_001512C0
// Address: 0x1512c0 - 0x1512fc
void sub_001512C0_0x1512c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001512C0_0x1512c0");
#endif

    switch (ctx->pc) {
        case 0x1512d4u: goto label_1512d4;
        case 0x1512e4u: goto label_1512e4;
        case 0x1512f0u: goto label_1512f0;
        default: break;
    }

    ctx->pc = 0x1512c0u;

    // 0x1512c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1512c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1512c4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1512c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1512c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1512c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1512cc: 0xc051d90  jal         func_147640
    ctx->pc = 0x1512CCu;
    SET_GPR_U32(ctx, 31, 0x1512D4u);
    ctx->pc = 0x1512D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1512CCu;
    // 0x1512d0: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147640u, 0x1512CCu, 0x1512D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512D4u;
label_1512d4:
    // 0x1512d4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1512d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1512d8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1512d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1512dc: 0xc052148  jal         func_148520
    ctx->pc = 0x1512DCu;
    SET_GPR_U32(ctx, 31, 0x1512E4u);
    ctx->pc = 0x1512E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1512DCu;
    // 0x1512e0: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148520u, 0x1512DCu, 0x1512E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512E4u;
label_1512e4:
    // 0x1512e4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1512e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1512e8: 0xc052260  jal         func_148980
    ctx->pc = 0x1512E8u;
    SET_GPR_U32(ctx, 31, 0x1512F0u);
    ctx->pc = 0x1512ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1512E8u;
    // 0x1512ec: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148980u, 0x1512E8u, 0x1512F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512F0u;
label_1512f0:
    // 0x1512f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1512f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1512f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1512F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1512F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512F4u;
        // 0x1512f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1512F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1512FCu;
}
