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

// Function: sub_0023F0F0
// Address: 0x23f0f0 - 0x23f130
void sub_0023F0F0_0x23f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F0F0_0x23f0f0");
#endif

    switch (ctx->pc) {
        case 0x23f114u: goto label_23f114;
        default: break;
    }

    ctx->pc = 0x23f0f0u;

    // 0x23f0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f0f4: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x23f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x23f0f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f0fc: 0x2450c688  addiu       $s0, $v0, -0x3978
    ctx->pc = 0x23f0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952584));
    // 0x23f100: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23f100u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CC688u));
    // 0x23f104: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F104u;
    {
        const bool branch_taken_0x23f104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F104u;
        // 0x23f108: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f104) {
            ctx->pc = 0x23F118u;
            goto label_23f118;
        }
    }
    ctx->pc = 0x23F10Cu;
    // 0x23f10c: 0xc090a52  jal         func_242948
    ctx->pc = 0x23F10Cu;
    SET_GPR_U32(ctx, 31, 0x23F114u);
    ctx->pc = 0x242948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242948u, 0x23F10Cu, 0x23F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F114u;
label_23f114:
    // 0x23f114: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23f114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23f118:
    // 0x23f118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f11c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23f11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f120: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23f120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23f124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f128: 0x3e00008  jr          $ra
    ctx->pc = 0x23F128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F128u;
        // 0x23f12c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F130u;
}
