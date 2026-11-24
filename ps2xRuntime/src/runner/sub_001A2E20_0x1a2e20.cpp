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

// Function: sub_001A2E20
// Address: 0x1a2e20 - 0x1a2e4c
void sub_001A2E20_0x1a2e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2E20_0x1a2e20");
#endif

    switch (ctx->pc) {
        case 0x1a2e38u: goto label_1a2e38;
        case 0x1a2e40u: goto label_1a2e40;
        default: break;
    }

    ctx->pc = 0x1a2e20u;

    // 0x1a2e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2e28: 0x90a60005  lbu         $a2, 0x5($a1)
    ctx->pc = 0x1a2e28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x1a2e2c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1a2e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a2e30: 0xc069000  jal         func_1A4000
    ctx->pc = 0x1A2E30u;
    SET_GPR_U32(ctx, 31, 0x1A2E38u);
    ctx->pc = 0x1A2E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E30u;
    // 0x1a2e34: 0x90a50004  lbu         $a1, 0x4($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4000u, 0x1A2E30u, 0x1A2E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E38u;
label_1a2e38:
    // 0x1a2e38: 0xc068fe0  jal         func_1A3F80
    ctx->pc = 0x1A2E38u;
    SET_GPR_U32(ctx, 31, 0x1A2E40u);
    ctx->pc = 0x1A3F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F80u, 0x1A2E38u, 0x1A2E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E40u;
label_1a2e40:
    // 0x1a2e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2e44: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E44u;
        // 0x1a2e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2E4Cu;
}
