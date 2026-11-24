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

// Function: sub_002A64E0
// Address: 0x2a64e0 - 0x2a651c
void sub_002A64E0_0x2a64e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A64E0_0x2a64e0");
#endif

    switch (ctx->pc) {
        case 0x2a6510u: goto label_2a6510;
        default: break;
    }

    ctx->pc = 0x2a64e0u;

    // 0x2a64e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a64e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a64e4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a64e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a64e8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a64e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a64ec: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a64ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a64f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a64f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a64f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a64f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a64f8: 0x340593a8  ori         $a1, $zero, 0x93A8
    ctx->pc = 0x2a64f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37800);
    // 0x2a64fc: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x2a64fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x2a6500: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a6500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6504: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a6504u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6508: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A6508u;
    SET_GPR_U32(ctx, 31, 0x2A6510u);
    ctx->pc = 0x2A650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6508u;
    // 0x2a650c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A6508u, 0x2A6510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6510u;
label_2a6510:
    // 0x2a6510: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6514: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6514u;
        // 0x2a6518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A651Cu;
}
