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

// Function: sub_003E2F10
// Address: 0x3e2f10 - 0x3e2f54
void sub_003E2F10_0x3e2f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2F10_0x3e2f10");
#endif

    switch (ctx->pc) {
        case 0x3e2f44u: goto label_3e2f44;
        default: break;
    }

    ctx->pc = 0x3e2f10u;

    // 0x3e2f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e2f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e2f14: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e2f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e2f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e2f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e2f1c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3e2f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3e2f20: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3e2f20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3e2f24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e2f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e2f28: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2F28u;
    {
        const bool branch_taken_0x3e2f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F28u;
        // 0x3e2f2c: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2f28) {
            ctx->pc = 0x3E2F48u;
            goto label_3e2f48;
        }
    }
    ctx->pc = 0x3E2F30u;
    // 0x3e2f30: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e2f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e2f34: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2F34u;
    {
        const bool branch_taken_0x3e2f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e2f34) {
            ctx->pc = 0x3E2F48u;
            goto label_3e2f48;
        }
    }
    ctx->pc = 0x3E2F3Cu;
    // 0x3e2f3c: 0xc0f8a64  jal         func_3E2990
    ctx->pc = 0x3E2F3Cu;
    SET_GPR_U32(ctx, 31, 0x3E2F44u);
    ctx->pc = 0x3E2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2990u, 0x3E2F3Cu, 0x3E2F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2F44u;
label_3e2f44:
    // 0x3e2f44: 0x0  nop
    ctx->pc = 0x3e2f44u;
    // NOP
label_3e2f48:
    // 0x3e2f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e2f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F4Cu;
        // 0x3e2f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2F54u;
}
