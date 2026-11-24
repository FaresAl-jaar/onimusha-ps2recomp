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

// Function: sub_003CA070
// Address: 0x3ca070 - 0x3ca0dc
void sub_003CA070_0x3ca070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA070_0x3ca070");
#endif

    switch (ctx->pc) {
        case 0x3ca0b0u: goto label_3ca0b0;
        case 0x3ca0c0u: goto label_3ca0c0;
        case 0x3ca0d0u: goto label_3ca0d0;
        default: break;
    }

    ctx->pc = 0x3ca070u;

    // 0x3ca070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ca070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ca074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ca074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ca078: 0x9082065c  lbu         $v0, 0x65C($a0)
    ctx->pc = 0x3ca078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3ca07c: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x3ca07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x3ca080: 0x2c410015  sltiu       $at, $v0, 0x15
    ctx->pc = 0x3ca080u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x3ca084: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3CA084u;
    {
        const bool branch_taken_0x3ca084 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA084u;
        // 0x3ca088: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca084) {
            ctx->pc = 0x3CA0C8u;
            goto label_3ca0c8;
        }
    }
    ctx->pc = 0x3CA08Cu;
    // 0x3ca08c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ca08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ca090: 0x24632ed0  addiu       $v1, $v1, 0x2ED0
    ctx->pc = 0x3ca090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11984));
    // 0x3ca094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ca094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ca098: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3ca098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ca09c: 0x400008  jr          $v0
    ctx->pc = 0x3CA09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CA0A8u: goto label_3ca0a8;
            case 0x3CA0B8u: goto label_3ca0b8;
            case 0x3CA0C8u: goto label_3ca0c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA09Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3CA0A4u;
    // 0x3ca0a4: 0x0  nop
    ctx->pc = 0x3ca0a4u;
    // NOP
label_3ca0a8:
    // 0x3ca0a8: 0xc0f27f0  jal         func_3C9FC0
    ctx->pc = 0x3CA0A8u;
    SET_GPR_U32(ctx, 31, 0x3CA0B0u);
    ctx->pc = 0x3C9FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9FC0u, 0x3CA0A8u, 0x3CA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA0B0u;
label_3ca0b0:
    // 0x3ca0b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CA0B0u;
    {
        const bool branch_taken_0x3ca0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca0b0) {
            ctx->pc = 0x3CA0D0u;
            goto label_3ca0d0;
        }
    }
    ctx->pc = 0x3CA0B8u;
label_3ca0b8:
    // 0x3ca0b8: 0xc0f2818  jal         func_3CA060
    ctx->pc = 0x3CA0B8u;
    SET_GPR_U32(ctx, 31, 0x3CA0C0u);
    ctx->pc = 0x3CA060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA060u, 0x3CA0B8u, 0x3CA0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA0C0u;
label_3ca0c0:
    // 0x3ca0c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3CA0C0u;
    {
        const bool branch_taken_0x3ca0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca0c0) {
            ctx->pc = 0x3CA0D0u;
            goto label_3ca0d0;
        }
    }
    ctx->pc = 0x3CA0C8u;
label_3ca0c8:
    // 0x3ca0c8: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x3CA0C8u;
    SET_GPR_U32(ctx, 31, 0x3CA0D0u);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x3CA0C8u, 0x3CA0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA0D0u;
label_3ca0d0:
    // 0x3ca0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ca0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA0D4u;
        // 0x3ca0d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA0DCu;
}
