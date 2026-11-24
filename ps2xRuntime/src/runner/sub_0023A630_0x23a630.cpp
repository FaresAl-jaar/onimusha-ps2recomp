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

// Function: sub_0023A630
// Address: 0x23a630 - 0x23a668
void sub_0023A630_0x23a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A630_0x23a630");
#endif

    switch (ctx->pc) {
        case 0x23a644u: goto label_23a644;
        case 0x23a64cu: goto label_23a64c;
        case 0x23a654u: goto label_23a654;
        default: break;
    }

    ctx->pc = 0x23a630u;

    // 0x23a630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a638: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23a638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23a63c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23A63Cu;
    SET_GPR_U32(ctx, 31, 0x23A644u);
    ctx->pc = 0x23A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A63Cu;
    // 0x23a640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23A63Cu, 0x23A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A644u;
label_23a644:
    // 0x23a644: 0xc08e99a  jal         func_23A668
    ctx->pc = 0x23A644u;
    SET_GPR_U32(ctx, 31, 0x23A64Cu);
    ctx->pc = 0x23A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A644u;
    // 0x23a648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A668u, 0x23A644u, 0x23A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A64Cu;
label_23a64c:
    // 0x23a64c: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23A64Cu;
    SET_GPR_U32(ctx, 31, 0x23A654u);
    ctx->pc = 0x23A650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A64Cu;
    // 0x23a650: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23A64Cu, 0x23A654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A654u;
label_23a654:
    // 0x23a654: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23a654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a658: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23a658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a65c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a65cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a660: 0x3e00008  jr          $ra
    ctx->pc = 0x23A660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A660u;
        // 0x23a664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A668u;
}
