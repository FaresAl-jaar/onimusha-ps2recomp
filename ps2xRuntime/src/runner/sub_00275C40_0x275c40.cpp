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

// Function: sub_00275C40
// Address: 0x275c40 - 0x275c94
void sub_00275C40_0x275c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275C40_0x275c40");
#endif

    switch (ctx->pc) {
        case 0x275c58u: goto label_275c58;
        case 0x275c6cu: goto label_275c6c;
        default: break;
    }

    ctx->pc = 0x275c40u;

    // 0x275c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275c44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x275c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x275c50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x275c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x275c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_275c58:
    // 0x275c58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x275c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x275c5c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275C5Cu;
    {
        const bool branch_taken_0x275c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x275c5c) {
            ctx->pc = 0x275C70u;
            goto label_275c70;
        }
    }
    ctx->pc = 0x275C64u;
    // 0x275c64: 0xc09d674  jal         func_2759D0
    ctx->pc = 0x275C64u;
    SET_GPR_U32(ctx, 31, 0x275C6Cu);
    ctx->pc = 0x2759D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2759D0u, 0x275C64u, 0x275C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C6Cu;
label_275c6c:
    // 0x275c6c: 0x0  nop
    ctx->pc = 0x275c6cu;
    // NOP
label_275c70:
    // 0x275c70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x275c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x275c74: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x275c74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x275c78: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x275C78u;
    {
        const bool branch_taken_0x275c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C78u;
        // 0x275c7c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c78) {
            ctx->pc = 0x275C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275c58;
        }
    }
    ctx->pc = 0x275C80u;
    // 0x275c80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x275c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275c84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x275C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C8Cu;
        // 0x275c90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275C94u;
}
