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

// Function: sub_0014B3D0
// Address: 0x14b3d0 - 0x14b40c
void sub_0014B3D0_0x14b3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B3D0_0x14b3d0");
#endif

    switch (ctx->pc) {
        case 0x14b3fcu: goto label_14b3fc;
        default: break;
    }

    ctx->pc = 0x14b3d0u;

    // 0x14b3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b3d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x14b3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3d8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B3D8u;
    {
        const bool branch_taken_0x14b3d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3D8u;
        // 0x14b3dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b3d8) {
            ctx->pc = 0x14B3E8u;
            goto label_14b3e8;
        }
    }
    ctx->pc = 0x14B3E0u;
    // 0x14b3e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B3E0u;
    {
        const bool branch_taken_0x14b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3E0u;
        // 0x14b3e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b3e0) {
            ctx->pc = 0x14B400u;
            goto label_14b400;
        }
    }
    ctx->pc = 0x14B3E8u;
label_14b3e8:
    // 0x14b3e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14b3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3ec: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x14b3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x14b3f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14b3f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3f4: 0xc052ef8  jal         func_14BBE0
    ctx->pc = 0x14B3F4u;
    SET_GPR_U32(ctx, 31, 0x14B3FCu);
    ctx->pc = 0x14B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3F4u;
    // 0x14b3f8: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBE0u, 0x14B3F4u, 0x14B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3FCu;
label_14b3fc:
    // 0x14b3fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b400:
    // 0x14b400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b404: 0x3e00008  jr          $ra
    ctx->pc = 0x14B404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B404u;
        // 0x14b408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B40Cu;
}
