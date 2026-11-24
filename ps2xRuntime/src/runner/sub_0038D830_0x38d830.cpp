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

// Function: sub_0038D830
// Address: 0x38d830 - 0x38d86c
void sub_0038D830_0x38d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D830_0x38d830");
#endif

    switch (ctx->pc) {
        case 0x38d860u: goto label_38d860;
        default: break;
    }

    ctx->pc = 0x38d830u;

    // 0x38d830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38d830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38d834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38d838: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38d838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d83c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38D83Cu;
    {
        const bool branch_taken_0x38d83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D83Cu;
        // 0x38d840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d83c) {
            ctx->pc = 0x38D850u;
            goto label_38d850;
        }
    }
    ctx->pc = 0x38D844u;
    // 0x38d844: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38D844u;
    {
        const bool branch_taken_0x38d844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d844) {
            ctx->pc = 0x38D860u;
            goto label_38d860;
        }
    }
    ctx->pc = 0x38D84Cu;
    // 0x38d84c: 0x0  nop
    ctx->pc = 0x38d84cu;
    // NOP
label_38d850:
    // 0x38d850: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x38d850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x38d854: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x38d854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x38d858: 0xc09985c  jal         func_266170
    ctx->pc = 0x38D858u;
    SET_GPR_U32(ctx, 31, 0x38D860u);
    ctx->pc = 0x38D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D858u;
    // 0x38d85c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266170u, 0x38D858u, 0x38D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D860u;
label_38d860:
    // 0x38d860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d864: 0x3e00008  jr          $ra
    ctx->pc = 0x38D864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D864u;
        // 0x38d868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D86Cu;
}
