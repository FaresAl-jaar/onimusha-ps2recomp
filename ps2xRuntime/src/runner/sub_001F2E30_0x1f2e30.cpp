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

// Function: sub_001F2E30
// Address: 0x1f2e30 - 0x1f2e6c
void sub_001F2E30_0x1f2e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2E30_0x1f2e30");
#endif

    switch (ctx->pc) {
        case 0x1f2e4cu: goto label_1f2e4c;
        case 0x1f2e60u: goto label_1f2e60;
        default: break;
    }

    ctx->pc = 0x1f2e30u;

    // 0x1f2e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f2e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f2e34: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1f2e34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e38: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x1f2e38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f2e40: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1f2e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e44: 0xc07cb54  jal         func_1F2D50
    ctx->pc = 0x1F2E44u;
    SET_GPR_U32(ctx, 31, 0x1F2E4Cu);
    ctx->pc = 0x1F2E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E44u;
    // 0x1f2e48: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2D50u, 0x1F2E44u, 0x1F2E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E4Cu;
label_1f2e4c:
    // 0x1f2e4c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1f2e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e50: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x1f2e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f2e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e58: 0xc0a2964  jal         func_28A590
    ctx->pc = 0x1F2E58u;
    SET_GPR_U32(ctx, 31, 0x1F2E60u);
    ctx->pc = 0x1F2E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E58u;
    // 0x1f2e5c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A590u, 0x1F2E58u, 0x1F2E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E60u;
label_1f2e60:
    // 0x1f2e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2e64: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E64u;
        // 0x1f2e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2E6Cu;
}
