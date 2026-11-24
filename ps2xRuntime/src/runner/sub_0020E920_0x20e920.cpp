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

// Function: sub_0020E920
// Address: 0x20e920 - 0x20e950
void sub_0020E920_0x20e920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E920_0x20e920");
#endif

    switch (ctx->pc) {
        case 0x20e934u: goto label_20e934;
        case 0x20e93cu: goto label_20e93c;
        default: break;
    }

    ctx->pc = 0x20e920u;

    // 0x20e920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20e920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20e924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20e928: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20e928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20e92c: 0xc083a54  jal         func_20E950
    ctx->pc = 0x20E92Cu;
    SET_GPR_U32(ctx, 31, 0x20E934u);
    ctx->pc = 0x20E930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E92Cu;
    // 0x20e930: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E950u, 0x20E92Cu, 0x20E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E934u;
label_20e934:
    // 0x20e934: 0xc083a70  jal         func_20E9C0
    ctx->pc = 0x20E934u;
    SET_GPR_U32(ctx, 31, 0x20E93Cu);
    ctx->pc = 0x20E938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E934u;
    // 0x20e938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E9C0u, 0x20E934u, 0x20E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E93Cu;
label_20e93c:
    // 0x20e93c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e944: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20e944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20e948: 0x3e00008  jr          $ra
    ctx->pc = 0x20E948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E948u;
        // 0x20e94c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E950u;
}
