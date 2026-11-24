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

// Function: sub_002CAED0
// Address: 0x2caed0 - 0x2caefc
void sub_002CAED0_0x2caed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAED0_0x2caed0");
#endif

    switch (ctx->pc) {
        case 0x2caeecu: goto label_2caeec;
        default: break;
    }

    ctx->pc = 0x2caed0u;

    // 0x2caed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2caed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2caed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2caed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2caed8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2caed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2caedc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAEDCu;
    {
        const bool branch_taken_0x2caedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caedc) {
            ctx->pc = 0x2CAEF0u;
            goto label_2caef0;
        }
    }
    ctx->pc = 0x2CAEE4u;
    // 0x2caee4: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2CAEE4u;
    SET_GPR_U32(ctx, 31, 0x2CAEECu);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2CAEE4u, 0x2CAEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAEECu;
label_2caeec:
    // 0x2caeec: 0x0  nop
    ctx->pc = 0x2caeecu;
    // NOP
label_2caef0:
    // 0x2caef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2caef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caef4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEF4u;
        // 0x2caef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAEFCu;
}
