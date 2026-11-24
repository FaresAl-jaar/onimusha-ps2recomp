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

// Function: sub_002A74A0
// Address: 0x2a74a0 - 0x2a74e8
void sub_002A74A0_0x2a74a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A74A0_0x2a74a0");
#endif

    switch (ctx->pc) {
        case 0x2a74dcu: goto label_2a74dc;
        default: break;
    }

    ctx->pc = 0x2a74a0u;

    // 0x2a74a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a74a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a74a4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a74a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a74a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a74ac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a74acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a74b0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a74b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a74b4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a74b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74b8: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a74b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a74bc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a74bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74c0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a74c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74c4: 0x3405cd38  ori         $a1, $zero, 0xCD38
    ctx->pc = 0x2a74c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52536);
    // 0x2a74c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a74c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74cc: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x2a74ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x2a74d0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a74d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a74d4: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A74D4u;
    SET_GPR_U32(ctx, 31, 0x2A74DCu);
    ctx->pc = 0x2A74D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A74D4u;
    // 0x2a74d8: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A74D4u, 0x2A74DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A74DCu;
label_2a74dc:
    // 0x2a74dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a74dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a74e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A74E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A74E0u;
        // 0x2a74e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A74E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A74E8u;
}
