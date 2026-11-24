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

// Function: sub_003021C0
// Address: 0x3021c0 - 0x3021fc
void sub_003021C0_0x3021c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003021C0_0x3021c0");
#endif

    switch (ctx->pc) {
        case 0x3021d8u: goto label_3021d8;
        case 0x3021ecu: goto label_3021ec;
        default: break;
    }

    ctx->pc = 0x3021c0u;

    // 0x3021c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3021c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3021c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3021c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3021c8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3021c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3021cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3021ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3021d0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3021D0u;
    SET_GPR_U32(ctx, 31, 0x3021D8u);
    ctx->pc = 0x3021D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3021D0u;
    // 0x3021d4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3021D0u, 0x3021D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3021D8u;
label_3021d8:
    // 0x3021d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3021d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3021dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3021DCu;
    {
        const bool branch_taken_0x3021dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3021E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3021DCu;
        // 0x3021e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3021dc) {
            ctx->pc = 0x3021F0u;
            goto label_3021f0;
        }
    }
    ctx->pc = 0x3021E4u;
    // 0x3021e4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3021E4u;
    SET_GPR_U32(ctx, 31, 0x3021ECu);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3021E4u, 0x3021ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3021ECu;
label_3021ec:
    // 0x3021ec: 0x0  nop
    ctx->pc = 0x3021ecu;
    // NOP
label_3021f0:
    // 0x3021f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3021f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3021f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3021F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3021F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3021F4u;
        // 0x3021f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3021F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3021FCu;
}
