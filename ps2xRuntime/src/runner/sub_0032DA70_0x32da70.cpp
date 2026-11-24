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

// Function: sub_0032DA70
// Address: 0x32da70 - 0x32dab8
void sub_0032DA70_0x32da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DA70_0x32da70");
#endif

    switch (ctx->pc) {
        case 0x32da88u: goto label_32da88;
        case 0x32da94u: goto label_32da94;
        default: break;
    }

    ctx->pc = 0x32da70u;

    // 0x32da70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32da70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32da74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32da74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32da78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32da78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32da7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32da7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32da80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32da80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x32da84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32da88:
    // 0x32da88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32da88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da8c: 0xc0cb6b0  jal         func_32DAC0
    ctx->pc = 0x32DA8Cu;
    SET_GPR_U32(ctx, 31, 0x32DA94u);
    ctx->pc = 0x32DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DA8Cu;
    // 0x32da90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DAC0u, 0x32DA8Cu, 0x32DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DA94u;
label_32da94:
    // 0x32da94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32da94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32da98: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x32da98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x32da9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32DA9Cu;
    {
        const bool branch_taken_0x32da9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32da9c) {
            ctx->pc = 0x32DA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32da88;
        }
    }
    ctx->pc = 0x32DAA4u;
    // 0x32daa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32daa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32daa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32daa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32daac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32daacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dab0: 0x3e00008  jr          $ra
    ctx->pc = 0x32DAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DAB0u;
        // 0x32dab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DAB8u;
}
