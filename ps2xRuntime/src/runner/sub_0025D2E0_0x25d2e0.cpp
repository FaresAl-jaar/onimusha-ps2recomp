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

// Function: sub_0025D2E0
// Address: 0x25d2e0 - 0x25d31c
void sub_0025D2E0_0x25d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D2E0_0x25d2e0");
#endif

    ctx->pc = 0x25d2e0u;

    // 0x25d2e0: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x25d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25d2e4: 0x28410801  slti        $at, $v0, 0x801
    ctx->pc = 0x25d2e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x25d2e8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D2E8u;
    {
        const bool branch_taken_0x25d2e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2E8u;
        // 0x25d2ec: 0x2841f800  slti        $at, $v0, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2e8) {
            ctx->pc = 0x25D2F8u;
            goto label_25d2f8;
        }
    }
    ctx->pc = 0x25D2F0u;
    // 0x25d2f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25D2F0u;
    {
        const bool branch_taken_0x25d2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2F0u;
        // 0x25d2f4: 0x2442f000  addiu       $v0, $v0, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2f0) {
            ctx->pc = 0x25D308u;
            goto label_25d308;
        }
    }
    ctx->pc = 0x25D2F8u;
label_25d2f8:
    // 0x25d2f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D2F8u;
    {
        const bool branch_taken_0x25d2f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d2f8) {
            ctx->pc = 0x25D308u;
            goto label_25d308;
        }
    }
    ctx->pc = 0x25D300u;
    // 0x25d300: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x25D300u;
    {
        const bool branch_taken_0x25d300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D300u;
        // 0x25d304: 0x24421000  addiu       $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d300) {
            ctx->pc = 0x25D308u;
            goto label_25d308;
        }
    }
    ctx->pc = 0x25D308u;
label_25d308:
    // 0x25d308: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D308u;
    {
        const bool branch_taken_0x25d308 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x25d308) {
            ctx->pc = 0x25D314u;
            goto label_25d314;
        }
    }
    ctx->pc = 0x25D310u;
    // 0x25d310: 0x21023  negu        $v0, $v0
    ctx->pc = 0x25d310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_25d314:
    // 0x25d314: 0x3e00008  jr          $ra
    ctx->pc = 0x25D314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D31Cu;
}
