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

// Function: sub_003D00A0
// Address: 0x3d00a0 - 0x3d00d0
void sub_003D00A0_0x3d00a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D00A0_0x3d00a0");
#endif

    switch (ctx->pc) {
        case 0x3d00b8u: goto label_3d00b8;
        case 0x3d00c0u: goto label_3d00c0;
        default: break;
    }

    ctx->pc = 0x3d00a0u;

    // 0x3d00a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d00a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d00a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d00a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d00a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d00a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d00ac: 0x8c850560  lw          $a1, 0x560($a0)
    ctx->pc = 0x3d00acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1376)));
    // 0x3d00b0: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3D00B0u;
    SET_GPR_U32(ctx, 31, 0x3D00B8u);
    ctx->pc = 0x3D00B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D00B0u;
    // 0x3d00b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3D00B0u, 0x3D00B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D00B8u;
label_3d00b8:
    // 0x3d00b8: 0xc0c0858  jal         func_302160
    ctx->pc = 0x3D00B8u;
    SET_GPR_U32(ctx, 31, 0x3D00C0u);
    ctx->pc = 0x3D00BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D00B8u;
    // 0x3d00bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302160u, 0x3D00B8u, 0x3D00C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D00C0u;
label_3d00c0:
    // 0x3d00c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d00c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d00c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d00c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d00c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D00C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D00C8u;
        // 0x3d00cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D00C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D00D0u;
}
