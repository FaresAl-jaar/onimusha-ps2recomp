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

// Function: sub_0014B4F0
// Address: 0x14b4f0 - 0x14b52c
void sub_0014B4F0_0x14b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B4F0_0x14b4f0");
#endif

    switch (ctx->pc) {
        case 0x14b51cu: goto label_14b51c;
        default: break;
    }

    ctx->pc = 0x14b4f0u;

    // 0x14b4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b4f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x14b4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4f8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B4F8u;
    {
        const bool branch_taken_0x14b4f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4F8u;
        // 0x14b4fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b4f8) {
            ctx->pc = 0x14B508u;
            goto label_14b508;
        }
    }
    ctx->pc = 0x14B500u;
    // 0x14b500: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B500u;
    {
        const bool branch_taken_0x14b500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B500u;
        // 0x14b504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b500) {
            ctx->pc = 0x14B520u;
            goto label_14b520;
        }
    }
    ctx->pc = 0x14B508u;
label_14b508:
    // 0x14b508: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14b508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b50c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x14b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x14b510: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14b510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14b514: 0xc052ef8  jal         func_14BBE0
    ctx->pc = 0x14B514u;
    SET_GPR_U32(ctx, 31, 0x14B51Cu);
    ctx->pc = 0x14B518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B514u;
    // 0x14b518: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBE0u, 0x14B514u, 0x14B51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B51Cu;
label_14b51c:
    // 0x14b51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b520:
    // 0x14b520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b524: 0x3e00008  jr          $ra
    ctx->pc = 0x14B524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B524u;
        // 0x14b528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B52Cu;
}
