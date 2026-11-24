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

// Function: sub_002A7B70
// Address: 0x2a7b70 - 0x2a7bac
void sub_002A7B70_0x2a7b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7B70_0x2a7b70");
#endif

    switch (ctx->pc) {
        case 0x2a7ba0u: goto label_2a7ba0;
        default: break;
    }

    ctx->pc = 0x2a7b70u;

    // 0x2a7b70: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a7b70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7b74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a7b78: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a7b78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b7c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a7b7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b80: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a7b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7b88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b8c: 0x3405f2d4  ori         $a1, $zero, 0xF2D4
    ctx->pc = 0x2a7b8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62164);
    // 0x2a7b90: 0x240600b8  addiu       $a2, $zero, 0xB8
    ctx->pc = 0x2a7b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x2a7b94: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a7b94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7b98: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A7B98u;
    SET_GPR_U32(ctx, 31, 0x2A7BA0u);
    ctx->pc = 0x2A7B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7B98u;
    // 0x2a7b9c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A7B98u, 0x2A7BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BA0u;
label_2a7ba0:
    // 0x2a7ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BA4u;
        // 0x2a7ba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7BACu;
}
