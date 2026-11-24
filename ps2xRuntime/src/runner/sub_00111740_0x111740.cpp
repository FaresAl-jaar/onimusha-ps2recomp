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

// Function: sub_00111740
// Address: 0x111740 - 0x111764
void sub_00111740_0x111740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111740_0x111740");
#endif

    switch (ctx->pc) {
        case 0x111750u: goto label_111750;
        default: break;
    }

    ctx->pc = 0x111740u;

    // 0x111740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111748: 0xc044430  jal         func_1110C0
    ctx->pc = 0x111748u;
    SET_GPR_U32(ctx, 31, 0x111750u);
    ctx->pc = 0x1110C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110C0u, 0x111748u, 0x111750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111750u;
label_111750:
    // 0x111750: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x111750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x111754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111758: 0xac402ab0  sw          $zero, 0x2AB0($v0)
    ctx->pc = 0x111758u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x402AB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x402AB0u, _value); } while (0);
    // 0x11175c: 0x3e00008  jr          $ra
    ctx->pc = 0x11175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11175Cu;
        // 0x111760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11175Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111764u;
}
