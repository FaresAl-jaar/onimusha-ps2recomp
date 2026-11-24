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

// Function: sub_00252848
// Address: 0x252848 - 0x252884
void sub_00252848_0x252848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252848_0x252848");
#endif

    ctx->pc = 0x252848u;

    // 0x252848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25284c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x25284cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x252850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252854: 0x2463fb94  addiu       $v1, $v1, -0x46C
    ctx->pc = 0x252854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966164));
    // 0x252858: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252858u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DFB94u));
    // 0x25285c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25285cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x252860: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x252860u;
    {
        const bool branch_taken_0x252860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252860u;
        // 0x252864: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252860) {
            ctx->pc = 0x252878u;
            goto label_252878;
        }
    }
    ctx->pc = 0x252868u;
    // 0x252868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25286c: 0x8091ec8  j           func_247B20
    ctx->pc = 0x25286Cu;
    ctx->pc = 0x252870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25286Cu;
    // 0x252870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B20u;
    sub_00247B20_0x247b20(rdram, ctx, runtime); return;
    ctx->pc = 0x252874u;
    // 0x252874: 0x0  nop
    ctx->pc = 0x252874u;
    // NOP
label_252878:
    // 0x252878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25287c: 0x3e00008  jr          $ra
    ctx->pc = 0x25287Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25287Cu;
        // 0x252880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25287Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252884u;
}
