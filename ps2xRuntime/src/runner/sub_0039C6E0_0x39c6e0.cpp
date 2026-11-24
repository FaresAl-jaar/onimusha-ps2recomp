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

// Function: sub_0039C6E0
// Address: 0x39c6e0 - 0x39c728
void sub_0039C6E0_0x39c6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C6E0_0x39c6e0");
#endif

    switch (ctx->pc) {
        case 0x39c6f8u: goto label_39c6f8;
        case 0x39c704u: goto label_39c704;
        default: break;
    }

    ctx->pc = 0x39c6e0u;

    // 0x39c6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39c6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39c6e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39c6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39c6e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39c6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39c6ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39c6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39c6f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39c6f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c6f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39c6f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c6f8:
    // 0x39c6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c6fc: 0xc0e71cc  jal         func_39C730
    ctx->pc = 0x39C6FCu;
    SET_GPR_U32(ctx, 31, 0x39C704u);
    ctx->pc = 0x39C700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C6FCu;
    // 0x39c700: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C730u, 0x39C6FCu, 0x39C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C704u;
label_39c704:
    // 0x39c704: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x39c704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x39c708: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x39c708u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x39c70c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39C70Cu;
    {
        const bool branch_taken_0x39c70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c70c) {
            ctx->pc = 0x39C6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c6f8;
        }
    }
    ctx->pc = 0x39C714u;
    // 0x39c714: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39c718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c71c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39c71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c720: 0x3e00008  jr          $ra
    ctx->pc = 0x39C720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C720u;
        // 0x39c724: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C728u;
}
