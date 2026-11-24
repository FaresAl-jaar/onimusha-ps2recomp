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

// Function: sub_00356C70
// Address: 0x356c70 - 0x356cac
void sub_00356C70_0x356c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356C70_0x356c70");
#endif

    switch (ctx->pc) {
        case 0x356c88u: goto label_356c88;
        case 0x356c94u: goto label_356c94;
        case 0x356c9cu: goto label_356c9c;
        default: break;
    }

    ctx->pc = 0x356c70u;

    // 0x356c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x356c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x356c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x356c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x356c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x356c7c: 0x8c850560  lw          $a1, 0x560($a0)
    ctx->pc = 0x356c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1376)));
    // 0x356c80: 0xc0c0844  jal         func_302110
    ctx->pc = 0x356C80u;
    SET_GPR_U32(ctx, 31, 0x356C88u);
    ctx->pc = 0x356C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356C80u;
    // 0x356c84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x356C80u, 0x356C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356C88u;
label_356c88:
    // 0x356c88: 0x8e050564  lw          $a1, 0x564($s0)
    ctx->pc = 0x356c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x356c8c: 0xc0c0844  jal         func_302110
    ctx->pc = 0x356C8Cu;
    SET_GPR_U32(ctx, 31, 0x356C94u);
    ctx->pc = 0x356C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356C8Cu;
    // 0x356c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x356C8Cu, 0x356C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356C94u;
label_356c94:
    // 0x356c94: 0xc0d5648  jal         func_355920
    ctx->pc = 0x356C94u;
    SET_GPR_U32(ctx, 31, 0x356C9Cu);
    ctx->pc = 0x356C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356C94u;
    // 0x356c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355920u, 0x356C94u, 0x356C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356C9Cu;
label_356c9c:
    // 0x356c9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x356c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x356CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356CA4u;
        // 0x356ca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356CACu;
}
