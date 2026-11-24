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

// Function: sub_003D1720
// Address: 0x3d1720 - 0x3d1750
void sub_003D1720_0x3d1720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1720_0x3d1720");
#endif

    switch (ctx->pc) {
        case 0x3d1738u: goto label_3d1738;
        case 0x3d1740u: goto label_3d1740;
        default: break;
    }

    ctx->pc = 0x3d1720u;

    // 0x3d1720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d1720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d1724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d1724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d1728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d1728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d172c: 0x8c850550  lw          $a1, 0x550($a0)
    ctx->pc = 0x3d172cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x3d1730: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3D1730u;
    SET_GPR_U32(ctx, 31, 0x3D1738u);
    ctx->pc = 0x3D1734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1730u;
    // 0x3d1734: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3D1730u, 0x3D1738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1738u;
label_3d1738:
    // 0x3d1738: 0xc0f4068  jal         func_3D01A0
    ctx->pc = 0x3D1738u;
    SET_GPR_U32(ctx, 31, 0x3D1740u);
    ctx->pc = 0x3D173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1738u;
    // 0x3d173c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D01A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D01A0u, 0x3D1738u, 0x3D1740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1740u;
label_3d1740:
    // 0x3d1740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d1740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d1744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d1744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d1748: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1748u;
        // 0x3d174c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1750u;
}
