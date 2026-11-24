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

// Function: sub_0020E8E0
// Address: 0x20e8e0 - 0x20e920
void sub_0020E8E0_0x20e8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E8E0_0x20e8e0");
#endif

    switch (ctx->pc) {
        case 0x20e8f8u: goto label_20e8f8;
        default: break;
    }

    ctx->pc = 0x20e8e0u;

    // 0x20e8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20e8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20e8e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20e8e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20e8ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20e8f0: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20E8F0u;
    SET_GPR_U32(ctx, 31, 0x20E8F8u);
    ctx->pc = 0x20E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E8F0u;
    // 0x20e8f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20E8F0u, 0x20E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E8F8u;
label_20e8f8:
    // 0x20e8f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E8F8u;
    {
        const bool branch_taken_0x20e8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8F8u;
        // 0x20e8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8f8) {
            ctx->pc = 0x20E910u;
            goto label_20e910;
        }
    }
    ctx->pc = 0x20E900u;
    // 0x20e900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e904: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20e904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20e908: 0x8083a48  j           func_20E920
    ctx->pc = 0x20E908u;
    ctx->pc = 0x20E90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E908u;
    // 0x20e90c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E920u;
    sub_0020E920_0x20e920(rdram, ctx, runtime); return;
    ctx->pc = 0x20E910u;
label_20e910:
    // 0x20e910: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e914: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20e914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20e918: 0x3e00008  jr          $ra
    ctx->pc = 0x20E918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E918u;
        // 0x20e91c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E920u;
}
