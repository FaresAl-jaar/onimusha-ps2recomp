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

// Function: sub_002A8A70
// Address: 0x2a8a70 - 0x2a8abc
void sub_002A8A70_0x2a8a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8A70_0x2a8a70");
#endif

    switch (ctx->pc) {
        case 0x2a8ab0u: goto label_2a8ab0;
        default: break;
    }

    ctx->pc = 0x2a8a70u;

    // 0x2a8a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a8a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a8a74: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a8a74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a8a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a8a7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8a80: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a8a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a8a84: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a8a84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a88: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a8a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a8a8c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a8a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a90: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a8a90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a94: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a8a94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a98: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a8a9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8aa0: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x2a8aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2a8aa4: 0x34453618  ori         $a1, $v0, 0x3618
    ctx->pc = 0x2a8aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13848);
    // 0x2a8aa8: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A8AA8u;
    SET_GPR_U32(ctx, 31, 0x2A8AB0u);
    ctx->pc = 0x2A8AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8AA8u;
    // 0x2a8aac: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A8AA8u, 0x2A8AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8AB0u;
label_2a8ab0:
    // 0x2a8ab0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a8ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AB4u;
        // 0x2a8ab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8ABCu;
}
