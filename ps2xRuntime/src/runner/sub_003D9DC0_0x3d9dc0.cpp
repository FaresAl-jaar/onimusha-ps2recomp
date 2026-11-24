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

// Function: sub_003D9DC0
// Address: 0x3d9dc0 - 0x3d9e0c
void sub_003D9DC0_0x3d9dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9DC0_0x3d9dc0");
#endif

    switch (ctx->pc) {
        case 0x3d9dd0u: goto label_3d9dd0;
        default: break;
    }

    ctx->pc = 0x3d9dc0u;

    // 0x3d9dc0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3d9dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3d9dc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d9dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9dc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d9dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9dcc: 0x0  nop
    ctx->pc = 0x3d9dccu;
    // NOP
label_3d9dd0:
    // 0x3d9dd0: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x3d9dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3d9dd4: 0x90632bec  lbu         $v1, 0x2BEC($v1)
    ctx->pc = 0x3d9dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11244)));
    // 0x3d9dd8: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D9DD8u;
    {
        const bool branch_taken_0x3d9dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3d9dd8) {
            ctx->pc = 0x3D9DF0u;
            goto label_3d9df0;
        }
    }
    ctx->pc = 0x3D9DE0u;
    // 0x3d9de0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d9de4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D9DE4u;
    {
        const bool branch_taken_0x3d9de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9DE4u;
        // 0x3d9de8: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9de4) {
            ctx->pc = 0x3D9DF8u;
            goto label_3d9df8;
        }
    }
    ctx->pc = 0x3D9DECu;
    // 0x3d9dec: 0x0  nop
    ctx->pc = 0x3d9decu;
    // NOP
label_3d9df0:
    // 0x3d9df0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d9df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9df4: 0x0  nop
    ctx->pc = 0x3d9df4u;
    // NOP
label_3d9df8:
    // 0x3d9df8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3d9df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3d9dfc: 0x4c1fff4  bgez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x3D9DFCu;
    {
        const bool branch_taken_0x3d9dfc = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x3d9dfc) {
            ctx->pc = 0x3D9DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9dd0;
        }
    }
    ctx->pc = 0x3D9E04u;
    // 0x3d9e04: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9E0Cu;
}
