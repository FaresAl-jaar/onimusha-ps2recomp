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

// Function: sub_0020F2D0
// Address: 0x20f2d0 - 0x20f314
void sub_0020F2D0_0x20f2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F2D0_0x20f2d0");
#endif

    ctx->pc = 0x20f2d0u;

    // 0x20f2d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20f2d4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20F2D4u;
    {
        const bool branch_taken_0x20f2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2D4u;
        // 0x20f2d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2d4) {
            ctx->pc = 0x20F30Cu;
            goto label_20f30c;
        }
    }
    ctx->pc = 0x20F2DCu;
    // 0x20f2dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f2e0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20F2E0u;
    {
        const bool branch_taken_0x20f2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2E0u;
        // 0x20f2e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2e0) {
            ctx->pc = 0x20F30Cu;
            goto label_20f30c;
        }
    }
    ctx->pc = 0x20F2E8u;
    // 0x20f2e8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20f2ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F2ECu;
    {
        const bool branch_taken_0x20f2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2ECu;
        // 0x20f2f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2ec) {
            ctx->pc = 0x20F30Cu;
            goto label_20f30c;
        }
    }
    ctx->pc = 0x20F2F4u;
    // 0x20f2f4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x20f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20f2f8: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F2F8u;
    {
        const bool branch_taken_0x20f2f8 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x20f2f8) {
            ctx->pc = 0x20F30Cu;
            goto label_20f30c;
        }
    }
    ctx->pc = 0x20F300u;
    // 0x20f300: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x20f300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x20f304: 0x58600001  blezl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x20F304u;
    {
        const bool branch_taken_0x20f304 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x20f304) {
            ctx->pc = 0x20F308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F304u;
            // 0x20f308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F30Cu;
            goto label_20f30c;
        }
    }
    ctx->pc = 0x20F30Cu;
label_20f30c:
    // 0x20f30c: 0x3e00008  jr          $ra
    ctx->pc = 0x20F30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F314u;
}
