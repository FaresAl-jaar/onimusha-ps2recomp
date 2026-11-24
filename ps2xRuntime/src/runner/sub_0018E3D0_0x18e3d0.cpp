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

// Function: sub_0018E3D0
// Address: 0x18e3d0 - 0x18e428
void sub_0018E3D0_0x18e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E3D0_0x18e3d0");
#endif

    ctx->pc = 0x18e3d0u;

    // 0x18e3d0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x18e3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18e3d4: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x18e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x18e3d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E3D8u;
    {
        const bool branch_taken_0x18e3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3D8u;
        // 0x18e3dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3d8) {
            ctx->pc = 0x18E3E8u;
            goto label_18e3e8;
        }
    }
    ctx->pc = 0x18E3E0u;
    // 0x18e3e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18E3E0u;
    {
        const bool branch_taken_0x18e3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3e0) {
            ctx->pc = 0x18E420u;
            goto label_18e420;
        }
    }
    ctx->pc = 0x18E3E8u;
label_18e3e8:
    // 0x18e3e8: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x18e3e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x18e3ec: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x18e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x18e3f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E3F0u;
    {
        const bool branch_taken_0x18e3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3F0u;
        // 0x18e3f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3f0) {
            ctx->pc = 0x18E400u;
            goto label_18e400;
        }
    }
    ctx->pc = 0x18E3F8u;
    // 0x18e3f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18E3F8u;
    {
        const bool branch_taken_0x18e3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3f8) {
            ctx->pc = 0x18E420u;
            goto label_18e420;
        }
    }
    ctx->pc = 0x18E400u;
label_18e400:
    // 0x18e400: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x18e400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x18e404: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x18e404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x18e408: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E408u;
    {
        const bool branch_taken_0x18e408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E408u;
        // 0x18e40c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e408) {
            ctx->pc = 0x18E418u;
            goto label_18e418;
        }
    }
    ctx->pc = 0x18E410u;
    // 0x18e410: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18E410u;
    {
        const bool branch_taken_0x18e410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e410) {
            ctx->pc = 0x18E420u;
            goto label_18e420;
        }
    }
    ctx->pc = 0x18E418u;
label_18e418:
    // 0x18e418: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x18e418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x18e41c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x18e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_18e420:
    // 0x18e420: 0x3e00008  jr          $ra
    ctx->pc = 0x18E420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E428u;
}
