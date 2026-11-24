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

// Function: sub_0023BE48
// Address: 0x23be48 - 0x23be90
void sub_0023BE48_0x23be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BE48_0x23be48");
#endif

    switch (ctx->pc) {
        case 0x23be64u: goto label_23be64;
        case 0x23be70u: goto label_23be70;
        case 0x23be78u: goto label_23be78;
        default: break;
    }

    ctx->pc = 0x23be48u;

    // 0x23be48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23be48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23be4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23be4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23be50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23be50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23be54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23be58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23be5c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23BE5Cu;
    SET_GPR_U32(ctx, 31, 0x23BE64u);
    ctx->pc = 0x23BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE5Cu;
    // 0x23be60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23BE5Cu, 0x23BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE64u;
label_23be64:
    // 0x23be64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23be64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be68: 0xc08efa4  jal         func_23BE90
    ctx->pc = 0x23BE68u;
    SET_GPR_U32(ctx, 31, 0x23BE70u);
    ctx->pc = 0x23BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE68u;
    // 0x23be6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BE90u, 0x23BE68u, 0x23BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE70u;
label_23be70:
    // 0x23be70: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23BE70u;
    SET_GPR_U32(ctx, 31, 0x23BE78u);
    ctx->pc = 0x23BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE70u;
    // 0x23be74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23BE70u, 0x23BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE78u;
label_23be78:
    // 0x23be78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23be78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23be7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23be7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23be80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23be84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23be88: 0x3e00008  jr          $ra
    ctx->pc = 0x23BE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE88u;
        // 0x23be8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BE90u;
}
