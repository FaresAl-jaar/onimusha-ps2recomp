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

// Function: sub_0022D470
// Address: 0x22d470 - 0x22d49c
void sub_0022D470_0x22d470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D470_0x22d470");
#endif

    ctx->pc = 0x22d470u;

    // 0x22d470: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22d470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22d474: 0x2442c358  addiu       $v0, $v0, -0x3CA8
    ctx->pc = 0x22d474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951768));
    // 0x22d478: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22d478u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BC358u));
    // 0x22d47c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22d480: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22d480u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BC358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BC358u, _value); } while (0);
    // 0x22d484: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22d484u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BC358u));
    // 0x22d488: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22D488u;
    {
        const bool branch_taken_0x22d488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D488u;
        // 0x22d48c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d488) {
            ctx->pc = 0x22D494u;
            goto label_22d494;
        }
    }
    ctx->pc = 0x22D490u;
    // 0x22d490: 0xac40c350  sw          $zero, -0x3CB0($v0)
    ctx->pc = 0x22d490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951760), GPR_U32(ctx, 0));
label_22d494:
    // 0x22d494: 0x3e00008  jr          $ra
    ctx->pc = 0x22D494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D49Cu;
}
