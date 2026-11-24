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

// Function: sub_0023B028
// Address: 0x23b028 - 0x23b060
void sub_0023B028_0x23b028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B028_0x23b028");
#endif

    switch (ctx->pc) {
        case 0x23b03cu: goto label_23b03c;
        case 0x23b044u: goto label_23b044;
        case 0x23b04cu: goto label_23b04c;
        default: break;
    }

    ctx->pc = 0x23b028u;

    // 0x23b028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b02c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b030: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23b030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23b034: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23B034u;
    SET_GPR_U32(ctx, 31, 0x23B03Cu);
    ctx->pc = 0x23B038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B034u;
    // 0x23b038: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23B034u, 0x23B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B03Cu;
label_23b03c:
    // 0x23b03c: 0xc08ec18  jal         func_23B060
    ctx->pc = 0x23B03Cu;
    SET_GPR_U32(ctx, 31, 0x23B044u);
    ctx->pc = 0x23B040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B03Cu;
    // 0x23b040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B060u, 0x23B03Cu, 0x23B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B044u;
label_23b044:
    // 0x23b044: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23B044u;
    SET_GPR_U32(ctx, 31, 0x23B04Cu);
    ctx->pc = 0x23B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B044u;
    // 0x23b048: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23B044u, 0x23B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B04Cu;
label_23b04c:
    // 0x23b04c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23b04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b050: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23b050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b054: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b058: 0x3e00008  jr          $ra
    ctx->pc = 0x23B058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B058u;
        // 0x23b05c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B060u;
}
