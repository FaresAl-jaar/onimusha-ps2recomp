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

// Function: sub_0010F3B8
// Address: 0x10f3b8 - 0x10f3dc
void sub_0010F3B8_0x10f3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F3B8_0x10f3b8");
#endif

    switch (ctx->pc) {
        case 0x10f3d0u: goto label_10f3d0;
        default: break;
    }

    ctx->pc = 0x10f3b8u;

    // 0x10f3b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f3bc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10f3c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f3c8: 0xc043904  jal         func_10E410
    ctx->pc = 0x10F3C8u;
    SET_GPR_U32(ctx, 31, 0x10F3D0u);
    ctx->pc = 0x10F3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3C8u;
    // 0x10f3cc: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E410u, 0x10F3C8u, 0x10F3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3D0u;
label_10f3d0:
    // 0x10f3d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x10F3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3D4u;
        // 0x10f3d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F3DCu;
}
