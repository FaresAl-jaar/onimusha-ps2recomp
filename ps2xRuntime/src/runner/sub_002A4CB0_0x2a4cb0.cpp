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

// Function: sub_002A4CB0
// Address: 0x2a4cb0 - 0x2a4cf0
void sub_002A4CB0_0x2a4cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4CB0_0x2a4cb0");
#endif

    switch (ctx->pc) {
        case 0x2a4ce4u: goto label_2a4ce4;
        default: break;
    }

    ctx->pc = 0x2a4cb0u;

    // 0x2a4cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a4cb4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a4cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4cb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a4cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a4cbc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a4cbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4cc0: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a4cc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4cc4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2a4cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2a4cc8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a4cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4ccc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a4cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4cd0: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a4cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a4cd4: 0x24053758  addiu       $a1, $zero, 0x3758
    ctx->pc = 0x2a4cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14168));
    // 0x2a4cd8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2a4cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2a4cdc: 0xc0f8304  jal         func_3E0C10
    ctx->pc = 0x2A4CDCu;
    SET_GPR_U32(ctx, 31, 0x2A4CE4u);
    ctx->pc = 0x2A4CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4CDCu;
    // 0x2a4ce0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0C10u, 0x2A4CDCu, 0x2A4CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4CE4u;
label_2a4ce4:
    // 0x2a4ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a4ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CE8u;
        // 0x2a4cec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4CF0u;
}
