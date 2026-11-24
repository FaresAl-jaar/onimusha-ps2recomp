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

// Function: sub_002F2E60
// Address: 0x2f2e60 - 0x2f2ec4
void sub_002F2E60_0x2f2e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2E60_0x2f2e60");
#endif

    switch (ctx->pc) {
        case 0x2f2ea8u: goto label_2f2ea8;
        case 0x2f2eb8u: goto label_2f2eb8;
        default: break;
    }

    ctx->pc = 0x2f2e60u;

    // 0x2f2e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f2e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f2e64: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x2f2e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2f2e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f2e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f2e6c: 0x9085065c  lbu         $a1, 0x65C($a0)
    ctx->pc = 0x2f2e6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x2f2e70: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2F2E70u;
    {
        const bool branch_taken_0x2f2e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E70u;
        // 0x2f2e74: 0x24030095  addiu       $v1, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e70) {
            ctx->pc = 0x2F2EB0u;
            goto label_2f2eb0;
        }
    }
    ctx->pc = 0x2F2E78u;
    // 0x2f2e78: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F2E78u;
    {
        const bool branch_taken_0x2f2e78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f2e78) {
            ctx->pc = 0x2F2EB0u;
            goto label_2f2eb0;
        }
    }
    ctx->pc = 0x2F2E80u;
    // 0x2f2e80: 0x24030094  addiu       $v1, $zero, 0x94
    ctx->pc = 0x2f2e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x2f2e84: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F2E84u;
    {
        const bool branch_taken_0x2f2e84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E84u;
        // 0x2f2e88: 0x2403008a  addiu       $v1, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e84) {
            ctx->pc = 0x2F2EB0u;
            goto label_2f2eb0;
        }
    }
    ctx->pc = 0x2F2E8Cu;
    // 0x2f2e8c: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2E8Cu;
    {
        const bool branch_taken_0x2f2e8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f2e8c) {
            ctx->pc = 0x2F2EA0u;
            goto label_2f2ea0;
        }
    }
    ctx->pc = 0x2F2E94u;
    // 0x2f2e94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2E94u;
    {
        const bool branch_taken_0x2f2e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2e94) {
            ctx->pc = 0x2F2EB8u;
            goto label_2f2eb8;
        }
    }
    ctx->pc = 0x2F2E9Cu;
    // 0x2f2e9c: 0x0  nop
    ctx->pc = 0x2f2e9cu;
    // NOP
label_2f2ea0:
    // 0x2f2ea0: 0xc0a0958  jal         func_282560
    ctx->pc = 0x2F2EA0u;
    SET_GPR_U32(ctx, 31, 0x2F2EA8u);
    ctx->pc = 0x282560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282560u, 0x2F2EA0u, 0x2F2EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2EA8u;
label_2f2ea8:
    // 0x2f2ea8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2EA8u;
    {
        const bool branch_taken_0x2f2ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2ea8) {
            ctx->pc = 0x2F2EB8u;
            goto label_2f2eb8;
        }
    }
    ctx->pc = 0x2F2EB0u;
label_2f2eb0:
    // 0x2f2eb0: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x2F2EB0u;
    SET_GPR_U32(ctx, 31, 0x2F2EB8u);
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x2F2EB0u, 0x2F2EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2EB8u;
label_2f2eb8:
    // 0x2f2eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f2eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EBCu;
        // 0x2f2ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2EC4u;
}
