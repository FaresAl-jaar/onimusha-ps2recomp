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

// Function: sub_003BE860
// Address: 0x3be860 - 0x3be8cc
void sub_003BE860_0x3be860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE860_0x3be860");
#endif

    switch (ctx->pc) {
        case 0x3be8a0u: goto label_3be8a0;
        case 0x3be8b0u: goto label_3be8b0;
        case 0x3be8c0u: goto label_3be8c0;
        default: break;
    }

    ctx->pc = 0x3be860u;

    // 0x3be860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3be860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3be864: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3be864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3be868: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3BE868u;
    {
        const bool branch_taken_0x3be868 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE868u;
        // 0x3be86c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be868) {
            ctx->pc = 0x3BE8B8u;
            goto label_3be8b8;
        }
    }
    ctx->pc = 0x3BE870u;
    // 0x3be870: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3be870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3be874: 0x10c3000c  beq         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3BE874u;
    {
        const bool branch_taken_0x3be874 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE874u;
        // 0x3be878: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be874) {
            ctx->pc = 0x3BE8A8u;
            goto label_3be8a8;
        }
    }
    ctx->pc = 0x3BE87Cu;
    // 0x3be87c: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BE87Cu;
    {
        const bool branch_taken_0x3be87c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3be87c) {
            ctx->pc = 0x3BE898u;
            goto label_3be898;
        }
    }
    ctx->pc = 0x3BE884u;
    // 0x3be884: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x3BE884u;
    {
        const bool branch_taken_0x3be884 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be884) {
            ctx->pc = 0x3BE8C0u;
            goto label_3be8c0;
        }
    }
    ctx->pc = 0x3BE88Cu;
    // 0x3be88c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3BE88Cu;
    {
        const bool branch_taken_0x3be88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be88c) {
            ctx->pc = 0x3BE8C0u;
            goto label_3be8c0;
        }
    }
    ctx->pc = 0x3BE894u;
    // 0x3be894: 0x0  nop
    ctx->pc = 0x3be894u;
    // NOP
label_3be898:
    // 0x3be898: 0xc0ef948  jal         func_3BE520
    ctx->pc = 0x3BE898u;
    SET_GPR_U32(ctx, 31, 0x3BE8A0u);
    ctx->pc = 0x3BE520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE520u, 0x3BE898u, 0x3BE8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE8A0u;
label_3be8a0:
    // 0x3be8a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3BE8A0u;
    {
        const bool branch_taken_0x3be8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be8a0) {
            ctx->pc = 0x3BE8C0u;
            goto label_3be8c0;
        }
    }
    ctx->pc = 0x3BE8A8u;
label_3be8a8:
    // 0x3be8a8: 0xc0ef964  jal         func_3BE590
    ctx->pc = 0x3BE8A8u;
    SET_GPR_U32(ctx, 31, 0x3BE8B0u);
    ctx->pc = 0x3BE590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE590u, 0x3BE8A8u, 0x3BE8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE8B0u;
label_3be8b0:
    // 0x3be8b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BE8B0u;
    {
        const bool branch_taken_0x3be8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be8b0) {
            ctx->pc = 0x3BE8C0u;
            goto label_3be8c0;
        }
    }
    ctx->pc = 0x3BE8B8u;
label_3be8b8:
    // 0x3be8b8: 0xc0ef92c  jal         func_3BE4B0
    ctx->pc = 0x3BE8B8u;
    SET_GPR_U32(ctx, 31, 0x3BE8C0u);
    ctx->pc = 0x3BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE4B0u, 0x3BE8B8u, 0x3BE8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE8C0u;
label_3be8c0:
    // 0x3be8c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3be8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE8C4u;
        // 0x3be8c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE8CCu;
}
