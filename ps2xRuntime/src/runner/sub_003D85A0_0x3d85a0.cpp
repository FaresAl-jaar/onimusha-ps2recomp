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

// Function: sub_003D85A0
// Address: 0x3d85a0 - 0x3d85ec
void sub_003D85A0_0x3d85a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D85A0_0x3d85a0");
#endif

    switch (ctx->pc) {
        case 0x3d85ccu: goto label_3d85cc;
        case 0x3d85d4u: goto label_3d85d4;
        case 0x3d85dcu: goto label_3d85dc;
        default: break;
    }

    ctx->pc = 0x3d85a0u;

    // 0x3d85a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d85a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d85a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d85a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d85a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d85a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d85ac: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x3d85acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d85b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d85b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d85b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d85b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d85b8: 0x26042b20  addiu       $a0, $s0, 0x2B20
    ctx->pc = 0x3d85b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
    // 0x3d85bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3d85bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d85c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3d85c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3d85c4: 0xc0f7390  jal         func_3DCE40
    ctx->pc = 0x3D85C4u;
    SET_GPR_U32(ctx, 31, 0x3D85CCu);
    ctx->pc = 0x3D85C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D85C4u;
    // 0x3d85c8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCE40u, 0x3D85C4u, 0x3D85CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D85CCu;
label_3d85cc:
    // 0x3d85cc: 0xc0f72b0  jal         func_3DCAC0
    ctx->pc = 0x3D85CCu;
    SET_GPR_U32(ctx, 31, 0x3D85D4u);
    ctx->pc = 0x3D85D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D85CCu;
    // 0x3d85d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCAC0u, 0x3D85CCu, 0x3D85D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D85D4u;
label_3d85d4:
    // 0x3d85d4: 0xc0a6038  jal         func_2980E0
    ctx->pc = 0x3D85D4u;
    SET_GPR_U32(ctx, 31, 0x3D85DCu);
    ctx->pc = 0x3D85D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D85D4u;
    // 0x3d85d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2980E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2980E0u, 0x3D85D4u, 0x3D85DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D85DCu;
label_3d85dc:
    // 0x3d85dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d85dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d85e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d85e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d85e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D85E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D85E4u;
        // 0x3d85e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D85E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D85ECu;
}
