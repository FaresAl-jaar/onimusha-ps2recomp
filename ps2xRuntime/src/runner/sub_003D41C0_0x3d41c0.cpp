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

// Function: sub_003D41C0
// Address: 0x3d41c0 - 0x3d41f0
void sub_003D41C0_0x3d41c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D41C0_0x3d41c0");
#endif

    switch (ctx->pc) {
        case 0x3d41d8u: goto label_3d41d8;
        case 0x3d41e0u: goto label_3d41e0;
        default: break;
    }

    ctx->pc = 0x3d41c0u;

    // 0x3d41c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d41c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d41c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d41c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d41c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d41c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d41cc: 0x8c850560  lw          $a1, 0x560($a0)
    ctx->pc = 0x3d41ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1376)));
    // 0x3d41d0: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3D41D0u;
    SET_GPR_U32(ctx, 31, 0x3D41D8u);
    ctx->pc = 0x3D41D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D41D0u;
    // 0x3d41d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3D41D0u, 0x3D41D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D41D8u;
label_3d41d8:
    // 0x3d41d8: 0xc0f4d8c  jal         func_3D3630
    ctx->pc = 0x3D41D8u;
    SET_GPR_U32(ctx, 31, 0x3D41E0u);
    ctx->pc = 0x3D41DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D41D8u;
    // 0x3d41dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3630u, 0x3D41D8u, 0x3D41E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D41E0u;
label_3d41e0:
    // 0x3d41e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d41e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d41e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d41e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d41e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D41E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D41E8u;
        // 0x3d41ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D41E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D41F0u;
}
