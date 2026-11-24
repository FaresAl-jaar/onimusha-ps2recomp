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

// Function: sub_002A6E10
// Address: 0x2a6e10 - 0x2a6e4c
void sub_002A6E10_0x2a6e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6E10_0x2a6e10");
#endif

    switch (ctx->pc) {
        case 0x2a6e40u: goto label_2a6e40;
        default: break;
    }

    ctx->pc = 0x2a6e10u;

    // 0x2a6e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6e14: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a6e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e18: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a6e18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e1c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a6e1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a6e24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a6e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e28: 0x3405b250  ori         $a1, $zero, 0xB250
    ctx->pc = 0x2a6e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45648);
    // 0x2a6e2c: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2a6e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2a6e30: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a6e30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6e34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a6e34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e38: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A6E38u;
    SET_GPR_U32(ctx, 31, 0x2A6E40u);
    ctx->pc = 0x2A6E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6E38u;
    // 0x2a6e3c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A6E38u, 0x2A6E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E40u;
label_2a6e40:
    // 0x2a6e40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6e44: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E44u;
        // 0x2a6e48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6E4Cu;
}
