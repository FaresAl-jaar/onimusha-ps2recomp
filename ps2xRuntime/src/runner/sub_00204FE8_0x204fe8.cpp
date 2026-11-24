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

// Function: sub_00204FE8
// Address: 0x204fe8 - 0x205024
void sub_00204FE8_0x204fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204FE8_0x204fe8");
#endif

    switch (ctx->pc) {
        case 0x204ff8u: goto label_204ff8;
        default: break;
    }

    ctx->pc = 0x204fe8u;

    // 0x204fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204fec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204ff0: 0xc082262  jal         func_208988
    ctx->pc = 0x204FF0u;
    SET_GPR_U32(ctx, 31, 0x204FF8u);
    ctx->pc = 0x204FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204FF0u;
    // 0x204ff4: 0x8c8500b8  lw          $a1, 0xB8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208988u, 0x204FF0u, 0x204FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204FF8u;
label_204ff8:
    // 0x204ff8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x204ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ffc: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x204ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x205000: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205000u;
    {
        const bool branch_taken_0x205000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x205004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205000u;
        // 0x205004: 0x24040061  addiu       $a0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205000) {
            ctx->pc = 0x205010u;
            goto label_205010;
        }
    }
    ctx->pc = 0x205008u;
    // 0x205008: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205008u;
    {
        const bool branch_taken_0x205008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x20500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205008u;
        // 0x20500c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205008) {
            ctx->pc = 0x205018u;
            goto label_205018;
        }
    }
    ctx->pc = 0x205010u;
label_205010:
    // 0x205010: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x205010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x205014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205018:
    // 0x205018: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x205018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20501c: 0x3e00008  jr          $ra
    ctx->pc = 0x20501Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20501Cu;
        // 0x205020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20501Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205024u;
}
