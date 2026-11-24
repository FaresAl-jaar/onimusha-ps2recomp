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

// Function: sub_003F1B10
// Address: 0x3f1b10 - 0x3f1b5c
void sub_003F1B10_0x3f1b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1B10_0x3f1b10");
#endif

    switch (ctx->pc) {
        case 0x3f1b40u: goto label_3f1b40;
        case 0x3f1b50u: goto label_3f1b50;
        default: break;
    }

    ctx->pc = 0x3f1b10u;

    // 0x3f1b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f1b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f1b14: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x3f1b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3f1b18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f1b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f1b1c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3F1B1Cu;
    {
        const bool branch_taken_0x3f1b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B1Cu;
        // 0x3f1b20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1b1c) {
            ctx->pc = 0x3F1B48u;
            goto label_3f1b48;
        }
    }
    ctx->pc = 0x3F1B24u;
    // 0x3f1b24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f1b28: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F1B28u;
    {
        const bool branch_taken_0x3f1b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f1b28) {
            ctx->pc = 0x3F1B38u;
            goto label_3f1b38;
        }
    }
    ctx->pc = 0x3F1B30u;
    // 0x3f1b30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F1B30u;
    {
        const bool branch_taken_0x3f1b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1b30) {
            ctx->pc = 0x3F1B50u;
            goto label_3f1b50;
        }
    }
    ctx->pc = 0x3F1B38u;
label_3f1b38:
    // 0x3f1b38: 0xc0fc5e4  jal         func_3F1790
    ctx->pc = 0x3F1B38u;
    SET_GPR_U32(ctx, 31, 0x3F1B40u);
    ctx->pc = 0x3F1790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1790u, 0x3F1B38u, 0x3F1B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1B40u;
label_3f1b40:
    // 0x3f1b40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F1B40u;
    {
        const bool branch_taken_0x3f1b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1b40) {
            ctx->pc = 0x3F1B50u;
            goto label_3f1b50;
        }
    }
    ctx->pc = 0x3F1B48u;
label_3f1b48:
    // 0x3f1b48: 0xc0fc63c  jal         func_3F18F0
    ctx->pc = 0x3F1B48u;
    SET_GPR_U32(ctx, 31, 0x3F1B50u);
    ctx->pc = 0x3F18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F18F0u, 0x3F1B48u, 0x3F1B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1B50u;
label_3f1b50:
    // 0x3f1b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f1b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f1b54: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B54u;
        // 0x3f1b58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1B5Cu;
}
