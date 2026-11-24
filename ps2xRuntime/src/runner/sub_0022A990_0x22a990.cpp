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

// Function: sub_0022A990
// Address: 0x22a990 - 0x22a9e8
void sub_0022A990_0x22a990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A990_0x22a990");
#endif

    switch (ctx->pc) {
        case 0x22a9b0u: goto label_22a9b0;
        case 0x22a9ccu: goto label_22a9cc;
        default: break;
    }

    ctx->pc = 0x22a990u;

    // 0x22a990: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22a990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x22a994: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a998: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22a998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22a99c: 0x24a59978  addiu       $a1, $a1, -0x6688
    ctx->pc = 0x22a99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941048));
    // 0x22a9a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a9a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22a9a8: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x22A9A8u;
    SET_GPR_U32(ctx, 31, 0x22A9B0u);
    ctx->pc = 0x22A9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A9A8u;
    // 0x22a9ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x22A9A8u, 0x22A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9B0u;
label_22a9b0:
    // 0x22a9b0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22a9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x22a9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9b8: 0x24a59980  addiu       $a1, $a1, -0x6680
    ctx->pc = 0x22a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941056));
    // 0x22a9bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A9BCu;
    {
        const bool branch_taken_0x22a9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A9BCu;
        // 0x22a9c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a9bc) {
            ctx->pc = 0x22A9D4u;
            goto label_22a9d4;
        }
    }
    ctx->pc = 0x22A9C4u;
    // 0x22a9c4: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x22A9C4u;
    SET_GPR_U32(ctx, 31, 0x22A9CCu);
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x22A9C4u, 0x22A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9CCu;
label_22a9cc:
    // 0x22a9cc: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x22A9CCu;
    {
        const bool branch_taken_0x22a9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a9cc) {
            ctx->pc = 0x22A9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A9CCu;
            // 0x22a9d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A9D8u;
            goto label_22a9d8;
        }
    }
    ctx->pc = 0x22A9D4u;
label_22a9d4:
    // 0x22a9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a9d8:
    // 0x22a9d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a9dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22a9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22a9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x22A9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A9E0u;
        // 0x22a9e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A9E8u;
}
