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

// Function: sub_0029A6A0
// Address: 0x29a6a0 - 0x29a6d4
void sub_0029A6A0_0x29a6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A6A0_0x29a6a0");
#endif

    switch (ctx->pc) {
        case 0x29a6c8u: goto label_29a6c8;
        default: break;
    }

    ctx->pc = 0x29a6a0u;

    // 0x29a6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a6a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29a6a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a6ac: 0x908329d0  lbu         $v1, 0x29D0($a0)
    ctx->pc = 0x29a6acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10704)));
    // 0x29a6b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A6B0u;
    {
        const bool branch_taken_0x29a6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6B0u;
        // 0x29a6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a6b0) {
            ctx->pc = 0x29A6C0u;
            goto label_29a6c0;
        }
    }
    ctx->pc = 0x29A6B8u;
    // 0x29a6b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29A6B8u;
    {
        const bool branch_taken_0x29a6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6B8u;
        // 0x29a6bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a6b8) {
            ctx->pc = 0x29A6CCu;
            goto label_29a6cc;
        }
    }
    ctx->pc = 0x29A6C0u;
label_29a6c0:
    // 0x29a6c0: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x29A6C0u;
    SET_GPR_U32(ctx, 31, 0x29A6C8u);
    ctx->pc = 0x29A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A6C0u;
    // 0x29a6c4: 0x8c8429c0  lw          $a0, 0x29C0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x29A6C0u, 0x29A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A6C8u;
label_29a6c8:
    // 0x29a6c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a6cc:
    // 0x29a6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x29A6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6CCu;
        // 0x29a6d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A6D4u;
}
