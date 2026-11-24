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

// Function: sub_00387430
// Address: 0x387430 - 0x387474
void sub_00387430_0x387430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387430_0x387430");
#endif

    switch (ctx->pc) {
        case 0x387444u: goto label_387444;
        default: break;
    }

    ctx->pc = 0x387430u;

    // 0x387430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x387430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x387434: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x387434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x387438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38743c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x38743Cu;
    SET_GPR_U32(ctx, 31, 0x387444u);
    ctx->pc = 0x387440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38743Cu;
    // 0x387440: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x38743Cu, 0x387444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387444u;
label_387444:
    // 0x387444: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387444u;
    {
        const bool branch_taken_0x387444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387444u;
        // 0x387448: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387444) {
            ctx->pc = 0x387454u;
            goto label_387454;
        }
    }
    ctx->pc = 0x38744Cu;
    // 0x38744c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38744Cu;
    {
        const bool branch_taken_0x38744c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38744Cu;
        // 0x387450: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38744c) {
            ctx->pc = 0x38746Cu;
            goto label_38746c;
        }
    }
    ctx->pc = 0x387454u;
label_387454:
    // 0x387454: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x387454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x387458: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x387458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x38745c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38745cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x387460: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x387460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x387464: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x387464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x387468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38746c:
    // 0x38746c: 0x3e00008  jr          $ra
    ctx->pc = 0x38746Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38746Cu;
        // 0x387470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38746Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387474u;
}
