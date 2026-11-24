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

// Function: sub_0024FCB8
// Address: 0x24fcb8 - 0x24fce8
void sub_0024FCB8_0x24fcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FCB8_0x24fcb8");
#endif

    ctx->pc = 0x24fcb8u;

    // 0x24fcb8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x24fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x24fcbc: 0x2442a858  addiu       $v0, $v0, -0x57A8
    ctx->pc = 0x24fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944856));
    // 0x24fcc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4DA858u));
    // 0x24fcc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24fcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24fcc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24fcc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4DA858u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4DA858u, _value); } while (0);
    // 0x24fccc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4DA858u));
    // 0x24fcd0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FCD0u;
    {
        const bool branch_taken_0x24fcd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FCD0u;
        // 0x24fcd4: 0x3c02004e  lui         $v0, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fcd0) {
            ctx->pc = 0x24FCE0u;
            goto label_24fce0;
        }
    }
    ctx->pc = 0x24FCD8u;
    // 0x24fcd8: 0x2442a850  addiu       $v0, $v0, -0x57B0
    ctx->pc = 0x24fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944848));
    // 0x24fcdc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24fcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_24fce0:
    // 0x24fce0: 0x3e00008  jr          $ra
    ctx->pc = 0x24FCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FCE8u;
}
