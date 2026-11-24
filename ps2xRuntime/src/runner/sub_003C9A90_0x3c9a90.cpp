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

// Function: sub_003C9A90
// Address: 0x3c9a90 - 0x3c9af4
void sub_003C9A90_0x3c9a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9A90_0x3c9a90");
#endif

    switch (ctx->pc) {
        case 0x3c9ab0u: goto label_3c9ab0;
        case 0x3c9ad8u: goto label_3c9ad8;
        case 0x3c9ae8u: goto label_3c9ae8;
        default: break;
    }

    ctx->pc = 0x3c9a90u;

    // 0x3c9a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c9a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c9a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c9a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c9a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c9a9c: 0x90832b25  lbu         $v1, 0x2B25($a0)
    ctx->pc = 0x3c9a9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11045)));
    // 0x3c9aa0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9AA0u;
    {
        const bool branch_taken_0x3c9aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c9aa0) {
            ctx->pc = 0x3C9AB8u;
            goto label_3c9ab8;
        }
    }
    ctx->pc = 0x3C9AA8u;
    // 0x3c9aa8: 0xc0f2654  jal         func_3C9950
    ctx->pc = 0x3C9AA8u;
    SET_GPR_U32(ctx, 31, 0x3C9AB0u);
    ctx->pc = 0x3C9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9950u, 0x3C9AA8u, 0x3C9AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9AB0u;
label_3c9ab0:
    // 0x3c9ab0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3C9AB0u;
    {
        const bool branch_taken_0x3c9ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9ab0) {
            ctx->pc = 0x3C9AE8u;
            goto label_3c9ae8;
        }
    }
    ctx->pc = 0x3C9AB8u;
label_3c9ab8:
    // 0x3c9ab8: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x3c9ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3c9abc: 0x240200a9  addiu       $v0, $zero, 0xA9
    ctx->pc = 0x3c9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x3c9ac0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9AC0u;
    {
        const bool branch_taken_0x3c9ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c9ac0) {
            ctx->pc = 0x3C9AD0u;
            goto label_3c9ad0;
        }
    }
    ctx->pc = 0x3C9AC8u;
    // 0x3c9ac8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9AC8u;
    {
        const bool branch_taken_0x3c9ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9ac8) {
            ctx->pc = 0x3C9AE0u;
            goto label_3c9ae0;
        }
    }
    ctx->pc = 0x3C9AD0u;
label_3c9ad0:
    // 0x3c9ad0: 0xc0f25d4  jal         func_3C9750
    ctx->pc = 0x3C9AD0u;
    SET_GPR_U32(ctx, 31, 0x3C9AD8u);
    ctx->pc = 0x3C9750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9750u, 0x3C9AD0u, 0x3C9AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9AD8u;
label_3c9ad8:
    // 0x3c9ad8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9AD8u;
    {
        const bool branch_taken_0x3c9ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9ad8) {
            ctx->pc = 0x3C9AE8u;
            goto label_3c9ae8;
        }
    }
    ctx->pc = 0x3C9AE0u;
label_3c9ae0:
    // 0x3c9ae0: 0xc0a5fb0  jal         func_297EC0
    ctx->pc = 0x3C9AE0u;
    SET_GPR_U32(ctx, 31, 0x3C9AE8u);
    ctx->pc = 0x297EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297EC0u, 0x3C9AE0u, 0x3C9AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9AE8u;
label_3c9ae8:
    // 0x3c9ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c9ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c9aec: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9AECu;
        // 0x3c9af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9AF4u;
}
