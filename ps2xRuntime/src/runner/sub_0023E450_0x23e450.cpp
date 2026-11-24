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

// Function: sub_0023E450
// Address: 0x23e450 - 0x23e484
void sub_0023E450_0x23e450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E450_0x23e450");
#endif

    ctx->pc = 0x23e450u;

    // 0x23e450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23e454: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23e454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e458: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E458u;
    {
        const bool branch_taken_0x23e458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E458u;
        // 0x23e45c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e458) {
            ctx->pc = 0x23E478u;
            goto label_23e478;
        }
    }
    ctx->pc = 0x23E460u;
    // 0x23e460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e468: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x23e468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23e46c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23e470: 0x8049590  j           func_125640
    ctx->pc = 0x23E470u;
    ctx->pc = 0x23E474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E470u;
    // 0x23e474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x23E478u;
label_23e478:
    // 0x23e478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e47c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E47Cu;
        // 0x23e480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E484u;
}
