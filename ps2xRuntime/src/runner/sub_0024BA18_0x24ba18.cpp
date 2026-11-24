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

// Function: sub_0024BA18
// Address: 0x24ba18 - 0x24ba48
void sub_0024BA18_0x24ba18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BA18_0x24ba18");
#endif

    switch (ctx->pc) {
        case 0x24ba30u: goto label_24ba30;
        default: break;
    }

    ctx->pc = 0x24ba18u;

    // 0x24ba18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ba18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ba1c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BA1Cu;
    {
        const bool branch_taken_0x24ba1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA1Cu;
        // 0x24ba20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba1c) {
            ctx->pc = 0x24BA38u;
            goto label_24ba38;
        }
    }
    ctx->pc = 0x24BA24u;
    // 0x24ba24: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24ba28: 0xc093008  jal         func_24C020
    ctx->pc = 0x24BA28u;
    SET_GPR_U32(ctx, 31, 0x24BA30u);
    ctx->pc = 0x24BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA28u;
    // 0x24ba2c: 0x2484d8e8  addiu       $a0, $a0, -0x2718 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C020u, 0x24BA28u, 0x24BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA30u;
label_24ba30:
    // 0x24ba30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24BA30u;
    {
        const bool branch_taken_0x24ba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA30u;
        // 0x24ba34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba30) {
            ctx->pc = 0x24BA3Cu;
            goto label_24ba3c;
        }
    }
    ctx->pc = 0x24BA38u;
label_24ba38:
    // 0x24ba38: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x24ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_24ba3c:
    // 0x24ba3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ba3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ba40: 0x3e00008  jr          $ra
    ctx->pc = 0x24BA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA40u;
        // 0x24ba44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BA48u;
}
