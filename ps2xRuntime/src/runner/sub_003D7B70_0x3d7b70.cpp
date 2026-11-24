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

// Function: sub_003D7B70
// Address: 0x3d7b70 - 0x3d7ba4
void sub_003D7B70_0x3d7b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7B70_0x3d7b70");
#endif

    switch (ctx->pc) {
        case 0x3d7b88u: goto label_3d7b88;
        case 0x3d7b94u: goto label_3d7b94;
        default: break;
    }

    ctx->pc = 0x3d7b70u;

    // 0x3d7b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d7b74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d7b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d7b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d7b7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d7b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7b80: 0xc097834  jal         func_25E0D0
    ctx->pc = 0x3D7B80u;
    SET_GPR_U32(ctx, 31, 0x3D7B88u);
    ctx->pc = 0x3D7B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7B80u;
    // 0x3d7b84: 0x8c842bb4  lw          $a0, 0x2BB4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0D0u, 0x3D7B80u, 0x3D7B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7B88u;
label_3d7b88:
    // 0x3d7b88: 0xae022bb4  sw          $v0, 0x2BB4($s0)
    ctx->pc = 0x3d7b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11188), GPR_U32(ctx, 2));
    // 0x3d7b8c: 0xc0a6188  jal         func_298620
    ctx->pc = 0x3D7B8Cu;
    SET_GPR_U32(ctx, 31, 0x3D7B94u);
    ctx->pc = 0x3D7B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7B8Cu;
    // 0x3d7b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298620u, 0x3D7B8Cu, 0x3D7B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7B94u;
label_3d7b94:
    // 0x3d7b94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d7b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d7b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B9Cu;
        // 0x3d7ba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7BA4u;
}
