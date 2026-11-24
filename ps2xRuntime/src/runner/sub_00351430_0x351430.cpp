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

// Function: sub_00351430
// Address: 0x351430 - 0x351480
void sub_00351430_0x351430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351430_0x351430");
#endif

    switch (ctx->pc) {
        case 0x351448u: goto label_351448;
        case 0x35145cu: goto label_35145c;
        default: break;
    }

    ctx->pc = 0x351430u;

    // 0x351430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x351434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x351438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x351438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35143c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x35143cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x351440: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x351440u;
    {
        const bool branch_taken_0x351440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x351440) {
            ctx->pc = 0x351470u;
            goto label_351470;
        }
    }
    ctx->pc = 0x351448u;
label_351448:
    // 0x351448: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x351448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35144c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35144Cu;
    {
        const bool branch_taken_0x35144c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35144c) {
            ctx->pc = 0x351460u;
            goto label_351460;
        }
    }
    ctx->pc = 0x351454u;
    // 0x351454: 0xc0d46c4  jal         func_351B10
    ctx->pc = 0x351454u;
    SET_GPR_U32(ctx, 31, 0x35145Cu);
    ctx->pc = 0x351B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B10u, 0x351454u, 0x35145Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35145Cu;
label_35145c:
    // 0x35145c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x35145cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_351460:
    // 0x351460: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x351460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x351464: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x351464u;
    {
        const bool branch_taken_0x351464 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x351464) {
            ctx->pc = 0x351448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351448;
        }
    }
    ctx->pc = 0x35146Cu;
    // 0x35146c: 0x0  nop
    ctx->pc = 0x35146cu;
    // NOP
label_351470:
    // 0x351470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x351470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351478: 0x3e00008  jr          $ra
    ctx->pc = 0x351478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351478u;
        // 0x35147c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351480u;
}
