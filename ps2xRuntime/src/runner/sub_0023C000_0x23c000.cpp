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

// Function: sub_0023C000
// Address: 0x23c000 - 0x23c038
void sub_0023C000_0x23c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C000_0x23c000");
#endif

    switch (ctx->pc) {
        case 0x23c018u: goto label_23c018;
        default: break;
    }

    ctx->pc = 0x23c000u;

    // 0x23c000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c004: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C004u;
    {
        const bool branch_taken_0x23c004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C004u;
        // 0x23c008: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c004) {
            ctx->pc = 0x23C028u;
            goto label_23c028;
        }
    }
    ctx->pc = 0x23C00Cu;
    // 0x23c00c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23c010: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23C010u;
    SET_GPR_U32(ctx, 31, 0x23C018u);
    ctx->pc = 0x23C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C010u;
    // 0x23c014: 0x2484b6a8  addiu       $a0, $a0, -0x4958 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23C010u, 0x23C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C018u;
label_23c018:
    // 0x23c018: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23c01c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c020: 0x3e00008  jr          $ra
    ctx->pc = 0x23C020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C020u;
        // 0x23c024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C028u;
label_23c028:
    // 0x23c028: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x23c028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23c02c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c030: 0x808da9c  j           func_236A70
    ctx->pc = 0x23C030u;
    ctx->pc = 0x23C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C030u;
    // 0x23c034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A70u;
    sub_00236A70_0x236a70(rdram, ctx, runtime); return;
    ctx->pc = 0x23C038u;
}
