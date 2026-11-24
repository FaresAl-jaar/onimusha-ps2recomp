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

// Function: sub_001298D0
// Address: 0x1298d0 - 0x129914
void sub_001298D0_0x1298d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001298D0_0x1298d0");
#endif

    switch (ctx->pc) {
        case 0x1298f0u: goto label_1298f0;
        case 0x129908u: goto label_129908;
        default: break;
    }

    ctx->pc = 0x1298d0u;

    // 0x1298d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1298d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1298d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1298d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1298d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1298d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1298dc: 0x8caf0008  lw          $t7, 0x8($a1)
    ctx->pc = 0x1298dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1298e0: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1298E0u;
    {
        const bool branch_taken_0x1298e0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1298E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298E0u;
        // 0x1298e4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298e0) {
            ctx->pc = 0x129900u;
            goto label_129900;
        }
    }
    ctx->pc = 0x1298E8u;
    // 0x1298e8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1298e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1298ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1298ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1298f0:
    // 0x1298f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1298f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1298f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1298f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1298f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1298F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1298FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298F8u;
        // 0x1298fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1298F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129900u;
label_129900:
    // 0x129900: 0xc0490a0  jal         func_124280
    ctx->pc = 0x129900u;
    SET_GPR_U32(ctx, 31, 0x129908u);
    ctx->pc = 0x124280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124280u, 0x129900u, 0x129908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129908u;
label_129908:
    // 0x129908: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x129908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12990c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x12990Cu;
    {
        const bool branch_taken_0x12990c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12990Cu;
        // 0x129910: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12990c) {
            ctx->pc = 0x1298F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1298f0;
        }
    }
    ctx->pc = 0x129914u;
}
