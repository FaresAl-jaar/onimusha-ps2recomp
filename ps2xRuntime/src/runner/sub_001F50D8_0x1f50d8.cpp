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

// Function: sub_001F50D8
// Address: 0x1f50d8 - 0x1f5100
void sub_001F50D8_0x1f50d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F50D8_0x1f50d8");
#endif

    switch (ctx->pc) {
        case 0x1f50d8u: goto label_1f50d8;
        case 0x1f50dcu: goto label_1f50dc;
        case 0x1f50e0u: goto label_1f50e0;
        case 0x1f50e4u: goto label_1f50e4;
        case 0x1f50e8u: goto label_1f50e8;
        case 0x1f50ecu: goto label_1f50ec;
        case 0x1f50f0u: goto label_1f50f0;
        case 0x1f50f4u: goto label_1f50f4;
        case 0x1f50f8u: goto label_1f50f8;
        case 0x1f50fcu: goto label_1f50fc;
        default: break;
    }

    ctx->pc = 0x1f50d8u;

label_1f50d8:
    // 0x1f50d8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1f50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1f50dc:
    // 0x1f50dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f50dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f50e0:
    // 0x1f50e0: 0x8c428110  lw          $v0, -0x7EF0($v0)
    ctx->pc = 0x1f50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934800)));
label_1f50e4:
    // 0x1f50e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f50e8:
    if (ctx->pc == 0x1F50E8u) {
        ctx->pc = 0x1F50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50E4u;
        // 0x1f50e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F50ECu;
        goto label_1f50ec;
    }
    ctx->pc = 0x1F50E4u;
    {
        const bool branch_taken_0x1f50e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50E4u;
        // 0x1f50e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f50e4) {
            ctx->pc = 0x1F50F4u;
            goto label_1f50f4;
        }
    }
    ctx->pc = 0x1F50ECu;
label_1f50ec:
    // 0x1f50ec: 0x40f809  jalr        $v0
label_1f50f0:
    if (ctx->pc == 0x1F50F0u) {
        ctx->pc = 0x1F50F4u;
        goto label_1f50f4;
    }
    ctx->pc = 0x1F50ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F50F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F50ECu, 0x1F50F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F50F4u;
label_1f50f4:
    // 0x1f50f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f50f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f50f8:
    // 0x1f50f8: 0x3e00008  jr          $ra
label_1f50fc:
    if (ctx->pc == 0x1F50FCu) {
        ctx->pc = 0x1F50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50F8u;
        // 0x1f50fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5100u;
        goto label_fallthrough_0x1f50f8;
    }
    ctx->pc = 0x1F50F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50F8u;
        // 0x1f50fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F50F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f50f8:
    ctx->pc = 0x1F5100u;
}
