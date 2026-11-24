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

// Function: sub_00117A68
// Address: 0x117a68 - 0x117a98
void sub_00117A68_0x117a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117A68_0x117a68");
#endif

    switch (ctx->pc) {
        case 0x117a8cu: goto label_117a8c;
        default: break;
    }

    ctx->pc = 0x117a68u;

    // 0x117a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117a6c: 0x2482fff3  addiu       $v0, $a0, -0xD
    ctx->pc = 0x117a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
    // 0x117a70: 0x2c420023  sltiu       $v0, $v0, 0x23
    ctx->pc = 0x117a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x117a74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117A74u;
    {
        const bool branch_taken_0x117a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A74u;
        // 0x117a78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a74) {
            ctx->pc = 0x117A84u;
            goto label_117a84;
        }
    }
    ctx->pc = 0x117A7Cu;
    // 0x117a7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x117A7Cu;
    {
        const bool branch_taken_0x117a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A7Cu;
        // 0x117a80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a7c) {
            ctx->pc = 0x117A8Cu;
            goto label_117a8c;
        }
    }
    ctx->pc = 0x117A84u;
label_117a84:
    // 0x117a84: 0xc045e96  jal         func_117A58
    ctx->pc = 0x117A84u;
    SET_GPR_U32(ctx, 31, 0x117A8Cu);
    ctx->pc = 0x117A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A58u, 0x117A84u, 0x117A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A8Cu;
label_117a8c:
    // 0x117a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117a90: 0x3e00008  jr          $ra
    ctx->pc = 0x117A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A90u;
        // 0x117a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117A98u;
}
