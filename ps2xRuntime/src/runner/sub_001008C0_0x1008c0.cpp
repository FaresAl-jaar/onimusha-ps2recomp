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

// Function: sub_001008C0
// Address: 0x1008c0 - 0x1008e4
void sub_001008C0_0x1008c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001008C0_0x1008c0");
#endif

    switch (ctx->pc) {
        case 0x1008c0u: goto label_1008c0;
        case 0x1008c4u: goto label_1008c4;
        case 0x1008c8u: goto label_1008c8;
        case 0x1008ccu: goto label_1008cc;
        case 0x1008d0u: goto label_1008d0;
        case 0x1008d4u: goto label_1008d4;
        case 0x1008d8u: goto label_1008d8;
        case 0x1008dcu: goto label_1008dc;
        case 0x1008e0u: goto label_1008e0;
        default: break;
    }

    ctx->pc = 0x1008c0u;

label_1008c0:
    // 0x1008c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1008c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1008c4:
    // 0x1008c4: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x1008c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
label_1008c8:
    // 0x1008c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1008c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1008cc:
    // 0x1008cc: 0x8c222800  lw          $v0, 0x2800($at)
    ctx->pc = 0x1008ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10240)));
label_1008d0:
    // 0x1008d0: 0x40f809  jalr        $v0
label_1008d4:
    if (ctx->pc == 0x1008D4u) {
        ctx->pc = 0x1008D8u;
        goto label_1008d8;
    }
    ctx->pc = 0x1008D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1008D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1008D0u, 0x1008D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1008D8u;
label_1008d8:
    // 0x1008d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1008d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1008dc:
    // 0x1008dc: 0x3e00008  jr          $ra
label_1008e0:
    if (ctx->pc == 0x1008E0u) {
        ctx->pc = 0x1008E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008DCu;
        // 0x1008e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008E4u;
        goto label_fallthrough_0x1008dc;
    }
    ctx->pc = 0x1008DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1008E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008DCu;
        // 0x1008e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1008DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1008dc:
    ctx->pc = 0x1008E4u;
}
