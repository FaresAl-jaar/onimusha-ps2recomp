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

// Function: sub_0035CA20
// Address: 0x35ca20 - 0x35ca54
void sub_0035CA20_0x35ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CA20_0x35ca20");
#endif

    switch (ctx->pc) {
        case 0x35ca48u: goto label_35ca48;
        default: break;
    }

    ctx->pc = 0x35ca20u;

    // 0x35ca20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ca24: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x35ca24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x35ca28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ca2c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35CA2Cu;
    {
        const bool branch_taken_0x35ca2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x35CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CA2Cu;
        // 0x35ca30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ca2c) {
            ctx->pc = 0x35CA40u;
            goto label_35ca40;
        }
    }
    ctx->pc = 0x35CA34u;
    // 0x35ca34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35CA34u;
    {
        const bool branch_taken_0x35ca34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ca34) {
            ctx->pc = 0x35CA48u;
            goto label_35ca48;
        }
    }
    ctx->pc = 0x35CA3Cu;
    // 0x35ca3c: 0x0  nop
    ctx->pc = 0x35ca3cu;
    // NOP
label_35ca40:
    // 0x35ca40: 0xc0d7220  jal         func_35C880
    ctx->pc = 0x35CA40u;
    SET_GPR_U32(ctx, 31, 0x35CA48u);
    ctx->pc = 0x35C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C880u, 0x35CA40u, 0x35CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CA48u;
label_35ca48:
    // 0x35ca48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ca48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ca4c: 0x3e00008  jr          $ra
    ctx->pc = 0x35CA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CA4Cu;
        // 0x35ca50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CA54u;
}
