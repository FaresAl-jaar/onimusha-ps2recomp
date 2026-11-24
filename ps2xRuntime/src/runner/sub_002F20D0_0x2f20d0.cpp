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

// Function: sub_002F20D0
// Address: 0x2f20d0 - 0x2f2120
void sub_002F20D0_0x2f20d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F20D0_0x2f20d0");
#endif

    switch (ctx->pc) {
        case 0x2f2114u: goto label_2f2114;
        default: break;
    }

    ctx->pc = 0x2f20d0u;

    // 0x2f20d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f20d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f20d4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2f20d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f20d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f20dc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f20dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20e0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f20e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f20e4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2f20e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20e8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x2f20e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x2f20ec: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2f20ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20f0: 0xffab0010  sd          $t3, 0x10($sp)
    ctx->pc = 0x2f20f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 11));
    // 0x2f20f4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f20f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20f8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f20f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20fc: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2f20fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2100: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2f2100u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2104: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x2f2104u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2108: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2f2108u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f210c: 0xc0f3b84  jal         func_3CEE10
    ctx->pc = 0x2F210Cu;
    SET_GPR_U32(ctx, 31, 0x2F2114u);
    ctx->pc = 0x2F2110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F210Cu;
    // 0x2f2110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CEE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CEE10u, 0x2F210Cu, 0x2F2114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2114u;
label_2f2114:
    // 0x2f2114: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f2114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2118: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2118u;
        // 0x2f211c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2120u;
}
