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

// Function: sub_003F3C60
// Address: 0x3f3c60 - 0x3f3cac
void sub_003F3C60_0x3f3c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3C60_0x3f3c60");
#endif

    switch (ctx->pc) {
        case 0x3f3c90u: goto label_3f3c90;
        case 0x3f3ca0u: goto label_3f3ca0;
        default: break;
    }

    ctx->pc = 0x3f3c60u;

    // 0x3f3c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f3c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f3c64: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x3f3c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3f3c68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f3c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f3c6c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3F3C6Cu;
    {
        const bool branch_taken_0x3f3c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3C6Cu;
        // 0x3f3c70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3c6c) {
            ctx->pc = 0x3F3C98u;
            goto label_3f3c98;
        }
    }
    ctx->pc = 0x3F3C74u;
    // 0x3f3c74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f3c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f3c78: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F3C78u;
    {
        const bool branch_taken_0x3f3c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f3c78) {
            ctx->pc = 0x3F3C88u;
            goto label_3f3c88;
        }
    }
    ctx->pc = 0x3F3C80u;
    // 0x3f3c80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F3C80u;
    {
        const bool branch_taken_0x3f3c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3c80) {
            ctx->pc = 0x3F3CA0u;
            goto label_3f3ca0;
        }
    }
    ctx->pc = 0x3F3C88u;
label_3f3c88:
    // 0x3f3c88: 0xc0fce40  jal         func_3F3900
    ctx->pc = 0x3F3C88u;
    SET_GPR_U32(ctx, 31, 0x3F3C90u);
    ctx->pc = 0x3F3900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F3900u, 0x3F3C88u, 0x3F3C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3C90u;
label_3f3c90:
    // 0x3f3c90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F3C90u;
    {
        const bool branch_taken_0x3f3c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3c90) {
            ctx->pc = 0x3F3CA0u;
            goto label_3f3ca0;
        }
    }
    ctx->pc = 0x3F3C98u;
label_3f3c98:
    // 0x3f3c98: 0xc0fce94  jal         func_3F3A50
    ctx->pc = 0x3F3C98u;
    SET_GPR_U32(ctx, 31, 0x3F3CA0u);
    ctx->pc = 0x3F3A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F3A50u, 0x3F3C98u, 0x3F3CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3CA0u;
label_3f3ca0:
    // 0x3f3ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f3ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f3ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3CA4u;
        // 0x3f3ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F3CACu;
}
