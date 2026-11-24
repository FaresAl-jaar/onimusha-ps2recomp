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

// Function: sub_0024FE48
// Address: 0x24fe48 - 0x24fe94
void sub_0024FE48_0x24fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FE48_0x24fe48");
#endif

    ctx->pc = 0x24fe48u;

    // 0x24fe48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24fe48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24fe4c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x24fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x24fe50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24fe50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24fe54: 0x2463a890  addiu       $v1, $v1, -0x5770
    ctx->pc = 0x24fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944912));
    // 0x24fe58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DA890u));
    // 0x24fe5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24fe60: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24FE60u;
    {
        const bool branch_taken_0x24fe60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE60u;
        // 0x24fe64: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe60) {
            ctx->pc = 0x24FE88u;
            goto label_24fe88;
        }
    }
    ctx->pc = 0x24FE68u;
    // 0x24fe68: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x24fe68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x24fe6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24fe6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fe70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24fe70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe74: 0x2484a898  addiu       $a0, $a0, -0x5768
    ctx->pc = 0x24fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944920));
    // 0x24fe78: 0x24060480  addiu       $a2, $zero, 0x480
    ctx->pc = 0x24fe78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x24fe7c: 0x8049590  j           func_125640
    ctx->pc = 0x24FE7Cu;
    ctx->pc = 0x24FE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FE7Cu;
    // 0x24fe80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x24FE84u;
    // 0x24fe84: 0x0  nop
    ctx->pc = 0x24fe84u;
    // NOP
label_24fe88:
    // 0x24fe88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24fe88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fe8c: 0x3e00008  jr          $ra
    ctx->pc = 0x24FE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE8Cu;
        // 0x24fe90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FE94u;
}
