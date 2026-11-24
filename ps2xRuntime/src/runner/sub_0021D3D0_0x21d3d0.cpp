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

// Function: sub_0021D3D0
// Address: 0x21d3d0 - 0x21d410
void sub_0021D3D0_0x21d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D3D0_0x21d3d0");
#endif

    switch (ctx->pc) {
        case 0x21d3e0u: goto label_21d3e0;
        default: break;
    }

    ctx->pc = 0x21d3d0u;

    // 0x21d3d0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x21d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x21d3d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d3d8: 0x2446a1cc  addiu       $a2, $v0, -0x5E34
    ctx->pc = 0x21d3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943180));
    // 0x21d3dc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x21d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BA1CCu));
label_21d3e0:
    // 0x21d3e0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x21d3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x21d3e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21d3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d3e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21d3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21d3ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D3ECu;
    {
        const bool branch_taken_0x21d3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3ECu;
        // 0x21d3f0: 0x28a40008  slti        $a0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d3ec) {
            ctx->pc = 0x21D408u;
            goto label_21d408;
        }
    }
    ctx->pc = 0x21D3F4u;
    // 0x21d3f4: 0x0  nop
    ctx->pc = 0x21d3f4u;
    // NOP
    // 0x21d3f8: 0x0  nop
    ctx->pc = 0x21d3f8u;
    // NOP
    // 0x21d3fc: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21D3FCu;
    {
        const bool branch_taken_0x21d3fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d3fc) {
            ctx->pc = 0x21D400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D3FCu;
            // 0x21d400: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d3e0;
        }
    }
    ctx->pc = 0x21D404u;
    // 0x21d404: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21d404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21d408:
    // 0x21d408: 0x3e00008  jr          $ra
    ctx->pc = 0x21D408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D410u;
}
