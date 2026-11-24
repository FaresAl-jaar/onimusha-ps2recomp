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

// Function: sub_0024BEA0
// Address: 0x24bea0 - 0x24bed0
void sub_0024BEA0_0x24bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BEA0_0x24bea0");
#endif

    switch (ctx->pc) {
        case 0x24beb8u: goto label_24beb8;
        default: break;
    }

    ctx->pc = 0x24bea0u;

    // 0x24bea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24bea4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BEA4u;
    {
        const bool branch_taken_0x24bea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEA4u;
        // 0x24bea8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bea4) {
            ctx->pc = 0x24BEC0u;
            goto label_24bec0;
        }
    }
    ctx->pc = 0x24BEACu;
    // 0x24beac: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24beacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24beb0: 0xc093008  jal         func_24C020
    ctx->pc = 0x24BEB0u;
    SET_GPR_U32(ctx, 31, 0x24BEB8u);
    ctx->pc = 0x24BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BEB0u;
    // 0x24beb4: 0x2484daf0  addiu       $a0, $a0, -0x2510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C020u, 0x24BEB0u, 0x24BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BEB8u;
label_24beb8:
    // 0x24beb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24BEB8u;
    {
        const bool branch_taken_0x24beb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEB8u;
        // 0x24bebc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24beb8) {
            ctx->pc = 0x24BEC4u;
            goto label_24bec4;
        }
    }
    ctx->pc = 0x24BEC0u;
label_24bec0:
    // 0x24bec0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x24bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_24bec4:
    // 0x24bec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24bec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bec8: 0x3e00008  jr          $ra
    ctx->pc = 0x24BEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEC8u;
        // 0x24becc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BED0u;
}
