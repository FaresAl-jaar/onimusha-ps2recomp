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

// Function: sub_002A4F70
// Address: 0x2a4f70 - 0x2a4fb8
void sub_002A4F70_0x2a4f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4F70_0x2a4f70");
#endif

    switch (ctx->pc) {
        case 0x2a4facu: goto label_2a4fac;
        default: break;
    }

    ctx->pc = 0x2a4f70u;

    // 0x2a4f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a4f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a4f74: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a4f74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a4f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a4f7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4f80: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a4f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a4f84: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a4f84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f88: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a4f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a4f8c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a4f8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f90: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a4f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f94: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a4f94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a4f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f9c: 0x24054430  addiu       $a1, $zero, 0x4430
    ctx->pc = 0x2a4f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17456));
    // 0x2a4fa0: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x2a4fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2a4fa4: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A4FA4u;
    SET_GPR_U32(ctx, 31, 0x2A4FACu);
    ctx->pc = 0x2A4FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4FA4u;
    // 0x2a4fa8: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A4FA4u, 0x2A4FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4FACu;
label_2a4fac:
    // 0x2a4fac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a4facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4FB0u;
        // 0x2a4fb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4FB8u;
}
