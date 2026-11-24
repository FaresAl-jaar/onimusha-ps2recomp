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

// Function: sub_002A93D0
// Address: 0x2a93d0 - 0x2a9410
void sub_002A93D0_0x2a93d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A93D0_0x2a93d0");
#endif

    switch (ctx->pc) {
        case 0x2a9404u: goto label_2a9404;
        default: break;
    }

    ctx->pc = 0x2a93d0u;

    // 0x2a93d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a93d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a93d4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a93d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a93d8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a93d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a93dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a93dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a93e0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a93e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a93e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a93e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a93e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a93e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a93ec: 0x24060af8  addiu       $a2, $zero, 0xAF8
    ctx->pc = 0x2a93ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2808));
    // 0x2a93f0: 0x34458554  ori         $a1, $v0, 0x8554
    ctx->pc = 0x2a93f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34132);
    // 0x2a93f4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a93f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a93f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a93f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a93fc: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A93FCu;
    SET_GPR_U32(ctx, 31, 0x2A9404u);
    ctx->pc = 0x2A9400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A93FCu;
    // 0x2a9400: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A93FCu, 0x2A9404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9404u;
label_2a9404:
    // 0x2a9404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a9404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9408: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9408u;
        // 0x2a940c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9410u;
}
