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

// Function: sub_003DB400
// Address: 0x3db400 - 0x3db448
void sub_003DB400_0x3db400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB400_0x3db400");
#endif

    switch (ctx->pc) {
        case 0x3db418u: goto label_3db418;
        case 0x3db42cu: goto label_3db42c;
        default: break;
    }

    ctx->pc = 0x3db400u;

    // 0x3db400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3db400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3db404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3db404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3db408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3db408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3db40c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3db40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db410: 0xc0f6d80  jal         func_3DB600
    ctx->pc = 0x3DB410u;
    SET_GPR_U32(ctx, 31, 0x3DB418u);
    ctx->pc = 0x3DB414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB410u;
    // 0x3db414: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB600u, 0x3DB410u, 0x3DB418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB418u;
label_3db418:
    // 0x3db418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3db418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db41c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DB41Cu;
    {
        const bool branch_taken_0x3db41c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB41Cu;
        // 0x3db420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db41c) {
            ctx->pc = 0x3DB430u;
            goto label_3db430;
        }
    }
    ctx->pc = 0x3DB424u;
    // 0x3db424: 0xc0f6ce4  jal         func_3DB390
    ctx->pc = 0x3DB424u;
    SET_GPR_U32(ctx, 31, 0x3DB42Cu);
    ctx->pc = 0x3DB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB390u, 0x3DB424u, 0x3DB42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB42Cu;
label_3db42c:
    // 0x3db42c: 0x0  nop
    ctx->pc = 0x3db42cu;
    // NOP
label_3db430:
    // 0x3db430: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3db430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db434: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3db434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3db438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3db438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3db43c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3db43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db440: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB440u;
        // 0x3db444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB448u;
}
