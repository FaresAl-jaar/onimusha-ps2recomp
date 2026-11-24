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

// Function: sub_00349590
// Address: 0x349590 - 0x3495d8
void sub_00349590_0x349590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349590_0x349590");
#endif

    switch (ctx->pc) {
        case 0x3495a8u: goto label_3495a8;
        case 0x3495b4u: goto label_3495b4;
        default: break;
    }

    ctx->pc = 0x349590u;

    // 0x349590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x349594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x349594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x349598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34959c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3495a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3495a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3495a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3495a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3495a8:
    // 0x3495a8: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x3495a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3495ac: 0xc0d2540  jal         func_349500
    ctx->pc = 0x3495ACu;
    SET_GPR_U32(ctx, 31, 0x3495B4u);
    ctx->pc = 0x3495B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3495ACu;
    // 0x3495b0: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349500u, 0x3495ACu, 0x3495B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3495B4u;
label_3495b4:
    // 0x3495b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3495b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3495b8: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x3495b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3495bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3495BCu;
    {
        const bool branch_taken_0x3495bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3495C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495BCu;
        // 0x3495c0: 0x26100064  addiu       $s0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3495bc) {
            ctx->pc = 0x3495A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3495a8;
        }
    }
    ctx->pc = 0x3495C4u;
    // 0x3495c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3495c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3495c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3495c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3495cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3495ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3495d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3495D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3495D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495D0u;
        // 0x3495d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3495D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3495D8u;
}
