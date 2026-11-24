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

// Function: sub_002A4C70
// Address: 0x2a4c70 - 0x2a4cb0
void sub_002A4C70_0x2a4c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4C70_0x2a4c70");
#endif

    switch (ctx->pc) {
        case 0x2a4ca4u: goto label_2a4ca4;
        default: break;
    }

    ctx->pc = 0x2a4c70u;

    // 0x2a4c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a4c74: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a4c74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a4c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a4c7c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a4c7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c80: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a4c80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c84: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2a4c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2a4c88: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a4c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4c8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a4c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c90: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a4c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a4c94: 0x24053708  addiu       $a1, $zero, 0x3708
    ctx->pc = 0x2a4c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14088));
    // 0x2a4c98: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x2a4c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2a4c9c: 0xc0f8304  jal         func_3E0C10
    ctx->pc = 0x2A4C9Cu;
    SET_GPR_U32(ctx, 31, 0x2A4CA4u);
    ctx->pc = 0x2A4CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C9Cu;
    // 0x2a4ca0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0C10u, 0x2A4C9Cu, 0x2A4CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4CA4u;
label_2a4ca4:
    // 0x2a4ca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a4ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CA8u;
        // 0x2a4cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4CB0u;
}
