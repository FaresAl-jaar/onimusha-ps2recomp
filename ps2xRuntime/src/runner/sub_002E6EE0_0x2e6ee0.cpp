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

// Function: sub_002E6EE0
// Address: 0x2e6ee0 - 0x2e6f40
void sub_002E6EE0_0x2e6ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6EE0_0x2e6ee0");
#endif

    switch (ctx->pc) {
        case 0x2e6f18u: goto label_2e6f18;
        case 0x2e6f28u: goto label_2e6f28;
        case 0x2e6f30u: goto label_2e6f30;
        default: break;
    }

    ctx->pc = 0x2e6ee0u;

    // 0x2e6ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e6ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e6ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6ee8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e6ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e6eec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6ef0: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x2e6ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x2e6ef4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E6EF4u;
    {
        const bool branch_taken_0x2e6ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EF4u;
        // 0x2e6ef8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ef4) {
            ctx->pc = 0x2E6F20u;
            goto label_2e6f20;
        }
    }
    ctx->pc = 0x2E6EFCu;
    // 0x2e6efc: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2e6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e6f00: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6F00u;
    {
        const bool branch_taken_0x2e6f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e6f00) {
            ctx->pc = 0x2E6F10u;
            goto label_2e6f10;
        }
    }
    ctx->pc = 0x2E6F08u;
    // 0x2e6f08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6F08u;
    {
        const bool branch_taken_0x2e6f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6f08) {
            ctx->pc = 0x2E6F28u;
            goto label_2e6f28;
        }
    }
    ctx->pc = 0x2E6F10u;
label_2e6f10:
    // 0x2e6f10: 0xc0b9bf0  jal         func_2E6FC0
    ctx->pc = 0x2E6F10u;
    SET_GPR_U32(ctx, 31, 0x2E6F18u);
    ctx->pc = 0x2E6FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6FC0u, 0x2E6F10u, 0x2E6F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F18u;
label_2e6f18:
    // 0x2e6f18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6F18u;
    {
        const bool branch_taken_0x2e6f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6f18) {
            ctx->pc = 0x2E6F28u;
            goto label_2e6f28;
        }
    }
    ctx->pc = 0x2E6F20u;
label_2e6f20:
    // 0x2e6f20: 0xc0b9d14  jal         func_2E7450
    ctx->pc = 0x2E6F20u;
    SET_GPR_U32(ctx, 31, 0x2E6F28u);
    ctx->pc = 0x2E7450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7450u, 0x2E6F20u, 0x2E6F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F28u;
label_2e6f28:
    // 0x2e6f28: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x2E6F28u;
    SET_GPR_U32(ctx, 31, 0x2E6F30u);
    ctx->pc = 0x2E6F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F28u;
    // 0x2e6f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x2E6F28u, 0x2E6F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F30u;
label_2e6f30:
    // 0x2e6f30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e6f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6f38: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F38u;
        // 0x2e6f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6F40u;
}
