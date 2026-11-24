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

// Function: sub_0024FC80
// Address: 0x24fc80 - 0x24fcb4
void sub_0024FC80_0x24fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FC80_0x24fc80");
#endif

    ctx->pc = 0x24fc80u;

    // 0x24fc80: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x24fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x24fc84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fc88: 0x2463a858  addiu       $v1, $v1, -0x57A8
    ctx->pc = 0x24fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944856));
    // 0x24fc8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DA858u));
    // 0x24fc90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24fc94: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24fc94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4DA858u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4DA858u, _value); } while (0);
    // 0x24fc98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24fc98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4DA858u));
    // 0x24fc9c: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FC9Cu;
    {
        const bool branch_taken_0x24fc9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x24FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC9Cu;
        // 0x24fca0: 0x3c02004e  lui         $v0, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc9c) {
            ctx->pc = 0x24FCACu;
            goto label_24fcac;
        }
    }
    ctx->pc = 0x24FCA4u;
    // 0x24fca4: 0x2442a850  addiu       $v0, $v0, -0x57B0
    ctx->pc = 0x24fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944848));
    // 0x24fca8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24fca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_24fcac:
    // 0x24fcac: 0x3e00008  jr          $ra
    ctx->pc = 0x24FCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FCB4u;
}
