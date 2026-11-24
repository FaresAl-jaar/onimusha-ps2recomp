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

// Function: sub_0023C070
// Address: 0x23c070 - 0x23c0a8
void sub_0023C070_0x23c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C070_0x23c070");
#endif

    switch (ctx->pc) {
        case 0x23c088u: goto label_23c088;
        default: break;
    }

    ctx->pc = 0x23c070u;

    // 0x23c070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c074: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C074u;
    {
        const bool branch_taken_0x23c074 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C074u;
        // 0x23c078: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c074) {
            ctx->pc = 0x23C098u;
            goto label_23c098;
        }
    }
    ctx->pc = 0x23C07Cu;
    // 0x23c07c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23c080: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23C080u;
    SET_GPR_U32(ctx, 31, 0x23C088u);
    ctx->pc = 0x23C084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C080u;
    // 0x23c084: 0x2484b6d8  addiu       $a0, $a0, -0x4928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23C080u, 0x23C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C088u;
label_23c088:
    // 0x23c088: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23c08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c090: 0x3e00008  jr          $ra
    ctx->pc = 0x23C090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C090u;
        // 0x23c094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C098u;
label_23c098:
    // 0x23c098: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x23c098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23c09c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c0a0: 0x808da9a  j           func_236A68
    ctx->pc = 0x23C0A0u;
    ctx->pc = 0x23C0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0A0u;
    // 0x23c0a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A68u;
    sub_00236A68_0x236a68(rdram, ctx, runtime); return;
    ctx->pc = 0x23C0A8u;
}
