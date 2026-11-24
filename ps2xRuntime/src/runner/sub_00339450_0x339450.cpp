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

// Function: sub_00339450
// Address: 0x339450 - 0x33949c
void sub_00339450_0x339450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339450_0x339450");
#endif

    switch (ctx->pc) {
        case 0x339468u: goto label_339468;
        case 0x339478u: goto label_339478;
        default: break;
    }

    ctx->pc = 0x339450u;

    // 0x339450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x339454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x339454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x339458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33945c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33945cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339460: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x339460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339464: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x339464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_339468:
    // 0x339468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x339468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33946c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33946cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339470: 0xc0ce3bc  jal         func_338EF0
    ctx->pc = 0x339470u;
    SET_GPR_U32(ctx, 31, 0x339478u);
    ctx->pc = 0x339474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339470u;
    // 0x339474: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338EF0u, 0x339470u, 0x339478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339478u;
label_339478:
    // 0x339478: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x339478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x33947c: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x33947cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x339480: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x339480u;
    {
        const bool branch_taken_0x339480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x339480) {
            ctx->pc = 0x339468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339468;
        }
    }
    ctx->pc = 0x339488u;
    // 0x339488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x339488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33948c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33948cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339494: 0x3e00008  jr          $ra
    ctx->pc = 0x339494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339494u;
        // 0x339498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33949Cu;
}
