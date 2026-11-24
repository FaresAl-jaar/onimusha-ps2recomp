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

// Function: sub_00229CA0
// Address: 0x229ca0 - 0x229cc4
void sub_00229CA0_0x229ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229CA0_0x229ca0");
#endif

    switch (ctx->pc) {
        case 0x229ca0u: goto label_229ca0;
        case 0x229ca4u: goto label_229ca4;
        case 0x229ca8u: goto label_229ca8;
        case 0x229cacu: goto label_229cac;
        case 0x229cb0u: goto label_229cb0;
        case 0x229cb4u: goto label_229cb4;
        case 0x229cb8u: goto label_229cb8;
        case 0x229cbcu: goto label_229cbc;
        case 0x229cc0u: goto label_229cc0;
        default: break;
    }

    ctx->pc = 0x229ca0u;

label_229ca0:
    // 0x229ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x229ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_229ca4:
    // 0x229ca4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x229ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_229ca8:
    // 0x229ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_229cac:
    // 0x229cac: 0x8c43b0dc  lw          $v1, -0x4F24($v0)
    ctx->pc = 0x229cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947036)));
label_229cb0:
    // 0x229cb0: 0x60f809  jalr        $v1
label_229cb4:
    if (ctx->pc == 0x229CB4u) {
        ctx->pc = 0x229CB8u;
        goto label_229cb8;
    }
    ctx->pc = 0x229CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x229CB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229CB0u, 0x229CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229CB8u;
label_229cb8:
    // 0x229cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_229cbc:
    // 0x229cbc: 0x3e00008  jr          $ra
label_229cc0:
    if (ctx->pc == 0x229CC0u) {
        ctx->pc = 0x229CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CBCu;
        // 0x229cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229CC4u;
        goto label_fallthrough_0x229cbc;
    }
    ctx->pc = 0x229CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CBCu;
        // 0x229cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x229cbc:
    ctx->pc = 0x229CC4u;
}
