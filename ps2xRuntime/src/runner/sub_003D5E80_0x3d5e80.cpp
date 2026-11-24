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

// Function: sub_003D5E80
// Address: 0x3d5e80 - 0x3d5ea8
void sub_003D5E80_0x3d5e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5E80_0x3d5e80");
#endif

    switch (ctx->pc) {
        case 0x3d5e94u: goto label_3d5e94;
        default: break;
    }

    ctx->pc = 0x3d5e80u;

    // 0x3d5e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d5e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d5e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d5e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d5e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d5e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d5e8c: 0xc0f578c  jal         func_3D5E30
    ctx->pc = 0x3D5E8Cu;
    SET_GPR_U32(ctx, 31, 0x3D5E94u);
    ctx->pc = 0x3D5E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E8Cu;
    // 0x3d5e90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5E30u, 0x3D5E8Cu, 0x3D5E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E94u;
label_3d5e94:
    // 0x3d5e94: 0xae022bb4  sw          $v0, 0x2BB4($s0)
    ctx->pc = 0x3d5e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11188), GPR_U32(ctx, 2));
    // 0x3d5e98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d5e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d5e9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d5e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5EA0u;
        // 0x3d5ea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5EA8u;
}
