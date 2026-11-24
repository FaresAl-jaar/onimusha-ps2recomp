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

// Function: sub_00217CB0
// Address: 0x217cb0 - 0x217d0c
void sub_00217CB0_0x217cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217CB0_0x217cb0");
#endif

    ctx->pc = 0x217cb0u;

    // 0x217cb0: 0x8c821fc0  lw          $v0, 0x1FC0($a0)
    ctx->pc = 0x217cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x217cb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x217cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x217cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x217cbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cc0: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x217cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x217cc4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x217CC4u;
    {
        const bool branch_taken_0x217cc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x217CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CC4u;
        // 0x217cc8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217cc4) {
            ctx->pc = 0x217CF8u;
            goto label_217cf8;
        }
    }
    ctx->pc = 0x217CCCu;
    // 0x217ccc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x217CCCu;
    {
        const bool branch_taken_0x217ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CCCu;
        // 0x217cd0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ccc) {
            ctx->pc = 0x217D04u;
            goto label_217d04;
        }
    }
    ctx->pc = 0x217CD4u;
    // 0x217cd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x217cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217cd8: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x217CD8u;
    {
        const bool branch_taken_0x217cd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x217CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CD8u;
        // 0x217cdc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217cd8) {
            ctx->pc = 0x217D04u;
            goto label_217d04;
        }
    }
    ctx->pc = 0x217CE0u;
    // 0x217ce0: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x217ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x217ce4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x217ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x217ce8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x217CE8u;
    {
        const bool branch_taken_0x217ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217ce8) {
            ctx->pc = 0x217CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217CE8u;
            // 0x217cec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217D00u;
            goto label_217d00;
        }
    }
    ctx->pc = 0x217CF0u;
    // 0x217cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x217CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CF0u;
        // 0x217cf4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217CF8u;
label_217cf8:
    // 0x217cf8: 0x851026  xor         $v0, $a0, $a1
    ctx->pc = 0x217cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x217cfc: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x217cfcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_217d00:
    // 0x217d00: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x217d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_217d04:
    // 0x217d04: 0x3e00008  jr          $ra
    ctx->pc = 0x217D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217D0Cu;
}
