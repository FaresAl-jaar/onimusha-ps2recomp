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

// Function: sub_00206D10
// Address: 0x206d10 - 0x206d4c
void sub_00206D10_0x206d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206D10_0x206d10");
#endif

    switch (ctx->pc) {
        case 0x206d2cu: goto label_206d2c;
        case 0x206d40u: goto label_206d40;
        default: break;
    }

    ctx->pc = 0x206d10u;

    // 0x206d10: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x206d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x206d14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206d18: 0x8c439f84  lw          $v1, -0x607C($v0)
    ctx->pc = 0x206d18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B9F84u));
    // 0x206d1c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x206D1Cu;
    {
        const bool branch_taken_0x206d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D1Cu;
        // 0x206d20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d1c) {
            ctx->pc = 0x206D38u;
            goto label_206d38;
        }
    }
    ctx->pc = 0x206D24u;
    // 0x206d24: 0xc081b62  jal         func_206D88
    ctx->pc = 0x206D24u;
    SET_GPR_U32(ctx, 31, 0x206D2Cu);
    ctx->pc = 0x206D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206D88u, 0x206D24u, 0x206D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D2Cu;
label_206d2c:
    // 0x206d2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x206D2Cu;
    {
        const bool branch_taken_0x206d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D2Cu;
        // 0x206d30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d2c) {
            ctx->pc = 0x206D44u;
            goto label_206d44;
        }
    }
    ctx->pc = 0x206D34u;
    // 0x206d34: 0x0  nop
    ctx->pc = 0x206d34u;
    // NOP
label_206d38:
    // 0x206d38: 0xc081b54  jal         func_206D50
    ctx->pc = 0x206D38u;
    SET_GPR_U32(ctx, 31, 0x206D40u);
    ctx->pc = 0x206D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206D50u, 0x206D38u, 0x206D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D40u;
label_206d40:
    // 0x206d40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206d44:
    // 0x206d44: 0x3e00008  jr          $ra
    ctx->pc = 0x206D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D44u;
        // 0x206d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206D4Cu;
}
