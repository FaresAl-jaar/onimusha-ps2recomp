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

// Function: sub_0036C1A0
// Address: 0x36c1a0 - 0x36c1d4
void sub_0036C1A0_0x36c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C1A0_0x36c1a0");
#endif

    switch (ctx->pc) {
        case 0x36c1c4u: goto label_36c1c4;
        default: break;
    }

    ctx->pc = 0x36c1a0u;

    // 0x36c1a0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x36c1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x36c1a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c1a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c1a8: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x36c1a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x36c1ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c1b0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x36C1B0u;
    {
        const bool branch_taken_0x36c1b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C1B0u;
        // 0x36c1b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c1b0) {
            ctx->pc = 0x36C1C8u;
            goto label_36c1c8;
        }
    }
    ctx->pc = 0x36C1B8u;
    // 0x36c1b8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c1bc: 0xc0d6b54  jal         func_35AD50
    ctx->pc = 0x36C1BCu;
    SET_GPR_U32(ctx, 31, 0x36C1C4u);
    ctx->pc = 0x36C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C1BCu;
    // 0x36c1c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AD50u, 0x36C1BCu, 0x36C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C1C4u;
label_36c1c4:
    // 0x36c1c4: 0x0  nop
    ctx->pc = 0x36c1c4u;
    // NOP
label_36c1c8:
    // 0x36c1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x36C1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C1CCu;
        // 0x36c1d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C1D4u;
}
