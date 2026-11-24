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

// Function: sub_0010BC70
// Address: 0x10bc70 - 0x10bcb4
void sub_0010BC70_0x10bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BC70_0x10bc70");
#endif

    switch (ctx->pc) {
        case 0x10bc98u: goto label_10bc98;
        case 0x10bca8u: goto label_10bca8;
        default: break;
    }

    ctx->pc = 0x10bc70u;

    // 0x10bc70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10bc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10bc74: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10bc74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10bc7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10bc80: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x10bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x10bc84: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x10bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x10bc88: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BC88u;
    {
        const bool branch_taken_0x10bc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10bc88) {
            ctx->pc = 0x10BCA0u;
            goto label_10bca0;
        }
    }
    ctx->pc = 0x10BC90u;
    // 0x10bc90: 0xc042db2  jal         func_10B6C8
    ctx->pc = 0x10BC90u;
    SET_GPR_U32(ctx, 31, 0x10BC98u);
    ctx->pc = 0x10BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC90u;
    // 0x10bc94: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B6C8u, 0x10BC90u, 0x10BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC98u;
label_10bc98:
    // 0x10bc98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10BC98u;
    {
        const bool branch_taken_0x10bc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC98u;
        // 0x10bc9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc98) {
            ctx->pc = 0x10BCACu;
            goto label_10bcac;
        }
    }
    ctx->pc = 0x10BCA0u;
label_10bca0:
    // 0x10bca0: 0xc042d56  jal         func_10B558
    ctx->pc = 0x10BCA0u;
    SET_GPR_U32(ctx, 31, 0x10BCA8u);
    ctx->pc = 0x10BCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BCA0u;
    // 0x10bca4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B558u, 0x10BCA0u, 0x10BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BCA8u;
label_10bca8:
    // 0x10bca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bcac:
    // 0x10bcac: 0x3e00008  jr          $ra
    ctx->pc = 0x10BCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCACu;
        // 0x10bcb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BCB4u;
}
