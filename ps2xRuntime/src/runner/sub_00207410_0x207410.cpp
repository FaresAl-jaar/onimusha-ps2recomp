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

// Function: sub_00207410
// Address: 0x207410 - 0x207444
void sub_00207410_0x207410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207410_0x207410");
#endif

    ctx->pc = 0x207410u;

    // 0x207410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x207414: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x207414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20741c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x20741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x207420: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x207420u;
    {
        const bool branch_taken_0x207420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207420u;
        // 0x207424: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207420) {
            ctx->pc = 0x207438u;
            goto label_207438;
        }
    }
    ctx->pc = 0x207428u;
    // 0x207428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20742c: 0x8084a06  j           func_212818
    ctx->pc = 0x20742Cu;
    ctx->pc = 0x207430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20742Cu;
    // 0x207430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212818u;
    sub_00212818_0x212818(rdram, ctx, runtime); return;
    ctx->pc = 0x207434u;
    // 0x207434: 0x0  nop
    ctx->pc = 0x207434u;
    // NOP
label_207438:
    // 0x207438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20743c: 0x3e00008  jr          $ra
    ctx->pc = 0x20743Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20743Cu;
        // 0x207440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20743Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207444u;
}
