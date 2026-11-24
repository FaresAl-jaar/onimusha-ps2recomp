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

// Function: sub_00342870
// Address: 0x342870 - 0x3428b8
void sub_00342870_0x342870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342870_0x342870");
#endif

    switch (ctx->pc) {
        case 0x342888u: goto label_342888;
        case 0x342890u: goto label_342890;
        default: break;
    }

    ctx->pc = 0x342870u;

    // 0x342870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x342870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x342874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x342874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x342878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x342878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34287c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34287cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x342880: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x342880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342884: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x342884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342888:
    // 0x342888: 0xc0d06dc  jal         func_341B70
    ctx->pc = 0x342888u;
    SET_GPR_U32(ctx, 31, 0x342890u);
    ctx->pc = 0x34288Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342888u;
    // 0x34288c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341B70u, 0x342888u, 0x342890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342890u;
label_342890:
    // 0x342890: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x342890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x342894: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x342894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x342898: 0x2a230018  slti        $v1, $s1, 0x18
    ctx->pc = 0x342898u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x34289c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34289Cu;
    {
        const bool branch_taken_0x34289c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34289c) {
            ctx->pc = 0x342888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342888;
        }
    }
    ctx->pc = 0x3428A4u;
    // 0x3428a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3428a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3428a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3428a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3428ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3428acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3428b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3428B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3428B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428B0u;
        // 0x3428b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3428B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3428B8u;
}
