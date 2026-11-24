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

// Function: sub_002A5C10
// Address: 0x2a5c10 - 0x2a5c4c
void sub_002A5C10_0x2a5c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5C10_0x2a5c10");
#endif

    switch (ctx->pc) {
        case 0x2a5c40u: goto label_2a5c40;
        default: break;
    }

    ctx->pc = 0x2a5c10u;

    // 0x2a5c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5c14: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a5c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c18: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a5c18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c1c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a5c1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5c24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c28: 0x24057064  addiu       $a1, $zero, 0x7064
    ctx->pc = 0x2a5c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28772));
    // 0x2a5c2c: 0x240601a4  addiu       $a2, $zero, 0x1A4
    ctx->pc = 0x2a5c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x2a5c30: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a5c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5c34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a5c34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c38: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A5C38u;
    SET_GPR_U32(ctx, 31, 0x2A5C40u);
    ctx->pc = 0x2A5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C38u;
    // 0x2a5c3c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A5C38u, 0x2A5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C40u;
label_2a5c40:
    // 0x2a5c40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5c44: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C44u;
        // 0x2a5c48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5C4Cu;
}
