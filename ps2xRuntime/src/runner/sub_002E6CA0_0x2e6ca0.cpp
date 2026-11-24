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

// Function: sub_002E6CA0
// Address: 0x2e6ca0 - 0x2e6cfc
void sub_002E6CA0_0x2e6ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6CA0_0x2e6ca0");
#endif

    switch (ctx->pc) {
        case 0x2e6ce0u: goto label_2e6ce0;
        case 0x2e6cf0u: goto label_2e6cf0;
        default: break;
    }

    ctx->pc = 0x2e6ca0u;

    // 0x2e6ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e6ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e6ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e6ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e6ca8: 0x9082065c  lbu         $v0, 0x65C($a0)
    ctx->pc = 0x2e6ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x2e6cac: 0x2442ff7c  addiu       $v0, $v0, -0x84
    ctx->pc = 0x2e6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967164));
    // 0x2e6cb0: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x2e6cb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2e6cb4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2E6CB4u;
    {
        const bool branch_taken_0x2e6cb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CB4u;
        // 0x2e6cb8: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6cb4) {
            ctx->pc = 0x2E6CE8u;
            goto label_2e6ce8;
        }
    }
    ctx->pc = 0x2E6CBCu;
    // 0x2e6cbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e6cc0: 0x24637b30  addiu       $v1, $v1, 0x7B30
    ctx->pc = 0x2e6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31536));
    // 0x2e6cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e6cc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e6cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6ccc: 0x400008  jr          $v0
    ctx->pc = 0x2E6CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E6CD8u: goto label_2e6cd8;
            case 0x2E6CE8u: goto label_2e6ce8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6CCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E6CD4u;
    // 0x2e6cd4: 0x0  nop
    ctx->pc = 0x2e6cd4u;
    // NOP
label_2e6cd8:
    // 0x2e6cd8: 0xc0a04b4  jal         func_2812D0
    ctx->pc = 0x2E6CD8u;
    SET_GPR_U32(ctx, 31, 0x2E6CE0u);
    ctx->pc = 0x2812D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812D0u, 0x2E6CD8u, 0x2E6CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6CE0u;
label_2e6ce0:
    // 0x2e6ce0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6CE0u;
    {
        const bool branch_taken_0x2e6ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ce0) {
            ctx->pc = 0x2E6CF0u;
            goto label_2e6cf0;
        }
    }
    ctx->pc = 0x2E6CE8u;
label_2e6ce8:
    // 0x2e6ce8: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x2E6CE8u;
    SET_GPR_U32(ctx, 31, 0x2E6CF0u);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x2E6CE8u, 0x2E6CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6CF0u;
label_2e6cf0:
    // 0x2e6cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e6cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CF4u;
        // 0x2e6cf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6CFCu;
}
